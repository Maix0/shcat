/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_50.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s250(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(251, lexer, s));
	if (lex_normal_map250(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(245, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(351, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(432, lexer, s));
	if (s->lookahead == 'd')
		return (lex_advance(231, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(229, lexer, s));
	if (s->lookahead == 'f')
		return (lex_advance(227, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(230, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(271, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(277, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(250, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s251(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(ts_builtin_sym_end, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s252(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_in, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s253(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_in, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(234, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s254(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_in, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(449, lexer, s));
	return (lex_end_state(lexer, s));
}
