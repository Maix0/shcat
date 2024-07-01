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
	lex_accept_token(ts_builtin_sym_end, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s236(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_in, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s237(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_in, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(218, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s238(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_in, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(418, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s239(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_do, lexer, s);
	return (lex_end_state(lexer, s));
}
