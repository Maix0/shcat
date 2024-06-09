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
	lex_accept_token(anon_sym_LT_LT_DASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s306(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(306, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(13, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(484, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s307(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(307, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(51, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s308(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(308, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s309(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(309, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(19, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(485, lexer, s));
	return (lex_end_state(lexer, s));
}
