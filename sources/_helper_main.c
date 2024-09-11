/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _helper_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:31:41 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/11 18:29:04 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/colors.h"
#include "app/env.h"
#include "app/node.h"
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
#include "parser/api.h"
#include <errno.h>
#include <sys/types.h>
#include "parser/inner/parser_inner.h"

void		ft_exit(t_state *maiboyerlpb, t_u8 exit_status);
void		print_node_data(t_node *t, t_usize depth);
t_node		parse_str(t_state *state);
t_language	*tree_sitter_sh(void);

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
			string_clear(&lstate.buf);
			write_fd(lstate.output_fd, (void *)"^C\n", 3, NULL);
			line_refresh_line(&lstate);
		}
	}
	line_edit_stop(&lstate);
	return (NO_ERROR);
}

void	exec_shcat(t_state *state)
{
	t_program_result	prog_res;

	prog_res = (t_program_result){.exit = 0};
	//print_node_data(&state->current_node, 0);
	free_node(state->current_node);
	if (state->ast != NULL && run_program(\
			&state->ast->data.program, state, &prog_res))
		printf("Error when execting the Command \n");
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
		state->current_node = parse_str(state);
		exec_shcat(state);
		mem_free(state->str_input);
	}
}

t_first_parser	*create_myparser(void)
{
	t_first_parser	*parser;

	parser = ts_parser_new(tree_sitter_sh());
	return (parser);
}
