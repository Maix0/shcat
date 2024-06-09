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
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(333, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(280, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s271(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(349, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(280, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s272(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '|')
		return (lex_advance(280, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s273(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s274(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LF, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(274, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(136, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(483, lexer, s));
	return (lex_end_state(lexer, s));
}
