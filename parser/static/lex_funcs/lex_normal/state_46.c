/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_46.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s230(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_esac, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(12, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(432, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s231(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_esac, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(438, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s232(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s233(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s234(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(244, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(330, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(246, lexer, s));
	return (lex_end_state(lexer, s));
}
