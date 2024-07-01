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
	if (s->eof)
		return (lex_advance(232, lexer, s));
	if (lex_normal_map225(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(225, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(410, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s226(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(232, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(216, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(231, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s227(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(232, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(217, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(218, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s228(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(232, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(220, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(219, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s229(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(232, lexer, s));
	if (lex_normal_map229(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(229, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(459, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
