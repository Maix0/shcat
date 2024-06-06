/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_8.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s40(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(55, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s41(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(56, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s42(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(57, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s43(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(58, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s44(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'i')
		return (lex_advance(59, lexer, s));
	return (lex_end_state(lexer, s));
}
