/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_51.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s255(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(327, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(264, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s256(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '|')
		return (lex_advance(264, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s257(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s258(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LF, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(258, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(127, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(452, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s259(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SEMI_SEMI, lexer, s);
	return (lex_end_state(lexer, s));
}
