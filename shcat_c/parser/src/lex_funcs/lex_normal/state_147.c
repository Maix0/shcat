/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_147.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s735(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(735, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(335, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s736(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(736, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(228, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s737(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(737, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(337, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s738(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(738, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(207, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s739(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(739, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(339, lexer, s));
	return (lex_end_state(lexer, s));
}
