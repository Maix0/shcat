/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_62.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s310(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(310, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(13, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(480, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s311(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(311, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(50, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s312(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(312, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s313(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(313, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(19, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(481, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s314(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(314, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(147, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}
