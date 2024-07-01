/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_65.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s325(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_EQ_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s326(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BANG_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s327(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s328(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s329(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS, lexer, s);
	if (s->lookahead == '+')
		return (lex_advance(354, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(306, lexer, s));
	return (lex_end_state(lexer, s));
}
