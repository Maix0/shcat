/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_66.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s330(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s331(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(263, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s332(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(263, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(324, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s333(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_EQ_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s334(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BANG_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}
