/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_93.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s465(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '!')
		return (lex_advance(261, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(125, lexer, s));
	if (s->lookahead == 'd')
		return (lex_advance(486, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(255, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(465, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s466(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '!')
		return (lex_advance(261, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(127, lexer, s));
	if (s->lookahead == 'f')
		return (lex_advance(481, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(255, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(466, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s467(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '!')
		return (lex_advance(261, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(129, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(255, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(257, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(467, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s468(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '!')
		return (lex_advance(261, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(144, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(487, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(255, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(468, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s469(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(131, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(255, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(469, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
