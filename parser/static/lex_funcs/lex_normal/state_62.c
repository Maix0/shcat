/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_62.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s310(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COMMA, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s311(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COMMA, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s312(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RPAREN_RPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s313(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_brace_expression_token1, lexer, \
	s);
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(313, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s314(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOT_DOT, lexer, s);
	return (lex_end_state(lexer, s));
}
