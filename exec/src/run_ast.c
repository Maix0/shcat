/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:22:29 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/17 16:42:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/state.h"
#include "ast/ast.h"
#include "exec/run.h"
#include "me/str/str.h"
#include "me/types.h"

#include <stdio.h>
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-variable"

typedef struct s_expansion_result t_expansion_result;

struct s_expansion_result
{
	bool  exists;
	t_str str;
};

#ifdef ERROR
# undef ERROR
#endif
#define ERROR ((void)printf("ERROR HERE: " __FILE__ ":%d in %s\n", __LINE__, __func__), 1)

#define NOT_DONE                                                                                                                           \
	{                                                                                                                                      \
		printf("function `%s` isn't done !\n", __func__);                                                                                  \
		return (ERROR);                                                                                                                    \
	}

// Start Internals funcs

bool _is_special_var(t_ast_expansion *self)
{
	char name;

	if (self == NULL)
		return (true);
	if (self->var_name == NULL)
		return (true);
	if (str_len(self->var_name) != 1)
		return (false);
	name = self->var_name[0];
	if (name == '*' || name == '@' || name == '?' || name == '!' || name == '#' || name == '-' || name == '$' || name == '0')
		return (true);
	return (false);
}

t_error _run_expansion_special_var(t_ast_expansion *self, t_state *state, t_expansion_result *out)
{
	char name;

	if (self == NULL || state == NULL || out == NULL)
		return (ERROR);
	name = self->var_name[0];
	*out = (t_expansion_result){.exists = false, .str = NULL};
	if (name == '*')
		; // return all args with argv[0]
	if (name == '@')
		; // return all args without argv[0]
	if (name == '?')
		; // return exit code of last run program
	if (name == '!')
		; // return pid of last run program
	if (name == '#')
		; // return `argc - 1` bc we don't care about argv[0]
	if (name == '$')
		; // return pid of self (the shell)
	if (name == '-')
		; // return the option string <ask maiboyer>

	printf("PLEASE MAKE SURE TO FINISH THE SPECIAL VAR HANDLING !");
	return (ERROR);
}

t_error _get_expansion_value(t_ast_expansion *self, t_state *state, t_expansion_result *out)
{
	t_str			  *hmap_ret;
	t_expansion_result ret;

	if (self == NULL || state == NULL || out == NULL)
		return (ERROR);
	hmap_ret = hmap_env_get(state->env, &self->var_name);
	ret = (t_expansion_result){.exists = hmap_ret == NULL, .str = NULL};
	if (ret.exists)
		ret.str = str_clone(*hmap_ret);
	*out = ret;

	return (NO_ERROR);
}

#include "me/convert/numbers_to_str.h"

t_error _handle_len_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value)
{
	t_str	len_str;
	t_usize len;

	if (value->exists && value->str != NULL)
		len = str_len(value->str);
	else
		len = 0;
	if (u64_to_str(len, &len_str))
		return (ERROR);
	mem_free(value->str);
	value->exists = true;
	value->str = len_str;
	return (NO_ERROR);
};

t_error _handle_no_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value)
{
	(void)(self);
	(void)(state);
	(void)(value);
	if (self == NULL || state == NULL || value == NULL)
		return (ERROR);
	return (NO_ERROR);
};

t_error _handle_assign_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _handle_assign_colon_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _handle_alternate_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _handle_alternate_colon_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _handle_default_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _handle_default_colon_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _handle_error_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _handle_error_colon_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;

t_error _handle_suffix_pattern_smallest_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _handle_suffix_pattern_longest_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _handle_prefix_pattern_smallest_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _handle_prefix_pattern_longest_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;

t_error _get_op_func(t_ast_expansion *self, t_error (**op_func)(t_ast_expansion *self, t_state *state, t_expansion_result *value))
{
	if (self == NULL || op_func == NULL)
		return (ERROR);
	if (self->kind == E_OP_NONE)
		return (*op_func = _handle_no_operator, NO_ERROR);
	if (self->kind == E_OP_ERROR)
		return (*op_func = _handle_error_operator, NO_ERROR);
	if (self->kind == E_OP_ERROR_COLON)
		return (*op_func = _handle_error_colon_operator, NO_ERROR);
	if (self->kind == E_OP_ASSIGN_DEFAULT)
		return (*op_func = _handle_assign_operator, NO_ERROR);
	if (self->kind == E_OP_ASSIGN_DEFAULT_COLON)
		return (*op_func = _handle_assign_colon_operator, NO_ERROR);
	if (self->kind == E_OP_DEFAULT)
		return (*op_func = _handle_default_operator, NO_ERROR);
	if (self->kind == E_OP_DEFAULT_COLON)
		return (*op_func = _handle_default_colon_operator, NO_ERROR);
	if (self->kind == E_OP_ALTERNATE)
		return (*op_func = _handle_alternate_operator, NO_ERROR);
	if (self->kind == E_OP_ALTERNATE_COLON)
		return (*op_func = _handle_alternate_colon_operator, NO_ERROR);
	if (self->kind == E_OP_LARGEST_PREFIX)
		return (*op_func = _handle_prefix_pattern_smallest_operator, NO_ERROR);
	if (self->kind == E_OP_SMALLEST_PREFIX)
		return (*op_func = _handle_prefix_pattern_smallest_operator, NO_ERROR);
	if (self->kind == E_OP_LARGEST_SUFFIX)
		return (*op_func = _handle_suffix_pattern_smallest_operator, NO_ERROR);
	if (self->kind == E_OP_SMALLEST_SUFFIX)
		return (*op_func = _handle_suffix_pattern_longest_operator, NO_ERROR);
	return (ERROR);
}

t_error _handle_expansion_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value)
{
	t_error (*op_func)(t_ast_expansion *self, t_state *state, t_expansion_result *value);

	if (self == NULL || state == NULL || value == NULL)
		return (ERROR);
	if (_get_op_func(self, &op_func))
		return (ERROR);
	if (op_func(self, state, value))
		return (ERROR);
	return (NO_ERROR);
}

// End Internals funcs

t_error run_expansion(t_ast_expansion *self, t_state *state, t_expansion_result *out);
t_error run_command(t_ast_command *command, t_state *state, void *out);

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

/// this functons returns different things depending on the operator and/or the state of the shell
/// NULL != empty string for example
t_error run_expansion(t_ast_expansion *self, t_state *state, t_expansion_result *out)
{
	t_expansion_result ret;
	bool			   is_special_var;

	is_special_var = _is_special_var(self);
	if (is_special_var && _run_expansion_special_var(self, state, &ret))
		return (ERROR);
	if (!is_special_var && _get_expansion_value(self, state, &ret))
		return (ERROR);
	if (_handle_expansion_operator(self, state, &ret))
		return (ERROR);
	if (self->len_operator && _handle_len_operator(self, state, &ret))
		return (ERROR);
	return (*out = ret, NO_ERROR);
}

t_error run_command(t_ast_command *command, t_state *state, void *out)
{
	return (ERROR);
}

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
