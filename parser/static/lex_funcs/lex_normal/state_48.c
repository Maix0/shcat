/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_48.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s240(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_elif, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s241(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_elif, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s242(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_else, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s243(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_else, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s244(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_esac, lexer, s);
	return (lex_end_state(lexer, s));
}
