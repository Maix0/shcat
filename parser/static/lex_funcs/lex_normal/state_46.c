/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_46.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s230(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(252, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s231(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'o')
		return (lex_advance(255, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s232(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 's')
		return (lex_advance(223, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s233(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '|')
		return (lex_advance(280, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s234(t_lexer *lexer, t_lexer_state *s)
{
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r')))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}
