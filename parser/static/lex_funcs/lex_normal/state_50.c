/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_50.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s250(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(240, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(241, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s251(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(243, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(242, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s252(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (lex_normal_map252(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(252, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(499, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s253(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (lex_normal_map253(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(253, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(503, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '{' && \
	s->lookahead != '|'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s254(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (lex_normal_map254(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(249, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(355, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(430, lexer, s));
	if (s->lookahead == 'd')
		return (lex_advance(235, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(233, lexer, s));
	if (s->lookahead == 'f')
		return (lex_advance(231, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(234, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(275, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(281, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(254, lexer, s));
	return (lex_end_state(lexer, s));
}
