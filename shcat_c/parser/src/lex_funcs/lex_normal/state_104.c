/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_104.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s520(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(547, lexer, s));
	if (s->lookahead == '\n')
		return (lex_advance(690, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(862, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(602, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(655, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(555, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(612, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(544, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	(s->lookahead >= '{' && s->lookahead <= '}')))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(520, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s521(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(547, lexer, s));
	if (s->lookahead == '\n')
		return (lex_advance(690, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(862, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(602, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(655, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(555, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(613, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(541, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(856, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	(s->lookahead >= '{' && s->lookahead <= '}')))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(521, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s522(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(547, lexer, s));
	if (s->lookahead == '\n')
		return (lex_advance(690, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(862, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(602, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(655, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(555, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(613, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(543, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	(s->lookahead >= '{' && s->lookahead <= '}')))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(522, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s523(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(547, lexer, s));
	if (s->lookahead == '\n')
		return (lex_skip(521, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s524(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(547, lexer, s));
	if (s->lookahead == '\n')
		return (lex_skip(519, lexer, s));
	return (lex_end_state(lexer, s));
}
