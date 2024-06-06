/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_93.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s465(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map465(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(183, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(438, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s466(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(11, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(466, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s467(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s468(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AT, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s469(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_0, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(394, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(12, lexer, s));
	if (s->lookahead == 'x')
		return (lex_advance(431, lexer, s));
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
