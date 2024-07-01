/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_70.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s350(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH2, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(348, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s351(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS2, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s352(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS2, lexer, s);
	if (s->lookahead == '+')
		return (lex_advance(347, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s353(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_TILDE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s354(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS_PLUS2, lexer, s);
	return (lex_end_state(lexer, s));
}
