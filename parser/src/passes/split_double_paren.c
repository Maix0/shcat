/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_double_paren.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:04:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:54 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/string/string.h"
#include "parser/passes.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

static void	_split_parens_helper(t_vec_token *v, enum e_token ty, char c)
{
	t_token	tmp;

	tmp = token_new(ty);
	string_push_char(&tmp.string, c);
	vec_token_push(v, tmp);
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

t_error	ts_split_paren(t_vec_token input, t_vec_token *output)
{
	t_vec_token	out;
	t_usize		i;

	i = 0;
	out = vec_token_new(input.len, token_free);
	while (i < input.len)
	{
		if (input.buffer[i].type == TOK_DLPAREN)
		{
			_split_parens_helper(&out, TOK_LPAREN, '(');
			_split_parens_helper(&out, TOK_LPAREN, '(');
		}
		else if (input.buffer[i].type == TOK_DRPAREN)
		{
			_split_parens_helper(&out, TOK_RPAREN, ')');
			_split_parens_helper(&out, TOK_RPAREN, ')');
		}
		else
			vec_token_push(&out, token_clone(&input.buffer[i]));
		i++;
	}
	vec_token_free(input);
	return (*output = out, NO_ERROR);
}
