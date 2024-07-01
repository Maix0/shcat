/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_54.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s270(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(275, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(272, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(276, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s271(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(328, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(273, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s272(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_GT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s273(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_GT, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(315, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s274(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_AMP, lexer, s);
	return (lex_end_state(lexer, s));
}
