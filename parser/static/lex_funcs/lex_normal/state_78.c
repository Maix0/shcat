/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_78.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s390(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT_PERCENT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s391(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT_PERCENT, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s392(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_expansion_regex_token1, lexer, s);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(392, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s393(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s394(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(304, lexer, s));
	return (lex_end_state(lexer, s));
}
