/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_14.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s70(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(466, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(69, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(501, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(125, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s71(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(466, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(69, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(125, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s72(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(204, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s73(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(117, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s74(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(467, lexer, s));
	return (lex_end_state(lexer, s));
}
