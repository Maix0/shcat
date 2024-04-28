#include "array.h"
#include "parser.h"

#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <wctype.h>

enum TokenType
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
	TEST_OPERATOR,
	REGEX,
	REGEX_NO_SLASH,
	REGEX_NO_SPACE,
	EXPANSION_WORD,
	EXTGLOB_PATTERN,
	BARE_DOLLAR,
	BRACE_START,
	IMMEDIATE_DOUBLE_HASH,
	EXTERNAL_EXPANSION_SYM_HASH,
	EXTERNAL_EXPANSION_SYM_BANG,
	EXTERNAL_EXPANSION_SYM_EQUAL,
	CLOSING_BRACE,
	CLOSING_BRACKET,
	HEREDOC_ARROW,
	HEREDOC_ARROW_DASH,
	NEWLINE,
	OPENING_PAREN,
	ESAC,
	ERROR_RECOVERY,
};

typedef Array(char) t_string;
// typedef void *String;

typedef struct s_heredoc
{
	bool	 is_raw;
	bool	 started;
	bool	 allows_indent;
	t_string delimiter;
	t_string current_leading_word;
} t_heredoc;

static inline t_heredoc heredoc_new(void)
{
	return ((t_heredoc){
		.is_raw = false,
		.started = false,
		.allows_indent = false,
		.delimiter = array_new(),
		.current_leading_word = array_new(),
	});
}

typedef struct s_scanner
{
	uint8_t last_glob_paren_depth;
	bool	ext_was_in_double_quote;
	bool	ext_saw_outside_quote;
	Array(t_heredoc) heredocs;
} t_scanner;

static inline void advance(TSLexer *lexer)
{
	lexer->advance(lexer, false);
}

static inline void skip(TSLexer *lexer)
{
	lexer->advance(lexer, true);
}

static inline bool in_error_recovery(const bool *valid_symbols)
{
	return valid_symbols[ERROR_RECOVERY];
}

static inline void reset_string(t_string *string)
{
	if (string->size > 0)
	{
		memset(string->contents, 0, string->size);
		array_clear(string);
	}
}

static inline void reset_heredoc(t_heredoc *heredoc)
{
	heredoc->is_raw = false;
	heredoc->started = false;
	heredoc->allows_indent = false;
	reset_string(&heredoc->delimiter);
}

static inline void reset(t_scanner *scanner)
{
	uint32_t i;

	i = 0;
	while (i < scanner->heredocs.size)
	{
		reset_heredoc(array_get(&scanner->heredocs, i));
		i++;
	}
}

static unsigned serialize(t_scanner *scanner, char *buffer)
{
	uint32_t   size;
	uint32_t   i;
	t_heredoc *heredoc;

	size = 0;
	buffer[size++] = (char)scanner->last_glob_paren_depth;
	buffer[size++] = (char)scanner->ext_was_in_double_quote;
	buffer[size++] = (char)scanner->ext_saw_outside_quote;
	buffer[size++] = (char)scanner->heredocs.size;
	i = 0;
	while (i < scanner->heredocs.size)
	{
		heredoc = array_get(&scanner->heredocs, i);
		if (heredoc->delimiter.size + 3 + size >=
			TREE_SITTER_SERIALIZATION_BUFFER_SIZE)
			return 0;
		buffer[size++] = (char)heredoc->is_raw;
		buffer[size++] = (char)heredoc->started;
		buffer[size++] = (char)heredoc->allows_indent;
		memcpy(&buffer[size], &heredoc->delimiter.size, sizeof(uint32_t));
		size += sizeof(uint32_t);
		if (heredoc->delimiter.size > 0)
		{
			memcpy(&buffer[size], heredoc->delimiter.contents,
				   heredoc->delimiter.size);
			size += heredoc->delimiter.size;
		}
		i++;
	}
	return size;
}

static void deserialize(t_scanner *scanner, const char *buffer, unsigned length)
{
	uint32_t   size;
	uint32_t   heredoc_count;
	t_heredoc *heredoc;
	uint32_t   i;

	size = 0;
	if (length == 0)
		reset(scanner);
	else
	{
		scanner->last_glob_paren_depth = buffer[size++];
		scanner->ext_was_in_double_quote = buffer[size++];
		scanner->ext_saw_outside_quote = buffer[size++];
		heredoc_count = (unsigned char)buffer[size++];
		i = 0;
		while (i < heredoc_count)
		{
			heredoc = NULL;
			if (i < scanner->heredocs.size)
				heredoc = array_get(&scanner->heredocs, i);
			else
			{
				array_push(&scanner->heredocs, heredoc_new());
				heredoc = array_back(&scanner->heredocs);
			}
			heredoc->is_raw = buffer[size++];
			heredoc->started = buffer[size++];
			heredoc->allows_indent = buffer[size++];
			memcpy(&heredoc->delimiter.size, &buffer[size], sizeof(uint32_t));
			size += sizeof(uint32_t);
			array_reserve(&heredoc->delimiter, heredoc->delimiter.size);
			if (heredoc->delimiter.size > 0)
			{
				memcpy(heredoc->delimiter.contents, &buffer[size],
					   heredoc->delimiter.size);
				size += heredoc->delimiter.size;
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
static bool advance_word(TSLexer *lexer, t_string *unquoted_word)
{
	bool	empty;
	int32_t quote;

	quote = 0;
	empty = true;
	if (lexer->lookahead == '\'' || lexer->lookahead == '"')
		(quote = lexer->lookahead, advance(lexer));
	while (lexer->lookahead &&
		   !((quote ? lexer->lookahead == quote || lexer->lookahead == '\r' ||
						  lexer->lookahead == '\n'
					: isspace(lexer->lookahead))))
	{
		if (lexer->lookahead == '\\')
		{
			advance(lexer);
			if (!lexer->lookahead)
				return (false);
		}
		empty = false;
		array_push(unquoted_word, lexer->lookahead);
		advance(lexer);
	}
	array_push(unquoted_word, '\0');
	if (quote && lexer->lookahead == quote)
		advance(lexer);
	return (!empty);
}

static inline bool scan_bare_dollar(TSLexer *lexer)
{
	while (isspace(lexer->lookahead) && lexer->lookahead != '\n' &&
		   !lexer->eof(lexer))
		skip(lexer);

	if (lexer->lookahead == '$')
	{
		advance(lexer);
		lexer->result_symbol = BARE_DOLLAR;
		lexer->mark_end(lexer);
		return (isspace(lexer->lookahead) || lexer->eof(lexer) ||
				lexer->lookahead == '\"');
	}

	return (false);
}

static bool scan_heredoc_start(t_heredoc *heredoc, TSLexer *lexer)
{
	bool found_delimiter;

	while (isspace(lexer->lookahead))
		skip(lexer);
	lexer->result_symbol = HEREDOC_START;
	heredoc->is_raw = lexer->lookahead == '\'' || lexer->lookahead == '"' ||
					  lexer->lookahead == '\\';
	found_delimiter = advance_word(lexer, &heredoc->delimiter);
	if (!found_delimiter)
	{
		reset_string(&heredoc->delimiter);
		return false;
	}
	return found_delimiter;
}

static bool scan_heredoc_end_identifier(t_heredoc *heredoc, TSLexer *lexer)
{
	reset_string(&heredoc->current_leading_word);
	// Scan the first 'n' characters on this line, to see if they match the
	// heredoc delimiter
	int32_t size;

	size = 0;
	if (heredoc->delimiter.size > 0)
	{
		while (lexer->lookahead != '\0' && lexer->lookahead != '\n' &&
			   (int32_t)*array_get(&heredoc->delimiter, size) ==
				   lexer->lookahead &&
			   heredoc->current_leading_word.size < heredoc->delimiter.size)
		{
			array_push(&heredoc->current_leading_word, lexer->lookahead);
			advance(lexer);
			size++;
		}
	}
	array_push(&heredoc->current_leading_word, '\0');
	return heredoc->delimiter.size == 0
			   ? false
			   : strcmp(heredoc->current_leading_word.contents,
						heredoc->delimiter.contents) == 0;
}

static bool scan_heredoc_content(t_scanner *scanner, TSLexer *lexer,
								 enum TokenType middle_type,
								 enum TokenType end_type)
{
	bool	   did_advance = false;
	t_heredoc *heredoc = array_back(&scanner->heredocs);

	for (;;)
	{
		switch (lexer->lookahead)
		{
		case '\0': {
			if (lexer->eof(lexer) && did_advance)
			{
				reset_heredoc(heredoc);
				lexer->result_symbol = end_type;
				return true;
			}
			return false;
		}

		case '\\': {
			did_advance = true;
			advance(lexer);
			advance(lexer);
			break;
		}

		case '$': {
			if (heredoc->is_raw)
			{
				did_advance = true;
				advance(lexer);
				break;
			}
			if (did_advance)
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = middle_type;
				heredoc->started = true;
				advance(lexer);
				if (isalpha(lexer->lookahead) || lexer->lookahead == '{' ||
					lexer->lookahead == '(')
				{
					return true;
				}
				break;
			}
			if (middle_type == HEREDOC_BODY_BEGINNING &&
				lexer->get_column(lexer) == 0)
			{
				lexer->result_symbol = middle_type;
				heredoc->started = true;
				return true;
			}
			return false;
		}

		case '\n': {
			if (!did_advance)
			{
				skip(lexer);
			}
			else
			{
				advance(lexer);
			}
			did_advance = true;
			if (heredoc->allows_indent)
			{
				while (isspace(lexer->lookahead))
				{
					advance(lexer);
				}
			}
			lexer->result_symbol = heredoc->started ? middle_type : end_type;
			lexer->mark_end(lexer);
			if (scan_heredoc_end_identifier(heredoc, lexer))
			{
				if (lexer->result_symbol == HEREDOC_END)
				{
					array_pop(&scanner->heredocs);
				}
				return true;
			}
			break;
		}

		default: {
			if (lexer->get_column(lexer) == 0)
			{
				// an alternative is to check the starting column of the
				// heredoc body and track that statefully
				while (isspace(lexer->lookahead))
				{
					if (did_advance)
					{
						advance(lexer);
					}
					else
					{
						skip(lexer);
					}
				}
				if (end_type != SIMPLE_HEREDOC_BODY)
				{
					lexer->result_symbol = middle_type;
					if (scan_heredoc_end_identifier(heredoc, lexer))
					{
						return true;
					}
				}
				if (end_type == SIMPLE_HEREDOC_BODY)
				{
					lexer->result_symbol = end_type;
					lexer->mark_end(lexer);
					if (scan_heredoc_end_identifier(heredoc, lexer))
					{
						return true;
					}
				}
			}
			did_advance = true;
			advance(lexer);
			break;
		}
		}
	}
}
static bool regex_scan(t_scanner *scanner, TSLexer *lexer,
					   const bool *valid_symbols)
{
	(void)(scanner);

	if ((valid_symbols[REGEX] || valid_symbols[REGEX_NO_SLASH] ||
		 valid_symbols[REGEX_NO_SPACE]) &&
		!in_error_recovery(valid_symbols))
	{
		if (valid_symbols[REGEX] || valid_symbols[REGEX_NO_SPACE])
		{
			while (isspace(lexer->lookahead))
			{
				skip(lexer);
			}
		}

		if ((lexer->lookahead != '"' && lexer->lookahead != '\'') ||
			((lexer->lookahead == '$' || lexer->lookahead == '\'') &&
			 valid_symbols[REGEX_NO_SLASH]) ||
			(lexer->lookahead == '\'' && valid_symbols[REGEX_NO_SPACE]))
		{
			typedef struct
			{
				bool	 done;
				bool	 advanced_once;
				bool	 found_non_alnumdollarunderdash;
				bool	 last_was_escape;
				bool	 in_single_quote;
				uint32_t paren_depth;
				uint32_t bracket_depth;
				uint32_t brace_depth;
			} State;

			if (lexer->lookahead == '$' && valid_symbols[REGEX_NO_SLASH])
			{
				lexer->mark_end(lexer);
				advance(lexer);
				if (lexer->lookahead == '(')
				{
					return false;
				}
			}

			lexer->mark_end(lexer);

			State state = {false, false, false, false, false, 0, 0, 0};
			while (!state.done)
			{
				if (state.in_single_quote)
				{
					if (lexer->lookahead == '\'')
					{
						state.in_single_quote = false;
						advance(lexer);
						lexer->mark_end(lexer);
					}
				}
				switch (lexer->lookahead)
				{
				case '\\':
					state.last_was_escape = true;
					break;
				case '\0':
					return false;
				case '(':
					state.paren_depth++;
					state.last_was_escape = false;
					break;
				case '[':
					state.bracket_depth++;
					state.last_was_escape = false;
					break;
				case '{':
					if (!state.last_was_escape)
					{
						state.brace_depth++;
					}
					state.last_was_escape = false;
					break;
				case ')':
					if (state.paren_depth == 0)
					{
						state.done = true;
					}
					state.paren_depth--;
					state.last_was_escape = false;
					break;
				case ']':
					if (state.bracket_depth == 0)
					{
						state.done = true;
					}
					state.bracket_depth--;
					state.last_was_escape = false;
					break;
				case '}':
					if (state.brace_depth == 0)
					{
						state.done = true;
					}
					state.brace_depth--;
					state.last_was_escape = false;
					break;
				case '\'':
					// Enter or exit a single-quoted string.
					state.in_single_quote = !state.in_single_quote;
					advance(lexer);
					state.advanced_once = true;
					state.last_was_escape = false;
					continue;
				default:
					state.last_was_escape = false;
					break;
				}

				if (!state.done)
				{
					if (valid_symbols[REGEX])
					{
						bool was_space =
							!state.in_single_quote && isspace(lexer->lookahead);
						advance(lexer);
						state.advanced_once = true;
						if (!was_space || state.paren_depth > 0)
						{
							lexer->mark_end(lexer);
						}
					}
					else if (valid_symbols[REGEX_NO_SLASH])
					{
						if (lexer->lookahead == '/')
						{
							lexer->mark_end(lexer);
							lexer->result_symbol = REGEX_NO_SLASH;
							return state.advanced_once;
						}
						if (lexer->lookahead == '\\')
						{
							advance(lexer);
							state.advanced_once = true;
							if (!lexer->eof(lexer) && lexer->lookahead != '[' &&
								lexer->lookahead != '/')
							{
								advance(lexer);
								lexer->mark_end(lexer);
							}
						}
						else
						{
							bool was_space = !state.in_single_quote &&
											 isspace(lexer->lookahead);
							advance(lexer);
							state.advanced_once = true;
							if (!was_space)
							{
								lexer->mark_end(lexer);
							}
						}
					}
					else if (valid_symbols[REGEX_NO_SPACE])
					{
						if (lexer->lookahead == '\\')
						{
							state.found_non_alnumdollarunderdash = true;
							advance(lexer);
							if (!lexer->eof(lexer))
							{
								advance(lexer);
							}
						}
						else if (lexer->lookahead == '$')
						{
							lexer->mark_end(lexer);
							advance(lexer);
							// do not parse a command
							// substitution
							if (lexer->lookahead == '(')
							{
								return false;
							}
							// end $ always means regex, e.g.
							// 99999999$
							if (isspace(lexer->lookahead))
							{
								lexer->result_symbol = REGEX_NO_SPACE;
								lexer->mark_end(lexer);
								return true;
							}
						}
						else
						{
							bool was_space = !state.in_single_quote &&
											 isspace(lexer->lookahead);
							if (was_space && state.paren_depth == 0)
							{
								lexer->mark_end(lexer);
								lexer->result_symbol = REGEX_NO_SPACE;
								return state.found_non_alnumdollarunderdash;
							}
							if (!isalnum(lexer->lookahead) &&
								lexer->lookahead != '$' &&
								lexer->lookahead != '-' &&
								lexer->lookahead != '_')
							{
								state.found_non_alnumdollarunderdash = true;
							}
							advance(lexer);
						}
					}
				}
			}

			lexer->result_symbol =
				valid_symbols[REGEX_NO_SLASH]	? REGEX_NO_SLASH
				: valid_symbols[REGEX_NO_SPACE] ? REGEX_NO_SPACE
												: REGEX;
			if (valid_symbols[REGEX] && !state.advanced_once)
				return (false);
			return (true);
		}
	}
	return (false);
}

static bool extglob_pattern_scan(t_scanner *scanner, TSLexer *lexer,
								 const bool *valid_symbols)
{
	if (valid_symbols[EXTGLOB_PATTERN] && !in_error_recovery(valid_symbols))
	{
		// first skip ws, then check for ? * + @ !
		while (isspace(lexer->lookahead))
		{
			skip(lexer);
		}

		if (lexer->lookahead == '?' || lexer->lookahead == '*' ||
			lexer->lookahead == '+' || lexer->lookahead == '@' ||
			lexer->lookahead == '!' || lexer->lookahead == '-' ||
			lexer->lookahead == ')' || lexer->lookahead == '\\' ||
			lexer->lookahead == '.' || lexer->lookahead == '[' ||
			(isalpha(lexer->lookahead)))
		{
			if (lexer->lookahead == '\\')
			{
				advance(lexer);
				if ((isspace(lexer->lookahead) || lexer->lookahead == '"') &&
					lexer->lookahead != '\r' && lexer->lookahead != '\n')
				{
					advance(lexer);
				}
				else
				{
					return false;
				}
			}

			if (lexer->lookahead == ')' && scanner->last_glob_paren_depth == 0)
			{
				lexer->mark_end(lexer);
				advance(lexer);

				if (isspace(lexer->lookahead))
				{
					return false;
				}
			}

			lexer->mark_end(lexer);
			bool was_non_alpha = !isalpha(lexer->lookahead);
			if (lexer->lookahead != '[')
			{
				// no esac
				if (lexer->lookahead == 'e')
				{
					lexer->mark_end(lexer);
					advance(lexer);
					if (lexer->lookahead == 's')
					{
						advance(lexer);
						if (lexer->lookahead == 'a')
						{
							advance(lexer);
							if (lexer->lookahead == 'c')
							{
								advance(lexer);
								if (isspace(lexer->lookahead))
								{
									return false;
								}
							}
						}
					}
				}
				else
				{
					advance(lexer);
				}
			}

			// -\w is just a word, find something else special
			if (lexer->lookahead == '-')
			{
				lexer->mark_end(lexer);
				advance(lexer);
				while (isalnum(lexer->lookahead))
				{
					advance(lexer);
				}

				if (lexer->lookahead == ')' || lexer->lookahead == '\\' ||
					lexer->lookahead == '.')
				{
					return false;
				}
				lexer->mark_end(lexer);
			}

			// case item -) or *)
			if (lexer->lookahead == ')' && scanner->last_glob_paren_depth == 0)
			{
				lexer->mark_end(lexer);
				advance(lexer);
				if (isspace(lexer->lookahead))
				{
					lexer->result_symbol = EXTGLOB_PATTERN;
					return was_non_alpha;
				}
			}

			if (isspace(lexer->lookahead))
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = EXTGLOB_PATTERN;
				scanner->last_glob_paren_depth = 0;
				return true;
			}

			if (lexer->lookahead == '$')
			{
				lexer->mark_end(lexer);
				advance(lexer);
				if (lexer->lookahead == '{' || lexer->lookahead == '(')
				{
					lexer->result_symbol = EXTGLOB_PATTERN;
					return true;
				}
			}

			if (lexer->lookahead == '|')
			{
				lexer->mark_end(lexer);
				advance(lexer);
				lexer->result_symbol = EXTGLOB_PATTERN;
				return true;
			}

			if (!isalnum(lexer->lookahead) && lexer->lookahead != '(' &&
				lexer->lookahead != '"' && lexer->lookahead != '[' &&
				lexer->lookahead != '?' && lexer->lookahead != '/' &&
				lexer->lookahead != '\\' && lexer->lookahead != '_' &&
				lexer->lookahead != '*')
			{
				return false;
			}

			typedef struct
			{
				bool	 done;
				bool	 saw_non_alphadot;
				uint32_t paren_depth;
				uint32_t bracket_depth;
				uint32_t brace_depth;
			} State;

			State state = {false, was_non_alpha, scanner->last_glob_paren_depth,
						   0, 0};
			while (!state.done)
			{
				switch (lexer->lookahead)
				{
				case '\0':
					return false;
				case '(':
					state.paren_depth++;
					break;
				case '[':
					state.bracket_depth++;
					break;
				case '{':
					state.brace_depth++;
					break;
				case ')':
					if (state.paren_depth == 0)
					{
						state.done = true;
					}
					state.paren_depth--;
					break;
				case ']':
					if (state.bracket_depth == 0)
					{
						state.done = true;
					}
					state.bracket_depth--;
					break;
				case '}':
					if (state.brace_depth == 0)
					{
						state.done = true;
					}
					state.brace_depth--;
					break;
				}

				if (lexer->lookahead == '|')
				{
					lexer->mark_end(lexer);
					advance(lexer);
					if (state.paren_depth == 0 && state.bracket_depth == 0 &&
						state.brace_depth == 0)
					{
						lexer->result_symbol = EXTGLOB_PATTERN;
						return true;
					}
				}

				if (!state.done)
				{
					bool was_space = isspace(lexer->lookahead);
					if (lexer->lookahead == '$')
					{
						lexer->mark_end(lexer);
						if (!isalpha(lexer->lookahead) &&
							lexer->lookahead != '.' && lexer->lookahead != '\\')
						{
							state.saw_non_alphadot = true;
						}
						advance(lexer);
						if (lexer->lookahead == '(' || lexer->lookahead == '{')
						{
							lexer->result_symbol = EXTGLOB_PATTERN;
							scanner->last_glob_paren_depth = state.paren_depth;
							return state.saw_non_alphadot;
						}
					}
					if (was_space)
					{
						lexer->mark_end(lexer);
						lexer->result_symbol = EXTGLOB_PATTERN;
						scanner->last_glob_paren_depth = 0;
						return state.saw_non_alphadot;
					}
					if (lexer->lookahead == '"')
					{
						lexer->mark_end(lexer);
						lexer->result_symbol = EXTGLOB_PATTERN;
						scanner->last_glob_paren_depth = 0;
						return state.saw_non_alphadot;
					}
					if (lexer->lookahead == '\\')
					{
						if (!isalpha(lexer->lookahead) &&
							lexer->lookahead != '.' && lexer->lookahead != '\\')
						{
							state.saw_non_alphadot = true;
						}
						advance(lexer);
						if (isspace(lexer->lookahead) ||
							lexer->lookahead == '"')
						{
							advance(lexer);
						}
					}
					else
					{
						if (!isalpha(lexer->lookahead) &&
							lexer->lookahead != '.' && lexer->lookahead != '\\')
						{
							state.saw_non_alphadot = true;
						}
						advance(lexer);
					}
					if (!was_space)
					{
						lexer->mark_end(lexer);
					}
				}
			}

			lexer->result_symbol = EXTGLOB_PATTERN;
			scanner->last_glob_paren_depth = 0;
			return state.saw_non_alphadot;
		}
		scanner->last_glob_paren_depth = 0;

		return false;
	}
	return (false);
}

static bool expansion_word_scan(t_scanner *scanner, TSLexer *lexer,
								const bool *valid_symbols)
{
	(void)(scanner);
	
	if (valid_symbols[EXPANSION_WORD])
	{
		bool advanced_once = false;
		bool advance_once_space = false;
		for (;;)
		{
			if (lexer->lookahead == '\"')
			{
				return false;
			}
			if (lexer->lookahead == '$')
			{
				lexer->mark_end(lexer);
				advance(lexer);
				if (lexer->lookahead == '{' || lexer->lookahead == '(' ||
					lexer->lookahead == '\'' || isalnum(lexer->lookahead))
				{
					lexer->result_symbol = EXPANSION_WORD;
					return advanced_once;
				}
				advanced_once = true;
			}

			if (lexer->lookahead == '}')
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = EXPANSION_WORD;
				return advanced_once || advance_once_space;
			}

			if (lexer->lookahead == '(' &&
				!(advanced_once || advance_once_space))
			{
				lexer->mark_end(lexer);
				advance(lexer);
				while (lexer->lookahead != ')' && !lexer->eof(lexer))
				{
					// if we find a $( or ${ assume this is valid and is
					// a garbage concatenation of some weird word + an
					// expansion
					// I wonder where this can fail
					if (lexer->lookahead == '$')
					{
						lexer->mark_end(lexer);
						advance(lexer);
						if (lexer->lookahead == '{' ||
							lexer->lookahead == '(' ||
							lexer->lookahead == '\'' ||
							isalnum(lexer->lookahead))
						{
							lexer->result_symbol = EXPANSION_WORD;
							return advanced_once;
						}
						advanced_once = true;
					}
					else
					{
						advanced_once =
							advanced_once || !isspace(lexer->lookahead);
						advance_once_space =
							advance_once_space || isspace(lexer->lookahead);
						advance(lexer);
					}
				}
				lexer->mark_end(lexer);
				if (lexer->lookahead == ')')
				{
					advanced_once = true;
					advance(lexer);
					lexer->mark_end(lexer);
					if (lexer->lookahead == '}')
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}

			if (lexer->lookahead == '\'')
			{
				return false;
			}

			if (lexer->eof(lexer))
			{
				return false;
			}
			advanced_once = advanced_once || !isspace(lexer->lookahead);
			advance_once_space =
				advance_once_space || isspace(lexer->lookahead);
			advance(lexer);
		}
	}
    return (false);
}

static bool brace_start_scan(t_scanner *scanner, TSLexer *lexer,
							 const bool *valid_symbols)
{
	(void)(scanner);
	
	if (valid_symbols[BRACE_START] && !in_error_recovery(valid_symbols))
	{
		while (isspace(lexer->lookahead))
		{
			skip(lexer);
		}

		if (lexer->lookahead != '{')
		{
			return false;
		}

		advance(lexer);
		lexer->mark_end(lexer);

		while (isdigit(lexer->lookahead))
		{
			advance(lexer);
		}

		if (lexer->lookahead != '.')
		{
			return false;
		}
		advance(lexer);

		if (lexer->lookahead != '.')
		{
			return false;
		}
		advance(lexer);

		while (isdigit(lexer->lookahead))
		{
			advance(lexer);
		}

		if (lexer->lookahead != '}')
		{
			return false;
		}

		lexer->result_symbol = BRACE_START;
		return true;
	}
	return (false);
}
static bool scan(t_scanner *scanner, TSLexer *lexer, const bool *valid_symbols)
{
	if (valid_symbols[CONCAT] && !in_error_recovery(valid_symbols))
	{
		if (!(lexer->lookahead == 0 || isspace(lexer->lookahead) ||
			  lexer->lookahead == '>' || lexer->lookahead == '<' ||
			  lexer->lookahead == ')' || lexer->lookahead == '(' ||
			  lexer->lookahead == ';' || lexer->lookahead == '&' ||
			  lexer->lookahead == '|' ||
			  (lexer->lookahead == '}' && valid_symbols[CLOSING_BRACE]) ||
			  (lexer->lookahead == ']' && valid_symbols[CLOSING_BRACKET])))
		{
			lexer->result_symbol = CONCAT;
			// So for a`b`, we want to return a concat. We check if the
			// 2nd backtick has whitespace after it, and if it does we
			// return concat.
			if (lexer->lookahead == '`')
			{
				lexer->mark_end(lexer);
				advance(lexer);
				while (lexer->lookahead != '`' && !lexer->eof(lexer))
					advance(lexer);
				if (lexer->eof(lexer))
					return (false);
				if (lexer->lookahead == '`')
					advance(lexer);
				return (isspace(lexer->lookahead) || lexer->eof(lexer));
			}
			// strings w/ expansions that contains escaped quotes or
			// backslashes need this to return a concat
			if (lexer->lookahead == '\\')
			{
				lexer->mark_end(lexer);
				advance(lexer);
				if (lexer->lookahead == '"' || lexer->lookahead == '\'' ||
					lexer->lookahead == '\\')
					return (true);
				if (lexer->eof(lexer))
					return (false);
			}
			else
				return (true);
		}
		if (isspace(lexer->lookahead) && valid_symbols[CLOSING_BRACE] &&
			!valid_symbols[EXPANSION_WORD])
		{
			lexer->result_symbol = CONCAT;
			return (true);
		}
	}

	if (valid_symbols[IMMEDIATE_DOUBLE_HASH] &&
		!in_error_recovery(valid_symbols))
	{
		// advance two # and ensure not } after
		if (lexer->lookahead == '#')
		{
			lexer->mark_end(lexer);
			advance(lexer);
			if (lexer->lookahead == '#')
			{
				advance(lexer);
				if (lexer->lookahead != '}')
				{
					lexer->result_symbol = IMMEDIATE_DOUBLE_HASH;
					lexer->mark_end(lexer);
					return (true);
				}
			}
		}
	}

	if (valid_symbols[EXTERNAL_EXPANSION_SYM_HASH] &&
		!in_error_recovery(valid_symbols))
	{
		if (lexer->lookahead == '#' || lexer->lookahead == '=' ||
			lexer->lookahead == '!')
		{
			lexer->result_symbol =
				lexer->lookahead == '#'	  ? EXTERNAL_EXPANSION_SYM_HASH
				: lexer->lookahead == '!' ? EXTERNAL_EXPANSION_SYM_BANG
										  : EXTERNAL_EXPANSION_SYM_EQUAL;
			advance(lexer);
			lexer->mark_end(lexer);
			while (lexer->lookahead == '#' || lexer->lookahead == '=' ||
				   lexer->lookahead == '!')
				advance(lexer);
			while (isspace(lexer->lookahead))
				skip(lexer);
			if (lexer->lookahead == '}')
				return (true);
			return (false);
		}
	}

	if (valid_symbols[EMPTY_VALUE])
	{
		if (isspace(lexer->lookahead) || lexer->eof(lexer) ||
			lexer->lookahead == ';' || lexer->lookahead == '&')
		{
			lexer->result_symbol = EMPTY_VALUE;
			return (true);
		}
	}

	if ((valid_symbols[HEREDOC_BODY_BEGINNING] ||
		 valid_symbols[SIMPLE_HEREDOC_BODY]) &&
		scanner->heredocs.size > 0 &&
		!array_back(&scanner->heredocs)->started &&
		!in_error_recovery(valid_symbols))
		return (scan_heredoc_content(scanner, lexer, HEREDOC_BODY_BEGINNING,
									 SIMPLE_HEREDOC_BODY));

	if (valid_symbols[HEREDOC_END] && scanner->heredocs.size > 0)
	{
		t_heredoc *heredoc = array_back(&scanner->heredocs);
		if (scan_heredoc_end_identifier(heredoc, lexer))
		{
			array_delete(&heredoc->current_leading_word);
			array_delete(&heredoc->delimiter);
			array_pop(&scanner->heredocs);
			lexer->result_symbol = HEREDOC_END;
			return (true);
		}
	}

	if (valid_symbols[HEREDOC_CONTENT] && scanner->heredocs.size > 0 &&
		array_back(&scanner->heredocs)->started &&
		!in_error_recovery(valid_symbols))
		return (
			scan_heredoc_content(scanner, lexer, HEREDOC_CONTENT, HEREDOC_END));

	if (valid_symbols[HEREDOC_START] && !in_error_recovery(valid_symbols) &&
		scanner->heredocs.size > 0)
		return (scan_heredoc_start(array_back(&scanner->heredocs), lexer));

	if (valid_symbols[TEST_OPERATOR] && !valid_symbols[EXPANSION_WORD])
	{
		while (isspace(lexer->lookahead) && lexer->lookahead != '\n')
			skip(lexer);

		if (lexer->lookahead == '\\')
		{
			if (valid_symbols[EXTGLOB_PATTERN])
				return (extglob_pattern_scan(scanner, lexer, valid_symbols));
			if (valid_symbols[REGEX_NO_SPACE])
				return (regex_scan(scanner, lexer, valid_symbols));
			skip(lexer);

			if (lexer->eof(lexer))
				return false;

			if (lexer->lookahead == '\r')
			{
				skip(lexer);
				if (lexer->lookahead == '\n')
					skip(lexer);
			}
			else if (lexer->lookahead == '\n')
				skip(lexer);
			else
				return (false);

			while (isspace(lexer->lookahead))
				skip(lexer);
		}

		if (lexer->lookahead == '\n' && !valid_symbols[NEWLINE])
		{
			skip(lexer);
			while (isspace(lexer->lookahead))
				skip(lexer);
		}

		if (lexer->lookahead == '-')
		{
			advance(lexer);

			bool advanced_once = false;
			while (isalpha(lexer->lookahead))
			{
				advanced_once = true;
				advance(lexer);
			}

			if (isspace(lexer->lookahead) && advanced_once)
			{
				lexer->mark_end(lexer);
				advance(lexer);
				if (lexer->lookahead == '}' && valid_symbols[CLOSING_BRACE])
				{
					if (valid_symbols[EXPANSION_WORD])
					{
						lexer->mark_end(lexer);
						lexer->result_symbol = EXPANSION_WORD;
						return (true);
					}
					return (false);
				}
				lexer->result_symbol = TEST_OPERATOR;
				return (true);
			}
			if (isspace(lexer->lookahead) && valid_symbols[EXTGLOB_PATTERN])
			{
				lexer->result_symbol = EXTGLOB_PATTERN;
				return (true);
			}
		}

		if (valid_symbols[BARE_DOLLAR] && !in_error_recovery(valid_symbols) &&
			scan_bare_dollar(lexer))
			return (true);
	}

	if ((valid_symbols[VARIABLE_NAME] || valid_symbols[FILE_DESCRIPTOR] ||
		 valid_symbols[HEREDOC_ARROW]) &&
		!valid_symbols[REGEX_NO_SLASH] && !in_error_recovery(valid_symbols))
	{
		while (true)
		{
			if ((lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
				 lexer->lookahead == '\r' ||
				 (lexer->lookahead == '\n' && !valid_symbols[NEWLINE])) &&
				!valid_symbols[EXPANSION_WORD])
				skip(lexer);
			else if (lexer->lookahead == '\\')
			{
				skip(lexer);

				if (lexer->eof(lexer))
				{
					lexer->mark_end(lexer);
					lexer->result_symbol = VARIABLE_NAME;
					return (true);
				}

				if (lexer->lookahead == '\r')

					skip(lexer);

				if (lexer->lookahead == '\n')

					skip(lexer);

				else
				{
					if (lexer->lookahead == '\\' &&
						valid_symbols[EXPANSION_WORD])

						return (
							expansion_word_scan(scanner, lexer, valid_symbols));

					return (false);
				}
			}
			else

				break;
		}

		// no '*', '@', '?', '-', '$', '0', '_'
		if (!valid_symbols[EXPANSION_WORD] &&
			(lexer->lookahead == '*' || lexer->lookahead == '@' ||
			 lexer->lookahead == '?' || lexer->lookahead == '-' ||
			 lexer->lookahead == '0' || lexer->lookahead == '_'))
		{
			lexer->mark_end(lexer);
			advance(lexer);
			if (lexer->lookahead == '=' || lexer->lookahead == '[' ||
				lexer->lookahead == ':' || lexer->lookahead == '-' ||
				lexer->lookahead == '%' || lexer->lookahead == '#' ||
				lexer->lookahead == '/')

				return (false);

			if (valid_symbols[EXTGLOB_PATTERN] && isspace(lexer->lookahead))
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = EXTGLOB_PATTERN;
				return (true);
			}
		}

		if (valid_symbols[HEREDOC_ARROW] && lexer->lookahead == '<')
		{
			advance(lexer);
			if (lexer->lookahead == '<')
			{
				advance(lexer);
				if (lexer->lookahead == '-')
				{
					advance(lexer);
					t_heredoc heredoc = heredoc_new();
					heredoc.allows_indent = true;
					array_push(&scanner->heredocs, heredoc);
					lexer->result_symbol = HEREDOC_ARROW_DASH;
				}
				else if (lexer->lookahead == '<' || lexer->lookahead == '=')
					return (false);
				else
				{
					t_heredoc heredoc = heredoc_new();
					array_push(&scanner->heredocs, heredoc);
					lexer->result_symbol = HEREDOC_ARROW;
				}
				return (true);
			}
			return (false);
		}

		bool is_number = true;
		if (isdigit(lexer->lookahead))
			advance(lexer);
		else if (isalpha(lexer->lookahead) || lexer->lookahead == '_')
		{
			is_number = false;
			advance(lexer);
		}
		else
		{
			if (lexer->lookahead == '{')
				return (brace_start_scan(scanner, lexer, valid_symbols));
			if (valid_symbols[EXPANSION_WORD])
				return (expansion_word_scan(scanner, lexer, valid_symbols));
			if (valid_symbols[EXTGLOB_PATTERN])
				return (extglob_pattern_scan(scanner, lexer, valid_symbols));
			return false;
		}

		while (true)
		{
			if (isdigit(lexer->lookahead))
				advance(lexer);
			else if (isalpha(lexer->lookahead) || lexer->lookahead == '_')
				(is_number = false, advance(lexer));
			else
				break;
		}

		if (is_number && valid_symbols[FILE_DESCRIPTOR] &&
			(lexer->lookahead == '>' || lexer->lookahead == '<'))
		{
			lexer->result_symbol = FILE_DESCRIPTOR;
			return (true);
		}

		if (valid_symbols[VARIABLE_NAME])
		{
			if (lexer->lookahead == '+')
			{
				lexer->mark_end(lexer);
				advance(lexer);
				if (lexer->lookahead == '=' || lexer->lookahead == ':' ||
					valid_symbols[CLOSING_BRACE])
				{
					lexer->result_symbol = VARIABLE_NAME;
					return (true);
				}
				return (false);
			}
			if (lexer->lookahead == '/')
			{
				return (false);
			}
			if (lexer->lookahead == '=' || lexer->lookahead == '[' ||
				(lexer->lookahead == ':' && !valid_symbols[CLOSING_BRACE] &&
				 !valid_symbols[OPENING_PAREN]) || // TODO(amaanq): more cases
												   // for regular word chars but
												   // not variable names for
												   // function words, only
												   // handling : for now? #235
				lexer->lookahead == '%' ||
				(lexer->lookahead == '#' && !is_number) ||
				lexer->lookahead == '@' ||
				(lexer->lookahead == '-' && valid_symbols[CLOSING_BRACE]))
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = VARIABLE_NAME;
				return (true);
			}

			if (lexer->lookahead == '?')
			{
				lexer->mark_end(lexer);
				advance(lexer);
				lexer->result_symbol = VARIABLE_NAME;
				return (isalpha(lexer->lookahead));
			}
		}

		return (false);
	}

	if (valid_symbols[BARE_DOLLAR] && !in_error_recovery(valid_symbols) &&
		scan_bare_dollar(lexer))
		return (true);
	return (false);
}

void *tree_sitter_bash_external_scanner_create()
{
	t_scanner *scanner = calloc(1, sizeof(t_scanner));
	array_init(&scanner->heredocs);
	return (scanner);
}

bool tree_sitter_bash_external_scanner_scan(void *payload, TSLexer *lexer,
											const bool *valid_symbols)
{
	t_scanner *scanner = (t_scanner *)payload;
	return (scan(scanner, lexer, valid_symbols));
}

unsigned tree_sitter_bash_external_scanner_serialize(void *payload, char *state)
{
	t_scanner *scanner = (t_scanner *)payload;
	return (serialize(scanner, state));
}

void tree_sitter_bash_external_scanner_deserialize(void		  *payload,
												   const char *state,
												   unsigned	   length)
{
	t_scanner *scanner = (t_scanner *)payload;
	deserialize(scanner, state, length);
}

void tree_sitter_bash_external_scanner_destroy(void *payload)
{
	t_scanner *scanner = (t_scanner *)payload;
	for (size_t i = 0; i < scanner->heredocs.size; i++)
	{
		t_heredoc *heredoc = array_get(&scanner->heredocs, i);
		array_delete(&heredoc->current_leading_word);
		array_delete(&heredoc->delimiter);
	}
	array_delete(&scanner->heredocs);
	free(scanner);
}
