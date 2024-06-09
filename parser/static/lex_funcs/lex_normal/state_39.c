/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_39.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s195(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map195(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(162, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(432, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(272, lexer, s));
	if (s->lookahead == '~')
		return (lex_advance(384, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(195, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= '_' && s->lookahead <= 'z')))
		return (lex_advance(449, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s196(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map196(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(196, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(449, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s197(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map197(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(197, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(449, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s198(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map198(lexer, s))
		return (true);
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(198, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(397, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(449, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > ' ' && \
	s->lookahead < '$') && (s->lookahead > '_' && s->lookahead \
	< 'z')))
		return (lex_advance(399, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s199(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map199(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(177, lexer, s));
	if (s->lookahead == '_')
		return (lex_advance(482, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(277, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(199, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(449, lexer, s));
	return (lex_end_state(lexer, s));
}
