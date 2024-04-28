/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_17.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s85(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'l')
		return (lex_advance(91, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s86(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_select, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s87(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 't')
		return (lex_advance(92, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s88(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'n')
		return (lex_advance(93, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s89(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_declare, lexer, s);
	return (lex_end_state(lexer, s));
}
