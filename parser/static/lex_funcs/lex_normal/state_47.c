/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_47.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s235(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(251, lexer, s));
	if (s->lookahead == '\n')
		return (lex_skip(250, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s236(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(251, lexer, s));
	if (s->lookahead == '\n')
		return (lex_skip(237, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s237(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(251, lexer, s));
	if (s->lookahead == '\n')
		return (lex_advance(308, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(437, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(355, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(273, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(535, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(288, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(291, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(246, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(433, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(232, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(272, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(237, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s238(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(251, lexer, s));
	if (s->lookahead == '\n')
		return (lex_advance(308, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(437, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(355, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(273, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(535, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(288, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(291, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(247, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(432, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(272, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(238, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s239(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(251, lexer, s));
	if (s->lookahead == '\n')
		return (lex_skip(238, lexer, s));
	return (lex_end_state(lexer, s));
}
