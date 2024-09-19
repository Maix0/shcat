/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:27:10 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/02 17:35:01 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_from_node.h"
#include "ast/ast.h"
#include "gmr/field_identifiers.h"
#include "gmr/symbols.h"
#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "parser/api.h"
#include <stdio.h>

t_error	build_sym_word(\
	t_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_str		temp_str;
	t_ast_node	temp;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_word)
		return (ERROR);
	ret = ast_alloc(AST_WORD);
	ret->data.word.kind = AST_WORD_NO_QUOTE;
	temp = ast_alloc(AST_RAW_STRING);
	temp_str = _extract_str(self, input);
	temp->data.raw_string.str = temp_str;
	temp->data.raw_string.len = str_len(temp_str);
	temp->data.raw_string.kind = AST_WORD_NO_QUOTE;
	vec_ast_push(&ret->data.word.inner, temp);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_string(\
	t_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;
	t_ast_node	temp;

	(void)(self);
	(void)(input);
	(void)(out);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_string)
		return (ERROR);
	ret = ast_alloc(AST_WORD);
	ret->data.word.kind = AST_WORD_DOUBLE_QUOTE;
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ast_from_node(ts_node_child(self, i), input, &temp))
			return (ast_free(ret), ERROR);
		vec_ast_push(&ret->data.word.inner, temp);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_concatenation(\
	t_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;
	t_ast_node	temp;

	(void)(self);
	(void)(input);
	(void)(out);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_concatenation)
		return (ERROR);
	ret = ast_alloc(AST_WORD);
	ret->data.word.kind = AST_WORD_NO_QUOTE;
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (ast_from_node(ts_node_child(self, i), input, &temp))
			return (ast_free(ret), ERROR);
		vec_ast_push(&ret->data.word.inner, temp);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_string_content(\
	t_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_str		temp_str;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_string_content)
		return (ERROR);
	ret = ast_alloc(AST_RAW_STRING);
	temp_str = _extract_str(self, input);
	ret->data.raw_string.str = temp_str;
	ret->data.raw_string.len = str_len(temp_str);
	ret->data.raw_string.kind = AST_WORD_DOUBLE_QUOTE;
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_raw_string(\
	t_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	temp;
	t_str		temp_str;

	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_raw_string)
		return (ERROR);
	ret = ast_alloc(AST_WORD);
	temp = ast_alloc(AST_RAW_STRING);
	temp_str = _extract_str(self, input);
	temp->data.raw_string.str = temp_str;
	temp->data.raw_string.len = str_len(temp_str);
	temp->data.raw_string.kind = AST_WORD_SINGLE_QUOTE;
	temp->data.raw_string.start = true;
	temp->data.raw_string.end = true;
	ret->data.word.kind = AST_WORD_SINGLE_QUOTE;
	vec_ast_push(&ret->data.word.inner, temp);
	return (*out = ret, NO_ERROR);
}
