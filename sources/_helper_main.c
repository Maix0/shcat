/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _helper_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:31:41 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/14 15:03:01 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/colors.h"
#include "app/env.h"
// #include "app/node.h"
#include "app/signal_handler.h"
#include "app/state.h"
#include "ast/ast.h"
#include "exec/_run_ast.h"
#include "line/line.h"
#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include <errno.h>
#include <sys/types.h>

void	ft_exit(t_state *maiboyerlpb, t_u8 exit_status);
t_error	parse_str(t_state *state);

t_error	get_user_input(t_state *state)
{
	t_line_state	lstate;

	if (line_edit_start(&lstate, get_stdin(), get_stdout(), state->prompt))
		return (ERROR);
	while (!line_edit_feed(&lstate, &state->str_input))
	{
		if (errno == EAGAIN)
		{
			errno = 0;
			lstate.pos = 0;
			state->last_exit = 127;
			string_clear(&lstate.buf);
			write_fd(lstate.output_fd, (void *)"^C\n", 3, NULL);
			line_refresh_line(&lstate);
		}
	}
	line_edit_stop(&lstate);
	return (NO_ERROR);
}

// for the norme line 62: print_node_data(&state->current_node, 0);
void	exec_shcat(t_state *state)
{
	t_program_result	prog_res;
	t_ast_node			prog;

	prog_res = (t_program_result){.exit = 0};
	if (state->ast->kind != AST_PROGRAM)
	{
		prog = ast_alloc(AST_PROGRAM);
		vec_ast_push(&prog->data.program.body, state->ast);
		state->ast = prog;
	}
	if (state->ast != NULL && run_program(&state->ast->data.program, state,
			&prog_res))
	{
		printf("Error when executing the cmd\n");
		state->last_exit = 127;
	}
	ast_free(state->ast);
}

void	ft_take_args(t_state *state)
{
	while (true)
	{
		state->str_input = NULL;
		if (get_user_input(state))
			ft_exit(state, 1);
		if (state->str_input == NULL)
			ft_exit(state, 0);
		line_history_add(state->str_input);
		if (parse_str(state))
		{
			state->last_exit = 2;
			mem_free(state->str_input);
			continue ;
		}
		exec_shcat(state);
		mem_free(state->str_input);
	}
}
