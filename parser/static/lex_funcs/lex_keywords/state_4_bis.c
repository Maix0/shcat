/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_0_bis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lex_keywords_funcs.h"

bool	lex_keywords_s22_bis(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\\')
		return (lex_skip(8, lexer, s));
	if (s->lookahead == 'c')
		return (lex_advance(10, lexer, s));
	if (s->lookahead == 'd')
		return (lex_advance(11, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(12, lexer, s));
	if (s->lookahead == 'f')
		return (lex_advance(13, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(14, lexer, s));
	if (s->lookahead == 'l')
		return (lex_advance(16, lexer, s));
	return (false);
}
