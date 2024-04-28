/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_130.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s650(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(576, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s651(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR_STAR, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(579, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s652(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR_STAR, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(578, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s653(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s654(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LPAREN, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(551, lexer, s));
	return (lex_end_state(lexer, s));
}
