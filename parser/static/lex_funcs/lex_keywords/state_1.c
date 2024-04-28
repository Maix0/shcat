/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s5(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_P, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s6(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_Q, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s7(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_U, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s8(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(23, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(22, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s9(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_a, lexer, s);
	return (lex_end_state(lexer, s));
}
