/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:38 by rparodi           #+#    #+#             */
/*   Updated: 2024/04/30 13:02:39 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

t_i32 ft_check_type_operators(t_str operators)
{
	if (operators == NULL)
		printf("End of input");
	else if (ft_strcmp(operators, ">") == 0)
		printf("Have to redirect in the file\n");
	else if (ft_strcmp(operators, ">>") == 0)
		printf("Have to redirect at the end of the file after\n");
	else if (ft_strcmp(operators, ">&") == 0)
		printf("Have to redirect the stdout in the file\n");
	else if (ft_strcmp(operators, "<") == 0)
		printf("Have to redirect at the end of the file before\n");
	else if (ft_strcmp(operators, "<<") == 0)
		printf("Have to redirect at the end of the file after\n");
	else if (ft_strcmp(operators, "<&") == 0)
		printf("Have to redirect the stdout in the file\n");
	else if (ft_strcmp(operators, ";") == 0)
		printf("Have to execute one more command\n");
	else if (ft_strcmp(operators, ";") == 0)
		printf("Have to execute one more command\n");
	else if (ft_strcmp(operators, "|") == 0)
		printf("I have to pipe a operators !\n");
	else if (ft_strcmp(operators, "||") == 0)
		printf("Or something\n");
	else if (ft_strcmp(operators, "&&") == 0)
		printf("Only if the first has exit status 0\n");
	else if (ft_strcmp(operators, "&") == 0)
		printf("Parreil mais chelou\n");
	else
		return (0);
	return (1);
}

void ft_check(t_utils *shcat, char **input)
{
	t_usize i;
	t_usize prev_i;

	i = 0;
	prev_i = 0;
	while (input[i] != NULL)
	{
		while (ft_check_type_operators(input[i]) == 1)
			i++;
		if (ft_strcmp(input[i], "exit") == 0)
			ft_exit(shcat, 0);
		else if (ft_strcmp(input[i], "pwd") == 0)
			ft_pwd();
		else if (ft_strcmp(input[i], "echo") == 0)
			ft_echo("ECHO MAIS PAS ARG BORDEL !\n", "flag");
		else
			ft_other_cmd(shcat, i, prev_i);
		prev_i = i;
		i++;
	}
}

void ft_take_args(t_utils *shcat)
{
	t_i32 i;

	i = 0;
	while (1)
	{
		shcat->str_input = readline((t_const_str)shcat->name_shell);
		if (!shcat->str_input)
			ft_exit(shcat, 0);
		shcat->strs_input = ft_split(shcat->str_input, ' ');
		if (!shcat->strs_input)
			exit(1);
		ft_check(shcat, shcat->strs_input);
		add_history(shcat->str_input);
		ft_free_strs(shcat->strs_input);
		free(shcat->str_input);
		i++;
	}
}

void ft_init_arge(t_str arge[], t_utils *utils)
{
	size_t i;
	char  *temp;

	i = 0;
	temp = NULL;
	while (arge[i] != NULL)
	{
		if (arge[i][0] == 'P' && arge[i][1] == 'A' && arge[i][2] == 'T' &&
			arge[i][3] == 'H' && arge[i][4] == '=')
		{
			temp = ft_strdup(arge[i] + 5);
			if (!temp)
				ft_exit(utils, 1);
			else
				utils->path = ft_split(temp, ':');
			break;
		}
		i++;
	}
	if (temp != NULL)
		free(temp);
}

#include "app/node.h"
#include "me/string/str_len.h"
#include "parser/api.h"
#include "parser/parser.h"

t_language *tree_sitter_bash(void);

t_node parse_to_nodes(t_parser *parser, t_const_str input)
{
	t_parse_tree *tree;
	t_parse_node  node;
	t_node		  ret;

	tree = ts_parser_parse_string(parser, NULL, input, str_len(input));
	node = ts_tree_root_node(tree);
	ret = build_node(node, input);
	ts_tree_delete(tree);
	return (ret);
}

void print_node_data(t_node *t, t_usize depth)
{
	t_usize idx;

	idx = 0;
	while (idx++ < depth)
		printf("\t");
	idx = 0;
	printf("%s = %s\n", t->kind_str, node_getstr(t));
	while (idx < t->childs_count)
		print_node_data(&t->childs[idx++], depth + 1);
}

typedef struct s_myparser
{
	t_parser *parser;
} t_myparser;

t_myparser create_myparser(void)
{
	t_language *lang;
	t_parser   *parser;

	lang = tree_sitter_bash();
	parser = ts_parser_new();
	ts_parser_set_language(parser, lang);
	return ((t_myparser){.parser = parser});
}

void free_myparser(t_myparser self)
{
	ts_parser_delete(self.parser);
}

t_node parse_string(t_myparser *parser, t_const_str input)
{
	return (parse_to_nodes(parser->parser, input));
}

t_i32 main()
{
	t_myparser parser;
	t_node	   node;

	parser = create_myparser();
	node = parse_string(&parser, "banane \"$VAR\"'truc'");
	print_node_data(&node, 0);
	free_node(node);
}
