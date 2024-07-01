/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_71.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s355(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH_DASH2, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s356(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_concatenation_token1, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s357(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s358(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(394, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(377, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s359(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(393, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(377, lexer, s));
	return (lex_end_state(lexer, s));
}
