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

bool	lex_keywords_s0_tris(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'A')
		return (lex_advance(1, lexer, s));
	if (s->lookahead == 'E')
		return (lex_advance(2, lexer, s));
	if (s->lookahead == 'K')
		return (lex_advance(3, lexer, s));
	if (s->lookahead == 'L')
		return (lex_advance(4, lexer, s));
	if (s->lookahead == 'P')
		return (lex_advance(5, lexer, s));
	if (s->lookahead == 'Q')
		return (lex_advance(6, lexer, s));
	return (false);
}

bool	lex_keywords_s0_bis(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_keywords_s0_tris(lexer, s))
		return (true);
	if (s->lookahead == 'U')
		return (lex_advance(7, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(8, lexer, s));
	if (s->lookahead == 'a')
		return (lex_advance(9, lexer, s));
	if (s->lookahead == 'c')
		return (lex_advance(10, lexer, s));
	if (s->lookahead == 'd')
		return (lex_advance(11, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(12, lexer, s));
	if (s->lookahead == 'f')
		return (lex_advance(13, lexer, s));
	return (false);
}
