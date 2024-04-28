/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_146.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s730(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(730, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(399, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s731(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(731, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(128, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s732(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(732, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(166, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s733(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(733, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(333, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s734(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(734, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(48, lexer, s));
	return (lex_end_state(lexer, s));
}
