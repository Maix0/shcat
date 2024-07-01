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
	if (s->lookahead == '"')
		return (lex_advance(368, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(408, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(367, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(200, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(161, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(262, lexer, s));
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(190, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(484, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|' && \
	s->lookahead != '}'))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s191(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(368, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(408, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(367, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(200, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(164, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(403, lexer, s));
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(191, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(485, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|'))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s192(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(368, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(408, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(200, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(257, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(166, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(261, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(400, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s193(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(368, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(409, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(366, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(200, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(156, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(404, lexer, s));
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(193, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(482, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(380, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|'))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s194(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(368, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(409, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(366, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(200, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(158, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(403, lexer, s));
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(194, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(483, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(380, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|'))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}
