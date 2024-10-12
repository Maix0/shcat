/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yard_cmd_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:14:55 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:58 by rparodi          ###   ########.fr       */
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

t_error	_tok_word_expansion(t_token *tok, t_ast_node *out)
{
	t_ast_node	ret;

	ret = ast_alloc(AST_EXPANSION);
	ret->data.expansion.var_name = (t_str)_token_to_string(tok, false);
	return (*out = ret, NO_ERROR);
}

t_error	_tok_word_nquote(t_token *tok, t_ast_node *out)
{
	t_ast_node	ret;

	ret = ast_alloc(AST_RAW_STRING);
	ret->data.raw_string.str = (t_str)_token_to_string(tok, false);
	return (*out = ret, NO_ERROR);
}

t_error	_tok_word_squote(t_token *tok, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;

	ret = ast_alloc(AST_WORD);
	tmp = ast_alloc(AST_RAW_STRING);
	tmp->data.raw_string.str = (t_str)_token_to_string(tok, false);
	vec_ast_push(&ret->data.word.inner, tmp);
	ret->data.word.kind = AST_WORD_SINGLE_QUOTE;
	return (*out = ret, NO_ERROR);
}

t_error	_tok_word_dquote(t_token *tok, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	ret = ast_alloc(AST_WORD);
	ret->data.word.kind = AST_WORD_DOUBLE_QUOTE;
	i = 0;
	while (i < tok->subtokens.len)
	{
		if (_tok_word(&tok->subtokens.buffer[i++], &tmp))
			return (ast_free(ret), ERROR);
		vec_ast_push(&ret->data.word.inner, tmp);
	}
	return (*out = ret, NO_ERROR);
}

t_error	_tok_word(t_token *tok, t_ast_node *out)
{
	if (tok->type == TOK_EXPENSION)
		return (_tok_word_expansion(tok, out));
	else if (tok->type == TOK_NQUOTE || tok->type == TOK_WHITESPACE)
		return (_tok_word_nquote(tok, out));
	else if (tok->type == TOK_SQUOTE)
		return (_tok_word_squote(tok, out));
	else if (tok->type == TOK_DQUOTE)
		return (_tok_word_dquote(tok, out));
	return (ERROR);
}
