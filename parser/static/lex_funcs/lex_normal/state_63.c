/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_63.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s315(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(315, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(154, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(490, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s316(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(316, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(150, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(491, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s317(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(317, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(55, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s318(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(318, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(25, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(492, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s319(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(319, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(164, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(493, lexer, s));
	return (lex_end_state(lexer, s));
}
