/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_47.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s235(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(244, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(246, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s236(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(330, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(246, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s237(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s238(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SEMI_SEMI, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s239(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SEMI_SEMI, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(241, lexer, s));
	return (lex_end_state(lexer, s));
}
