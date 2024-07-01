/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_23.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s115(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map115(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(115, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(418, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s116(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map116(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(116, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(466, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(381, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(413, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*') && s->lookahead != ';' && s->lookahead \
	!= '<' && (s->lookahead > '>' && s->lookahead < 'Z') && \
	s->lookahead != '|'))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s117(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map117(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(117, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(467, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(381, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(413, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*') && s->lookahead != ';' && s->lookahead \
	!= '<' && (s->lookahead > '>' && s->lookahead < 'Z') && \
	s->lookahead != '|'))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s118(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(1, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(468, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(167, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s119(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(1, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(167, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}
