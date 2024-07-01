/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_35.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s175(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map175(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(175, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(475, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(380, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && (s->lookahead > '{' && s->lookahead < '}')))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s176(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map176(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(176, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(476, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(380, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '{' && s->lookahead != '|'))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s177(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map177(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(140, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(329, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(206, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(255, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(261, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(177, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= '_' && s->lookahead <= 'z')))
		return (lex_advance(418, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s178(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map178(lexer, s))
		return (true);
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(178, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(373, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(418, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '_' && \
	s->lookahead < 'z')))
		return (lex_advance(376, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s179(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map179(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(151, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(256, lexer, s));
	if (s->lookahead == '~')
		return (lex_advance(361, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(179, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(382, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= '_' && s->lookahead <= 'z')))
		return (lex_advance(418, lexer, s));
	return (lex_end_state(lexer, s));
}
