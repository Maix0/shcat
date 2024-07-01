/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_82.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s410(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__simple_variable_name_token1, \
	lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(410, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s411(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map411(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(10, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(444, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(373, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(405, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*')))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s412(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map412(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(48, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(410, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s413(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map413(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(89, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(445, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(373, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(405, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*')))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s414(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map414(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(99, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(448, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(373, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(405, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*')))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
