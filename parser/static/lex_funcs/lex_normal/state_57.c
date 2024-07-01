/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_57.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s285(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(285, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(19, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(445, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s286(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(286, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(134, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(446, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s287(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(287, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(136, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(447, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s288(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(288, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(25, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(448, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s289(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(289, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(52, lexer, s));
	return (lex_end_state(lexer, s));
}
