/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_74.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s370(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(415, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(418, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(397, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s371(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(414, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(418, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(397, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s372(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym__special_character, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s373(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DQUOTE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s374(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(378, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(134, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(381, lexer, s));
	return (lex_end_state(lexer, s));
}
