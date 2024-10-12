/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fold_redir.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:04:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:52 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/passes.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

bool	_is_token_carret(enum e_token ttype)
{
	return (ttype == TOK_LCARRET \
		|| ttype == TOK_DLCARRET \
		|| ttype == TOK_RCARRET \
		|| ttype == TOK_DRCARRET);
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
/// This function will take any ``
t_error	ts_fold_redir(t_vec_token input, t_vec_token *output)
{
	t_vec_token	out;
	t_usize		i;
	t_token		tmp;

	i = 0;
	out = vec_token_new(input.len, token_free);
	while (i < input.len)
	{
		if (vec_token_get(&input, i + 1) != NULL \
			&& _is_token_carret(vec_token_get(&input, i)->type) \
			&& vec_token_get(&input, i + 1)->type == TOK_WORD)
		{
			tmp = token_new_meta(TOK_REDIR);
			vec_token_push(&tmp.subtokens, \
				token_clone(vec_token_get(&input, i++)));
			vec_token_push(&tmp.subtokens, \
				token_clone(vec_token_get(&input, i++)));
			vec_token_push(&out, tmp);
		}
		else
			vec_token_push(&out, token_clone(&input.buffer[i++]));
	}
	vec_token_free(input);
	return (*output = out, NO_ERROR);
}
