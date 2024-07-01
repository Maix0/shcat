/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_91.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s455(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map455(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(455, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(373, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(405, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s456(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map456(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(456, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(373, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(405, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s457(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map457(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(457, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(373, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(405, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s458(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map458(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(458, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(373, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(405, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s459(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map459(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(459, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r') && (s->lookahead > ' ' && \
	s->lookahead < '+') && (s->lookahead > '/' && s->lookahead \
	< '@') && (s->lookahead > '^' && s->lookahead < '`') && \
	(s->lookahead > '{' && s->lookahead < '~')))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
