/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_76.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s380(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '"')
		return (lex_advance(373, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(383, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(370, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(136, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(416, lexer, s));
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(195, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(380, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(381, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s381(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(134, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\n' && \
	s->lookahead != '\r' && s->lookahead != '"' && \
	s->lookahead != '$' && s->lookahead != '`'))
		return (lex_advance(381, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s382(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(134, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(381, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s383(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(419, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\n' && \
	s->lookahead != '\r' && s->lookahead != '"' && \
	s->lookahead != '$' && s->lookahead != '`'))
		return (lex_advance(383, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s384(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_raw_string, lexer, s);
	return (lex_end_state(lexer, s));
}
