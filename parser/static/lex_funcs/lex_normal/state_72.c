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
	lex_accept_token(anon_sym_EQ_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s361(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BANG_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s362(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s363(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s364(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS, lexer, s);
	if (s->lookahead == '+')
		return (lex_advance(389, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(340, lexer, s));
	return (lex_end_state(lexer, s));
}
