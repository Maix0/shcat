/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_67.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s335(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(335, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(71, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s336(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(336, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(76, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(498, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s337(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE_AMP, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s338(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s339(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RPAREN_RPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}
