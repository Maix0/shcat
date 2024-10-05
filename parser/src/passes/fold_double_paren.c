/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fold_double_paren.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:04:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/05 18:43:52 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/string/string.h"
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

t_error	ts_double_lparen(t_vec_token input, t_vec_token *output)
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
		else if (input.buffer[i].type == TOK_LPAREN
				&& input.buffer[i + 1].type == TOK_LPAREN)
		{
			tmp = token_new(TOK_DLPAREN);
			string_push(&tmp.string, "((");
			vec_token_push(&out, tmp);
			i++;
		}
		else
			vec_token_push(&out, token_clone(&input.buffer[i]));
		i++;
	}
	vec_token_free(input);
	return (*output = out, NO_ERROR);
}

t_error	ts_double_rparen(t_vec_token input, t_vec_token *output)
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
		else if (input.buffer[i].type == TOK_RPAREN
				&& input.buffer[i + 1].type == TOK_RPAREN)
		{
			tmp = token_new(TOK_DRPAREN);
			string_push(&tmp.string, "))");
			vec_token_push(&out, tmp);
			i++;
		}
		else
			vec_token_push(&out, token_clone(&input.buffer[i]));
		i++;
	}
	vec_token_free(input);
	return (*output = out, NO_ERROR);
}
