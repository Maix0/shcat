/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_24.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s120(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(474, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s121(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(487, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s122(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(483, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s123(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(85, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s124(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(484, lexer, s));
	return (lex_end_state(lexer, s));
}
