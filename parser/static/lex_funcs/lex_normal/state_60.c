/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_60.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s300(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(300, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(39, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(455, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s301(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(301, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(94, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(456, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s302(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(302, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(68, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(457, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s303(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(303, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(72, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(458, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s304(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}
