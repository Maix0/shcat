/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_169.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s845(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH_POUND, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s846(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH_POUND, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s847(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH_PERCENT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s848(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH_PERCENT, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s849(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COMMA_COMMA, lexer, s);
	return (lex_end_state(lexer, s));
}
