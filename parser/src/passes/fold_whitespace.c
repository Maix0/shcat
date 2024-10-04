/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fold_whitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:04:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/04 17:47:32 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/passes.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

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

t_error	ts_fold_whitespace(t_vec_token input, t_vec_token *output)
{
	t_vec_token	out;
	t_usize		i;

	i = 0;
	out = vec_token_new(input.len, token_free);
	if (input.buffer[i].type == TOK_WHITESPACE)
		vec_token_push(&out, token_clone(&input.buffer[i]));
	while (i < input.len)
	{
		if (input.len >= i + 1)
		{
			if (input.buffer[i].type == TOK_WHITESPACE)
				i++;
	}
		i++;
	}
	vec_token_free(input);
	return (*output = out, NO_ERROR);
}

static const struct s_ts_pass_def	g_ts_dq_passes[] = {\
	{ts_do_fuck_all, "does nothing lol"}, \
	{ts_fold_whitespace, "fold whitespace"},
};
