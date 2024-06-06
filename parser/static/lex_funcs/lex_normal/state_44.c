/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_44.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s220(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(223, lexer, s));
	if (lex_normal_map220(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(220, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(387, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s221(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(223, lexer, s));
	if (lex_normal_map221(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(221, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s222(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(223, lexer, s));
	if (lex_normal_map222(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(222, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(387, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s223(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(ts_builtin_sym_end, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s224(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_in, lexer, s);
	return (lex_end_state(lexer, s));
}
