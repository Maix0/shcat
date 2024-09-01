/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:33:04 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/01 20:02:49 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_heredoc.h"
#include "parser/inner/heredoc.h"
#include "parser/inner/scanner.h"
#include "parser/parser.h"

bool	scan_heredoc_start(t_heredoc *heredoc, TSLexer *lexer)
{
	bool	found_delimiter;

	while (me_isspace(lexer->lookahead))
		lexer->advance(lexer, true);
	lexer->result_symbol = HEREDOC_START;
	heredoc->is_raw = lexer->lookahead == '\'' || lexer->lookahead == '"'
		|| lexer->lookahead == '\\';
	found_delimiter = advance_word(lexer, &heredoc->delimiter);
	if (!found_delimiter)
		return (string_clear(&heredoc->delimiter), false);
	return (found_delimiter);
}

bool	scan_heredoc_end_identifier(t_heredoc *heredoc, TSLexer *lexer)
{
	t_i32	size;

	size = 0;
	string_clear(&heredoc->current_leading_word);
	if (heredoc->delimiter.len > 0)
	{
		while (lexer->lookahead != '\0' && lexer->lookahead != '\n'
			&& (t_i32)heredoc->delimiter.buf[size] == lexer->lookahead
			&& heredoc->current_leading_word.len < heredoc->delimiter.len)
		{
			string_push_char(&heredoc->current_leading_word, lexer->lookahead);
			lexer->advance(lexer, false);
			size++;
		}
	}
	if (heredoc->delimiter.len == 0)
		return (false);
	return (str_compare(heredoc->current_leading_word.buf,
			heredoc->delimiter.buf));
}

bool	scan_heredoc_content_nullbyte(struct s_heredoc_scan_state *state);
bool	scan_heredoc_content_backslash(struct s_heredoc_scan_state *state);
bool	scan_heredoc_content_dollar(struct s_heredoc_scan_state *state);
bool	scan_heredoc_content_newline(struct s_heredoc_scan_state *state);
bool	scan_heredoc_content_other(struct s_heredoc_scan_state *state);

bool	scan_heredoc_content(t_scanner *scanner, TSLexer *lexer,
		enum e_token_type middle_type, enum e_token_type end_type)
{
	struct s_heredoc_scan_state	state;
	t_heredoc_content_func		func;

	state = (struct s_heredoc_scan_state){.did_advance = false, \
	.lexer = lexer, .heredoc = vec_heredoc_last(&scanner->heredocs), \
	.scanner = scanner, .middle_type = middle_type, .end_type = end_type, \
	.return_value = false};
	while (true)
	{
		if (lexer->lookahead == '\0')
			func = scan_heredoc_content_nullbyte;
		else if (lexer->lookahead == '\\')
			func = scan_heredoc_content_backslash;
		else if (lexer->lookahead == '$')
			func = scan_heredoc_content_dollar;
		else if (lexer->lookahead == '\n')
			func = scan_heredoc_content_newline;
		else
			func = scan_heredoc_content_other;
		if (func(&state))
			return (state.return_value);
	}
	return (false);
}
