/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_120.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s600(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(588, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(582, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s601(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(588, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(582, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(680, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s602(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(588, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(680, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s603(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_EQ_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s604(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_EQ_EQ, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}
