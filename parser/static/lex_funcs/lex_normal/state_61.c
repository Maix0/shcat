/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_61.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s305(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(305, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(39, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(464, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s306(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(306, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(97, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s307(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(307, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(94, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(465, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s308(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(308, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(76, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s309(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(309, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(68, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(466, lexer, s));
	return (lex_end_state(lexer, s));
}
