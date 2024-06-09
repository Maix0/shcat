/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_20.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s100(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(203, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s101(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(462, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s102(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(462, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(101, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(121, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s103(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(120, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s104(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map104(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(104, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(486, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(404, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')')))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}
