/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_88.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s440(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym__, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s441(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym__, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(16, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(405, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s442(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym__, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(410, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s443(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(253, lexer, s));
	if (s->lookahead == '!')
		return (lex_advance(261, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(123, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(255, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(443, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s444(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map444(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(444, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(373, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(405, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
