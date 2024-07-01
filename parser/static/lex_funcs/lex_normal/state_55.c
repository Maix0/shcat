/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_55.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s275(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(280, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(277, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(281, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s276(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(336, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(278, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s277(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_GT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s278(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_GT, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(323, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s279(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_AMP, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(282, lexer, s));
	return (lex_end_state(lexer, s));
}
