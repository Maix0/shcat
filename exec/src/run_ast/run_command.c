/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_command.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:23:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/16 19:08:04 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/str/str.h"

t_error	_run_cmd_inner(
	t_ast_command *command, t_state *state, \
	t_redirections red, t_command_result *out)
{
	t_usize		i;
	t_vec_str	args;
	t_ast_node	tmp;

	args = vec_str_new(command->cmd_word.len, str_free);
	i = 0;
	while (i < command->cmd_word.len)
		if (_ast_into_str(command->cmd_word.buffer[i++], state, &args))
			return (vec_str_free(args), vec_ast_free(red.redirections), ERROR);
	i = 0;
	while (i < command->suffixes_redirections.len)
	{
		tmp = command->suffixes_redirections.buffer[i];
		if (tmp->kind == AST_FILE_REDIRECTION
			|| tmp->kind == AST_HEREDOC_REDIRECTION)
			vec_ast_push(&red.redirections, tmp);
		i++;
	}
	return (_spawn_cmd_and_run(args, red, \
		state, out));
}

// if
// (run_variable_assignment(&tmp->data.variable_assignment,
// state, true, NULL)) 	return (vec_str_free(args),
// vec_ast_free(redirection), ERROR);
t_error	run_command(t_ast_command *command, t_state *state, t_cmd_pipe cmd_pipe,
		t_command_result *out)
{
	t_redirections	red;
	t_usize			i;
	t_ast_node		tmp;

	if (command == NULL || state == NULL || out == NULL)
		return (ERROR);
	hmap_env_clear(state->tmp_var);
	red.redirections = vec_ast_new(command->suffixes_redirections.len, \
	ast_free);
	red.cmd_pipe = cmd_pipe;
	i = 0;
	while (i < command->prefixes.len)
	{
		tmp = command->prefixes.buffer[i];
		if (tmp->kind == AST_FILE_REDIRECTION
			|| tmp->kind == AST_HEREDOC_REDIRECTION)
			vec_ast_push(&red.redirections, tmp);
		if (tmp->kind == AST_VARIABLE_ASSIGNMENT)
			return (printf("Variable assignment aren't supported !\n"), ERROR);
		i++;
	}
	return (_run_cmd_inner(command, state, red, out));
}
