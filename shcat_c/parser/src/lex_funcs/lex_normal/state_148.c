/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_148.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s740(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(740, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(168, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s741(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(741, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(341, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s742(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(742, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(58, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s743(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(743, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(343, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s744(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(744, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(233, lexer, s));
	return (lex_end_state(lexer, s));
}
