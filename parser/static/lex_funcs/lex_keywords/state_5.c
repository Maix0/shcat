/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s25(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'c')
		return (lex_advance(42, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s26(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_do, lexer, s);
	if (s->lookahead == 'n')
		return (lex_advance(43, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s27(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'i')
		return (lex_advance(44, lexer, s));
	if (s->lookahead == 's')
		return (lex_advance(45, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s28(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'p')
		return (lex_advance(46, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s29(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_fi, lexer, s);
	return (lex_end_state(lexer, s));
}