/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_108.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s540(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(547, lexer, s));
	if (lex_normal_map540(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(540, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(805, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s541(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(547, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(523, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(521, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s542(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(547, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(524, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(519, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s543(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(547, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(525, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(522, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s544(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(547, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(526, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(520, lexer, s));
	return (lex_end_state(lexer, s));
}
