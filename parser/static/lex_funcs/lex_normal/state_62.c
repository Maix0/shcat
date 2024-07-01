/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_62.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s310(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(310, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(72, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(467, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s311(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PIPE_AMP, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s312(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s313(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RPAREN_RPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s314(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}
