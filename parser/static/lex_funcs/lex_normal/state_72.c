/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_72.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s360(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DQUOTE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s361(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(365, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(117, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(368, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s362(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(368, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(397, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(370, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s363(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(366, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(117, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(368, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s364(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(367, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(117, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(368, lexer, s));
	return (lex_end_state(lexer, s));
}
