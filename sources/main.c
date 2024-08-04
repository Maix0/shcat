/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:38 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/04 14:15:02 by maiboyer         ###   ########.fr       */
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
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "parser/api.h"
#include <errno.h>
#include <sys/types.h>
#include "me/mem/mem.h"

t_error ast_from_node(t_parse_node node, t_str input, t_ast_node *out);
void	ast_print_node(t_ast_node self);
void	ft_exit(t_state *maiboyerlpb, t_u8 exit_status);

// Foutre envp dans env
// Chaque elemenet d'envp split au premier =
// cle avant le =
// data apres le =

t_language *tree_sitter_sh(void);
void		ast_free(t_ast_node node);

t_error split_str_first(t_const_str s, char splitter, t_str *before, t_str *after)
{
	t_usize i;

	if (s == NULL || before == NULL || after == NULL || splitter == '\0')
		return (ERROR);
	i = 0;
	while (s[i] != '\0' && s[i] != splitter)
		i++;
	if (s[i] == '\0')
		return (ERROR);
	if (i == 0)
		i = 1;
	*before = str_substring(s, 0, i);
	*after = str_substring(s, i + 1, ~(t_usize)0);
	return (NO_ERROR);
}

t_error populate_env(t_hashmap_env *env, t_str envp[])
{
	t_usize i;
	t_str	temp[2];

	i = 0;
	if (envp == NULL || env == NULL)
		return (printf("given a nullptr\n"), ERROR);
	while (envp[i] != NULL)
	{
		if (split_str_first(envp[i], '=', &temp[0], &temp[1]))
			return (ERROR);
		if (temp[0] == NULL || temp[1] == NULL)
			return (printf("TEMP NULL\n"), ERROR);
		if (hmap_env_insert(env, temp[0], temp[1]))
			printf("'%s' was already in the hmap ?????\n", temp[0]);
		i++;
	}
	return (NO_ERROR);
}

void print_node_data(t_node *t, t_usize depth)
{
	t_usize idx;

	idx = 0;
	if (t->kind == 7)
		return;
	printf("\x1b[%im[%-6s](%lu)\x1b[0m", t->field_str == NULL ? 90 : 32, t->field_str == NULL ? "nil" : t->field_str, t->field);
	while (idx++ < depth + 1)
		printf("\t");
	idx = 0;
	printf("%s(%lu) = %s\n", t->kind_str, t->kind, node_getstr(t));
	while (idx < t->childs_count)
		print_node_data(&t->childs[idx++], depth + 1);
}

t_node parse_str(t_state *state)
{
	t_first_tree *tree;
	t_parse_node  node;
	t_node		  ret;
	t_ast_node	  out;

	tree = ts_parser_parse_string(state->parser, NULL, state->str_input, str_len(state->str_input));
	node = ts_tree_root_node(tree);
	printf("BUILDING AST\n");
	if (ast_from_node(node, state->str_input, &out))
		(state->ast = NULL, printf("Error when building node\n"));
	else
		state->ast = out;
	ret = build_node(node, state->str_input);
	ts_tree_delete(tree);
	return (ret);
}

void exec_shcat(t_state *state)
{
	/* t_program_result prog_res; */
	/*  */
	/* prog_res = (t_program_result){.exit = 0}; */
	print_node_data(&state->current_node, 0);
	free_node(state->current_node);
	/* if (state->ast != NULL && run_program(&state->ast->data.program, state, &prog_res)) */
	/* 	printf("Error when execting the Command \n"); */
	ast_free(state->ast);
}

t_error get_user_input(t_state *state)
{
	t_line_state lstate;

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

void ft_take_args(t_state *state)
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
		/* ft_exit(state, 42); */
		mem_free(state->str_input);
	}
}

t_first_parser *create_myparser(void)
{
	t_language	   *lang;
	t_first_parser *parser;

	lang = tree_sitter_sh();
	parser = ts_parser_new();
	ts_parser_set_language(parser, lang);
	return (parser);
}

t_i32 main(t_i32 argc, t_str argv[], t_str envp[])
{
	t_state state;

	(void)argc;
	(void)argv;
	(void)envp;
	if (install_signal())
		me_abort("Unable to install signals");
	state = (t_state){};
	state.parser = create_myparser();
	state.env = create_env_map();
	state.tmp_var = create_env_map();
	if (populate_env(state.env, envp))
		me_abort("Unable to build env hashmap");
	state.prompt = COLB_YELLOW "42sh" COL_GREEN ">" COL_WHITE "$ " RESET;
	ft_take_args(&state);
}
