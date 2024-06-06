/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s10(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'h')
		return (lex_advance(26, lexer, s));
	if (s->lookahead == 'y')
		return (lex_advance(27, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s11(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(28, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s12(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'h')
		return (lex_advance(29, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s13(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(0, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s14(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 's')
		return (lex_advance(30, lexer, s));
	return (lex_end_state(lexer, s));
}
