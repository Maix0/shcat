/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s65(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(467, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(64, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(199, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s66(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(312, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(435, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(356, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(530, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(185, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(226, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(234, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(66, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s67(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(198, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s68(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(114, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s69(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(462, lexer, s));
	return (lex_end_state(lexer, s));
}
