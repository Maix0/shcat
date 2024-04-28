/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_23.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s115(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(479, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s116(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(451, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s117(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(84, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s118(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(86, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s119(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(454, lexer, s));
	return (lex_end_state(lexer, s));
}
