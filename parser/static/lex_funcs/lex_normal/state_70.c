/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_70.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s350(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s351(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_CARET_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s352(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_CARET_EQ, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(238, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s353(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s354(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_CARET, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(352, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(238, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}
