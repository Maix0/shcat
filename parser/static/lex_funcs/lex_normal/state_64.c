/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_64.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s320(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR_EQ, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s321(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s322(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SLASH_EQ, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s323(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s324(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT_EQ, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}
