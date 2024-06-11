/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_86.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s430(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BQUOTE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s431(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BQUOTE, lexer, s);
	if (s->lookahead == '`')
		return (lex_advance(391, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(226, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s432(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_comment, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(397, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(405, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s433(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_comment, lexer, s);
	if ((s->lookahead == '\t' || (s->lookahead >= 0x0b && \
	s->lookahead <= '\r')))
		return (lex_advance(435, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r')))
		return (lex_advance(436, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s434(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_comment, lexer, s);
	if ((s->lookahead == '\t' || (s->lookahead >= 0x0b && \
	s->lookahead <= '\r')))
		return (lex_advance(435, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r')))
		return (lex_advance(529, lexer, s));
	return (lex_end_state(lexer, s));
}
