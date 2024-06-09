/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_64.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s320(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(320, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(156, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(494, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s321(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(321, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(57, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s322(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(322, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(28, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(495, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s323(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(323, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(168, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(496, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s324(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(324, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(64, lexer, s));
	return (lex_end_state(lexer, s));
}
