/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_171.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s855(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BQUOTE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s856(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BQUOTE, lexer, s);
	if (s->lookahead == '`')
		return (lex_advance(779, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(510, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s857(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_BQUOTE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s858(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s859(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}
