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
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(300, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(147, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s301(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(301, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(148, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s302(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(302, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(149, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s303(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(303, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(150, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s304(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(304, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(151, lexer, s));
	return (lex_end_state(lexer, s));
}
