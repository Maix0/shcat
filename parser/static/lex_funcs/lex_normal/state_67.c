/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_67.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s335(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s336(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s337(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS, lexer, s);
	if (s->lookahead == '+')
		return (lex_advance(362, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(314, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s338(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s339(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(363, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(315, lexer, s));
	return (lex_end_state(lexer, s));
}
