/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_91.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s455(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map455(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(391, lexer, s));
	if (s->lookahead == '_')
		return (lex_advance(948, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(455, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s456(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map456(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(382, lexer, s));
	if (s->lookahead == '_')
		return (lex_advance(948, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(818, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(454, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s457(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map457(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(457, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(805, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && (s->lookahead > '{' && s->lookahead < '}')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s458(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map458(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(458, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(805, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != ';' && \
	s->lookahead != '<'))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s459(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map459(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(459, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(805, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != ';' && \
	s->lookahead != '<'))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}