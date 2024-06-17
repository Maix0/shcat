/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:38 by rparodi           #+#    #+#             */
/*   Updated: 2024/06/17 13:27:16 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "app/node.h"
#include "app/node/handle_concat.h"
#include "app/node/handle_program.h"
#include "app/signal_handler.h"
#include "gmr/symbols.h"
#include "me/hashmap/hashmap_env.h"
#include "me/str/str.h"
#include "me/types.h"
#include "minishell.h"
#include "parser/api.h"
#include <sys/types.h>

#undef free
#undef malloc
#undef realloc
#undef calloc

#include "ast/ast.h"

t_error from_node();

t_first_parser *ts_parser_new();
void			ts_tree_delete(t_first_tree *);
t_parse_node	ts_tree_root_node(t_first_tree *);
t_first_tree   *ts_parser_parse_string(t_first_parser *, t_first_tree *oldtree,
									   t_const_str input, t_usize len);
void			ts_parser_delete(t_first_parser *self);
void			ts_parser_set_language(t_first_parser *self, t_language *lang);

// Foutre envp dans env
// Chaque elemenet d'envp split au premier =
// cle avant le =
// data apres le =

t_error split_str_first(t_const_str s, char splitter, t_str *before,
						t_str *after)
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

t_error handle_node_getstr(t_node *self, t_utils *shcat, t_str *out)
{
	*out = NULL;
	if (self->kind == sym_word)
	{
		*out = node_getstr(self);
		return (NO_ERROR);
	}
	if (self->kind == sym_concatenation)
		return (handle_concat(self, shcat, out));

	return (ERROR);
}

void print_node_data(t_node *t, t_usize depth)
{
	t_usize idx;

	idx = 0;
	if (t->kind == 7)
		return;
	printf("\x1b[%im[%s](%lu)\x1b[0m", t->field_str == NULL ? 90 : 32,
		   t->field_str == NULL ? "nil" : t->field_str, t->field);
	while (idx++ < depth + 1)
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
	t_i32 ret;
	t_ast_node out;

	print_node_data(&shcat->current_node, 0);
	from_node(&shcat->current_node, &out);
	handle_program(&shcat->current_node, shcat, &ret);
	free_node(shcat->current_node);
	(void)ret;
}

void ft_take_args(t_utils *shcat)
{
	t_str cmd;

	while (1)
	{
		shcat->str_input = NULL;
		cmd = readline((t_const_str)shcat->name_shell);
		if (cmd == NULL)
			ft_exit(shcat, 0);
		shcat->str_input = str_clone(cmd);
		free(cmd);
		shcat->current_node = parse_str(&shcat->parser, shcat->str_input);
		exec_shcat(shcat);
		add_history(shcat->str_input);
		mem_free(shcat->str_input);
	}
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
		me_abort("Unable to install signals");
	utils = (t_utils){};
	utils.parser = create_myparser();
	utils.env = create_env_map();
	if (populate_env(utils.env, envp))
		me_abort("Unable to build env hashmap");
	utils.name_shell = "\001\x1B[93m\002"
					   "42sh"
					   "\001\x1B[32m\002"
					   ">"
					   "\001\x1B[0m\002"
					   "$ ";
	ft_take_args(&utils);
}
