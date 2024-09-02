/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_varname.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:26:05 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 18:01:41 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "parser/inner/scanner.h"

bool	scan_varname(t_scanner *scanner, TSLexer *lexer,
		const bool *valid_symbols)
{
	t_heredoc	heredoc;
	bool		is_number;

	while (true)
	{
		if ((lexer->lookahead == ' ' || lexer->lookahead == '\t'
				|| lexer->lookahead == '\r' || (lexer->lookahead == '\n'
					&& !valid_symbols[NEWLINE]))
			&& !valid_symbols[EXPANSION_WORD])
			lexer->advance(lexer, true);
		else if (lexer->lookahead == '\\')
		{
			lexer->advance(lexer, true);
			if (lexer->eof(lexer))
			{
				lexer->mark_end(lexer);
				lexer->result_symbol = VARIABLE_NAME;
				return (true);
			}
			if (lexer->lookahead == '\r')
				lexer->advance(lexer, true);
			if (lexer->lookahead == '\n')
				lexer->advance(lexer, true);
			else
			{
				if (lexer->lookahead == '\\' && valid_symbols[EXPANSION_WORD])
					return (scan_expansion_word(scanner, lexer, valid_symbols));
				return (false);
			}
		}
		else
			break ;
	}
	if (!valid_symbols[EXPANSION_WORD] && (lexer->lookahead == '*'
			|| lexer->lookahead == '@' || lexer->lookahead == '?'
			|| lexer->lookahead == '-' || lexer->lookahead == '0'
			|| lexer->lookahead == '_'))
	{
		lexer->mark_end(lexer);
		lexer->advance(lexer, false);
		if (lexer->lookahead == '=' || lexer->lookahead == '['
			|| lexer->lookahead == ':' || lexer->lookahead == '-'
			|| lexer->lookahead == '%' || lexer->lookahead == '#'
			|| lexer->lookahead == '/')
			return (false);
		if (valid_symbols[EXTGLOB_PATTERN] && me_isspace(lexer->lookahead))
		{
			lexer->mark_end(lexer);
			lexer->result_symbol = EXTGLOB_PATTERN;
			return (true);
		}
	}
	if (valid_symbols[HEREDOC_ARROW] && lexer->lookahead == '<')
	{
		lexer->advance(lexer, false);
		if (lexer->lookahead == '<')
		{
			lexer->advance(lexer, false);
			heredoc = heredoc_new();
			vec_heredoc_push(&scanner->heredocs, heredoc);
			lexer->result_symbol = HEREDOC_ARROW;
			return (true);
		}
		return (false);
	}
	is_number = true;
	if (me_isdigit(lexer->lookahead))
		lexer->advance(lexer, false);
	else if (me_isalpha(lexer->lookahead) || lexer->lookahead == '_')
	{
		is_number = false;
		lexer->advance(lexer, false);
	}
	else
	{
		if (lexer->lookahead == '{')
			return (false);
		if (valid_symbols[EXPANSION_WORD])
			return (scan_expansion_word(scanner, lexer, valid_symbols));
		return (false);
	}
	while (true)
	{
		if (me_isdigit(lexer->lookahead))
			lexer->advance(lexer, false);
		else if (me_isalpha(lexer->lookahead) || lexer->lookahead == '_')
			is_number = (lexer->advance(lexer, false), false);
		else
			break ;
	}
	if (is_number && valid_symbols[FILE_DESCRIPTOR] && (lexer->lookahead == '>'
			|| lexer->lookahead == '<'))
		return (lexer->result_symbol = FILE_DESCRIPTOR, true);
	if (valid_symbols[VARIABLE_NAME])
	{
		if (lexer->lookahead == '+')
		{
			lexer->mark_end(lexer);
			lexer->advance(lexer, false);
			if (lexer->lookahead == '=' || lexer->lookahead == ':')
				return (lexer->result_symbol = VARIABLE_NAME, true);
			return (false);
		}
		if (lexer->lookahead == '/')
			return (false);
		if (lexer->lookahead == '=' || lexer->lookahead == '['
			|| (lexer->lookahead == ':' && !valid_symbols[OPENING_PAREN])
			|| lexer->lookahead == '%' || (lexer->lookahead == '#'
				&& !is_number) || lexer->lookahead == '@'
			|| (lexer->lookahead == '-'))
			return (lexer->mark_end(lexer),
				lexer->result_symbol = VARIABLE_NAME, true);
		if (lexer->lookahead == '?')
		{
			lexer->mark_end(lexer);
			lexer->advance(lexer, false);
			lexer->result_symbol = VARIABLE_NAME;
			return (me_isalpha(lexer->lookahead));
		}
	}
	return (false);
}
