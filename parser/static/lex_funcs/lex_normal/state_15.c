/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_15.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s75(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(440, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s76(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(297, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s77(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(438, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s78(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(443, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s79(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(439, lexer, s));
	return (lex_end_state(lexer, s));
}
