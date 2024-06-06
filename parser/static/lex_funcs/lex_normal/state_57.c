/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_57.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s285(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(285, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(43, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s286(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(286, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(45, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s287(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(287, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(48, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s288(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(288, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(95, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s289(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(289, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(51, lexer, s));
	return (lex_end_state(lexer, s));
}
