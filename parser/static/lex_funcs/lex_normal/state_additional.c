/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_additional.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s237_bis(t_lexer *lexer, t_lexer_state *s, bool *ret)
{
	if (s->eof)
		return (*ret = lex_advance(251, lexer, s), true);
	if (s->lookahead == '\n')
		return (*ret = lex_advance(308, lexer, s), true);
	if (s->lookahead == '#')
		return (*ret = lex_advance(437, lexer, s), true);
	if (s->lookahead == '&')
		return (*ret = lex_advance(355, lexer, s), true);
	if (s->lookahead == ')')
		return (*ret = lex_advance(273, lexer, s), true);
	if (s->lookahead == ';')
		return (*ret = lex_advance(535, lexer, s), true);
	if (s->lookahead == '<')
		return (*ret = lex_advance(288, lexer, s), true);
	if (s->lookahead == '>')
		return (*ret = lex_advance(291, lexer, s), true);
	return (false);
}

bool	lex_normal_s238_bis(t_lexer *lexer, t_lexer_state *s, bool *ret)
{
	if (s->eof)
		return (*ret = lex_advance(251, lexer, s), true);
	if (s->lookahead == '\n')
		return (*ret = lex_advance(308, lexer, s), true);
	if (s->lookahead == '#')
		return (*ret = lex_advance(437, lexer, s), true);
	if (s->lookahead == '&')
		return (*ret = lex_advance(355, lexer, s), true);
	if (s->lookahead == ')')
		return (*ret = lex_advance(273, lexer, s), true);
	if (s->lookahead == ';')
		return (*ret = lex_advance(535, lexer, s), true);
	if (s->lookahead == '<')
		return (*ret = lex_advance(288, lexer, s), true);
	if (s->lookahead == '>')
		return (*ret = lex_advance(291, lexer, s), true);
	return (false);
}

bool	lex_normal_s250_bis(t_lexer *lexer, t_lexer_state *s, bool *ret)
{
	if (s->eof)
		return (*ret = lex_advance(251, lexer, s), true);
	if (lex_normal_map250(lexer, s))
		return (*ret = true, true);
	if (s->lookahead == '\\')
		return (*ret = lex_skip(245, lexer, s), true);
	if (s->lookahead == '^')
		return (*ret = lex_advance(351, lexer, s), true);
	if (s->lookahead == '`')
		return (*ret = lex_advance(432, lexer, s), true);
	if (s->lookahead == 'd')
		return (*ret = lex_advance(231, lexer, s), true);
	if (s->lookahead == 'e')
		return (*ret = lex_advance(229, lexer, s), true);
	if (s->lookahead == 'f')
		return (*ret = lex_advance(227, lexer, s), true);
	return (false);
}
