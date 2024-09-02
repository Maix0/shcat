/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_dollar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:26:00 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 13:26:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "parser/inner/scanner.h"

bool scan_bare_dollar(TSLexer *lexer)
{
	while (me_isspace(lexer->lookahead) && lexer->lookahead != '\n' && !lexer->eof(lexer))
		lexer->advance(lexer, true);
	if (lexer->lookahead == '$')
	{
		lexer->advance(lexer, false);
		lexer->result_symbol = BARE_DOLLAR;
		lexer->mark_end(lexer);
		return (me_isspace(lexer->lookahead) || lexer->eof(lexer) || lexer->lookahead == '\"');
	}
	return (false);
}
