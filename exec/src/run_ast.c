/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:22:29 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/14 10:38:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/state.h"
#include "ast/ast.h"
#include "exec/run.h"
#include "me/str/str.h"
#include "me/types.h"

#include <stdio.h>
#pragma clang diagnostic ignored "-Wunused-parameter"

#define NOT_DONE                                                                                                                           \
	{                                                                                                                                      \
		printf("function `%s` isn't done !\n", __func__);                                                                                  \
		return (ERROR);                                                                                                                    \
	}

// Start Internals funcs

bool _is_special_var(t_ast_expansion *self)
{
	char name;

	if (self->var_name == NULL)
		return (true);
	if (str_len(self->var_name) != 1)
		return (false);
	name = self->var_name[0];
	if (name == '*' || name == '@' || name == '?' || name == '!' || name == '#' || name == '-' || name == '$' || name == '0' || name == '_')
		return (true);
	return (false);
}

t_str *_run_expansion_special_var(t_ast_expansion *expansion, t_state *state, t_str *storage)
{
	char name;
	name = expansion->var_name[0];

	if (name == '*')
		; // return all args exept argv[0]
	if (name == '@')
		; // return all args with argv[0]
	if (name == '?')
		; // return exit code of last run program
	if (name == '!')
		; // return pid of last run program
	if (name == '#')
		; // return argc -1 bc we don't care about argv[0]
	if (name == '$')
		; // return pid of self (the shell)

	return (NULL);
}

// End Internals funcs

t_error run_command(t_ast_command *command, t_state *state, void *out) NOT_DONE;

t_error run_expansion(t_ast_expansion *expansion, t_state *state, t_str **out) NOT_DONE;
t_error run_arithmetic_expansion(t_ast_arithmetic_expansion *arithmetic_expansion, t_state *state, void *out) NOT_DONE;
t_error run_case_(t_ast_case *case_, t_state *state, void *out) NOT_DONE;
t_error run_case_item(t_ast_case_item *case_item, t_state *state, void *out) NOT_DONE;
t_error run_command_substitution(t_ast_command_substitution *command_substitution, t_state *state, void *out) NOT_DONE;
t_error run_compound_statement(t_ast_compound_statement *compound_statement, t_state *state, void *out) NOT_DONE;
t_error run_elif(t_ast_elif *elif, t_state *state, void *out) NOT_DONE;
t_error run_else_(t_ast_else *else_, t_state *state, void *out) NOT_DONE;
t_error run_empty(t_ast_empty *empty, t_state *state, void *out) NOT_DONE;
t_error run_extglob(t_ast_extglob *extglob, t_state *state, void *out) NOT_DONE;
t_error run_file_redirection(t_ast_file_redirection *file_redirection, t_state *state, void *out) NOT_DONE;
t_error run_for_(t_ast_for *for_, t_state *state, void *out) NOT_DONE;
t_error run_function_definition(t_ast_function_definition *function_definition, t_state *state, void *out) NOT_DONE;
t_error run_heredoc_redirection(t_ast_heredoc_redirection *heredoc_redirection, t_state *state, void *out) NOT_DONE;
t_error run_if_(t_ast_if *if_, t_state *state, void *out) NOT_DONE;
t_error run_list(t_ast_list *list, t_state *state, void *out) NOT_DONE;
t_error run_pipeline(t_ast_pipeline *pipeline, t_state *state, void *out) NOT_DONE;
t_error run_program(t_ast_program *program, t_state *state, void *out) NOT_DONE;
t_error run_raw_string(t_ast_raw_string *raw_string, t_state *state, void *out) NOT_DONE;
t_error run_regex(t_ast_regex *regex, t_state *state, void *out) NOT_DONE;
t_error run_subshell(t_ast_subshell *subshell, t_state *state, void *out) NOT_DONE;
t_error run_until(t_ast_until *until, t_state *state, void *out) NOT_DONE;
t_error run_variable_assignment(t_ast_variable_assignment *variable_assignment, t_state *state, void *out) NOT_DONE;
t_error run_while_(t_ast_while *while_, t_state *state, void *out) NOT_DONE;
t_error run_word(t_ast_word *word, t_state *state, void *out) NOT_DONE;

// FUNCTIONS

// t_error run_command(t_ast_command *command, t_state *state, void *out) {}

/*
/// this functons returns different things depending on the operator and/or the state of the shell
/// NULL != empty string for example
t_error run_expansion(t_ast_expansion *expansion, t_state *state, t_str **out)
{
	t_str  backing_storage;
	t_str *env_var;

	if (_is_special_var(expansion))
	{
		backing_storage = _run_expansion_special_var(expansion, state);
		env_var = &backing_storage;
	}
	else
		env_var = hmap_env_get(state->env, &expansion->var_name);

	return (ERROR);
}
*/

// FUNCTIONS

/*

t_error run_node(t_ast_node self, t_state *state, void *out)
{
	if (self->kind == AST_ARITHMETIC_EXPANSION)
		return (run_arithmetic_expansion(&self->data.arithmetic_expansion, state, out));
	if (self->kind == AST_CASE)
		return (run_case_(&self->data.case_, state, out));
	if (self->kind == AST_CASE_ITEM)
		return (run_case_item(&self->data.case_item, state, out));
	if (self->kind == AST_COMMAND)
		return (run_command(&self->data.command, state, out));
	if (self->kind == AST_COMMAND_SUBSTITUTION)
		return (run_command_substitution(&self->data.command_substitution, state, out));
	if (self->kind == AST_COMPOUND_STATEMENT)
		return (run_compound_statement(&self->data.compound_statement, state, out));
	if (self->kind == AST_ELIF)
		return (run_elif(&self->data.elif, state, out));
	if (self->kind == AST_ELSE)
		return (run_else_(&self->data.else_, state, out));
	if (self->kind == AST_EMPTY)
		return (run_empty(&self->data.empty, state, out));
	if (self->kind == AST_EXPANSION)
		return (run_expansion(&self->data.expansion, state, out));
	if (self->kind == AST_EXTGLOB)
		return (run_extglob(&self->data.extglob, state, out));
	if (self->kind == AST_FILE_REDIRECTION)
		return (run_file_redirection(&self->data.file_redirection, state, out));
	if (self->kind == AST_FOR)
		return (run_for_(&self->data.for_, state, out));
	if (self->kind == AST_FUNCTION_DEFINITION)
		return (run_function_definition(&self->data.function_definition, state, out));
	if (self->kind == AST_HEREDOC_REDIRECTION)
		return (run_heredoc_redirection(&self->data.heredoc_redirection, state, out));
	if (self->kind == AST_IF)
		return (run_if_(&self->data.if_, state, out));
	if (self->kind == AST_LIST)
		return (run_list(&self->data.list, state, out));
	if (self->kind == AST_PIPELINE)
		return (run_pipeline(&self->data.pipeline, state, out));
	if (self->kind == AST_PROGRAM)
		return (run_program(&self->data.program, state, out));
	if (self->kind == AST_RAW_STRING)
		return (run_raw_string(&self->data.raw_string, state, out));
	if (self->kind == AST_REGEX)
		return (run_regex(&self->data.regex, state, out));
	if (self->kind == AST_SUBSHELL)
		return (run_subshell(&self->data.subshell, state, out));
	if (self->kind == AST_UNTIL)
		return (run_until(&self->data.until, state, out));
	if (self->kind == AST_VARIABLE_ASSIGNMENT)
		return (run_variable_assignment(&self->data.variable_assignment, state, out));
	if (self->kind == AST_WHILE)
		return (run_while_(&self->data.while_, state, out));
	if (self->kind == AST_WORD)
		return (run_word(&self->data.word, state, out));
	return (ERROR);
}

*/
