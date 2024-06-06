/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_83.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s415(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(309, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s416(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BQUOTE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s417(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BQUOTE, lexer, s);
	if (s->lookahead == '`')
		return (lex_advance(368, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(207, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s418(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_BQUOTE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s419(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_comment, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(381, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(375, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(383, lexer, s));
	return (lex_end_state(lexer, s));
}
