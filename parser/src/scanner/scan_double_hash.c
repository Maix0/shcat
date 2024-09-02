/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_double_hash.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:32:35 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 17:42:43 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/scanner.h"

bool scan_double_hash(t_scanner *scanner, TSLexer *lexer, const bool *valid_symbols)
{
	(void)(scanner);
	if (valid_symbols[IMMEDIATE_DOUBLE_HASH] && !valid_symbols[ERROR_RECOVERY])
	{
		if (lexer->lookahead == '#')
		{
			lexer->mark_end(lexer);
			lexer->advance(lexer, false);
			if (lexer->lookahead == '#')
			{
				lexer->advance(lexer, false);
				if (lexer->lookahead != '}')
				{
					lexer->result_symbol = IMMEDIATE_DOUBLE_HASH;
					lexer->mark_end(lexer);
					return (true);
				}
			}
		}
	}
	return (false);
}
