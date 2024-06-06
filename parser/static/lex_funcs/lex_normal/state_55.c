/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_55.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s275(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(275, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(14, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s276(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(276, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(16, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s277(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(277, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(22, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s278(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(278, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(83, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s279(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(279, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(24, lexer, s));
	return (lex_end_state(lexer, s));
}
