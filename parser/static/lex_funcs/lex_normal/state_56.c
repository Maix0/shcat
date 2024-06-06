/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_56.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s280(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(280, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(26, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s281(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(281, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(89, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s282(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(282, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(28, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s283(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(283, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(34, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s284(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(284, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(40, lexer, s));
	return (lex_end_state(lexer, s));
}
