/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_concat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:37:05 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 18:03:17 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "parser/inner/scanner.h"

bool	scan_concat(\
	t_scanner *scanner, TSLexer *lexer, const bool *valid_symbols)
{
	((void)(scanner), (void)(valid_symbols));
	lexer->result_symbol = CONCAT;
	if (lexer->lookahead == '`')
	{
		lexer->mark_end(lexer);
		lexer->advance(lexer, false);
		while (lexer->lookahead != '`' && !lexer->eof(lexer))
			lexer->advance(lexer, false);
		if (lexer->eof(lexer))
			return (false);
		if (lexer->lookahead == '`')
			lexer->advance(lexer, false);
		return (me_isspace(lexer->lookahead) || lexer->eof(lexer));
	}
	if (lexer->lookahead == '\\')
	{
		lexer->mark_end(lexer);
		lexer->advance(lexer, false);
		if (lexer->lookahead == '"' || lexer->lookahead == '\'' \
			|| lexer->lookahead == '\\')
			return (true);
		if (lexer->eof(lexer))
			return (false);
	}
	return (true);
}

bool	check_scan_concat(\
	t_scanner *scanner, TSLexer *lexer, const bool *valid_symbols)
{
	(void)(scanner);
	return ((valid_symbols[CONCAT] && !valid_symbols[ERROR_RECOVERY]) \
	&& (!(lexer->lookahead == 0 || me_isspace(lexer->lookahead) \
	|| lexer->lookahead == '>' || lexer->lookahead == '<' \
	|| lexer->lookahead == ')' || lexer->lookahead == '(' \
	|| lexer->lookahead == ';' || lexer->lookahead == '&' \
	|| lexer->lookahead == '|' || lexer->lookahead == '{' \
	|| lexer->lookahead == '}')));
}
