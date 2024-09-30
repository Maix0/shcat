/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:40:38 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/30 20:11:12 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/colors.h"
#include "app/env.h"
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
#include "me/vec/vec_str.h"
#include "me/vec/vec_token.h"
#include <errno.h>
#include <sys/types.h>

t_error			get_user_input(t_state *state);
void			ast_print_node(t_ast_node self);
void			ft_exit(t_state *maiboyerlpb, t_u8 exit_status);
void			exec_shcat(t_state *state);
void			ft_take_args(t_state *state);

// Foutre envp dans env
// Chaque elemenet d'envp split au premier =
// cle avant le =
// data apres le =

void			ast_free(t_ast_node node);

t_error	split_str_first(\
	t_const_str s, char splitter, t_str *before, t_str *after)
{
	t_usize	i;

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

t_error	populate_env(t_hashmap_env *env, t_str envp[])
{
	t_usize	i;
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

/*
void print_node_data(t_node *t, t_usize depth)
{
	t_usize idx;

	idx = 0;
	if (t->kind == 7)
		return;
	printf("\x1b[%im[%-6s](%lu)\x1b[0m", t->field_str == NULL ? \
90 : 32, t->field_str == NULL ? "nil" : t->field_str, t->field);
	while (idx++ < depth + 1)
		printf("\t");
	idx = 0;
	printf("%s(%lu) = %s\n", t->kind_str, t->kind, node_getstr(t));
	while (idx < t->childs_count)
		print_node_data(&t->childs[idx++], depth + 1);
}
*/

t_str token_name(t_token *out);
void func(t_usize i, t_token *token, void *state)
{
	(void)(state);
	(void)(i);
	printf("%s => %s\n", token_name(token), token->string.buf);
}

t_error tokenize(t_const_str s, t_vec_token *out);
void	parse_str(t_state *state)
{
	t_vec_token tokens;
	if (tokenize(state->str_input, &tokens))
		return ;
	vec_token_iter(&tokens, func, NULL);
}

t_i32	main(t_i32 argc, t_str argv[], t_str envp[])
{
	t_state	state;

	(void)argc;
	(void)argv;
	if (install_signal())
		me_abort("Unable to install signals");
	state = (t_state){};
	state.env = create_env_map();
	state.tmp_var = create_env_map();
	if (populate_env(state.env, envp))
		me_abort("Unable to build env hashmap");
	state.prompt = COLB_YELLOW "42sh" COL_GREEN ">" COL_WHITE "$ " RESET;
	ft_take_args(&state);
}
