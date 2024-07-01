/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_79.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s395(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BQUOTE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s396(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BQUOTE, lexer, s);
	if (s->lookahead == '`')
		return (lex_advance(356, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(203, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s397(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_comment, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(368, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(362, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(370, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s398(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_comment, lexer, s);
	if ((s->lookahead == '\t' || (s->lookahead >= 0x0b && \
	s->lookahead <= '\r')))
		return (lex_advance(400, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r')))
		return (lex_advance(401, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s399(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_comment, lexer, s);
	if ((s->lookahead == '\t' || (s->lookahead >= 0x0b && \
	s->lookahead <= '\r')))
		return (lex_advance(400, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r')))
		return (lex_advance(489, lexer, s));
	return (lex_end_state(lexer, s));
}
