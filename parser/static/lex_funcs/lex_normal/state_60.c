/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_60.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s300(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_AMP_DASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s301(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_AMP_DASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s302(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_LT, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(305, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s303(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_LT, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(305, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(344, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s304(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_LT, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(344, lexer, s));
	return (lex_end_state(lexer, s));
}
