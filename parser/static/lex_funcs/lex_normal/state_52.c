/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_52.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s260(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_GT, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(326, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s261(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP_GT, lexer, s);
	if (s->lookahead == '>')
		return (lex_advance(262, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s262(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP_GT_GT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s263(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_AMP, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(266, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s264(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_AMP, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(267, lexer, s));
	return (lex_end_state(lexer, s));
}
