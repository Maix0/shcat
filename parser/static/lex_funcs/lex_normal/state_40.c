/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_40.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s200(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '+')
		return (lex_advance(388, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(378, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(380, lexer, s));
	if (s->lookahead == '?')
		return (lex_advance(384, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s201(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == ';')
		return (lex_advance(254, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s202(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '=')
		return (lex_advance(326, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s203(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '`')
		return (lex_advance(356, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(203, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s204(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'a')
		return (lex_advance(205, lexer, s));
	return (lex_end_state(lexer, s));
}
