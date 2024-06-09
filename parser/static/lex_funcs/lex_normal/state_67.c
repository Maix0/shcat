/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_67.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s335(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RPAREN_RPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s336(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s337(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s338(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s339(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR_EQ, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(234, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}
