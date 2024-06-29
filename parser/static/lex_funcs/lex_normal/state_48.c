/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_48.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s240(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (s->lookahead == '\n')
		return (lex_skip(241, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s241(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (s->lookahead == '\n')
		return (lex_advance(312, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(435, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(359, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(277, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(530, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(292, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(295, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(250, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(431, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(236, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(276, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(241, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s242(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (s->lookahead == '\n')
		return (lex_advance(312, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(435, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(359, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(277, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(530, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(292, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(295, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(251, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(430, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(276, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(242, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s243(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (s->lookahead == '\n')
		return (lex_skip(242, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s244(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (lex_normal_map244(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(244, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(481, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(408, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(440, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*')))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}
