/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_154.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s770(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS2, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s771(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS2, lexer, s);
	if (s->lookahead == '+')
		return (lex_advance(766, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s772(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_TILDE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s773(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s774(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LBRACK, lexer, s);
	return (lex_end_state(lexer, s));
}
