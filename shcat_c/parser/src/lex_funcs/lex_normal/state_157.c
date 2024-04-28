/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_157.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s785(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(853, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(857, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(817, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s786(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym__special_character, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s787(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym__special_character, lexer, s);
	if (s->lookahead == ']')
		return (lex_advance(677, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s788(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DQUOTE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s789(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(795, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(303, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(798, lexer, s));
	return (lex_end_state(lexer, s));
}
