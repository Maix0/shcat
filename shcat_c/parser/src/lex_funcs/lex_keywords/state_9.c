/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_9.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s45(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(61, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s46(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'o')
		return (lex_advance(62, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s47(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_for, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s48(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'c')
		return (lex_advance(63, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s49(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'a')
		return (lex_advance(64, lexer, s));
	return (lex_end_state(lexer, s));
}
