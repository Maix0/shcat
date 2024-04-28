/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_182.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s910(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map910(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(278, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(807, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(873, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '>' && \
	s->lookahead < ']') && (s->lookahead > '_' && s->lookahead \
	< '}')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s911(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map911(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(280, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(807, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(873, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*') && (s->lookahead > '>' && s->lookahead \
	< ']') && (s->lookahead > '_' && s->lookahead < '}')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s912(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map912(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(282, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(807, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(873, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*') && (s->lookahead > ';' && s->lookahead \
	< ']') && (s->lookahead > '_' && s->lookahead < '}')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s913(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map913(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(284, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(807, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(873, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*') && s->lookahead != ';' && s->lookahead \
	!= '<' && (s->lookahead > '>' && s->lookahead < ']') && \
	(s->lookahead > '_' && s->lookahead < '}')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s914(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__multiline_variable_name_token1, \
	lexer, s);
	if (lex_normal_map914(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(286, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(807, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(873, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*') && s->lookahead != ';' && s->lookahead \
	!= '<' && (s->lookahead > '>' && s->lookahead < ']') && \
	(s->lookahead > '_' && s->lookahead < '}')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}
