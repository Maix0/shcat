/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_100.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s500(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '+')
		return (lex_advance(564, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s501(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '+')
		return (lex_advance(564, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(568, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s502(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '-')
		return (lex_advance(566, lexer, s));
	if (s->lookahead == '0')
		return (lex_advance(809, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(811, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s503(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '.')
		return (lex_advance(776, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s504(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '0')
		return (lex_advance(809, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(811, lexer, s));
	return (lex_end_state(lexer, s));
}
