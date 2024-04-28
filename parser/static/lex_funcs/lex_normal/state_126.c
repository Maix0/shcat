/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_126.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s630(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS, lexer, s);
	if (s->lookahead == '+')
		return (lex_advance(565, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(569, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s631(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS, lexer, s);
	if (s->lookahead == '+')
		return (lex_advance(564, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(568, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s632(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s633(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(567, lexer, s));
	if (s->lookahead == '0')
		return (lex_advance(803, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(571, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(805, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s634(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(566, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(570, lexer, s));
	return (lex_end_state(lexer, s));
}
