/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_36.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s180(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map180(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(159, lexer, s));
	if (s->lookahead == '_')
		return (lex_advance(442, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(256, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(180, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(410, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s181(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map181(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(181, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(410, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s182(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map182(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(182, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(470, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<'))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s183(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map183(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(183, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(471, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<'))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s184(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map184(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(184, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(469, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '{' && s->lookahead != '|'))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
