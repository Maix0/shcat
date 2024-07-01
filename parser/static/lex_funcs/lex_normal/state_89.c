/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_89.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s445(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map445(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(445, lexer, s));
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

bool	lex_normal_s446(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(286, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(133, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(446, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s447(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(287, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(135, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(487, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(447, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s448(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map448(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(448, lexer, s));
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

bool	lex_normal_s449(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map449(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(449, lexer, s));
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
