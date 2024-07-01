/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_73.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s365(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s366(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(402, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(385, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s367(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(401, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(385, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s368(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DQUOTE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s369(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(373, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(120, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(376, lexer, s));
	return (lex_end_state(lexer, s));
}
