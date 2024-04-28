/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_145.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s725(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(725, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(193, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s726(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(726, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(46, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s727(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(727, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(398, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s728(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(728, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s729(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(729, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(226, lexer, s));
	return (lex_end_state(lexer, s));
}
