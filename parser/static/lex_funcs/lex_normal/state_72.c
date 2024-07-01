/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_72.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s360(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS2, lexer, s);
	if (s->lookahead == '+')
		return (lex_advance(355, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s361(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_TILDE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s362(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS_PLUS2, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s363(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH_DASH2, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s364(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_concatenation_token1, lexer, s);
	return (lex_end_state(lexer, s));
}
