/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_59.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s295(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(295, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(57, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s296(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(296, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(142, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s297(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(297, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(63, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s298(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(298, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(143, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s299(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(299, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(144, lexer, s));
	return (lex_end_state(lexer, s));
}
