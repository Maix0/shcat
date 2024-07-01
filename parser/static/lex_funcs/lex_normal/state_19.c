/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_19.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s95(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(183, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s96(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(191, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s97(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map97(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(97, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(446, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s98(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map98(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(98, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(447, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')')))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s99(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map99(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(99, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(448, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(373, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(405, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*')))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
