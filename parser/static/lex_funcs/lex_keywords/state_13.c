/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s65(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(74, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s66(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 't')
		return (lex_advance(75, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s67(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(76, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s68(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_unset, lexer, s);
	if (s->lookahead == 'e')
		return (lex_advance(77, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s69(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_until, lexer, s);
	return (lex_end_state(lexer, s));
}
