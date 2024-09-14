/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:09:30 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/14 16:19:47 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/scanner_inner.h"

bool	in_error_recovery(const bool *valid_symbols);
void	reset(t_scanner *scanner);
bool	advance_word(t_lexer *lexer, t_string *unquoted_word);
t_u32	serialize(t_scanner *scanner, t_u8 *buffer);
void	deserialize(t_scanner *scanner, const t_u8 *buffer, t_u32 length);
bool	scan_bare_dollar(t_lexer *lexer);
bool	scan_heredoc_start(t_heredoc *heredoc, t_lexer *lexer);
bool	scan_heredoc_end_identifier(t_heredoc *heredoc, t_lexer *lexer);
bool	scan_heredoc_content(t_scanner *scanner, t_lexer *lexer,
		enum e_token_type middle_type, enum e_token_type end_type);
bool	scan_double_hash(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan_concat(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan_heredoc_end(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan_advance_words(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan_literals(t_scanner *scanner, t_lexer *lexer,
		const bool *valid_symbols);
bool	scan(t_scanner *scanner, t_lexer *lexer, const bool *valid_symbols);
void	*tree_sitter_sh_external_scanner_create(void);
bool	tree_sitter_sh_external_scanner_scan(void *payload, t_lexer *lexer,
		const bool *valid_symbols);
t_u32	tree_sitter_sh_external_scanner_serialize(void *payload, t_u8 *state);
void	tree_sitter_sh_external_scanner_deserialize(void *payload,
		const t_u8 *state, t_u32 length);
void	tree_sitter_sh_external_scanner_destroy(void *payload);

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
