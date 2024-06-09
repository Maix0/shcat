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
	if (s->lookahead == 't')
		return (lex_advance(21, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s16(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'i')
		return (lex_advance(22, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s17(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(23, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s18(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(24, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s19(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_for, lexer, s);
	return (lex_end_state(lexer, s));
}
