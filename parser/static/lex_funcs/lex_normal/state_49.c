/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_49.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s245(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (lex_normal_map245(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(245, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(482, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s246(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (lex_normal_map246(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(246, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(445, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s247(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (lex_normal_map247(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(247, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(489, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s248(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (lex_normal_map248(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(248, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(491, lexer, s));
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

bool	lex_normal_s249(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(239, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(254, lexer, s));
	return (lex_end_state(lexer, s));
}
