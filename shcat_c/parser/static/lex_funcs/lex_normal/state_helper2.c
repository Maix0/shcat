/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_helper2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:09:30 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/28 19:10:30 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_helper_s522(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '<')
		return (lex_advance(613, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(543, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	return (false);
}

bool	lex_helper_s86(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(379, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	return (false);
}

bool	lex_helper_s87(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(380, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	return (false);
}
