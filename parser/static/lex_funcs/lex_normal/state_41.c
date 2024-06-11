/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_41.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s205(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map205(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(205, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(510, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s206(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map206(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(206, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(511, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s207(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map207(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(207, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(512, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s208(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(395, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(435, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(220, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(277, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(183, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(430, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(272, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(208, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s209(t_lexer *lexer, t_lexer_state *s)
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
		return (lex_advance(178, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(430, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(282, lexer, s));
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(209, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(515, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && s->lookahead != '>' && s->lookahead != '|' && \
	s->lookahead != '}'))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}
