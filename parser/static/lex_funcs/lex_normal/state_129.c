/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_129.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s645(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(574, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s646(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s647(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT, lexer, s);
	if (s->lookahead == '%')
		return (lex_advance(841, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(577, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s648(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT, lexer, s);
	if (s->lookahead == '%')
		return (lex_advance(840, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s649(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(577, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}
