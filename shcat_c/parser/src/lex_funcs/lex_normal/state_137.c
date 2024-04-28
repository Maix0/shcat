/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_137.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s685(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_AMP_DASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s686(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_AMP_DASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s687(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_LT_DASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s688(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(688, lexer, s));
	if (s->lookahead == '+')
		return (lex_advance(771, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(769, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(307, lexer, s));
	if (s->lookahead == '~')
		return (lex_advance(772, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s689(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(689, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(14, lexer, s));
	return (lex_end_state(lexer, s));
}
