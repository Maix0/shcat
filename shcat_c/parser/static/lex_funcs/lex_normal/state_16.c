/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_16.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s80(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(881, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s81(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(881, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(80, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(200, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s82(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(83, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s83(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map83(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(365, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(597, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(594, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(83, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s84(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map84(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(378, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(84, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(811, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= '_' && s->lookahead <= 'z')))
		return (lex_advance(656, lexer, s));
	return (lex_end_state(lexer, s));
}
