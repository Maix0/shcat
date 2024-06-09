/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_44.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s220(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '=')
		return (lex_advance(357, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s221(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '>')
		return (lex_advance(295, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s222(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '`')
		return (lex_advance(387, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(222, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s223(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'a')
		return (lex_advance(224, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s224(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'c')
		return (lex_advance(263, lexer, s));
	return (lex_end_state(lexer, s));
}
