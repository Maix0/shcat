/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_7.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s35(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'o')
		return (lex_advance(51, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s36(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_for, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s37(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'c')
		return (lex_advance(52, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s38(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'a')
		return (lex_advance(53, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s39(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'd')
		return (lex_advance(54, lexer, s));
	return (lex_end_state(lexer, s));
}
