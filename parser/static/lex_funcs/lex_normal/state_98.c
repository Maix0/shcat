/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_98.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s490(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(315, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(534, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(520, lexer, s));
	if (s->lookahead == '0')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(153, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(531, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(490, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(404, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s491(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(316, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(534, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(520, lexer, s));
	if (s->lookahead == '0')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(149, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(491, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(404, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s492(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map492(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(492, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(405, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(443, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s493(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(319, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(534, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(520, lexer, s));
	if (s->lookahead == '0')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(163, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(531, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(493, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(404, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s494(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(320, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(534, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(520, lexer, s));
	if (s->lookahead == '0')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(155, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(494, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(404, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}
