/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_102.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s510(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '!')
		return (lex_advance(282, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(534, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(520, lexer, s));
	if (s->lookahead == '0')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(139, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(276, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(278, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(510, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(404, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s511(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '!')
		return (lex_advance(282, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(534, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(520, lexer, s));
	if (s->lookahead == '0')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(141, lexer, s));
	if (s->lookahead == 'f')
		return (lex_advance(525, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(276, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(511, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(404, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s512(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '!')
		return (lex_advance(282, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(534, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(520, lexer, s));
	if (s->lookahead == '0')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(158, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(531, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(276, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(512, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(404, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s513(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(534, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(520, lexer, s));
	if (s->lookahead == '0')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(143, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(276, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(513, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(404, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s514(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(534, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(520, lexer, s));
	if (s->lookahead == '0')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(151, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(514, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(404, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}
