/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_37.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s185(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map185(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(185, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(472, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|'))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s186(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(360, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(400, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(198, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(252, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(162, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(395, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(249, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(186, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s187(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(360, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(400, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(359, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(197, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(158, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(395, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(257, lexer, s));
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(187, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(475, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|' && \
	s->lookahead != '}'))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s188(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(360, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(400, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(359, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(197, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(161, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(395, lexer, s));
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(188, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(476, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|'))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s189(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(360, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(400, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(197, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(252, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(163, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(256, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(392, lexer, s));
	return (lex_end_state(lexer, s));
}
