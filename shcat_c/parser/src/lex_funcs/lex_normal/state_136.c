/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_136.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s680(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP_GT, lexer, s);
	if (s->lookahead == '>')
		return (lex_advance(681, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s681(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AMP_GT_GT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s682(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT_AMP, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(685, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s683(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_AMP, lexer, s);
	if (s->lookahead == '-')
		return (lex_advance(686, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s684(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT_PIPE, lexer, s);
	return (lex_end_state(lexer, s));
}
