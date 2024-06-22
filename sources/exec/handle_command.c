/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:00:53 by rparodi           #+#    #+#             */
/*   Updated: 2024/06/21 13:55:02 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "app/node.h"
#include "app/state.h"
#include "gmr/symbols.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_str.h"
// #include "app/node/handle_program.h"
#include "app/node/handle_command.h"
#include "me/str/str.h"
#include "minishell.h"
#include <time.h>

void handle_command_free_infork(void *vshcat)
{
	t_utils *shcat;

	shcat = vshcat;
	(void)(shcat);
	//ft_exit(shcat, 255);
}

t_error handle_command(t_node *self, t_utils *shcat, t_i32 *out_exit_code)
{
	t_usize		 i;
	t_spawn_info spawn_info;

	spawn_info.arguments =
		vec_str_new(64, (void (*)(t_str))mem_free); // TODO: FIX VECTOR
	if (self->kind != sym_command)
		return (ERROR);
	i = 0;
	while (i < self->childs_count)
	{
		if (self->childs[i].kind == sym_command_name)
		{
			spawn_info.binary_path = str_clone(node_getstr(&self->childs[i]));
			vec_str_push(&spawn_info.arguments,
						 str_clone(spawn_info.binary_path));
			printf("%s\n", spawn_info.arguments.buffer[0]);
		}
		else if (self->childs[i].kind == sym_file_redirect)
			printf("PAS ENCORE HANDLE FDP redirect!\n");
		else if (self->childs[i].kind == sym_variable_assignment)
			printf("PAS ENCORE HANDLE FDP asignement!\n");
		else
		{
		}
		i++;
	}
	spawn_info.stdin = inherited();
	spawn_info.stdout = inherited();
	spawn_info.stderr = inherited();
	spawn_info.forked_free = handle_command_free_infork;
	if (build_envp(shcat->env, &spawn_info.environement))
		return (vec_str_free(spawn_info.arguments), ERROR);
	if (spawn_process(spawn_info, &shcat->ret))
		return (ERROR);
	waitpid(shcat->ret.pid, NULL, 0);
	close(shcat->ret.stdin.vals.ro.fd);
	close(shcat->ret.stdout.vals.ro.fd);
	close(shcat->ret.stderr.vals.ro.fd);
	*out_exit_code = 0;
	return (NO_ERROR);
}
