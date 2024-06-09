/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_78.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s390(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(430, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(414, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s391(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DQUOTE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s392(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(396, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(129, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(399, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s393(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(399, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(434, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(401, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s394(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(397, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(129, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(399, lexer, s));
	return (lex_end_state(lexer, s));
}
