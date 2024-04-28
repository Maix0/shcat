/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_99.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s495(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '(')
		return (lex_advance(858, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s496(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '(')
		return (lex_advance(859, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s497(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '(')
		return (lex_advance(853, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(857, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s498(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '(')
		return (lex_advance(853, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(857, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(817, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s499(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == ')')
		return (lex_advance(552, lexer, s));
	return (lex_end_state(lexer, s));
}
