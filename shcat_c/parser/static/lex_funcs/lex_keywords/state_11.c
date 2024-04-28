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
	if (s->lookahead == 'i')
		return (lex_advance(70, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s56(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'l')
		return (lex_advance(71, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s57(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_case, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s58(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'a')
		return (lex_advance(72, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s59(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_done, lexer, s);
	return (lex_end_state(lexer, s));
}
