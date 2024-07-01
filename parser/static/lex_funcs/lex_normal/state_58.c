/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_58.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s290(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(290, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(22, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(449, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s291(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(291, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(139, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(450, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s292(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(292, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(141, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(451, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s293(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(293, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(54, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s294(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(294, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(28, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(452, lexer, s));
	return (lex_end_state(lexer, s));
}
