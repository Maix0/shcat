/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_150.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s750(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(750, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(112, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s751(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(751, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(349, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s752(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(752, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(350, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s753(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(753, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(351, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s754(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(754, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(354, lexer, s));
	return (lex_end_state(lexer, s));
}
