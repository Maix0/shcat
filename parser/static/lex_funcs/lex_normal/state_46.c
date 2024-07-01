/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_46.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s230(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(232, lexer, s));
	if (lex_normal_map230(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(230, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(463, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != '{' && s->lookahead \
	!= '|'))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s231(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(232, lexer, s));
	if (lex_normal_map231(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(226, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(321, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(395, lexer, s));
	if (s->lookahead == 'd')
		return (lex_advance(212, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(210, lexer, s));
	if (s->lookahead == 'f')
		return (lex_advance(208, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(211, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(250, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(256, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(231, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s232(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(ts_builtin_sym_end, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s233(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_in, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s234(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_in, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
