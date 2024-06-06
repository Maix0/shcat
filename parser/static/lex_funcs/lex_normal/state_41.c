/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_41.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s205(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '=')
		return (lex_advance(338, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s206(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '>')
		return (lex_advance(261, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s207(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '`')
		return (lex_advance(368, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(207, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s208(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'a')
		return (lex_advance(209, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s209(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'c')
		return (lex_advance(227, lexer, s));
	return (lex_end_state(lexer, s));
}
