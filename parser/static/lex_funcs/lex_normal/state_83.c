/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_83.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s415(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map415(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(100, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(410, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s416(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map416(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(101, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(449, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(373, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(405, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s417(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map417(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(104, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(410, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s418(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map418(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == ' '))
		return (lex_skip(105, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(452, lexer, s));
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

bool	lex_normal_s419(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map419(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(106, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(410, lexer, s));
	return (lex_end_state(lexer, s));
}
