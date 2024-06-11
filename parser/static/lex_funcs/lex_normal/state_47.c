/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_47.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s235(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'o')
		return (lex_advance(259, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s236(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 's')
		return (lex_advance(227, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s237(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '|')
		return (lex_advance(284, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s238(t_lexer *lexer, t_lexer_state *s)
{
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r')))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s239(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(255, lexer, s));
	if (lex_normal_map239(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(239, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(480, lexer, s));
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
