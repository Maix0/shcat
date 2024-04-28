/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_143.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s715(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(715, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(327, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s716(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(716, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(218, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s717(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(717, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(37, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s718(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(718, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(328, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s719(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(719, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(190, lexer, s));
	return (lex_end_state(lexer, s));
}
