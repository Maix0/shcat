/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_11.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s55(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'c')
		return (lex_advance(66, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s56(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_then, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s57(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 's')
		return (lex_advance(67, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s58(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 't')
		return (lex_advance(68, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s59(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'l')
		return (lex_advance(69, lexer, s));
	return (lex_end_state(lexer, s));
}
