/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_59.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s295(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(295, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(52, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s296(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(296, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(28, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(458, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s297(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(297, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(142, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(459, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s298(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(298, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(146, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(460, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s299(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(299, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(25, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(461, lexer, s));
	return (lex_end_state(lexer, s));
}
