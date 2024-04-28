/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_141.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s705(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(705, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(156, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s706(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(706, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(324, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s707(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(707, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(98, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s708(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(708, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(202, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s709(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(709, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(325, lexer, s));
	return (lex_end_state(lexer, s));
}
