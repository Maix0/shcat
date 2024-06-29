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
	if (s->lookahead == '"')
		return (lex_advance(395, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(435, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(394, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(219, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(182, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(430, lexer, s));
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(210, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(516, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s211(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(395, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(435, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(219, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(277, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(185, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(281, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(427, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s212(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(395, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(436, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(393, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(219, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(172, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(431, lexer, s));
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(212, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(513, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s213(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(395, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(436, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(393, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(219, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(174, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(430, lexer, s));
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(213, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(514, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s214(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(395, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(405, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(393, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(135, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(430, lexer, s));
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(214, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(402, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(403, lexer, s));
	return (lex_end_state(lexer, s));
}
