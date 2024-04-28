/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_101.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s505(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '<')
		return (lex_advance(759, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s506(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '=')
		return (lex_advance(605, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s507(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '=')
		return (lex_advance(568, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s508(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '>')
		return (lex_advance(680, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s509(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == ']')
		return (lex_advance(677, lexer, s));
	return (lex_end_state(lexer, s));
}
