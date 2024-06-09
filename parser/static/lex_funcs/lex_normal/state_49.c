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
		return (lex_advance(251, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(235, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(250, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s246(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(251, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(236, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(237, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s247(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(251, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(239, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(238, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s248(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(251, lexer, s));
	if (lex_normal_map248(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(248, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(503, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s249(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(251, lexer, s));
	if (lex_normal_map249(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(249, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(507, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(404, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '{' && \
	s->lookahead != '|'))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}
