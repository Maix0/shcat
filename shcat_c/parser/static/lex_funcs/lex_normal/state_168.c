/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_168.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s840(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT_PERCENT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s841(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT_PERCENT, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s842(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__expansion_regex_token1, lexer, \
	s);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(842, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s843(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH_SLASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s844(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH_SLASH, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}
