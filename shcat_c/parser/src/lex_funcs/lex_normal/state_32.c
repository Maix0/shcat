/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_32.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s160(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(293, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s161(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(285, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s162(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(289, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s163(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(462, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s164(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(294, lexer, s));
	return (lex_end_state(lexer, s));
}
