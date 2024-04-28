/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_151.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s755(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(755, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(357, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s756(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(756, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(370, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s757(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(757, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(372, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s758(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(758, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(381, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s759(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_LT_LT, lexer, s);
	return (lex_end_state(lexer, s));
}
