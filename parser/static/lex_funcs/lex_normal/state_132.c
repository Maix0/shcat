/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_132.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s660(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_esac, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(17, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(873, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s661(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_esac, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s662(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SEMI_SEMI, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s663(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SEMI_SEMI, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(665, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s664(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SEMI_AMP, lexer, s);
	return (lex_end_state(lexer, s));
}
