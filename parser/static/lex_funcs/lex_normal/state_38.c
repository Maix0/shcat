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
		return (lex_advance(360, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(401, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(358, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(197, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(153, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(396, lexer, s));
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(190, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(473, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|'))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s191(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(360, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(401, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(358, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(197, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(155, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(395, lexer, s));
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(191, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(474, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|'))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s192(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(360, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(370, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(358, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(122, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(395, lexer, s));
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(192, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(367, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(368, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s193(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(375, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(340, lexer, s));
	if (s->lookahead == '+')
		return (lex_advance(389, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(379, lexer, s));
	if (s->lookahead == ':')
		return (lex_advance(200, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(382, lexer, s));
	if (s->lookahead == '?')
		return (lex_advance(386, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(156, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(256, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(194, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s194(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(375, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(340, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(156, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(256, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(194, lexer, s));
	return (lex_end_state(lexer, s));
}
