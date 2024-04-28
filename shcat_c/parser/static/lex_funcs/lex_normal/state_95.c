/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_95.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s475(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map475(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(475, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && (s->lookahead > '[' && s->lookahead \
	< ']')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s476(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map476(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(393, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(818, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	s->lookahead == '{'))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(476, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s477(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(788, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(862, lexer, s));
	if (s->lookahead == '\'')
		return (lex_advance(491, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(655, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(395, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(818, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_advance(842, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s478(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map478(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(478, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(805, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && (s->lookahead > '{' && s->lookahead < '}')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s479(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map479(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(479, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(805, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')') && s->lookahead != ';' && s->lookahead \
	!= '<' && (s->lookahead > '{' && s->lookahead < '}')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}
