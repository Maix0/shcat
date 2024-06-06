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
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(190, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(388, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= '_' && s->lookahead <= 'z')))
		return (lex_advance(427, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<'))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s191(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map191(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(191, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(387, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>'))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s192(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map192(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(192, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && (s->lookahead > '[' && \
	s->lookahead < ']') && (s->lookahead > '{' && s->lookahead \
	< '}')))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s193(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(373, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(421, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(201, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(237, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(168, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(398, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(413, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s194(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map194(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(194, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(387, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && (s->lookahead > '{' && \
	s->lookahead < '}')))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}
