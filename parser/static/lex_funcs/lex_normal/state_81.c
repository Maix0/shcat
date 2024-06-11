/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_81.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s405(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(432, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\n' && \
	s->lookahead != '\r' && s->lookahead != '"' && \
	s->lookahead != '$' && s->lookahead != '`'))
		return (lex_advance(405, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s406(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_raw_string, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s407(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_number, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(238, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s408(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_number, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(16, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(408, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(440, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s409(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_number, lexer, s);
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(409, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(445, lexer, s));
	return (lex_end_state(lexer, s));
}
