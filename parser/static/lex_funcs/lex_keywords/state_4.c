/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s20(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(25, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s21(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'i')
		return (lex_advance(26, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s22(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'l')
		return (lex_advance(27, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s23(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_case, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s24(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_done, lexer, s);
	return (lex_end_state(lexer, s));
}
