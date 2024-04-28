/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_138.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s690(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(690, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s691(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(691, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(316, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s692(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(692, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(81, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s693(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(693, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(27, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s694(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(694, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(317, lexer, s));
	return (lex_end_state(lexer, s));
}
