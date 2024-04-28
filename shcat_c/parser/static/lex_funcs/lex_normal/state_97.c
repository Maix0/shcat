/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_97.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s485(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map485(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(485, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '"' && \
	s->lookahead < '$') && (s->lookahead > '&' && s->lookahead \
	< ')') && s->lookahead != ';' && s->lookahead != '<' && \
	(s->lookahead > '[' && s->lookahead < ']') && s->lookahead \
	!= '`' && (s->lookahead > '{' && s->lookahead < '}')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s486(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(862, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(612, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(388, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	(s->lookahead >= '{' && s->lookahead <= '}')))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(486, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s487(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map487(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(487, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '"' && \
	s->lookahead < '$') && (s->lookahead > '&' && s->lookahead \
	< ')') && s->lookahead != ';' && s->lookahead != '<'))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s488(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(862, lexer, s));
	if (s->lookahead == '+')
		return (lex_advance(507, lexer, s));
	if (s->lookahead == '/')
		return (lex_advance(641, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(559, lexer, s));
	if (s->lookahead == '[')
		return (lex_advance(673, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(396, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(818, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s489(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '&')
		return (lex_advance(588, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(680, lexer, s));
	return (lex_end_state(lexer, s));
}
