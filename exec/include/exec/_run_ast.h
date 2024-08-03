/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _run_ast.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:41:48 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/03 15:39:10 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RUN_AST_H
#define _RUN_AST_H

#include "app/state.h"
#include "ast/ast.h"
#include "me/fs/fs.h"
#include "me/os/os.h"
#include "me/types.h"
#include "me/vec/vec_estr.h"

#define NOT_DONE                                                                                                                           \
	{                                                                                                                                      \
		printf("function `%s` isn't done !\n", __func__);                                                                                  \
		return (ERROR);                                                                                                                    \
	}

#pragma GCC diagnostic	 ignored "-Wunused-parameter"
#pragma GCC diagnostic	 ignored "-Wunused-variable"
#pragma GCC diagnostic	 ignored "-Wunknown-pragmas"
#pragma GCC diagnostic	 ignored "-Wempty-body"
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-variable"

typedef struct s_expansion_result t_expansion_result;

struct s_expansion_result
{
	bool  exists;
	t_str value;
};

typedef struct s_command_result t_command_result;

struct s_command_result
{
	int		  exit;
	t_process process;
};

typedef struct s_word_result t_word_result;
struct s_word_result
{
	bool			has_error;
	t_vec_estr		value;
	t_ast_word_kind kind;
};

typedef struct s_word_iterator t_word_iterator;
struct s_word_iterator
{
	t_word_result res;
	t_state		 *state;
};

typedef struct s_cmd_pipe t_cmd_pipe;
struct s_cmd_pipe
{
	t_fd *input;
	bool  create_output;
};

typedef struct s_program_result t_program_result;
struct s_program_result
{
	int exit;
};

t_error run_arithmetic_expansion(t_ast_arithmetic_expansion *arithmetic_expansion, t_state *state, t_i64 *out);
t_error run_command(t_ast_command *command, t_state *state, t_cmd_pipe cmd_pipe, t_command_result *out);
t_error run_expansion(t_ast_expansion *self, t_state *state, t_expansion_result *out);
t_error run_word(t_ast_word *word, t_state *state, t_word_result *out);
t_error run_program(t_ast_program *program, t_state *state, t_program_result *out);

t_error run_case_(t_ast_case *case_, t_state *state, void *out);
t_error run_case_item(t_ast_case_item *case_item, t_state *state, void *out);
t_error run_command_substitution(t_ast_command_substitution *command_substitution, t_state *state, void *out);
t_error run_compound_statement(t_ast_compound_statement *compound_statement, t_state *state, void *out);
t_error run_elif(t_ast_elif *elif, t_state *state, void *out);
t_error run_else_(t_ast_else *else_, t_state *state, void *out);
t_error run_empty(t_ast_empty *empty, t_state *state, void *out);
t_error run_extglob(t_ast_extglob *extglob, t_state *state, void *out);
t_error run_file_redirection(t_ast_file_redirection *file_redirection, t_state *state, void *out);
t_error run_for_(t_ast_for *for_, t_state *state, void *out);
t_error run_function_definition(t_ast_function_definition *function_definition, t_state *state, void *out);
t_error run_heredoc_redirection(t_ast_heredoc_redirection *heredoc_redirection, t_state *state, void *out);
t_error run_if_(t_ast_if *if_, t_state *state, void *out);
t_error run_list(t_ast_list *list, t_state *state, void *out);
t_error run_pipeline(t_ast_pipeline *pipeline, t_state *state, void *out);
t_error run_raw_string(t_ast_raw_string *raw_string, t_state *state, void *out);
t_error run_regex(t_ast_regex *regex, t_state *state, void *out);
t_error run_subshell(t_ast_subshell *subshell, t_state *state, void *out);
t_error run_until(t_ast_until *until, t_state *state, void *out);
t_error run_variable_assignment(t_ast_variable_assignment *variable_assignment, t_state *state, bool is_temporary, void *out);
t_error run_while_(t_ast_while *while_, t_state *state, void *out);

#endif
