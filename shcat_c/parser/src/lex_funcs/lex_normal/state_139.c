/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_139.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s695(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(695, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(91, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s696(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(696, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(30, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s697(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(697, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(321, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s698(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(698, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(183, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s699(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(699, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(153, lexer, s));
	return (lex_end_state(lexer, s));
}
