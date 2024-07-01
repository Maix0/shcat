/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_50.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s250(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_esac, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(418, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s251(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s252(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s253(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(311, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(327, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(264, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s254(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(311, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(264, lexer, s));
	return (lex_end_state(lexer, s));
}
