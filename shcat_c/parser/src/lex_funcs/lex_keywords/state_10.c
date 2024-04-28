/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s50(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'd')
		return (lex_advance(65, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s51(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(66, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s52(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(67, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s53(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(68, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s54(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(69, lexer, s));
	return (lex_end_state(lexer, s));
}
