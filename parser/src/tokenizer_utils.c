/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenizer_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:07:25 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/06 13:25:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

// These *should* be stable-ish, just copy the definition into the files to
// use them
void	push_token_and_create_new(\
	t_vec_token *tokens, t_token *tok, enum e_token ttype, t_const_str s);
void	push_token_and_set_new(\
	t_vec_token *tokens, t_token *tok, enum e_token ttype, t_const_str s);
void	push_token_and_create_new_chr(\
	t_vec_token *tokens, t_token *tok, enum e_token ttype, char c);
void	push_token_and_set_new_chr(\
	t_vec_token *tokens, t_token *tok, enum e_token ttype, char c);

void	push_token_and_create_new(\
	t_vec_token *tokens, t_token *tok, enum e_token ttype, t_const_str s)
{
	t_token	tmp;

	if (tok->type != TOK_NONE)
		vec_token_push(tokens, *tok);
	*tok = token_new_none();
	tmp = token_new(ttype);
	string_push(&tmp.string, s);
	vec_token_push(tokens, tmp);
}

void	push_token_and_set_new(\
	t_vec_token *tokens, t_token *tok, enum e_token ttype, t_const_str s)
{
	if (tok->type != TOK_NONE)
		vec_token_push(tokens, *tok);
	*tok = token_new(ttype);
	string_push(&tok->string, s);
}

void	push_token_and_create_new_chr(\
	t_vec_token *tokens, t_token *tok, enum e_token ttype, char c)
{
	char	tmp[2];

	tmp[0] = c;
	tmp[1] = '\0';
	push_token_and_create_new(tokens, tok, ttype, (t_const_str) & tmp);
}

void	push_token_and_set_new_chr(\
	t_vec_token *tokens, t_token *tok, enum e_token ttype, char c)
{
	char	tmp[2];

	tmp[0] = c;
	tmp[1] = '\0';
	push_token_and_set_new(tokens, tok, ttype, (t_const_str) & tmp);
}
