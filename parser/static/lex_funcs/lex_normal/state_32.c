/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_32.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s160(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(84, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(476, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(188, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s161(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(84, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(188, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s162(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(87, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(186, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s163(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(88, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(189, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s164(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map164(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(164, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(459, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
