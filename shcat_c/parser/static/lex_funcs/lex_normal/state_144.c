/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_144.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s720(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(720, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(222, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s721(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(721, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(397, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s722(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(722, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(106, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s723(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(723, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(43, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s724(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(724, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(331, lexer, s));
	return (lex_end_state(lexer, s));
}
