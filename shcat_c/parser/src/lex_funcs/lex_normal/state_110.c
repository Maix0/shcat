/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_110.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s550(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_in, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s551(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LPAREN_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s552(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RPAREN_RPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s553(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SEMI, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s554(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SEMI, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(664, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(663, lexer, s));
	return (lex_end_state(lexer, s));
}
