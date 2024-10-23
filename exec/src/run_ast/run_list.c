/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:34:33 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/23 15:01:54 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"

t_error	_append_redir(t_ast_list *list)
{
	t_vec_ast			*append;
	t_ast_node			tmp;

	append = NULL;
	if (list->right->kind == AST_COMMAND)
		append = &list->right->data.command.suffixes_redirections;
	if (list->right->kind == AST_PIPELINE)
		append = &list->right->data.pipeline.suffixes_redirections;
	if (list->right->kind == AST_LIST)
		append = &list->right->data.list.suffixes_redirections;
	if (list->right->kind == AST_SUBSHELL)
		append = &list->right->data.subshell.suffixes_redirections;
	if (append != NULL)
	{
		while (!vec_ast_pop_front(&list->suffixes_redirections, &tmp))
			vec_ast_push(append, tmp);
	}
	return (NO_ERROR);
}

t_error	run_list(t_ast_list *list, t_state *state, t_list_result *out)
{
	int					left;
	int					right;

	if (list == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (_append_redir(list))
		return (ERROR);
	left = -1;
	right = -1;
	if (_run_get_exit_code(list->left, state, &left))
		left = 127;
	if ((list->op == AST_LIST_OR && left != 0) || (list->op == AST_LIST_AND
			&& left == 0))
	{
		if (_run_get_exit_code(list->right, state, &right))
			right = 127;
		out->exit = right;
	}
	else
		out->exit = left;
	state->last_exit = out->exit;
	return (NO_ERROR);
}
