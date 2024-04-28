/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_133.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s665(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_SEMI_SEMI_AMP, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s666(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LBRACE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s667(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RBRACE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s668(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE_AMP, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s669(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BANG, lexer, s);
	return (lex_end_state(lexer, s));
}
