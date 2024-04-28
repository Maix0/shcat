/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_98.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s490(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '&')
		return (lex_advance(664, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(663, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s491(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\'')
		return (lex_advance(800, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(491, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s492(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\'')
		return (lex_advance(801, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(493, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(492, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s493(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\'')
		return (lex_advance(802, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(493, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(492, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s494(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '(')
		return (lex_advance(551, lexer, s));
	return (lex_end_state(lexer, s));
}
