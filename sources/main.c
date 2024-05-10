/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:38 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/08 19:22:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "app/node.h"
#include "app/signal_handler.h"
#include "gmr/symbols.h"
#include "me/alloc/alloc.h"
#include "me/string/str_len.h"
#include "minishell.h"
#include "parser/api.h"

#undef free
#undef malloc
#undef realloc
#undef calloc

t_first_parser *ts_parser_new();
void			ts_tree_delete(t_first_tree *);
t_parse_node	ts_tree_root_node(t_first_tree *);
t_first_tree   *ts_parser_parse_string(t_first_parser *, t_first_tree *oldtree,
									   t_const_str input, t_usize len);
void			ts_parser_delete(t_first_parser *self);
void			ts_parser_set_language(t_first_parser *self, t_language *lang);

void print_node_data(t_node *t, t_usize depth)
{
	t_usize idx;

	idx = 0;
	while (idx++ < depth)
		printf("\t");
	idx = 0;
	printf("%s(%lu) = %s\n", t->kind_str, t->kind, node_getstr(t));
	while (idx < t->childs_count)
		print_node_data(&t->childs[idx++], depth + 1);
}

t_node parse_to_nodes(t_first_parser *parser, t_const_str input)
{
	t_first_tree *tree;
	t_parse_node  node;
	t_node		  ret;

	tree = ts_parser_parse_string(parser, NULL, input, str_len(input));
	node = ts_tree_root_node(tree);
	ret = build_node(node, input);
	ts_tree_delete(tree);
	return (ret);
}
t_node parse_str(t_parser *parser, t_const_str input)
{
	return (parse_to_nodes(parser->parser, input));
}

// void ft_check(t_utils *shcat, char **input)
// {
// 	t_usize i;
// 	t_usize prev_i;
//
// 	i = 0;
// 	prev_i = 0;
// 	while (input[i] != NULL)
// 	{
// 		if (ft_strcmp(input[i], "exit") == 0)
// 			ft_exit(shcat, 0);
// 		else if (ft_strcmp(input[i], "pwd") == 0)
// 			ft_pwd();
// 		else
// 			ft_other_cmd(shcat, i, prev_i);
// 		prev_i = i;
// 		i++;
// 	}
// }

t_error handle_concat(t_node *self, t_utils *shcat, t_str *ret);

void print_node_concat(t_node *self)
{
	if (self->kind != sym_concatenation)
	{
		t_usize i = 0;
		while (i < self->childs_count)
			print_node_concat(&self->childs[i++]);
	}
	else
	{
		t_str ret;
		if (handle_concat(self, NULL, &ret))
			return ((void)printf("ERROR\n"));
		printf("concat value = '%s'\n", ret);
		free(ret);
	}
}

void exec_shcat(t_utils *shcat)
{
	print_node_data(&shcat->current_node, 0);
	print_node_concat(&shcat->current_node);
	free_node(shcat->current_node);
}

void ft_take_args(t_utils *shcat)
{

	while (1)
	{
		shcat->str_input = readline((t_const_str)shcat->name_shell);
		if (!shcat->str_input)
			ft_exit(shcat, 0);
		else if (ft_strcmp(shcat->str_input, "exit") == 0)
			ft_exit(shcat, 0);
		shcat->current_node = parse_str(&shcat->parser, shcat->str_input);
		exec_shcat(shcat);
		add_history(shcat->str_input);
		free(shcat->str_input);
	}
}

void ft_find_path(t_str arge[], t_utils *utils)
{
	t_i32 i;

	i = 0;
	while (arge[i] != NULL)
	{
		if (arge[i][0] == 'P' && arge[i][1] == 'A' && arge[i][2] == 'T' &&
			arge[i][3] == 'H' && arge[i][4] == '=')
		{
			utils->path = ft_split(arge[i] + 5, ':');
			return;
		}
		i++;
	}
	utils->path = ft_split(PATH_FILES, ':');
}

t_language *tree_sitter_bash(void);

t_parser create_myparser(void)
{
	t_language	   *lang;
	t_first_parser *parser;

	lang = tree_sitter_bash();
	parser = ts_parser_new();
	ts_parser_set_language(parser, lang);
	return ((t_parser){.parser = parser});
}

void free_myparser(t_parser self)
{
	ts_parser_delete(self.parser);
}

t_i32 main(t_i32 argc, t_str argv[], t_str envp[])
{
	t_utils utils;

	(void)argc;
	(void)argv;
	(void)envp;
	if (install_signal())
		return (1);
	utils = (t_utils){};
	utils.parser = create_myparser();
	utils.env = create_env_map();
	utils.name_shell = "\001\x1B[93m\002"
					   "42sh"
					   "\001\x1B[32m\002"
					   ">"
					   "\001\x1B[0m\002"
					   "$ ";
	ft_take_args(&utils);
}
