/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_66.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s330(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(330, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(99, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(500, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s331(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(331, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(71, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(501, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s332(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(332, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(76, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(502, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s333(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE_AMP, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s334(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}
