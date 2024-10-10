/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_invalid_tokens.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:04:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/10 15:28:49 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/printf/printf.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/passes.h"
#include "parser/token.h"

bool	_is_invalid(enum e_token ty)
{
	return (ty == TOK_NONE || ty == TOK_SEMICOLON || ty == TOK_AMP \
	|| (!BONUS && \
	(ty == TOK_OR || ty == TOK_AND || ty == TOK_LPAREN || ty == TOK_RPAREN)));
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

t_error	ts_verify_tokens(t_vec_token input, t_vec_token *output)
{
	t_vec_token	out;
	t_usize		i;

	i = 0;
	out = vec_token_new(input.len, token_free);
	while (i < input.len)
	{
		if (_is_invalid(input.buffer[i].type))
		{
			me_eprintf("Invalid token found, this could be due to the fact " \
	"that the project wasn't compiled with bonuses, or you failed " \
	"to type your command.\ntok->type = %02X\n", input.buffer[i].type);
			vec_token_free(input);
			vec_token_free(out);
			return (ERROR);
		}
		vec_token_push(&out, token_clone(&input.buffer[i]));
		i++;
	}
	vec_token_free(input);
	return (*output = out, NO_ERROR);
}
