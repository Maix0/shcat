/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yard_cmd_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:19:15 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 16:19:54 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

t_error		handle_tok_word_inner(t_token *tok, t_ast_node *out);
t_error		_tok_word(t_token *tok, t_ast_node *out);
t_const_str	_token_to_string(t_token *arg, bool dollar_exp);

t_const_str	_token_to_string(t_token *arg, bool dollar_exp)
{
	t_usize		i;
	t_string	s;
	t_const_str	tmp;

	if (arg == NULL || arg->type == TOK_NONE)
		return (NULL);
	s = string_new(16);
	if (arg->string.buf != NULL)
	{
		if (dollar_exp && arg->type == TOK_EXPENSION)
			string_push_char(&s, '$');
		string_push(&s, arg->string.buf);
	}
	else if (arg->subtokens.buffer != NULL)
	{
		i = 0;
		while (i < arg->subtokens.len)
		{
			tmp = _token_to_string(&arg->subtokens.buffer[i++], false);
			string_push(&s, tmp);
			str_free((t_str)tmp);
		}
	}
	return (s.buf);
}

t_error	handle_tok_word(t_ast_node cmd, t_token *tok)
{
	t_ast_node	word;

	if (cmd == NULL || cmd->kind != AST_COMMAND || tok == NULL
		|| tok->type != TOK_WORD)
		return (ERROR);
	if (handle_tok_word_inner(tok, &word))
		return (ERROR);
	vec_ast_push(&cmd->data.command.cmd_word, word);
	return (NO_ERROR);
}

t_error	handle_tok_word_inner(t_token *tok, t_ast_node *out)
{
	t_usize		i;
	t_ast_node	ret;
	t_ast_node	tmp;

	if (tok == NULL || out == NULL || tok->type != TOK_WORD)
		return (ERROR);
	i = 0;
	ret = ast_alloc(AST_WORD);
	ret->data.word.kind = AST_WORD_NO_QUOTE;
	while (i < tok->subtokens.len)
	{
		if (_tok_word(&tok->subtokens.buffer[i++], &tmp))
			return (ast_free(ret), ERROR);
		vec_ast_push(&ret->data.word.inner, tmp);
	}
	return (*out = ret, NO_ERROR);
}
