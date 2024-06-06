/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_77.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s385(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(394, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if (s->lookahead == 'x')
		return (lex_advance(481, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(387, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	11, s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s386(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(394, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if (s->lookahead == 'x')
		return (lex_advance(426, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(388, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(427, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	11, s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s387(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(394, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(387, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	11, s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s388(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(394, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(388, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(427, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	11, s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s389(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(394, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(12, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(389, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(432, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	11, s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}
