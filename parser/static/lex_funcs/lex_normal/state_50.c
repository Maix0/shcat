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
	lex_accept_token(anon_sym_EQ, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(337, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s251(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_EQ, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s252(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(263, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s253(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(263, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(269, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(339, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s254(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(263, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(268, lexer, s));
	return (lex_end_state(lexer, s));
}
