/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_124.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s620(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(622, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(628, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s621(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s622(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s623(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_LT, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(687, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s624(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_LT, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(687, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(759, lexer, s));
	return (lex_end_state(lexer, s));
}
