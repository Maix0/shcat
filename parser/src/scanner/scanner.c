/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:41:11 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/14 11:38:03 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/scanner_inner.h"

bool	in_error_recovery(const bool *valid_symbols)
{
	return (valid_symbols[ERROR_RECOVERY]);
}

void	reset(t_scanner *scanner)
{
	t_u32	i;

	i = 0;
	while (i < scanner->heredocs.len)
		reset_heredoc(vec_heredoc_get(&scanner->heredocs, i++));
}

t_u32	serialize(t_scanner *scanner, t_u8 *buffer)
{
	t_u32		size;
	t_usize		delimiter_size;
	t_usize		i;
	t_heredoc	*heredoc;

	i = 0;
	size = 0;
	buffer[size++] = (char)scanner->last_glob_paren_depth;
	buffer[size++] = (char)scanner->ext_was_in_double_quote;
	buffer[size++] = (char)scanner->ext_saw_outside_quote;
	buffer[size++] = (char)scanner->heredocs.len;
	while (i < scanner->heredocs.len)
	{
		heredoc = vec_heredoc_get(&scanner->heredocs, i);
		if (heredoc->delimiter.len + 3
			+ size >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE)
			return (0);
		buffer[size++] = (char)heredoc->is_raw;
		buffer[size++] = (char)heredoc->started;
		buffer[size++] = (char)heredoc->allows_indent;
		delimiter_size = heredoc->delimiter.len;
		mem_copy(&buffer[size], &delimiter_size, sizeof(t_usize));
		size += sizeof(t_usize);
		if (heredoc->delimiter.len > 0)
		{
			mem_copy(&buffer[size], heredoc->delimiter.buf,
				heredoc->delimiter.len);
			size += heredoc->delimiter.len;
		}
		i++;
	}
	return (size);
}

void	deserialize(t_scanner *scanner, const t_u8 *buffer, t_u32 length)
{
	t_u32		size;
	t_u32		heredoc_count;
	t_usize		i;
	t_usize		delimiter_size;
	t_heredoc	*heredoc;
	t_heredoc	new_heredoc;

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
			if (i < scanner->heredocs.len)
				heredoc = vec_heredoc_get(&scanner->heredocs, i);
			else
			{
				new_heredoc = heredoc_new();
				vec_heredoc_push(&scanner->heredocs, new_heredoc);
				heredoc = vec_heredoc_last(&scanner->heredocs);
			}
			heredoc->is_raw = buffer[size++];
			heredoc->started = buffer[size++];
			heredoc->allows_indent = buffer[size++];
			mem_copy(&delimiter_size, &buffer[size], sizeof(t_usize));
			size += sizeof(t_usize);
			heredoc->delimiter.len = delimiter_size;
			string_reserve(&heredoc->delimiter, heredoc->delimiter.len);
			if (heredoc->delimiter.len > 0)
			{
				mem_copy(heredoc->delimiter.buf, &buffer[size],
					heredoc->delimiter.len);
				size += heredoc->delimiter.len;
			}
			i++;
		}
		if (!(size == length))
			me_abort("assertion failed: size == length");
	}
}

/**
 * Consume a "word" in POSIX parlance, and returns it unquoted.
 *
 * This is an approximate implementation that doesn't deal with any
 * POSIX-mandated substitution, and assumes the default value for
 * IFS.
 */
bool	advance_word(t_lexer *lexer, t_string *unquoted_word)
{
	bool	empty;
	t_i32	quote;

	empty = true;
	quote = 0;
	if (lexer->data.lookahead == '\'' || lexer->data.lookahead == '"')
	{
		quote = lexer->data.lookahead;
		lexer->data.advance((void *)lexer, false);
	}
	while (lexer->data.lookahead && !((quote && (lexer->data.lookahead == quote
					|| lexer->data.lookahead == '\r'
					|| lexer->data.lookahead == '\n')) || (!quote
				&& me_isspace(lexer->data.lookahead))))
	{
		if (lexer->data.lookahead == '\\')
		{
			lexer->data.advance((void *)lexer, false);
			if (!lexer->data.lookahead)
				return (false);
		}
		empty = false;
		string_push_char(unquoted_word, lexer->data.lookahead);
		lexer->data.advance((void *)lexer, false);
	}
	string_push_char(unquoted_word, '\0');
	if (quote && lexer->data.lookahead == quote)
		lexer->data.advance((void *)lexer, false);
	return (!empty);
}

bool	scan_bare_dollar(t_lexer *lexer)
{
	while (me_isspace(lexer->data.lookahead) && lexer->data.lookahead != '\n'
		&& !lexer->data.eof((void *)lexer))
		lexer->data.advance((void *)lexer, true);
	if (lexer->data.lookahead == '$')
	{
		lexer->data.advance((void *)lexer, false);
		lexer->data.result_symbol = BARE_DOLLAR;
		lexer->data.mark_end((void *)lexer);
		return (me_isspace(lexer->data.lookahead)
			|| lexer->data.eof((void *)lexer) || lexer->data.lookahead == '\"');
	}
	return (false);
}

bool	scan_heredoc_start(t_heredoc *heredoc, t_lexer *lexer)
{
	bool	found_delimiter;

	found_delimiter = advance_word(lexer, &heredoc->delimiter);
	while (me_isspace(lexer->data.lookahead))
	{
		lexer->data.advance((void *)lexer, true);
	}
	lexer->data.result_symbol = HEREDOC_START;
	heredoc->is_raw = lexer->data.lookahead == '\''
		|| lexer->data.lookahead == '"' || lexer->data.lookahead == '\\';
	if (!found_delimiter)
	{
		string_clear(&heredoc->delimiter);
		return (false);
	}
	return (found_delimiter);
}

// Scan the first 'n' characters on this line, to see if they match the
// heredoc delimiter
bool	scan_heredoc_end_identifier(t_heredoc *heredoc, t_lexer *lexer)
{
	t_i32	size;

	size = 0;
	string_clear(&heredoc->current_leading_word);
	if (heredoc->delimiter.len > 0)
	{
		while (lexer->data.lookahead != '\0' && lexer->data.lookahead != '\n'
			&& (t_i32)
			* (&heredoc->delimiter.buf[size]) == lexer->data.lookahead
			&& heredoc->current_leading_word.len < heredoc->delimiter.len)
		{
			string_push_char(&heredoc->current_leading_word,
				lexer->data.lookahead);
			lexer->data.advance((void *)lexer, false);
			size++;
		}
	}
	string_push_char(&heredoc->current_leading_word, '\0');
	if (heredoc->delimiter.len == 0)
		return (false);
	return (str_compare(heredoc->current_leading_word.buf,
			heredoc->delimiter.buf));
}

bool	scan_heredoc_content(t_scanner *scanner, t_lexer *lexer,
		enum e_token_type middle_type, enum e_token_type end_type)
{
	bool		did_advance;
	t_heredoc	*heredoc;

	did_advance = false;
	heredoc = vec_heredoc_last(&scanner->heredocs);
	while (true)
	{
		if (lexer->data.lookahead == '\0')
		{
			if (lexer->data.eof((void *)lexer) && did_advance)
			{
				reset_heredoc(heredoc);
				lexer->data.result_symbol = end_type;
				return (true);
			}
			return (false);
		}
		else if (lexer->data.lookahead == '\\')
		{
			did_advance = true;
			lexer->data.advance((void *)lexer, false);
			lexer->data.advance((void *)lexer, false);
		}
		else if (lexer->data.lookahead == '$')
		{
			if (heredoc->is_raw)
			{
				did_advance = true;
				lexer->data.advance((void *)lexer, false);
			}
			if (did_advance)
			{
				lexer->data.mark_end((void *)lexer);
				lexer->data.result_symbol = middle_type;
				heredoc->started = true;
				lexer->data.advance((void *)lexer, false);
				if (me_isalpha(lexer->data.lookahead)
					|| lexer->data.lookahead == '{'
					|| lexer->data.lookahead == '(')
					return (true);
			}
			if (middle_type == HEREDOC_BODY_BEGINNING
				&& lexer->data.get_column((void *)lexer) == 0)
			{
				lexer->data.result_symbol = middle_type;
				heredoc->started = true;
				return (true);
			}
			return (false);
		}
		else if (lexer->data.lookahead == '\n')
		{
			if (!did_advance)
				lexer->data.advance((void *)lexer, true);
			else
				lexer->data.advance((void *)lexer, false);
			did_advance = true;
			if (heredoc->allows_indent)
			{
				while (me_isspace(lexer->data.lookahead))
					lexer->data.advance((void *)lexer, false);
			}
			lexer->data.result_symbol = end_type;
			if (heredoc->started)
				lexer->data.result_symbol = middle_type;
			lexer->data.mark_end((void *)lexer);
			if (scan_heredoc_end_identifier(heredoc, lexer))
			{
				if (lexer->data.result_symbol == HEREDOC_END)
					vec_heredoc_pop(&scanner->heredocs, NULL);
				return (true);
			}
		}
		else
		{
			if (lexer->data.get_column((void *)lexer) == 0)
			{
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
						return (true);
				}
				if (end_type == SIMPLE_HEREDOC_BODY)
				{
					lexer->data.result_symbol = end_type;
					lexer->data.mark_end((void *)lexer);
					if (scan_heredoc_end_identifier(heredoc, lexer))
						return (true);
				}
			}
			did_advance = true;
			lexer->data.advance((void *)lexer, false);
		}
	}
}

bool	scan_concat(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols)
{
	(void)(scanner);
	(void)(lexer);
	(void)(valid_symbols);
	lexer->data.result_symbol = CONCAT;
	if (lexer->data.lookahead == '\\')
	{
		lexer->data.mark_end((void *)lexer);
		lexer->data.advance((void *)lexer, false);
		if (lexer->data.lookahead == '"' || lexer->data.lookahead == '\''
			|| lexer->data.lookahead == '\\')
			return (true);
		if (lexer->data.eof((void *)lexer))
			return (false);
	}
	return (true);
}

bool	scan_double_hash(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols)
{
	(void)(scanner);
	(void)(lexer);
	(void)(valid_symbols);
	if (valid_symbols[IMMEDIATE_DOUBLE_HASH]
		&& !(valid_symbols[ERROR_RECOVERY]))
	{
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
	}
	return (false);
}

bool	scan_heredoc_end(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols)
{
	t_heredoc	*heredoc;

	if (valid_symbols[HEREDOC_END] && scanner->heredocs.len > 0)
	{
		heredoc = vec_heredoc_last(&scanner->heredocs);
		if (scan_heredoc_end_identifier(heredoc, lexer))
		{
			string_free(heredoc->current_leading_word);
			string_free(heredoc->delimiter);
			vec_heredoc_pop(&scanner->heredocs, NULL);
			lexer->data.result_symbol = HEREDOC_END;
			return (true);
		}
	}
	return (false);
}

bool	scan_advance_words(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols)
{
	bool	advanced_once;
	bool	advance_once_space;

	advanced_once = false;
	advance_once_space = false;
	(void)(scanner);
	(void)(lexer);
	(void)(valid_symbols);
	while (true)
	{
		if (lexer->data.lookahead == '\"')
			return (false);
		if (lexer->data.lookahead == '$')
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.advance((void *)lexer, false);
			if (lexer->data.lookahead == '{' || lexer->data.lookahead == '('
				|| lexer->data.lookahead == '\''
				|| me_isalnum(lexer->data.lookahead))
			{
				lexer->data.result_symbol = EXPANSION_WORD;
				return (advanced_once);
			}
			advanced_once = true;
		}
		if (lexer->data.lookahead == '}')
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.result_symbol = EXPANSION_WORD;
			return (advanced_once || advance_once_space);
		}
		if (lexer->data.lookahead == '(' && !(advanced_once
				|| advance_once_space))
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.advance((void *)lexer, false);
			while (lexer->data.lookahead != ')'
				&& !lexer->data.eof((void *)lexer))
			{
				if (lexer->data.lookahead == '$')
				{
					lexer->data.mark_end((void *)lexer);
					lexer->data.advance((void *)lexer, false);
					if (lexer->data.lookahead == '{'
						|| lexer->data.lookahead == '('
						|| lexer->data.lookahead == '\''
						|| me_isalnum(lexer->data.lookahead))
						return (lexer->data.result_symbol = EXPANSION_WORD,
							advanced_once);
					advanced_once = true;
				}
				else
				{
					advanced_once = advanced_once
						|| !me_isspace(lexer->data.lookahead);
					advance_once_space = advance_once_space
						|| me_isspace(lexer->data.lookahead);
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
					return (false);
			}
			else
				return (false);
		}
		if (lexer->data.lookahead == '\'')
			return (false);
		if (lexer->data.eof((void *)lexer))
			return (false);
		advanced_once = advanced_once || !me_isspace(lexer->data.lookahead);
		advance_once_space = advance_once_space
			|| me_isspace(lexer->data.lookahead);
		lexer->data.advance((void *)lexer, false);
	}
	return (false);
}

bool	scan_literals(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols)
{
	bool	is_number;

	while (true)
	{
		if ((lexer->data.lookahead == ' ' || lexer->data.lookahead == '\t'
				|| lexer->data.lookahead == '\r'
				|| (lexer->data.lookahead == '\n' && !valid_symbols[NEWLINE]))
			&& !valid_symbols[EXPANSION_WORD])
			lexer->data.advance((void *)lexer, true);
		else if (lexer->data.lookahead == '\\')
		{
			lexer->data.advance((void *)lexer, true);
			if (lexer->data.eof((void *)lexer))
			{
				lexer->data.mark_end((void *)lexer);
				lexer->data.result_symbol = VARIABLE_NAME;
				return (true);
			}
			if (lexer->data.lookahead == '\r')
				lexer->data.advance((void *)lexer, true);
			if (lexer->data.lookahead == '\n')
				lexer->data.advance((void *)lexer, true);
			else
			{
				if (lexer->data.lookahead == '\\'
					&& valid_symbols[EXPANSION_WORD])
					return (scan_advance_words(scanner, lexer, valid_symbols));
				return (false);
			}
		}
		else
			break ;
	}
	if (!valid_symbols[EXPANSION_WORD] && (lexer->data.lookahead == '*'
			|| lexer->data.lookahead == '@' || lexer->data.lookahead == '?'
			|| lexer->data.lookahead == '-' || lexer->data.lookahead == '0'
			|| lexer->data.lookahead == '_'))
	{
		lexer->data.mark_end((void *)lexer);
		lexer->data.advance((void *)lexer, false);
		if (lexer->data.lookahead == '=' || lexer->data.lookahead == '['
			|| lexer->data.lookahead == ':' || lexer->data.lookahead == '-'
			|| lexer->data.lookahead == '%' || lexer->data.lookahead == '#'
			|| lexer->data.lookahead == '/')
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
			vec_heredoc_push(&scanner->heredocs, heredoc_new());
			lexer->data.result_symbol = HEREDOC_ARROW;
			return (true);
		}
		return (false);
	}
	is_number = true;
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
			return (scan_advance_words(scanner, lexer, valid_symbols));
		return (false);
	}
	while (true)
	{
		if (me_isdigit(lexer->data.lookahead))
			lexer->data.advance((void *)lexer, false);
		else if (me_isalpha(lexer->data.lookahead)
			|| lexer->data.lookahead == '_')
		{
			is_number = false;
			lexer->data.advance((void *)lexer, false);
		}
		else
			break ;
	}
	if (is_number && valid_symbols[FILE_DESCRIPTOR]
		&& (lexer->data.lookahead == '>' || lexer->data.lookahead == '<'))
		return (lexer->data.result_symbol = FILE_DESCRIPTOR, true);
	if (valid_symbols[VARIABLE_NAME])
	{
		if (lexer->data.lookahead == '+')
		{
			lexer->data.mark_end((void *)lexer);
			lexer->data.advance((void *)lexer, false);
			if (lexer->data.lookahead == '=' || lexer->data.lookahead == ':')
				return (lexer->data.result_symbol = VARIABLE_NAME, true);
			return (false);
		}
		if (lexer->data.lookahead == '/')
			return (false);
		if (lexer->data.lookahead == '=' || lexer->data.lookahead == '['
			|| (lexer->data.lookahead == ':' && !valid_symbols[OPENING_PAREN])
			|| lexer->data.lookahead == '%' || (lexer->data.lookahead == '#'
				&& !is_number) || lexer->data.lookahead == '@'
			|| (lexer->data.lookahead == '-'))
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

bool	scan(t_scanner *scanner, t_lexer *lexer, const bool *valid_symbols)
{
	if (valid_symbols[CONCAT] && !(valid_symbols[ERROR_RECOVERY])
		&& (!(lexer->data.lookahead == 0 || me_isspace(lexer->data.lookahead)
				|| lexer->data.lookahead == '>' || lexer->data.lookahead == '<'
				|| lexer->data.lookahead == ')' || lexer->data.lookahead == '('
				|| lexer->data.lookahead == ';' || lexer->data.lookahead == '&'
				|| lexer->data.lookahead == '|' || lexer->data.lookahead == '{'
				|| lexer->data.lookahead == '}')))
		return (scan_concat(scanner, lexer, valid_symbols));
	if (scan_double_hash(scanner, lexer, valid_symbols))
		return (true);
	if (valid_symbols[EMPTY_VALUE] && (me_isspace(lexer->data.lookahead)
			|| lexer->data.eof((void *)lexer) || lexer->data.lookahead == ';'
			|| lexer->data.lookahead == '&'))
		return (lexer->data.result_symbol = EMPTY_VALUE, true);
	if ((valid_symbols[HEREDOC_BODY_BEGINNING]
			|| valid_symbols[SIMPLE_HEREDOC_BODY]) && scanner->heredocs.len > 0
		&& !vec_heredoc_last(&scanner->heredocs)->started
		&& !(valid_symbols[ERROR_RECOVERY]))
		return (scan_heredoc_content(scanner, lexer, HEREDOC_BODY_BEGINNING,
				SIMPLE_HEREDOC_BODY));
	if (scan_heredoc_end(scanner, lexer, valid_symbols))
		return (true);
	if (valid_symbols[HEREDOC_CONTENT] && scanner->heredocs.len > 0
		&& vec_heredoc_last(&scanner->heredocs)->started
		&& !(valid_symbols[ERROR_RECOVERY]))
		return (scan_heredoc_content(scanner, lexer, HEREDOC_CONTENT,
				HEREDOC_END));
	if (valid_symbols[HEREDOC_START] && !(valid_symbols[ERROR_RECOVERY])
		&& scanner->heredocs.len > 0)
		return (scan_heredoc_start(vec_heredoc_last(&scanner->heredocs),
				lexer));
	if ((valid_symbols[VARIABLE_NAME] || valid_symbols[FILE_DESCRIPTOR]
			|| valid_symbols[HEREDOC_ARROW])
		&& !(valid_symbols[ERROR_RECOVERY]))
		return (scan_literals(scanner, lexer, valid_symbols));
	if (valid_symbols[BARE_DOLLAR] && !(valid_symbols[ERROR_RECOVERY])
		&& scan_bare_dollar(lexer))
		return (true);
	if (valid_symbols[EXPANSION_WORD])
		return (scan_advance_words(scanner, lexer, valid_symbols));
	return (false);
}

void	*tree_sitter_sh_external_scanner_create(void)
{
	t_scanner	*scanner;

	scanner = mem_alloc(sizeof(*scanner));
	scanner->heredocs = vec_heredoc_new(0, heredoc_free);
	return (scanner);
}

bool	tree_sitter_sh_external_scanner_scan(void *payload, t_lexer *lexer,
		const bool *valid_symbols)
{
	t_scanner	*scanner;

	scanner = (t_scanner *)payload;
	return (scan(scanner, lexer, valid_symbols));
}

t_u32	tree_sitter_sh_external_scanner_serialize(void *payload, t_u8 *state)
{
	t_scanner	*scanner;

	scanner = (t_scanner *)payload;
	return (serialize(scanner, state));
}

void	tree_sitter_sh_external_scanner_deserialize(void *payload,
		const t_u8 *state, t_u32 length)
{
	t_scanner	*scanner;

	scanner = (t_scanner *)payload;
	deserialize(scanner, state, length);
}

void	tree_sitter_sh_external_scanner_destroy(void *payload)
{
	t_scanner	*scanner;

	scanner = (t_scanner *)payload;
	vec_heredoc_free(scanner->heredocs);
	mem_free(scanner);
}
