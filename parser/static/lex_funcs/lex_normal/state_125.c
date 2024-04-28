/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_125.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s625(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_LT, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(687, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(759, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(580, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s626(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_LT, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(580, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s627(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_GT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s628(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_GT, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(581, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s629(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS, lexer, s);
	return (lex_end_state(lexer, s));
}
