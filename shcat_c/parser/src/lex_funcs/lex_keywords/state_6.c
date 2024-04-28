/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_6.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s30(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'r')
		return (lex_advance(47, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s31(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(48, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s32(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_if, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s33(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'c')
		return (lex_advance(49, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s34(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'a')
		return (lex_advance(50, lexer, s));
	return (lex_end_state(lexer, s));
}
