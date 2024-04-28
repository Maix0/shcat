/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_135.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s675(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RBRACK, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s676(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LBRACK_LBRACK, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s677(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RBRACK_RBRACK, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s678(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_EQ_TILDE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s679(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_EQ_TILDE, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}
