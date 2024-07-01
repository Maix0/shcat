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
	if (s->lookahead == 'c')
		return (lex_advance(244, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s206(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(242, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s207(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'f')
		return (lex_advance(240, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s208(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'i')
		return (lex_advance(238, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s209(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'i')
		return (lex_advance(207, lexer, s));
	if (s->lookahead == 's')
		return (lex_advance(206, lexer, s));
	return (lex_end_state(lexer, s));
}
