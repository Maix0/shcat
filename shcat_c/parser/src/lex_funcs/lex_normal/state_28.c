/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_28.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s140(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(476, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s141(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(89, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s142(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(477, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s143(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s144(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(407, lexer, s));
	return (lex_end_state(lexer, s));
}
