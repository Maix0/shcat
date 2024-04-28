/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_109.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s545(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(547, lexer, s));
	if (lex_normal_map545(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(545, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s546(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(547, lexer, s));
	if (lex_normal_map546(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(546, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(805, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s547(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(ts_builtin_sym_end, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s548(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_in, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s549(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_in, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}
