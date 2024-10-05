/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_quote_parsing.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:04:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/05 13:06:17 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/string/string.h"
#include "parser/passes.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"
#include "me/char/char.h"

void	push_token_and_create_new(\
	t_vec_token *tokens, t_token *tok, enum e_token ttype, t_const_str s);
void	push_token_and_set_new(\
	t_vec_token *tokens, t_token *tok, enum e_token ttype, t_const_str s);
void	push_token_and_create_new_chr(\
	t_vec_token *tokens, t_token *tok, enum e_token ttype, char c);
void	push_token_and_set_new_chr(\
	t_vec_token *tokens, t_token *tok, enum e_token ttype, char c);

t_error	_parse_dquote_inner(t_token dquote, t_vec_token *append)
{
	t_token	ctok;
	t_token	out;
	t_usize	i;
	char c;

	out = token_new_meta(TOK_DQUOTE);
	i = 0;
	ctok = token_new_none();
	while (dquote.string.buf[i] != '\0')
	{
		c = dquote.string.buf[i++];
		if (me_isspace(c))
		{
			if (ctok.type == TOK_NONE)
				ctok = token_new(TOK_WHITESPACE);
			if (ctok.type != TOK_WHITESPACE)
			{
				vec_token_push(&out.subtokens, ctok);
				ctok = token_new(TOK_WHITESPACE);
			}
			string_push_char(&ctok.string, c);
		}
		else if ('$')
			push_token_and_create_new(&out.subtokens, &ctok, TOK_DOLLAR, "$");	
		else if (!(me_isalnum(c) || c == '_'))
			push_token_and_create_new_chr(&out.subtokens, &ctok, TOK_NALPHANUM, c);
		else
		{
			if (ctok.type == TOK_NONE)
				ctok = token_new(TOK_NQUOTE);
			if (ctok.type != TOK_NQUOTE)
			{
				vec_token_push(&out.subtokens, ctok);
				ctok = token_new(TOK_NQUOTE);
			}
			string_push_char(&ctok.string, c);
		}
	};
	if (ctok.type != TOK_NONE)
		vec_token_push(&out.subtokens, ctok);
	if (ts_dq_apply_passes(out.subtokens, &out.subtokens))
		return (ERROR);
	return (vec_token_push(append, out), NO_ERROR);
}

/// There is a few rules the rest of the tokenizer machinery assumes
/// theses function follows:
/// 	- the input vec WILL be freed when the function return, even in
/// 		case of error
/// 	- the output vector isn't populated if the function returns an error,
/// 		thus it shouldn't be freed in case of error
/// 	- the output tokens may not be direct copy of the input tokens,
/// 		but need to be cloned (different allocations for stuff)
t_error	ts_double_string_pass(t_vec_token input, t_vec_token *output)
{
	t_vec_token	out;
	t_usize		i;

	i = 0;
	out = vec_token_new(input.len, token_free);
	while (i < input.len)
	{
		if (input.buffer[i].type == TOK_DQUOTE)
		{
			if (_parse_dquote_inner(input.buffer[i], &out))
				return (vec_token_free(input), ERROR);
		}
		else 
			vec_token_push(&out, token_clone(&input.buffer[i]));
		i++;
	}
	vec_token_free(input);
	return (*output = out, NO_ERROR);
}
