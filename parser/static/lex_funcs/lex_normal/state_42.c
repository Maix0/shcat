/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s210(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(224, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s211(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 's')
		return (lex_advance(208, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s212(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '|')
		return (lex_advance(246, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s213(t_lexer *lexer, t_lexer_state *s)
{
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r')))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s214(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(223, lexer, s));
	if (lex_normal_map214(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(214, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(389, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(432, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*')))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}
