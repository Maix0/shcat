/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_46.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s230(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(235, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(221, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(222, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s231(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(235, lexer, s));
	if (s->lookahead == '\r')
		return (lex_skip(224, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(223, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s232(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(235, lexer, s));
	if (lex_normal_map232(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(232, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(468, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(380, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s233(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(235, lexer, s));
	if (lex_normal_map233(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(233, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(472, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(380, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != '{' && s->lookahead \
	!= '|'))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s234(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(235, lexer, s));
	if (lex_normal_map234(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(229, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(329, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == 'd')
		return (lex_advance(215, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(213, lexer, s));
	if (s->lookahead == 'f')
		return (lex_advance(211, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(214, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(255, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(261, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(234, lexer, s));
	return (lex_end_state(lexer, s));
}
