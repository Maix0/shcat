/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_53.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s265(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_esac, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(16, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(443, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s266(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_esac, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(449, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s267(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s268(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s269(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(333, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(349, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(280, lexer, s));
	return (lex_end_state(lexer, s));
}
