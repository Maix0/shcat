/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:33:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:56 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/token.h"
#include <stdio.h>

t_str	token_name(t_token *token);

t_token	token_clone(t_token *tok)
{
	t_token	ret;
	t_usize	i;

	ret = token_new_none();
	ret.type = tok->type;
	if (tok->string.buf != NULL)
	{
		ret.string = string_new(tok->string.capacity);
		string_push(&ret.string, tok->string.buf);
	}
	if (tok->subtokens.buffer != NULL)
	{
		ret.subtokens = vec_token_new(tok->subtokens.capacity, token_free);
		i = 0;
		while (i < tok->subtokens.len)
			vec_token_push(&ret.subtokens, token_clone(\
											&tok->subtokens.buffer[i++]));
	}
	return (ret);
}

bool	token_is_noquote(enum e_token ttype)
{
	return (ttype == TOK_NQUOTE \
		|| ttype == TOK_DOLLAR \
		|| ttype == TOK_NALPHANUM);
}
