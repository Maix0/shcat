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
	lex_accept_token(anon_sym_unsetenv, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_default(t_lexer *lexer, t_lexer_state *s)
{
	(void)(lexer);
	(void)(s);
	s->result = false;
	return (false);
}
