/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_166.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s830(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH3, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s831(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON_DASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s832(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON_DASH, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s833(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS3, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s834(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON_PLUS, lexer, s);
	return (lex_end_state(lexer, s));
}
