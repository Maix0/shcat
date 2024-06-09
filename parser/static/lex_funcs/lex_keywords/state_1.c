/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s5(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'f')
		return (lex_advance(13, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s6(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'h')
		return (lex_advance(14, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s7(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(15, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s8(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'h')
		return (lex_advance(16, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s9(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(0, lexer, s));
	return (lex_end_state(lexer, s));
}
