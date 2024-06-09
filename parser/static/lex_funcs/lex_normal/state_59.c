/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_59.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s295(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP_GT, lexer, s);
	if (s->lookahead == '>')
		return (lex_advance(296, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s296(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP_GT_GT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s297(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_AMP, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(300, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s298(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_AMP, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(301, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s299(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_PIPE, lexer, s);
	return (lex_end_state(lexer, s));
}
