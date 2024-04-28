/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_102.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s510(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '`')
		return (lex_advance(779, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(510, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s511(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'a')
		return (lex_advance(512, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s512(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'c')
		return (lex_advance(657, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s513(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(548, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s514(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 's')
		return (lex_advance(511, lexer, s));
	return (lex_end_state(lexer, s));
}
