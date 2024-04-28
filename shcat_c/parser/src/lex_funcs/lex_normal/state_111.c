/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_111.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s555(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SEMI, lexer, s);
	if (s->lookahead == ';')
		return (lex_advance(662, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s556(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COMMA, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s557(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COMMA, lexer, s);
	if (s->lookahead == ',')
		return (lex_advance(850, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s558(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COMMA, lexer, s);
	if (s->lookahead == ',')
		return (lex_advance(849, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s559(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}
