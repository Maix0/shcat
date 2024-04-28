/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_149.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s745(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(745, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(344, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s746(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(746, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(176, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s747(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(747, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(346, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s748(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(748, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(100, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s749(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(749, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(347, lexer, s));
	return (lex_end_state(lexer, s));
}
