/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s15(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'c')
		return (lex_advance(31, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s16(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_do, lexer, s);
	if (s->lookahead == 'n')
		return (lex_advance(32, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s17(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'i')
		return (lex_advance(33, lexer, s));
	if (s->lookahead == 's')
		return (lex_advance(34, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s18(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'p')
		return (lex_advance(35, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s19(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_fi, lexer, s);
	return (lex_end_state(lexer, s));
}
