/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_15.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s75(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_local, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s76(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(85, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s77(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 't')
		return (lex_advance(86, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s78(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(87, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s79(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_unset, lexer, s);
	if (s->lookahead == 'e')
		return (lex_advance(88, lexer, s));
	return (lex_end_state(lexer, s));
}
