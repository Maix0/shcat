/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_160.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s800(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_raw_string, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s801(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_ansi_c_string, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s802(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_ansi_c_string, lexer, s);
	if (s->lookahead == '\'')
		return (lex_advance(801, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(493, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(492, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s803(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(814, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if (s->lookahead == 'x')
		return (lex_advance(957, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(805, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	11, s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s804(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(814, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if (s->lookahead == 'x')
		return (lex_advance(867, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(806, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(868, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	11, s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}
