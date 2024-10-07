/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fold_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:04:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/07 16:45:41 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/string/string.h"
#include "parser/passes.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

static bool _is_cmd_node(enum e_token ttype)
{
	return (ttype == TOK_WHITESPACE || ttype == TOK_WORD);
};

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

t_error	ts_fold_cmd(t_vec_token input, t_vec_token *output)
{
	t_vec_token	out;
	t_usize		i;
	t_usize		j;
	t_token		tmp;

	i = 0;
	out = vec_token_new(input.len, token_free);
	while (i < input.len)
	{
		if (_is_cmd_node(input.buffer[i].type))
		{
			j = 0;
			tmp = token_new(TOK_CMD);
			while (i + j < input.len \
					&& _is_cmd_node(input.buffer[i + j].type))
				vec_token_push(&tmp.subtokens, token_clone(&input.buffer[i + j++]));
			vec_token_push(&out, tmp);
			i += j;
		}
		else
			vec_token_push(&out, token_clone(&input.buffer[i++]));
	}
	vec_token_free(input);
	return (*output = out, NO_ERROR);
}
