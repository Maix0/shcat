/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_117.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s585(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s586(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE_PIPE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s587(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASHo, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s588(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP_AMP, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s589(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASHa, lexer, s);
	return (lex_end_state(lexer, s));
}
