/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_72.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s360(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS, lexer, s);
	if (s->lookahead == '+')
		return (lex_advance(385, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(336, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s361(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s362(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(386, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(337, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s363(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH, lexer, s);
	if (s->lookahead == '0')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(234, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(404, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s364(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR, lexer, s);
	return (lex_end_state(lexer, s));
}
