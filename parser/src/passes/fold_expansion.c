/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fold_expansion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:04:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:51 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/passes.h"
#include "parser/token.h"

bool	_can_be_varname(t_token *tok)
{
	if (tok->type == TOK_DOLLAR)
		return (true);
	if (tok->type != TOK_NALPHANUM)
		return (false);
	return (str_find_chr("!?#*-", tok->string.buf[0]) != NULL);
}

/// This is a sample pass
///
/// There is a few rules the rest of the tokenizer machinery assumes
/// theses function follows:
/// 	- the input vec WILL be freed when the function return, even in
/// 		case of error
/// 	- the output vector isn't populated if the function returns an error,
/// 		thus it shouldn't be freed in case of error
/// 	- the output tokens may not be direct copy of the input tokens,
/// 		but need to be cloned (different allocations for stuff)
t_error	ts_fold_expension(t_vec_token input, t_vec_token *output)
{
	t_vec_token	out;
	t_usize		i;
	t_token		tmp;

	i = 0;
	out = vec_token_new(input.len, token_free);
	while (i < input.len)
	{
		if (i + 1 >= input.len)
			vec_token_push(&out, token_clone(&input.buffer[i]));
		else if (input.buffer[i].type == TOK_DOLLAR \
			&& (input.buffer[i + 1].type == TOK_NQUOTE \
				|| _can_be_varname(&input.buffer[i + 1])))
		{
			tmp = token_clone(&input.buffer[++i]);
			tmp.type = TOK_EXPENSION;
			vec_token_push(&out, tmp);
		}
		else
			vec_token_push(&out, token_clone(&input.buffer[i]));
		i++;
	}
	vec_token_free(input);
	return (*output = out, NO_ERROR);
}
