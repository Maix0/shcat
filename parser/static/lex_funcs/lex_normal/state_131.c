/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_131.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s655(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s656(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__c_word_token1, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(656, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s657(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_esac, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s658(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_esac, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(868, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s659(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_esac, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}
