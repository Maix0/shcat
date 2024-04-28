/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_14.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s70(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'l')
		return (lex_advance(80, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s71(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(81, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s72(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'r')
		return (lex_advance(82, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s73(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 't')
		return (lex_advance(83, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s74(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'i')
		return (lex_advance(84, lexer, s));
	return (lex_end_state(lexer, s));
}
