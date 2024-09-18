/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _run_ast.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:57:57 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/18 22:18:11 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RUN_AST_H
# define _RUN_AST_H

# include "app/state.h"
# include "exec/_run_arith.h"
# include "ast/ast.h"
# include "me/fs/fs.h"
# include "me/os/os.h"
# include "me/string/string.h"
# include "me/types.h"
# include "me/vec/vec_ast.h"
# include "me/vec/vec_estr.h"

typedef struct s_expansion_result	t_expansion_result;

struct s_expansion_result
{
	bool	exists;
	t_str	value;
};

typedef struct s_command_result		t_command_result;

struct	s_command_result
{
	int			exit;
	t_process	process;
};

typedef struct s_word_result		t_word_result;
struct s_word_result
{
	bool			has_error;
	t_vec_estr		value;
	t_ast_word_kind	kind;
};

typedef struct s_word_iterator		t_word_iterator;
struct s_word_iterator
{
	t_word_result	res;
	t_state			*state;
};

typedef struct s_cmd_pipe			t_cmd_pipe;
struct s_cmd_pipe
{
	t_fd	*input;
	bool	create_output;
};

typedef struct s_program_result		t_program_result;
struct s_program_result
{
	int	exit;
};

typedef struct s_pipeline_result	t_pipeline_result;
struct s_pipeline_result
{
	int	exit;
};

typedef struct s_list_result		t_list_result;
struct s_list_result
{
	int	exit;
};

typedef struct s_subshell_result	t_subshell_result;
struct s_subshell_result
{
	t_pid	pid;
	int		exit;
	t_fd	*stdin;
	t_fd	*stdout;
	t_fd	*stderr;
};

struct s_ffree_state
{
	t_state		*state;
	t_cmd_pipe	cmd_pipe;
};

struct s_subshell_info
{
	t_fd		*stdin;
	t_fd		*stderr;
	t_fd		*stdout;
	t_fd		*ret_stdout;
};

struct s_redirections
{
	t_cmd_pipe	cmd_pipe;
	t_vec_ast	redirections;
};

struct s_word_str_args
{
	t_usize			i;
	t_state			*state;
	t_string		*tmp;
	t_word_result	*res;
	t_vec_str		*append;
	t_str			*tmp_str;
	t_vec_str		*splitted;
	t_str			ifs;
};

typedef struct s_redirections		t_redirections;

t_error	list_files_in_current_directory(t_vec_str *out);
bool	_is_builtin(\
	t_const_str argv0);
bool	_is_special_var(\
	t_ast_expansion *self);
t_error	_arith_into_str(\
	t_ast_node self, t_state *state, t_vec_str *append);
t_error	_ast_get_str(\
	t_ast_node elem, t_word_iterator *state, t_vec_estr *out);
t_error	_ast_get_str__arimethic_expansion(\
	t_ast_node elem, t_word_iterator *state, t_vec_estr *out);
t_error	_ast_get_str__command_substitution(\
	t_ast_node elem, t_word_iterator *state, t_vec_estr *out);
t_error	_ast_get_str__expansion(\
	t_ast_node elem, t_word_iterator *state, t_vec_estr *out);
t_error	_ast_get_str__raw(\
	t_ast_node elem, t_word_iterator *state, t_vec_estr *out);
t_error	_ast_get_str__raw__double_quote(\
	t_ast_node elem, t_word_iterator *state, t_vec_estr *out);
t_error	_ast_get_str__raw__no_quote(\
	t_ast_node elem, t_word_iterator *state, t_vec_estr *out);
t_error	_ast_get_str__raw__single_quote(\
	t_ast_node elem, t_word_iterator *state, t_vec_estr *out);
t_error	_ast_get_str__word(\
	t_ast_node elem, t_word_iterator *state, t_vec_estr *out);
t_error	_ast_into_str(\
	t_ast_node self, t_state *state, t_vec_str *append);
t_error	_cmd_into_str(\
	t_ast_node self, t_state *state, t_vec_str *append);
t_error	_exp_into_str(\
	t_ast_node self, t_state *state, t_vec_str *append);
t_error	_get_expansion_value(\
	t_ast_expansion *self, t_state *state, t_expansion_result *out);
t_error	_get_op_func(\
	t_ast_expansion *self, t_error (**op_func)(t_ast_expansion *self, \
	t_state *state, t_expansion_result *value));
t_error	_handle_builtin(\
	t_spawn_info info, t_state *state, t_cmd_pipe cmd_pipe, \
	t_command_result *out);
t_error	_handle_expansion_operator(\
	t_ast_expansion *self, t_state *state, t_expansion_result *value);
t_error	_handle_len_operator(\
	t_ast_expansion *self, t_state *state, t_expansion_result *value);
t_error	_handle_no_operator(\
	t_ast_expansion *self, t_state *state, t_expansion_result *value);
t_error	_raw_str_into_str(\
	t_ast_node self, t_state *state, t_vec_str *append);
t_error	_run_expansion_special_var(\
	t_ast_expansion *self, t_state *state, t_expansion_result *out);
t_error	_run_get_exit_code(\
	t_ast_node self, t_state *state, int *out);
t_error	_spawn_cmd_and_run(t_vec_str args, t_redirections redirs, \
		t_state *state, t_command_result *out);
t_error	_word_into_str(\
	t_ast_node self, t_state *state, t_vec_str *append);
t_error	run_command(\
	t_ast_command *command, t_state *state, t_cmd_pipe cmd_pipe, \
	t_command_result *out);
t_error	run_command_substitution(\
	t_ast_command_substitution *self, t_state *state, void *out);
t_error	run_expansion(\
	t_ast_expansion *self, t_state *state, t_expansion_result *out);
t_error	run_list(\
	t_ast_list *list, t_state *state, t_list_result *out);
t_error	run_pipeline(\
	t_ast_pipeline *pipeline, t_state *state, t_pipeline_result *out);
t_error	run_program(\
	t_ast_program *self, t_state *state, t_program_result *out);
t_error	run_subshell(\
	t_ast_subshell *subshell, t_state *state, t_cmd_pipe cmd_pipe, \
	t_subshell_result *out);
t_error	run_word(\
	t_ast_word *word, t_state *state, t_word_result *out);
t_str	_get_ifs_value(\
	t_state *state);
void	_ffree_func(\
	struct s_ffree_state *state);
void	_run_word_into_str(\
	t_usize idx, t_ast_node *elem, t_word_iterator *state);
t_error	_setup_redirection(\
	t_spawn_info *info, t_state *state, \
	t_cmd_pipe cmd_pipe, t_vec_ast *redirection);

#endif
