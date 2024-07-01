/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_92.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s460(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map460(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(460, lexer, s));
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

bool	lex_normal_s461(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map461(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(461, lexer, s));
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

bool	lex_normal_s462(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (lex_normal_map462(lexer, s))
		return (true);
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(462, lexer, s));
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

bool	lex_normal_s463(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '!')
		return (lex_advance(261, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(118, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(255, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(463, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s464(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '!')
		return (lex_advance(261, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(120, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(484, lexer, s));
	if (s->lookahead == 'f')
		return (lex_advance(481, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(255, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(464, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
