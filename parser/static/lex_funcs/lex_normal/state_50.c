/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_50.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s250(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(319, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(259, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s251(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '|')
		return (lex_advance(259, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s252(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s253(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LF, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(253, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(124, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(443, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s254(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SEMI_SEMI, lexer, s);
	return (lex_end_state(lexer, s));
}
