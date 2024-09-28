/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_lifetime.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:37:13 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/28 15:24:06 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/vec/vec_token.h"
#include "parser/token.h"

void	token_free(t_token tok)
{
	if (tok.string.buf != NULL)
		string_free(tok.string);
	if (tok.subtokens.buffer != NULL)
		vec_token_free(tok.subtokens);
}

t_token	token_new(enum e_token type)
{
	return ((t_token){.type = type, .string = string_new(16), \
		.subtokens = {NULL, 0, 0, NULL}});
}

t_token	token_new_meta(enum e_token type)
{
	return ((t_token){.type = type, .string = {NULL, 0, 0}, \
		.subtokens = vec_token_new(16, token_free)});
}

bool	token_is_meta(t_token tok)
{
	if (tok.type == WORD)
		return (true);
	return (false);
}
