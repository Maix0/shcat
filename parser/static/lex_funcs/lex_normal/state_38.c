/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_38.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s190(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map190(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(190, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(503, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '{' && \
	s->lookahead != '|'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s191(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map191(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(191, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(508, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != '{' && s->lookahead \
	!= '|'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s192(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map192(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(192, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(504, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '{' && s->lookahead != '|'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s193(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map193(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(193, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(505, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '{' && s->lookahead != '|'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s194(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map194(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(194, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(506, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '{' && s->lookahead != '|'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}
