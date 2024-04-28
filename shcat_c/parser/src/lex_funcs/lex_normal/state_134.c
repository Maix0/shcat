/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_134.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s670(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BANG, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(606, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s671(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BANG, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(605, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s672(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BANG, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s673(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LBRACK, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s674(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LBRACK, lexer, s);
	if (s->lookahead == '[')
		return (lex_advance(676, lexer, s));
	return (lex_end_state(lexer, s));
}
