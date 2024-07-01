/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_79.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s395(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_QMARK2, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(218, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s396(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON_PLUS, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s397(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS3, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s398(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT_PERCENT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s399(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PERCENT_PERCENT, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(218, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}
