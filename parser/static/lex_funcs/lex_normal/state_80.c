/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_80.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s400(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_expansion_regex_token1, lexer, s);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(400, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s401(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s402(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(312, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s403(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BQUOTE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s404(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BQUOTE, lexer, s);
	if (s->lookahead == '`')
		return (lex_advance(364, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(206, lexer, s));
	return (lex_end_state(lexer, s));
}
