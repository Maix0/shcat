/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s20(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(146, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s21(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(425, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s22(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(420, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s23(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(239, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s24(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(242, lexer, s));
	return (lex_end_state(lexer, s));
}
