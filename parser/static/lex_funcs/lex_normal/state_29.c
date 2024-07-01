/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_29.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s145(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(57, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(169, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s146(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(61, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(176, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s147(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(95, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(471, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(183, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s148(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(95, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(183, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s149(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(69, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(472, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(185, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
