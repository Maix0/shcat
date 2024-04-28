/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_140.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s700(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(700, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(322, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s701(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(701, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(185, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s702(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(702, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(32, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s703(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(703, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(323, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s704(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(704, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(96, lexer, s));
	return (lex_end_state(lexer, s));
}
