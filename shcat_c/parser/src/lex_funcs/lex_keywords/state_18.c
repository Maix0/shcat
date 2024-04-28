/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_18.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s90(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(94, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s91(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'y')
		return (lex_advance(95, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s92(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_typeset, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s93(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'v')
		return (lex_advance(96, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s94(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_function, lexer, s);
	return (lex_end_state(lexer, s));
}
