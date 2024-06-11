/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

t_lex_normal_array	*create_lex_normal(void);

bool	lex_normal_call(t_lexer *lexer, t_lexer_state *s)
{
	t_lex_normal_array	*t;

	t = create_lex_normal();
	if (s->state < 531)
	{
		return (((bool (*)(t_lexer *, t_lexer_state \
	*))(t->a[s->state]))(lexer, s));
	}
	return (lex_normal_default(lexer, s));
}

bool	lex_normal_main(t_lexer *lexer, t_state_id state)
{
	t_lexer_state	s;

	s = (t_lexer_state){.result = false, .skip = false, .eof = \
	false};
	s.state = state;
	s.skip = false;
	s.lookahead = lexer->lookahead;
	s.eof = lexer->eof(lexer);
	while (lex_normal_call(lexer, &s))
	{
		lexer->advance(lexer, s.skip);
		s.skip = false;
		s.lookahead = lexer->lookahead;
		s.eof = lexer->eof(lexer);
	}
	return (s.result);
}
/* main_func.c */
