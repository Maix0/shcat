/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_21.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s105(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(901, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s106(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(901, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(105, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(264, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s107(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(933, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s108(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(933, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(107, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(444, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s109(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(926, lexer, s));
	return (lex_end_state(lexer, s));
}
