/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_68.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s340(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(218, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s341(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s342(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(317, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(218, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s343(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(316, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s344(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(218, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}
