/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_159.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s795(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '"')
		return (lex_advance(788, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(797, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(783, lexer, s));
	if (s->lookahead == '(')
		return (lex_advance(796, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(302, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(480, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(795, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(798, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s796(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(551, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(303, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\n' && \
	s->lookahead != '\r' && s->lookahead != '"' && \
	s->lookahead != '$' && s->lookahead != '`'))
		return (lex_advance(798, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s797(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(860, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\n' && \
	s->lookahead != '\r' && s->lookahead != '"' && \
	s->lookahead != '$' && s->lookahead != '`'))
		return (lex_advance(797, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s798(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(303, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\n' && \
	s->lookahead != '\r' && s->lookahead != '"' && \
	s->lookahead != '$' && s->lookahead != '`'))
		return (lex_advance(798, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s799(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(303, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(798, lexer, s));
	return (lex_end_state(lexer, s));
}
