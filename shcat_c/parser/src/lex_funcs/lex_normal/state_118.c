/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_118.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s590(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s591(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(668, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s592(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(668, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(585, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(586, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s593(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(668, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(586, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s594(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(585, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(586, lexer, s));
	return (lex_end_state(lexer, s));
}
