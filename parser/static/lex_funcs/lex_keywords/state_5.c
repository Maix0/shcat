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
	lex_accept_token(anon_sym_then, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s26(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'l')
		return (lex_advance(28, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s27(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(29, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s28(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_until, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s29(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_while, lexer, s);
	return (lex_end_state(lexer, s));
}
