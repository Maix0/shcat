/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_82.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s410(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS3, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s411(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT_PERCENT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s412(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT_PERCENT, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s413(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__expansion_regex_token1, lexer, \
	s);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(413, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s414(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}
