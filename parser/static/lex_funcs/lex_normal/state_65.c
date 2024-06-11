/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_65.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s325(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(325, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(31, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(491, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s326(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(326, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(57, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s327(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(327, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(169, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(492, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s328(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(328, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(36, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(493, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s329(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(329, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(63, lexer, s));
	return (lex_end_state(lexer, s));
}
