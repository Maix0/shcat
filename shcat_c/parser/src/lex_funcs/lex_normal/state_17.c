/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_17.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s85(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map85(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(386, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(516, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(818, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(85, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(810, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= '_' && s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s86(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(690, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(862, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(602, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(554, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(612, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(379, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	(s->lookahead >= '{' && s->lookahead <= '}')))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(86, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s87(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(690, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(862, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(602, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(554, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(613, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(380, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	(s->lookahead >= '{' && s->lookahead <= '}')))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(87, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s88(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(690, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(862, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(611, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(390, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(516, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	(s->lookahead >= '{' && s->lookahead <= '}')))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(88, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s89(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(690, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(862, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(599, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(555, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(394, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(513, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	s->lookahead == '{' || s->lookahead == '}'))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(89, lexer, s));
	return (lex_end_state(lexer, s));
}
