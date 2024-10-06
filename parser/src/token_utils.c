/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:33:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/06 13:33:48 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/token.h"

t_token	token_clone(t_token *tok)
{
	t_token	out;
	t_usize	i;

	out = token_new_none();
	out.type = tok->type;
	if (tok->string.buf != NULL)
	{
		out.string = string_new(tok->string.capacity);
		string_push(&out.string, tok->string.buf);
	}
	if (tok->subtokens.buffer != NULL)
	{
		out.subtokens = vec_token_new(tok->subtokens.capacity, token_free);
		i = 0;
		while (i < tok->subtokens.len)
			vec_token_push(&out.subtokens, \
				token_clone(&tok->subtokens.buffer[i++]));
	}
	return (out);
}

bool	token_is_noquote(enum e_token ttype)
{
	return (ttype == TOK_NQUOTE \
		|| ttype == TOK_DOLLAR \
		|| ttype == TOK_NALPHANUM);
}
