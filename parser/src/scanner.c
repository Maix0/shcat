#include "me/char/char.h"
#include "me/string/string.h"
#include "me/types.h"
#include "parser/array.h"
#include "parser/inner/heredoc.h"
#include "parser/lexer.h"
#include "parser/parser.h"
#include <assert.h>
#include <string.h>

typedef struct s_heredoc t_heredoc;
typedef struct s_scanner t_scanner;

enum e_token_type
{
	HEREDOC_START,
	SIMPLE_HEREDOC_BODY,
	HEREDOC_BODY_BEGINNING,
	HEREDOC_CONTENT,
	HEREDOC_END,
	FILE_DESCRIPTOR,
	EMPTY_VALUE,
	CONCAT,
	VARIABLE_NAME,
	REGEX,
	EXPANSION_WORD,
	EXTGLOB_PATTERN,
	BARE_DOLLAR,
	IMMEDIATE_DOUBLE_HASH,
	HEREDOC_ARROW,
	HEREDOC_ARROW_DASH,
	NEWLINE,
	OPENING_PAREN,
	ESAC,
	ERROR_RECOVERY,
};

struct s_scanner
{
	t_u8 last_glob_paren_depth;
	bool ext_was_in_double_quote;
	bool ext_saw_outside_quote;
	Array(t_heredoc) heredocs;
};

bool in_error_recovery(const bool *valid_symbols)
{
	return (valid_symbols[ERROR_RECOVERY]);
}

void reset(t_scanner *scanner)
{
	t_u32 i;
	i = 0;
	while (i < scanner->heredocs.size)
		reset_heredoc(array_get(&scanner->heredocs, i++));
}

t_u32 serialize(t_scanner *scanner, t_u8 *buffer)
{
	t_u32	   size;
	t_usize	   delimiter_size;
	t_usize	   i;
	t_heredoc *heredoc;

	i = 0;
	size = 0;
	buffer[size++] = (char)scanner->last_glob_paren_depth;
	buffer[size++] = (char)scanner->ext_was_in_double_quote;
	buffer[size++] = (char)scanner->ext_saw_outside_quote;
	buffer[size++] = (char)scanner->heredocs.size;

	while (i < scanner->heredocs.size)
	{
		heredoc = array_get(&scanner->heredocs, i);
		if (heredoc->delimiter.len + 3 + size >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE)
			return (0);

		buffer[size++] = (char)heredoc->is_raw;
		buffer[size++] = (char)heredoc->started;
		buffer[size++] = (char)heredoc->allows_indent;

		delimiter_size = heredoc->delimiter.len;
		memcpy(&buffer[size], &delimiter_size, sizeof(t_usize));
		size += sizeof(t_usize);
		if (heredoc->delimiter.len > 0)
		{
			memcpy(&buffer[size], heredoc->delimiter.buf, heredoc->delimiter.len);
			size += heredoc->delimiter.len;
		}
		i++;
	}
	return (size);
}

void deserialize(t_scanner *scanner, const t_u8 *buffer, t_u32 length)
{
	t_u32	   size;
	t_u32	   heredoc_count;
	t_usize	   i;
	t_usize	   delimiter_size;
	t_heredoc *heredoc;
	t_heredoc  new_heredoc;

	if (length == 0)
		reset(scanner);
	else
	{
		i = 0;
		heredoc_count = 0;
		size = 0;
		scanner->last_glob_paren_depth = buffer[size++];
		scanner->ext_was_in_double_quote = buffer[size++];
		scanner->ext_saw_outside_quote = buffer[size++];
		heredoc_count = (t_u8)buffer[size++];
		while (i < heredoc_count)
		{
			heredoc = NULL;
			if (i < scanner->heredocs.size)
				heredoc = array_get(&scanner->heredocs, i);
			else
			{
				new_heredoc = heredoc_new();
				array_push(&scanner->heredocs, new_heredoc);
				heredoc = array_back(&scanner->heredocs);
			}

			heredoc->is_raw = buffer[size++];
			heredoc->started = buffer[size++];
			heredoc->allows_indent = buffer[size++];

			memcpy(&delimiter_size, &buffer[size], sizeof(t_usize));
			size += sizeof(t_usize);
			heredoc->delimiter.len = delimiter_size;
			string_reserve(&heredoc->delimiter, heredoc->delimiter.len);

			if (heredoc->delimiter.len > 0)
			{
				memcpy(heredoc->delimiter.buf, &buffer[size], heredoc->delimiter.len);
				size += heredoc->delimiter.len;
			}
			i++;
		}
		assert(size == length);
	}
}

/**
 * Consume a "word" in POSIX parlance, and returns it unquoted.
 *
 * This is an approximate implementation that doesn't deal with any
 * POSIX-mandated substitution, and assumes the default value for
 * IFS.
 */
bool advance_word(t_lexer *lexer, t_string *unquoted_word)
{
	bool  empty = true;
	t_i32 quote = 0;

	if (lexer->data.lookahead == '\'' || lexer->data.lookahead == '"')
	{
		quote = lexer->data.lookahead;
		lexer->data.advance((void *)lexer, false);
	}

	while (lexer->data.lookahead &&
		   !(quote ? lexer->data.lookahead == quote || lexer->data.lookahead == '\r' || lexer->data.lookahead == '\n'
				   : me_isspace(lexer->data.lookahead)))
	{
		if (lexer->data.lookahead == '\\')
		{
			lexer->data.advance((void *)lexer, false);
			if (!lexer->data.lookahead)
				return false;
		}
		empty = false;
		string_push_char(unquoted_word, lexer->data.lookahead);
		lexer->data.advance((void *)lexer, false);
	}
	string_push_char(unquoted_word, '\0');

	if (quote && lexer->data.lookahead == quote)
		lexer->data.advance((void *)lexer, false);

	return !empty;
}

bool scan_bare_dollar(t_lexer *lexer)
{
	while (me_isspace(lexer->data.lookahead) && lexer->data.lookahead != '\n' && !lexer->data.eof((void *)lexer))
		lexer->data.advance((void *)lexer, true);

	if (lexer->data.lookahead == '$')
	{
		lexer->data.advance((void *)lexer, false);
		lexer->data.result_symbol = BARE_DOLLAR;
		lexer->data.mark_end((void *)lexer);
		return (me_isspace(lexer->data.lookahead) || lexer->data.eof((void *)lexer) || lexer->data.lookahead == '\"');
	}

	return false;
}

bool scan_heredoc_start(t_heredoc *heredoc, t_lexer *lexer)
{
	while (me_isspace(lexer->data.lookahead))
	{
		lexer->data.advance((void *)lexer, true);
	}

	lexer->data.result_symbol = HEREDOC_START;
	heredoc->is_raw = lexer->data.lookahead == '\'' || lexer->data.lookahead == '"' || lexer->data.lookahead == '\\';

	bool found_delimiter = advance_word(lexer, &heredoc->delimiter);
	if (!found_delimiter)
	{
		string_clear(&heredoc->delimiter);
		return false;
	}
	return found_delimiter;
}

bool scan_heredoc_end_identifier(t_heredoc *heredoc, t_lexer *lexer)
{
	string_clear(&heredoc->current_leading_word);
	// Scan the first 'n' characters on this line, to see if they match the
	// heredoc delimiter
	t_i32 size = 0;
	if (heredoc->delimiter.len > 0)
	{
		while (lexer->data.lookahead != '\0' && lexer->data.lookahead != '\n' &&
			   (t_i32) * (&heredoc->delimiter.buf[size]) == lexer->data.lookahead &&
			   heredoc->current_leading_word.len < heredoc->delimiter.len)
		{
			string_push_char(&heredoc->current_leading_word, lexer->data.lookahead);
			lexer->data.advance((void *)lexer, false);
			size++;
		}
	}
	string_push_char(&heredoc->current_leading_word, '\0');
	return (heredoc->delimiter.len == 0 ? false : strcmp(heredoc->current_leading_word.buf, heredoc->delimiter.buf) == 0);
}

bool scan_heredoc_content(t_scanner *scanner, t_lexer *lexer, enum e_token_type middle_type, enum e_token_type end_type)
{
	bool	   did_advance = false;
	t_heredoc *heredoc = array_back(&scanner->heredocs);

	for (;;)
	{
		switch (lexer->data.lookahead)
		{
		case '\0': {
			if (lexer->data.eof((void *)lexer) && did_advance)
			{
				reset_heredoc(heredoc);
				lexer->data.result_symbol = end_type;
				return true;
			}
			return false;
		}

		case '\\': {
			did_advance = true;
			lexer->data.advance((void *)lexer, false);
			lexer->data.advance((void *)lexer, false);
			break;
		}

		case '$': {
			if (heredoc->is_raw)
			{
				did_advance = true;
				lexer->data.advance((void *)lexer, false);
				break;
			}
			if (did_advance)
			{
				lexer->data.mark_end((void *)lexer);
				lexer->data.result_symbol = middle_type;
				heredoc->started = true;
				lexer->data.advance((void *)lexer, false);
				if (me_isalpha(lexer->data.lookahead) || lexer->data.lookahead == '{' || lexer->data.lookahead == '(')
				{
					return true;
				}
				break;
			}
			if (middle_type == HEREDOC_BODY_BEGINNING && lexer->data.get_column((void *)lexer) == 0)
			{
				lexer->data.result_symbol = middle_type;
				heredoc->started = true;
				return true;
			}
			return false;
		}

		case '\n': {
			if (!did_advance)
			{
				lexer->data.advance((void *)lexer, true);
			}
			else
			{
				lexer->data.advance((void *)lexer, false);
			}
			did_advance = true;
			if (heredoc->allows_indent)
			{
				while (me_isspace(lexer->data.lookahead))
				{
					lexer->data.advance((void *)lexer, false);
				}
			}
			lexer->data.result_symbol = heredoc->started ? middle_type : end_type;
			lexer->data.mark_end((void *)lexer);
			if (scan_heredoc_end_identifier(heredoc, lexer))
			{
				if (lexer->data.result_symbol == HEREDOC_END)
				{
					(void)array_pop(&scanner->heredocs);
				}
				return true;
			}
			break;
		}

		default: {
			if (lexer->data.get_column((void *)lexer) == 0)
			{
				// an alternative is to check the starting column of the
				// heredoc body and track that statefully
				while (me_isspace(lexer->data.lookahead))
				{
					if (did_advance)
						lexer->data.advance((void *)lexer, false);
					else
						lexer->data.advance((void *)lexer, true);
				}
				if (end_type != SIMPLE_HEREDOC_BODY)
				{
					lexer->data.result_symbol = middle_type;
					if (scan_heredoc_end_identifier(heredoc, lexer))
						return true;
				}
				if (end_type == SIMPLE_HEREDOC_BODY)
				{
					lexer->data.result_symbol = end_type;
					lexer->data.mark_end((void *)lexer);
					if (scan_heredoc_end_identifier(heredoc, lexer))
						return true;
				}
			}
			did_advance = true;
			lexer->data.advance((void *)lexer, false);
			break;
		}
		}
	}
}

bool scan_expansion_word(t_scanner *scanner, t_lexer *lexer, const bool *valid_symbols)
{
	(void)(scanner);
	(void)(lexer);
	(void)(valid_symbols);
	bool advanced_once = false;
	bool advance_once_space = false;
	for (;;)
	{
		if (lexer->data.lookahead == '\"')
			return false;
		if (lexer->data.lookahead == '$')
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.advance((void *)lexer, false);
			if (lexer->data.lookahead == '{' || lexer->data.lookahead == '(' || lexer->data.lookahead == '\'' ||
				me_isalnum(lexer->data.lookahead))
			{
				lexer->data.result_symbol = EXPANSION_WORD;
				return advanced_once;
			}
			advanced_once = true;
		}

		if (lexer->data.lookahead == '}')
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.result_symbol = EXPANSION_WORD;
			return advanced_once || advance_once_space;
		}

		if (lexer->data.lookahead == '(' && !(advanced_once || advance_once_space))
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.advance((void *)lexer, false);
			while (lexer->data.lookahead != ')' && !lexer->data.eof((void *)lexer))
			{
				// if we find a $( or ${ assume this is valid and is
				// a garbage concatenation of some weird word + an
				// expansion
				// I wonder where this can fail
				if (lexer->data.lookahead == '$')
				{
					lexer->data.mark_end((void *)lexer);
					lexer->data.advance((void *)lexer, false);
					if (lexer->data.lookahead == '{' || lexer->data.lookahead == '(' || lexer->data.lookahead == '\'' ||
						me_isalnum(lexer->data.lookahead))
					{
						lexer->data.result_symbol = EXPANSION_WORD;
						return advanced_once;
					}
					advanced_once = true;
				}
				else
				{
					advanced_once = advanced_once || !me_isspace(lexer->data.lookahead);
					advance_once_space = advance_once_space || me_isspace(lexer->data.lookahead);
					lexer->data.advance((void *)lexer, false);
				}
			}
			lexer->data.mark_end((void *)lexer);
			if (lexer->data.lookahead == ')')
			{
				advanced_once = true;
				lexer->data.advance((void *)lexer, false);
				lexer->data.mark_end((void *)lexer);
				if (lexer->data.lookahead == '}')
					return false;
			}
			else
				return false;
		}

		if (lexer->data.lookahead == '\'')
			return false;
		if (lexer->data.eof((void *)lexer))
			return false;
		advanced_once = advanced_once || !me_isspace(lexer->data.lookahead);
		advance_once_space = advance_once_space || me_isspace(lexer->data.lookahead);
		lexer->data.advance((void *)lexer, false);
	}
	return (false);
}

bool scan_concat(t_scanner *scanner, t_lexer *lexer, const bool *valid_symbols)
{
	(void)(scanner);
	(void)(lexer);
	(void)(valid_symbols);
	lexer->data.result_symbol = CONCAT;
	if (lexer->data.lookahead == '\\')
	{
		lexer->data.mark_end((void *)lexer);
		lexer->data.advance((void *)lexer, false);
		if (lexer->data.lookahead == '"' || lexer->data.lookahead == '\'' || lexer->data.lookahead == '\\')
			return true;
		if (lexer->data.eof((void *)lexer))
			return false;
	}
	return true;
}

bool check_scan_immediate_double_hash(t_scanner *scanner, t_lexer *lexer, const bool *valid_symbols)
{
	(void)(scanner);
	(void)(lexer);
	(void)(valid_symbols);
	if (lexer->data.lookahead == '#')
	{
		lexer->data.mark_end((void *)lexer);
		lexer->data.advance((void *)lexer, false);
		if (lexer->data.lookahead == '#')
		{
			lexer->data.advance((void *)lexer, false);
			if (lexer->data.lookahead != '}')
			{
				lexer->data.result_symbol = IMMEDIATE_DOUBLE_HASH;
				lexer->data.mark_end((void *)lexer);
				return (true);
			}
		}
	}
	return (false);
}

bool scan_variable_name(t_scanner *scanner, t_lexer *lexer, const bool *valid_symbols)
{
	for (;;)
	{
		if ((lexer->data.lookahead == ' ' || lexer->data.lookahead == '\t' || lexer->data.lookahead == '\r' ||
			 (lexer->data.lookahead == '\n' && !valid_symbols[NEWLINE])) &&
			!valid_symbols[EXPANSION_WORD])
			lexer->data.advance((void *)lexer, true);
		else if (lexer->data.lookahead == '\\')
		{
			lexer->data.advance((void *)lexer, true);

			if (lexer->data.eof((void *)lexer))
			{
				lexer->data.mark_end((void *)lexer);
				lexer->data.result_symbol = VARIABLE_NAME;
				return true;
			}
			if (lexer->data.lookahead == '\r')
				lexer->data.advance((void *)lexer, true);
			if (lexer->data.lookahead == '\n')
				lexer->data.advance((void *)lexer, true);
			else
			{
				if (lexer->data.lookahead == '\\' && valid_symbols[EXPANSION_WORD])
					return (scan_expansion_word(scanner, lexer, valid_symbols));
				return false;
			}
		}
		else
			break;
	}
	if (!valid_symbols[EXPANSION_WORD] && (lexer->data.lookahead == '*' || lexer->data.lookahead == '@' || lexer->data.lookahead == '?' ||
										   lexer->data.lookahead == '-' || lexer->data.lookahead == '0' || lexer->data.lookahead == '_'))
	{
		lexer->data.mark_end((void *)lexer);
		lexer->data.advance((void *)lexer, false);
		if (lexer->data.lookahead == '=' || lexer->data.lookahead == '[' || lexer->data.lookahead == ':' || lexer->data.lookahead == '-' ||
			lexer->data.lookahead == '%' || lexer->data.lookahead == '#' || lexer->data.lookahead == '/')
			return (false);
		if (valid_symbols[EXTGLOB_PATTERN] && me_isspace(lexer->data.lookahead))
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.result_symbol = EXTGLOB_PATTERN;
			return (true);
		}
	}

	if (valid_symbols[HEREDOC_ARROW] && lexer->data.lookahead == '<')
	{
		lexer->data.advance((void *)lexer, false);
		if (lexer->data.lookahead == '<')
		{
			lexer->data.advance((void *)lexer, false);
			if (lexer->data.lookahead == '-')
			{
				lexer->data.advance((void *)lexer, false);
				t_heredoc heredoc = heredoc_new();
				heredoc.allows_indent = true;
				array_push(&scanner->heredocs, heredoc);
				lexer->data.result_symbol = HEREDOC_ARROW_DASH;
			}
			else
			{
				t_heredoc heredoc = heredoc_new();
				array_push(&scanner->heredocs, heredoc);
				lexer->data.result_symbol = HEREDOC_ARROW;
			}
			return (true);
		}
		return (false);
	}

	bool is_number = true;
	if (me_isdigit(lexer->data.lookahead))
		lexer->data.advance((void *)lexer, false);
	else if (me_isalpha(lexer->data.lookahead) || lexer->data.lookahead == '_')
	{
		is_number = false;
		lexer->data.advance((void *)lexer, false);
	}
	else
	{
		if (lexer->data.lookahead == '{')
			return (false);
		if (valid_symbols[EXPANSION_WORD])
			return (scan_expansion_word(scanner, lexer, valid_symbols));
		if (valid_symbols[EXTGLOB_PATTERN])
			return (false);
		return false;
	}

	for (;;)
	{
		if (me_isdigit(lexer->data.lookahead))
			lexer->data.advance((void *)lexer, false);
		else if (me_isalpha(lexer->data.lookahead) || lexer->data.lookahead == '_')
		{
			is_number = false;
			lexer->data.advance((void *)lexer, false);
		}
		else
			break;
	}

	if (is_number && valid_symbols[FILE_DESCRIPTOR] && (lexer->data.lookahead == '>' || lexer->data.lookahead == '<'))
	{
		lexer->data.result_symbol = FILE_DESCRIPTOR;
		return (true);
	}

	if (valid_symbols[VARIABLE_NAME])
	{
		if (lexer->data.lookahead == '+')
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.advance((void *)lexer, false);
			if (lexer->data.lookahead == '=' || lexer->data.lookahead == ':')
			{
				lexer->data.result_symbol = VARIABLE_NAME;
				return (true);
			}
			return (false);
		}
		if (lexer->data.lookahead == '/')
			return (false);
		if (lexer->data.lookahead == '=' || lexer->data.lookahead == '[' ||
			(lexer->data.lookahead == ':' && !valid_symbols[OPENING_PAREN]) || lexer->data.lookahead == '%' ||
			(lexer->data.lookahead == '#' && !is_number) || lexer->data.lookahead == '@' || (lexer->data.lookahead == '-'))
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.result_symbol = VARIABLE_NAME;
			return (true);
		}
		if (lexer->data.lookahead == '?')
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.advance((void *)lexer, false);
			lexer->data.result_symbol = VARIABLE_NAME;
			return (me_isalpha(lexer->data.lookahead));
		}
	}

	return (false);
}
bool check_scan_heredoc_end(t_scanner *scanner, t_lexer *lexer, const bool *valid_symbols)
{
	(void)(valid_symbols);
	t_heredoc *heredoc = array_back(&scanner->heredocs);
	if (scan_heredoc_end_identifier(heredoc, lexer))
	{
		array_delete(&heredoc->current_leading_word);
		array_delete(&heredoc->delimiter);
		(void)array_pop(&scanner->heredocs);
		lexer->data.result_symbol = HEREDOC_END;
		return (true);
	}
	return (false);
}

bool scan(t_scanner *scanner, t_lexer *lexer, const bool *valid_symbols)
{
	if (valid_symbols[CONCAT] && !(valid_symbols[ERROR_RECOVERY]) &&
		!(lexer->data.lookahead == 0 || me_isspace(lexer->data.lookahead) || lexer->data.lookahead == '>' || lexer->data.lookahead == '<' ||
		  lexer->data.lookahead == ')' || lexer->data.lookahead == '(' || lexer->data.lookahead == ';' || lexer->data.lookahead == '&' ||
		  lexer->data.lookahead == '|' || lexer->data.lookahead == '{' || lexer->data.lookahead == '}'))
		return (scan_concat(scanner, lexer, valid_symbols));
	if (valid_symbols[IMMEDIATE_DOUBLE_HASH] && !(valid_symbols[ERROR_RECOVERY]) &&
		check_scan_immediate_double_hash(scanner, lexer, valid_symbols))
		return (true);
	if (valid_symbols[EMPTY_VALUE] && (me_isspace(lexer->data.lookahead) || lexer->data.eof((void *)lexer) ||
									   lexer->data.lookahead == ';' || lexer->data.lookahead == '&'))
		return (lexer->data.result_symbol = EMPTY_VALUE, true);
	if ((valid_symbols[HEREDOC_BODY_BEGINNING] || valid_symbols[SIMPLE_HEREDOC_BODY]) && scanner->heredocs.size > 0 &&
		!array_back(&scanner->heredocs)->started && !(valid_symbols[ERROR_RECOVERY]))
		return (scan_heredoc_content(scanner, lexer, HEREDOC_BODY_BEGINNING, SIMPLE_HEREDOC_BODY));
	if (valid_symbols[HEREDOC_END] && scanner->heredocs.size > 0 && check_scan_heredoc_end(scanner, lexer, valid_symbols))
		return (false);
	if (valid_symbols[HEREDOC_CONTENT] && scanner->heredocs.size > 0 && array_back(&scanner->heredocs)->started &&
		!(valid_symbols[ERROR_RECOVERY]))
		return (scan_heredoc_content(scanner, lexer, HEREDOC_CONTENT, HEREDOC_END));
	if (valid_symbols[HEREDOC_START] && !(valid_symbols[ERROR_RECOVERY]) && scanner->heredocs.size > 0)
		return (scan_heredoc_start(array_back(&scanner->heredocs), lexer));
	if ((valid_symbols[VARIABLE_NAME] || valid_symbols[FILE_DESCRIPTOR] || valid_symbols[HEREDOC_ARROW]) &&
		!(valid_symbols[ERROR_RECOVERY]))
		return (scan_variable_name(scanner, lexer, valid_symbols));
	if (valid_symbols[BARE_DOLLAR] && !(valid_symbols[ERROR_RECOVERY]) && scan_bare_dollar(lexer))
		return (true);
	if (valid_symbols[EXPANSION_WORD])
		return (scan_expansion_word(scanner, lexer, valid_symbols));
	return (false);
}

void *tree_sitter_sh_external_scanner_create()
{
	t_scanner *scanner = mem_alloc(sizeof(t_scanner));
	array_init(&scanner->heredocs);
	return scanner;
}

bool tree_sitter_sh_external_scanner_scan(void *payload, t_lexer *lexer, const bool *valid_symbols)
{
	t_scanner *scanner = (t_scanner *)payload;
	return scan(scanner, lexer, valid_symbols);
}

t_u32 tree_sitter_sh_external_scanner_serialize(void *payload, t_u8 *state)
{
	t_scanner *scanner = (t_scanner *)payload;
	return serialize(scanner, state);
}

void tree_sitter_sh_external_scanner_deserialize(void *payload, const t_u8 *state, t_u32 length)
{
	t_scanner *scanner = (t_scanner *)payload;
	deserialize(scanner, state, length);
}

void tree_sitter_sh_external_scanner_destroy(void *payload)
{
	t_scanner *scanner = (t_scanner *)payload;
	for (size_t i = 0; i < scanner->heredocs.size; i++)
	{
		t_heredoc *heredoc = array_get(&scanner->heredocs, i);
		array_delete(&heredoc->current_leading_word);
		array_delete(&heredoc->delimiter);
	}
	array_delete(&scanner->heredocs);
	mem_free(scanner);
}
