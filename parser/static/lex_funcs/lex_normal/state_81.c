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
	lex_accept_token(sym_comment, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(376, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(370, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(378, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s406(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_comment, lexer, s);
	if ((s->lookahead == '\t' || (s->lookahead >= 0x0b && \
	s->lookahead <= '\r')))
		return (lex_advance(408, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r')))
		return (lex_advance(409, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s407(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_comment, lexer, s);
	if ((s->lookahead == '\t' || (s->lookahead >= 0x0b && \
	s->lookahead <= '\r')))
		return (lex_advance(408, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r')))
		return (lex_advance(498, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s408(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_comment, lexer, s);
	if ((s->lookahead != 0 && s->lookahead != '\n'))
		return (lex_advance(408, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s409(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym__comment_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(406, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(409, lexer, s));
	return (lex_end_state(lexer, s));
}
