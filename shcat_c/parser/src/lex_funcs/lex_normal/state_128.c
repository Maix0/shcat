/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_128.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s640(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s641(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s642(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(846, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(848, lexer, s));
	if (s->lookahead == '/')
		return (lex_advance(844, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(575, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	11, s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s643(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(845, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(847, lexer, s));
	if (s->lookahead == '/')
		return (lex_advance(843, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s644(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(575, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}
