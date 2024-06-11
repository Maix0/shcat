/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_45.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s225(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '>')
		return (lex_advance(299, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s226(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '`')
		return (lex_advance(391, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(226, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s227(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'a')
		return (lex_advance(228, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s228(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'c')
		return (lex_advance(267, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s229(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(265, lexer, s));
	return (lex_end_state(lexer, s));
}
