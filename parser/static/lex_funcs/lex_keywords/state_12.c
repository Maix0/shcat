/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_12.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s60(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(70, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s61(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'r')
		return (lex_advance(71, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s62(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 't')
		return (lex_advance(72, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s63(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'i')
		return (lex_advance(73, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s64(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_local, lexer, s);
	return (lex_end_state(lexer, s));
}
