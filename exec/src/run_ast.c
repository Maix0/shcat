/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:22:29 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/10 19:43:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "app/state.h"
#include "ast/ast.h"
#include "exec/_run_ast.h"
#include "exec/builtins.h"
#include "exec/run.h"
#include "me/convert/numbers_to_str.h"
#include "me/fs/fs.h"
#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"
#include "me/os/os.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "me/vec/vec_estr.h"
#include "me/vec/vec_str.h"
#include <signal.h>
#include <sys/wait.h>

#include <stdio.h>

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
	*out = (t_expansion_result){.exists = false, .value = NULL};
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
	hmap_ret = hmap_env_get(state->tmp_var, &self->var_name);
	if (hmap_ret == NULL)
		hmap_ret = hmap_env_get(state->env, &self->var_name);
	ret = (t_expansion_result){.exists = (hmap_ret != NULL), .value = NULL};
	if (ret.exists)
		ret.value = str_clone(*hmap_ret);
	return (*out = ret, NO_ERROR);
}

t_error _handle_len_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value)
{
	t_str	len_str;
	t_usize len;

	if (value->exists && value->value != NULL)
		len = str_len(value->value);
	else
		len = 0;
	if (u64_to_str(len, &len_str))
		return (ERROR);
	mem_free(value->value);
	value->exists = true;
	value->value = len_str;
	return (NO_ERROR);
};

t_error _handle_no_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value)
{
	t_str *val;

	if (self == NULL || state == NULL || value == NULL)
		return (ERROR);
	val = hmap_env_get(state->tmp_var, &self->var_name);
	if (val == NULL)
		val = hmap_env_get(state->env, &self->var_name);
	if (val == NULL)
		return (value->exists = false, NO_ERROR);
	value->exists = true;
	value->value = *val;
	return (NO_ERROR);
};

t_error _exp_assign_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _exp_assign_colon_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _exp_alternate_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _exp_alternate_colon_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _exp_default_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _exp_default_colon_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _exp_error_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _exp_error_colon_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;

t_error _exp_suffix_pattern_smallest_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _exp_suffix_pattern_largest_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _exp_prefix_pattern_smallest_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;
t_error _exp_prefix_pattern_largest_operator(t_ast_expansion *self, t_state *state, t_expansion_result *value) NOT_DONE;

t_error _get_op_func(t_ast_expansion *self, t_error (**op_func)(t_ast_expansion *self, t_state *state, t_expansion_result *value))
{
	if (self == NULL || op_func == NULL)
		return (ERROR);
	if (self->kind == E_OP_NONE)
		return (*op_func = _handle_no_operator, NO_ERROR);
	if (self->kind == E_OP_ERROR)
		return (*op_func = _exp_error_operator, NO_ERROR);
	if (self->kind == E_OP_ERROR_COLON)
		return (*op_func = _exp_error_colon_operator, NO_ERROR);
	if (self->kind == E_OP_ASSIGN_DEFAULT)
		return (*op_func = _exp_assign_operator, NO_ERROR);
	if (self->kind == E_OP_ASSIGN_DEFAULT_COLON)
		return (*op_func = _exp_assign_colon_operator, NO_ERROR);
	if (self->kind == E_OP_DEFAULT)
		return (*op_func = _exp_default_operator, NO_ERROR);
	if (self->kind == E_OP_DEFAULT_COLON)
		return (*op_func = _exp_default_colon_operator, NO_ERROR);
	if (self->kind == E_OP_ALTERNATE)
		return (*op_func = _exp_alternate_operator, NO_ERROR);
	if (self->kind == E_OP_ALTERNATE_COLON)
		return (*op_func = _exp_alternate_colon_operator, NO_ERROR);
	if (self->kind == E_OP_LARGEST_PREFIX)
		return (*op_func = _exp_prefix_pattern_largest_operator, NO_ERROR);
	if (self->kind == E_OP_SMALLEST_PREFIX)
		return (*op_func = _exp_prefix_pattern_smallest_operator, NO_ERROR);
	if (self->kind == E_OP_LARGEST_SUFFIX)
		return (*op_func = _exp_suffix_pattern_largest_operator, NO_ERROR);
	if (self->kind == E_OP_SMALLEST_SUFFIX)
		return (*op_func = _exp_suffix_pattern_smallest_operator, NO_ERROR);
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

t_error _ast_get_str__raw__no_quote(t_ast_node elem, t_word_iterator *state, t_vec_estr *out)
{
	bool	 last_backslash;
	t_string ret;
	t_usize	 i;

	if (elem == NULL || state == NULL || out == NULL || elem->kind != AST_RAW_STRING || elem->data.raw_string.kind != AST_WORD_NO_QUOTE)
		return (ERROR);
	i = 0;
	ret = string_new(elem->data.raw_string.len);
	last_backslash = false;
	while (elem->data.raw_string.str[i])
	{
		if (elem->data.raw_string.str[i] != '\\' || last_backslash)
			string_push_char(&ret, elem->data.raw_string.str[i]);
		last_backslash = false;
		if (elem->data.raw_string.str[i] == '\\' && !last_backslash)
			last_backslash = true;
		i++;
	}
	return (vec_estr_push(out, (t_expandable_str){.do_expand = false, .value = ret.buf}), NO_ERROR);
}

t_error _ast_get_str__raw__single_quote(t_ast_node elem, t_word_iterator *state, t_vec_estr *out)
{
	t_string ret;
	t_usize	 i;

	if (elem == NULL || state == NULL || out == NULL || elem->kind != AST_RAW_STRING || elem->data.raw_string.kind != AST_WORD_SINGLE_QUOTE)
		return (ERROR);
	i = 1;
	ret = string_new(elem->data.raw_string.len);
	while (elem->data.raw_string.str[i])
		string_push_char(&ret, elem->data.raw_string.str[i++]);
	string_pop(&ret);
	return (vec_estr_push(out, (t_expandable_str){.do_expand = false, .value = ret.buf}), NO_ERROR);
}

t_error _ast_get_str__raw__double_quote(t_ast_node elem, t_word_iterator *state, t_vec_estr *out)
{
	bool	 last_backslash;
	t_string ret;
	t_usize	 i;

	if (elem == NULL || state == NULL || out == NULL || elem->kind != AST_RAW_STRING || elem->data.raw_string.kind != AST_WORD_DOUBLE_QUOTE)
		return (ERROR);
	i = 0;
	ret = string_new(elem->data.raw_string.len);
	last_backslash = false;
	while (elem->data.raw_string.str[i])
	{
		if (elem->data.raw_string.str[i] != '\\' || last_backslash)
			string_push_char(&ret, elem->data.raw_string.str[i]);
		last_backslash = false;
		if (elem->data.raw_string.str[i] == '\\' && !last_backslash)
			last_backslash = true;
		i++;
	}
	return (vec_estr_push(out, (t_expandable_str){.do_expand = false, .value = ret.buf}), NO_ERROR);
}

t_error _ast_get_str__raw(t_ast_node elem, t_word_iterator *state, t_vec_estr *out)
{
	if (elem == NULL || state == NULL || out == NULL || elem->kind != AST_RAW_STRING)
		return (ERROR);
	if (elem->data.raw_string.kind == AST_WORD_NO_QUOTE)
		return (_ast_get_str__raw__no_quote(elem, state, out));
	if (elem->data.raw_string.kind == AST_WORD_SINGLE_QUOTE)
		return (_ast_get_str__raw__single_quote(elem, state, out));
	if (elem->data.raw_string.kind == AST_WORD_DOUBLE_QUOTE)
		return (_ast_get_str__raw__double_quote(elem, state, out));
	return (ERROR);
}

t_str _get_ifs_value(t_state *state)
{
	t_str  ifs;
	t_str *ifs_entry;
	t_str  ifs_key;

	ifs_key = "IFS";
	ifs = NULL;
	ifs_entry = hmap_env_get(state->env, (t_str *)&ifs_key);
	if (ifs_entry != NULL)
		ifs = *ifs_entry;
	if (ifs == NULL)
		ifs = " \t\n";
	return (ifs);
}

t_error _ast_get_str__expansion(t_ast_node elem, t_word_iterator *state, t_vec_estr *out)
{
	t_expansion_result exp_ret;
	t_vec_str		   words;

	if (elem == NULL || state == NULL || out == NULL || elem->kind != AST_EXPANSION)
		return (ERROR);
	if (run_expansion(&elem->data.expansion, state->state, &exp_ret))
		return (ERROR);
	return (vec_estr_push(out, (t_expandable_str){.do_expand = state->res.kind == AST_WORD_NO_QUOTE, .value = exp_ret.value}), NO_ERROR);
}

t_error _ast_get_str__arimethic_expansion(t_ast_node elem, t_word_iterator *state, t_vec_estr *out)
{
	if (elem == NULL || state == NULL || out == NULL || elem->kind != AST_ARITHMETIC_EXPANSION)
		return (ERROR);
	// vec_estr_push(out, (t_expandable_str){.do_expand = state->res.kind == AST_WORD_NO_QUOTE, .value = str_clone(exp_out.value)});
	return (ERROR);
}

t_error _ast_get_str__command_substitution(t_ast_node elem, t_word_iterator *state, t_vec_estr *out)
{
	if (elem == NULL || state == NULL || out == NULL || elem->kind != AST_COMMAND_SUBSTITUTION)
		return (ERROR);
	// vec_estr_push(out, (t_expandable_str){.do_expand = state->res.kind == AST_WORD_NO_QUOTE, .value = str_clone(exp_out.value)});
	return (ERROR);
}

t_error _ast_get_str(t_ast_node elem, t_word_iterator *state, t_vec_estr *out)
{
	if (elem == NULL || state == NULL || out == NULL)
		return (ERROR);
	if (elem->kind == AST_RAW_STRING)
		return (_ast_get_str__raw(elem, state, out));
	if (elem->kind == AST_EXPANSION)
		return (_ast_get_str__expansion(elem, state, out));
	if (elem->kind == AST_ARITHMETIC_EXPANSION)
		return (_ast_get_str__arimethic_expansion(elem, state, out));
	if (elem->kind == AST_COMMAND_SUBSTITUTION)
		return (_ast_get_str__command_substitution(elem, state, out));
	return (NO_ERROR);
}

void _run_word_into_str(t_usize idx, t_ast_node *elem, t_word_iterator *state)
{
	t_vec_str val;

	(void)(idx);
	if (elem == NULL || *elem == NULL || state == NULL)
		return;
	if (_ast_get_str(*elem, state, &state->res.value))
		return;
}

t_error _exp_into_str(t_ast_node self, t_state *state, t_vec_str *append)
{
	t_expansion_result res;
	t_vec_str		   splitted;
	t_str			   tmp;

	if (self == NULL || state == NULL || append == NULL || self->kind != AST_EXPANSION)
		return (ERROR);
	if (run_expansion(&self->data.expansion, state, &res))
		return (ERROR);
	if (res.value == NULL)
		return (NO_ERROR);
	if (str_split(res.value, _get_ifs_value(state), &splitted))
		return (ERROR);
	while (!vec_str_pop_front(&splitted, &tmp))
		vec_str_push(append, tmp);
	vec_str_free(splitted);
	return (NO_ERROR);
}

t_error _arith_into_str(t_ast_node self, t_state *state, t_vec_str *append)
{
	if (self == NULL || state == NULL || append == NULL || self->kind != AST_ARITHMETIC_EXPANSION)
		return (ERROR);
	return (NO_ERROR);
}

t_error _cmd_into_str(t_ast_node self, t_state *state, t_vec_str *append)
{
	if (self == NULL || state == NULL || append == NULL || self->kind != AST_COMMAND_SUBSTITUTION)
		return (ERROR);
	/*
	if (str_split(res.value, _get_ifs_value(state), &splitted))
		return (ERROR);
	while (!vec_str_pop_front(&splitted, &tmp))
		vec_str_push(append, tmp);
	vec_str_free(splitted);
	*/
	return (ERROR);
}

t_error _word_into_str(t_ast_node self, t_state *state, t_vec_str *append)
{
	t_word_result res;
	t_vec_str	  splitted;
	t_string	  tmp;
	t_usize		  i;
	t_usize		  j;
	t_usize		  len;
	t_str		  ifs;
	t_str		  tmp_str;

	if (self == NULL || state == NULL || append == NULL || self->kind != AST_WORD)
		return (ERROR);
	if (run_word(&self->data.word, state, &res))
		return (ERROR);
	if (res.kind == AST_WORD_NO_QUOTE)
	{
		tmp = string_new(64);
		i = 0;
		while (i < res.value.len)
		{
			if (!res.value.buffer[i].do_expand)
				string_push(&tmp, res.value.buffer[i].value);
			else
			{
				ifs = _get_ifs_value(state);
				while (*ifs != '\0' && str_find_chr(res.value.buffer[i].value, *ifs) == NULL)
					ifs++;
				if (*ifs == '\0')
					string_push(&tmp, res.value.buffer[i].value);
				else
				{
					ifs = _get_ifs_value(state);
					if (str_split(res.value.buffer[i].value, ifs, &splitted))
						return (vec_estr_free(res.value), ERROR);
					if (!vec_str_pop_front(&splitted, &tmp_str))
					{
						if (str_find_chr(ifs, res.value.buffer[i].value[0]) == NULL)
						{
							string_push(&tmp, tmp_str), str_free(tmp_str);
						}
						else
						{
							vec_str_push(append, tmp.buf);
							tmp = string_new(64);
							string_push(&tmp, tmp_str);
							str_free(tmp_str);
						}
						j = 0;
						while (j + 1 < splitted.len)
						{
							if (vec_str_pop_front(&splitted, &tmp_str))
								return (vec_estr_free(res.value), ERROR);
							vec_str_push(append, tmp_str);
							j++;
						}
						len = str_len(res.value.buffer[i].value);
						if (len != 0 && str_find_chr(ifs, res.value.buffer[i].value[len - 1]) == NULL)
							string_push(&tmp, tmp_str), str_free(tmp_str);
						else
							vec_str_push(append, tmp_str);
					}
				}
			}
			i++;
		}
		vec_str_push(append, tmp.buf);
	}
	else
	{
		tmp = string_new(64);
		i = 0;
		while (i < res.value.len)
			string_push(&tmp, res.value.buffer[i++].value);
		vec_str_push(append, tmp.buf);
	}
	vec_estr_free(res.value);
	return (NO_ERROR);
}

t_error _ast_into_str(t_ast_node self, t_state *state, t_vec_str *append)
{
	if (self == NULL || state == NULL || append == NULL)
		return (ERROR);
	if (self->kind == AST_EXPANSION)
		return (_exp_into_str(self, state, append));
	if (self->kind == AST_ARITHMETIC_EXPANSION)
		return (_arith_into_str(self, state, append));
	if (self->kind == AST_COMMAND_SUBSTITUTION)
		return (_cmd_into_str(self, state, append));
	if (self->kind == AST_WORD)
		return (_word_into_str(self, state, append));
	return (ERROR);
}

// End Internals funcs

// These are done externally
// t_error run_file_redirection(t_ast_file_redirection *file_redirection, t_state *state, void *out) NOT_DONE;
// t_error run_heredoc_redirection(t_ast_heredoc_redirection *heredoc_redirection, t_state *state, void *out) NOT_DONE;
// t_error run_raw_string(t_ast_raw_string *raw_string, t_state *state, void *out) NOT_DONE;

t_error run_case_(t_ast_case *case_, t_state *state, void *out) NOT_DONE;
t_error run_case_item(t_ast_case_item *case_item, t_state *state, void *out) NOT_DONE;
t_error run_command_substitution(t_ast_command_substitution *command_substitution, t_state *state, void *out) NOT_DONE;
t_error run_compound_statement(t_ast_compound_statement *compound_statement, t_state *state, void *out) NOT_DONE;
t_error run_elif(t_ast_elif *elif, t_state *state, void *out) NOT_DONE;
t_error run_else_(t_ast_else *else_, t_state *state, void *out) NOT_DONE;
t_error run_empty(t_ast_empty *empty, t_state *state, void *out) NOT_DONE;
t_error run_extglob(t_ast_extglob *extglob, t_state *state, void *out) NOT_DONE;
t_error run_for_(t_ast_for *for_, t_state *state, void *out) NOT_DONE;
t_error run_function_definition(t_ast_function_definition *function_definition, t_state *state, void *out) NOT_DONE;
t_error run_if_(t_ast_if *if_, t_state *state, void *out) NOT_DONE;
t_error run_list(t_ast_list *list, t_state *state, void *out) NOT_DONE;
t_error run_regex(t_ast_regex *regex, t_state *state, void *out) NOT_DONE;
t_error run_subshell(t_ast_subshell *subshell, t_state *state, void *out) NOT_DONE;
t_error run_until(t_ast_until *until, t_state *state, void *out) NOT_DONE;
t_error run_variable_assignment(t_ast_variable_assignment *variable_assignment, t_state *state, bool is_temporary, void *out) NOT_DONE;
t_error run_while_(t_ast_while *while_, t_state *state, void *out) NOT_DONE;

void mem_free(void *free);

t_error run_pipeline(t_ast_pipeline *pipeline, t_state *state, t_pipeline_result *out)
{
	t_usize			 i;
	t_cmd_pipe		 cmd_pipe;
	t_ast_node		 child;
	t_error			 ret;
	t_command_result cmd_result;
	t_ast_node		 tmp_ast;

	if (pipeline == NULL || state == NULL || out == NULL)
		return (ERROR);
	i = 0;
	ret = NO_ERROR;
	cmd_pipe.input = NULL;
	cmd_pipe.create_output = true;
	while (i < pipeline->statements.len - 1)
	{
		child = pipeline->statements.buffer[i];
		if (child->kind == AST_COMMAND)
		{
			if (run_command(&child->data.command, state, cmd_pipe, &cmd_result))
			{
				cmd_pipe.input = NULL;
				ret = ERROR;
			}
			else
			{
				out->exit = cmd_result.exit;
				close_fd(cmd_pipe.input);
				if (cmd_result.process.stdout != NULL)
					cmd_pipe.input = cmd_result.process.stdout;
				if (cmd_result.process.stdin != NULL)
					close_fd(cmd_result.process.stdin);
				if (cmd_result.process.stderr != NULL)
					close_fd(cmd_result.process.stderr);
			}
		}
		i++;
	}
	{
		cmd_pipe.create_output = false;
		child = pipeline->statements.buffer[i];
		if (child->kind == AST_COMMAND)
		{
			while (!vec_ast_pop_front(&pipeline->suffixes_redirections, &tmp_ast))
				vec_ast_push(&child->data.command.suffixes_redirections, tmp_ast);
			if (run_command(&child->data.command, state, cmd_pipe, &cmd_result))
			{
				ret = ERROR;
			}
			else
			{
				out->exit = cmd_result.exit;
				close_fd(cmd_pipe.input);
				if (cmd_result.process.stdout != NULL)
					close_fd(cmd_result.process.stdout);
				if (cmd_result.process.stdin != NULL)
					close_fd(cmd_result.process.stdin);
				if (cmd_result.process.stderr != NULL)
					close_fd(cmd_result.process.stderr);
			}
		}
	}

	return (ret);
}

t_error run_program(t_ast_program *self, t_state *state, t_program_result *out)
{
	t_usize	   i;
	t_ast_node child;

	t_command_result  cmd_result;
	t_pipeline_result pipeline_result;

	if (self == NULL || state == NULL || out == NULL)
		return (ERROR);
	i = 0;
	while (i < self->body.len)
	{
		child = self->body.buffer[i];
		if (child->kind == AST_COMMAND)
		{
			if (run_command(&child->data.command, state, (t_cmd_pipe){NULL, false}, &cmd_result))
				return (out->exit = 127, ERROR);
			out->exit = cmd_result.exit;
			if (cmd_result.process.stdin != NULL)
				close_fd(cmd_result.process.stdin);
			if (cmd_result.process.stdout != NULL)
				close_fd(cmd_result.process.stdout);
			if (cmd_result.process.stderr != NULL)
				close_fd(cmd_result.process.stderr);
		}
		else if (child->kind == AST_PIPELINE)
		{
			if (run_pipeline(&child->data.pipeline, state, &pipeline_result))
				return (out->exit = 127, ERROR);
		}
		else
			;
		i++;
	}

	return (ERROR);
}

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

t_error _clone_env(const t_kv_env *kv, void *ctx, t_kv_env *out)
{
	(void)(ctx);

	out->key = str_clone(kv->key);
	out->val = str_clone(kv->val);
	return (NO_ERROR);
}

struct s_ffree_state
{
	t_state	  *state;
	t_cmd_pipe cmd_pipe;
};

void _ffree_func(struct s_ffree_state *state)
{
	if (state == NULL)
		return;
	hmap_env_free(state->state->env);
	hmap_env_free(state->state->tmp_var);
	close_fd(state->cmd_pipe.input);
	me_exit(127);
}

bool _is_builtin(t_const_str argv0);

t_error _handle_builtin(t_spawn_info info, t_state *state, t_cmd_pipe cmd_pipe, t_command_result *out)
{
	t_usize				 i;
	const t_const_str	 argv0 = info.binary_path;
	const t_str			 value[] = {"cd", "echo", "env", "exit", "export", "pwd", "unset", NULL};
	const t_builtin_func funcs[] = {builtin_cd____, builtin_echo__, builtin_env___, builtin_exit__,
									builtin_export, builtin_pwd___, builtin_unset_, NULL};
	t_builtin_func		 actual_func;

	i = 0;
	if (argv0 == NULL)
		return (ERROR);
	actual_func = NULL;
	while (value[i] != NULL)
	{
		if (str_compare(argv0, value[i]))
		{
			actual_func = funcs[i];
			break;
		}
		i++;
	}
	if (actual_func == NULL)
		return (me_abort("Builtin found but no function found..."), ERROR);
	// we need to check if we have to fork !
	
	return (NO_ERROR);
}

t_error _spawn_cmd_and_run(t_vec_str args, t_vec_ast redirection, t_state *state, t_cmd_pipe cmd_pipe, t_command_result *out)
{
	t_spawn_info		 info;
	t_usize				 i;
	t_ast_node			 red;
	t_vec_str			 filename_args;
	t_fd				*red_fd;
	struct s_ffree_state ffree;

	info = (t_spawn_info){};
	if (cmd_pipe.input != NULL)
		info.stdin = fd(cmd_pipe.input);
	if (cmd_pipe.input != NULL && !(cmd_pipe.input->perms & FD_READ))
		printf("PERMISSION ERROR for %s !\n", cmd_pipe.input->name);
	if (cmd_pipe.create_output)
		info.stdout = piped();
	i = 0;
	filename_args = vec_str_new(16, str_free);
	while (i < redirection.len)
	{
		red = redirection.buffer[i];
		if (red == NULL)
			continue;
		vec_str_free(filename_args);
		filename_args = vec_str_new(16, str_free);
		if (red->kind == AST_FILE_REDIRECTION)
		{
			if (red->data.file_redirection.op == AST_REDIR_INPUT)
			{
				if (info.stdin.tag == R_FD)
					close_fd(info.stdin.fd.fd);
				info.stdin.tag = R_INHERITED;
				if (_ast_into_str(red->data.file_redirection.output, state, &filename_args))
					return (ERROR);
				if (filename_args.len != 1)
					return (vec_str_free(filename_args), ERROR);
				red_fd = open_fd(filename_args.buffer[i], FD_READ, O_CLOEXEC, 0);
				if (red_fd == NULL)
					return (vec_str_free(filename_args), ERROR);
				info.stdin = fd(red_fd);
			};
			if (red->data.file_redirection.op == AST_REDIR_OUTPUT)
			{
				if (info.stdout.tag == R_FD)
					close_fd(info.stdout.fd.fd);
				info.stdout.tag = R_INHERITED;
				if (_ast_into_str(red->data.file_redirection.output, state, &filename_args))
					return (ERROR);
				if (filename_args.len != 1)
					return (vec_str_free(filename_args), ERROR);
				red_fd = open_fd(filename_args.buffer[i], FD_WRITE, O_TRUNC | O_CREAT | O_CLOEXEC, FP_ALL_READ | FP_ALL_WRITE);
				if (red_fd == NULL)
					return (vec_str_free(filename_args), ERROR);
				info.stdout = fd(red_fd);
			};
			if (red->data.file_redirection.op == AST_REDIR_APPEND)
			{
				if (info.stdout.tag == R_FD)
					close_fd(info.stdout.fd.fd);
				info.stdout.tag = R_INHERITED;
				if (_ast_into_str(red->data.file_redirection.output, state, &filename_args))
					return (ERROR);
				if (filename_args.len != 1)
					return (vec_str_free(filename_args), ERROR);
				red_fd = open_fd(filename_args.buffer[i], FD_WRITE, O_TRUNC | O_CREAT | O_CLOEXEC, FP_ALL_READ | FP_ALL_WRITE);
				if (red_fd == NULL)
					return (vec_str_free(filename_args), ERROR);
				info.stdout = fd(red_fd);
			};
			if (red->data.file_redirection.op == AST_REDIR_DUP_INPUT || red->data.file_redirection.op == AST_REDIR_DUP_OUTPUT ||
				red->data.file_redirection.op == AST_REDIR_CLOSE_INPUT || red->data.file_redirection.op == AST_REDIR_CLOSE_OUTPUT ||
				red->data.file_redirection.op == AST_REDIR_INPUT_OUTPUT || red->data.file_redirection.op == AST_REDIR_OUTPUT_CLOBBER)
				return (ERROR);
		}
		if (red->kind == AST_HEREDOC_REDIRECTION)
		{
			if (red->data.heredoc_redirection.op == AST_REDIR_HEREDOC)
			{
				t_pipe heredoc_pipe;

				if (info.stdout.tag == R_FD)
					close_fd(info.stdout.fd.fd);
				info.stdout.tag = R_INHERITED;
				if (create_pipe(&heredoc_pipe))
					return (ERROR);
				put_string_fd(heredoc_pipe.write, red->data.heredoc_redirection.content);
				close_fd(heredoc_pipe.write);
				info.stdin = fd(heredoc_pipe.read);
			}
			if (red->data.heredoc_redirection.op == AST_REDIR_HEREDOC_INDENT)
				return (ERROR);
		}

		i++;
	}
	ffree = (struct s_ffree_state){.state = state, .cmd_pipe = cmd_pipe};
	redirection.len = 0;
	vec_ast_free(redirection);
	vec_str_free(filename_args);
	info.arguments = args;
	if (args.len == 0)
		return (vec_str_free(args), ERROR);
	if (_is_builtin(args.buffer[0]))
		return (_handle_builtin(info, state, cmd_pipe, out));
	if (build_envp(state->env, state->tmp_var, &info.environement))
		return (ERROR);
	info.binary_path = str_clone(info.arguments.buffer[0]);
	info.forked_free_args = &ffree;
	info.forked_free = (void (*)(void *))_ffree_func;
	signal(SIGINT, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);
	if (spawn_process(info, &out->process))
		return (ERROR);
	int status;
	if (waitpid(out->process.pid, &status, 0) == -1)
		return (ERROR);
	if (WIFEXITED(status))
		out->exit = WEXITSTATUS(status);
	if (WIFSIGNALED(status))
		out->exit = WTERMSIG(status);
	return (NO_ERROR);
}

bool _is_builtin(t_const_str argv0)
{
	t_usize		i;
	const t_str value[] = {"cd", "echo", "env", "exit", "export", "pwd", "unset", NULL};
	const t_str funcs[] = {"cd", "echo", "env", "exit", "export", "pwd", "unset", NULL};

	i = 0;
	if (argv0 == NULL)
		return (false);
	while (value[i] != NULL)
		if (str_compare(argv0, value[i++]))
			return (true);
	return (false);
}

t_error run_command(t_ast_command *command, t_state *state, t_cmd_pipe cmd_pipe, t_command_result *out)
{
	t_vec_str	   args;
	t_vec_str	   split;
	t_vec_ast	   redirection;
	t_usize		   i;
	t_hashmap_env *env_bck;
	t_ast_node	   tmp;
	t_str		   tmp_str;

	if (command == NULL || state == NULL || out == NULL)
		return (ERROR);
	hmap_env_clear(state->tmp_var);
	args = vec_str_new(command->cmd_word.len, str_free);
	redirection = vec_ast_new(command->suffixes_redirections.len, ast_free);
	i = 0;
	while (i < command->prefixes.len)
	{
		tmp = command->prefixes.buffer[i];
		if (tmp->kind == AST_FILE_REDIRECTION || tmp->kind == AST_HEREDOC_REDIRECTION)
			vec_ast_push(&redirection, tmp);
		if (tmp->kind == AST_VARIABLE_ASSIGNMENT)
		{
			if (run_variable_assignment(&tmp->data.variable_assignment, state, true, NULL))
				return (vec_str_free(args), vec_ast_free(redirection), ERROR);
		}
		i++;
	}
	i = 0;
	while (i < command->cmd_word.len)
	{
		if (_ast_into_str(command->cmd_word.buffer[i], state, &args))
			return (vec_str_free(args), vec_ast_free(redirection), ERROR);
		i++;
	}
	i = 0;
	while (i < command->suffixes_redirections.len)
	{
		tmp = command->suffixes_redirections.buffer[i];
		if (tmp->kind == AST_FILE_REDIRECTION || tmp->kind == AST_HEREDOC_REDIRECTION)
			vec_ast_push(&redirection, tmp);
		i++;
	}
	if (_spawn_cmd_and_run(args, redirection, state, cmd_pipe, out))
		return (ERROR);
	return (NO_ERROR);
}

t_error run_word(t_ast_word *word, t_state *state, t_word_result *out)
{
	t_word_iterator	 iter_state;
	t_vec_str		 tmp;
	t_str			 tmp_str;
	t_expandable_str s;

	if (word == NULL || state == NULL || out == NULL)
		return (ERROR);
	iter_state.res.value = vec_estr_new(64, free_expandable_str);
	iter_state.res.has_error = false;
	iter_state.res.kind = word->kind;
	iter_state.state = state;
	vec_ast_iter(&word->inner, (void (*)())_run_word_into_str, &iter_state);
	if (iter_state.res.has_error)
		return (vec_estr_free(iter_state.res.value), ERROR);
	return (*out = iter_state.res, NO_ERROR);
}
