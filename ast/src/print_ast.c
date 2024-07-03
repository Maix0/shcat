/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ast.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:38:29 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/03 22:34:13 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "me/types.h"
#include <stdio.h>

void ast_print_node(t_ast_node self);

#define NOT_DONE                                                                                                                           \
	{                                                                                                                                      \
		printf("function `%s` isn't done !\n", __func__);                                                                                  \
		(void)(self);                                                                                                                      \
	}

/*
t_ast_arithmetic_expansion arithmetic_expansion;
t_ast_case				   case_;
t_ast_case_item			   case_item;
t_ast_command			   command;
t_ast_command_substitution command_substitution;
t_ast_compound_statement   compound_statement;
t_ast_elif				   elif;
t_ast_else				   else_;
t_ast_empty				   empty;
t_ast_expansion			   expansion;
t_ast_extglob			   extglob;
t_ast_file_redirection	   file_redirection;
t_ast_for				   for_;
t_ast_function_definition  function_definition;
t_ast_heredoc_redirection  heredoc_redirection;
t_ast_if				   if_;
t_ast_list				   list;
t_ast_pipeline			   pipeline;
t_ast_program			   program;
t_ast_raw_string		   raw_string;
t_ast_regex				   regex;
t_ast_subshell			   subshell;
t_ast_until				   until;
t_ast_variable_assignment  variable_assignment;
t_ast_while				   while_;
t_ast_word				   word;
*/

void ast_print_node_command(t_ast_node self);
void ast_print_node_command_substitution(t_ast_node self);
void ast_print_node_compound_statement(t_ast_node self);
void ast_print_node_expansion(t_ast_node self);
void ast_print_node_extglob(t_ast_node self);
void ast_print_node_file_redirection(t_ast_node self);
void ast_print_node_list(t_ast_node self);
void ast_print_node_pipeline(t_ast_node self);
void ast_print_node_program(t_ast_node self);
void ast_print_node_raw_string(t_ast_node self);
void ast_print_node_regex(t_ast_node self);
void ast_print_node_subshell(t_ast_node self);
void ast_print_node_variable_assignment(t_ast_node self);
void ast_print_node_word(t_ast_node self);

/*^^^   DONE   ^^^*/
/*vvv NOT DONE vvv*/

void ast_print_node_arithmetic_expansion(t_ast_node self) NOT_DONE;
void ast_print_node_case(t_ast_node self) NOT_DONE;
void ast_print_node_case_item(t_ast_node self) NOT_DONE;
void ast_print_node_elif(t_ast_node self) NOT_DONE;
void ast_print_node_else(t_ast_node self) NOT_DONE;
void ast_print_node_for(t_ast_node self) NOT_DONE;
void ast_print_node_function_definition(t_ast_node self) NOT_DONE;
void ast_print_node_heredoc_redirection(t_ast_node self) NOT_DONE;
void ast_print_node_if(t_ast_node self) NOT_DONE;
void ast_print_node_until(t_ast_node self) NOT_DONE;
void ast_print_node_while(t_ast_node self) NOT_DONE;

/// HELPER_FUNCS

void _print_term(t_ast_terminator_kind term)
{
	if (term == AST_TERM_NONE)
		return;
	if (term == AST_TERM_FORK)
		printf("&");
	if (term == AST_TERM_SEMI)
		printf(";");
	if (term == AST_TERM_DOUBLE_SEMI)
		printf(";;");
	if (term == AST_TERM_NEWLINE)
		printf("\n");
}

/// IMPL

void ast_print_node_variable_assignment(t_ast_node self)
{
	if (self == NULL)
		return;
	if (self->kind != AST_VARIABLE_ASSIGNMENT)
		return;
	if (self->data.variable_assignment.bang)
		printf("! ");
	printf("%s=", self->data.variable_assignment.name);
	if (self->data.variable_assignment.value != NULL)
		ast_print_node(self->data.variable_assignment.value);
	printf(" ");
}

void ast_print_node_pipeline(t_ast_node self)
{
	t_usize i;

	if (self == NULL)
		return;
	if (self->kind != AST_PIPELINE)
		return;
	if (self->data.pipeline.bang)
		printf("! ");
	if (self->data.pipeline.statements.len != 0)
	{
		i = 0;
		ast_print_node(self->data.pipeline.statements.buffer[i++]);
		while (i < self->data.pipeline.statements.len)
		{
			printf(" | ");
			ast_print_node(self->data.pipeline.statements.buffer[i++]);
		}
	}
	i = 0;
	while (i < self->data.pipeline.suffixes_redirections.len)
	{
		printf(" ");
		ast_print_node(self->data.pipeline.suffixes_redirections.buffer[i++]);
	}
	_print_term(self->data.pipeline.term);
}

void ast_print_node_list(t_ast_node self)
{
	t_usize i;

	if (self == NULL)
		return;
	if (self->kind != AST_LIST)
		return;
	ast_print_node(self->data.list.left);
	if (self->data.list.op == AST_LIST_OR)
		printf(" || ");
	if (self->data.list.op == AST_LIST_AND)
		printf(" && ");
	ast_print_node(self->data.list.right);
	i = 0;
	while (i < self->data.list.suffixes_redirections.len)
	{
		ast_print_node(self->data.list.suffixes_redirections.buffer[i++]);
		printf(" ");
	}
	_print_term(self->data.list.term);
}

void ast_print_node_extglob(t_ast_node self)
{
	if (self == NULL)
		return;
	if (self->kind != AST_EXTGLOB)
		return;
	printf("%s", self->data.extglob.pattern);
}

void ast_print_node_file_redirection(t_ast_node self)
{
	if (self == NULL)
		return;
	if (self->kind != AST_FILE_REDIRECTION)
		return;
	if (self->data.file_redirection.input != NULL)
		ast_print_node(self->data.file_redirection.input);

	if (self->data.file_redirection.op == AST_REDIR_INPUT)
		printf("<");
	if (self->data.file_redirection.op == AST_REDIR_OUTPUT)
		printf(">");
	if (self->data.file_redirection.op == AST_REDIR_INPUT_OUTPUT)
		printf("<>");
	if (self->data.file_redirection.op == AST_REDIR_APPEND)
		printf(">>");
	if (self->data.file_redirection.op == AST_REDIR_DUP_INPUT)
		printf("<&");
	if (self->data.file_redirection.op == AST_REDIR_DUP_OUTPUT)
		printf(">&");
	if (self->data.file_redirection.op == AST_REDIR_OUTPUT_CLOBBER)
		printf(">|");
	// if (self->data.file_redirection.op == AST_REDIR_HEREDOC)
	// 	printf("<<");
	// if (self->data.file_redirection.op == AST_REDIR_HEREDOC_INDENT)
	// 	printf("<<-");

	if (self->data.file_redirection.output != NULL)
		ast_print_node(self->data.file_redirection.output);
}

void ast_print_node_expansion(t_ast_node self)
{
	t_usize i;

	if (self == NULL)
		return;
	if (self->kind != AST_EXPANSION)
		return;
	printf("${");
	if (self->data.expansion.len_operator)
		printf("#");
	printf("%s", self->data.expansion.var_name);

	if (self->data.expansion.kind == E_OP_NONE)
		(void)(false);
	if (self->data.expansion.kind == E_OP_ERROR)
		printf("?");
	if (self->data.expansion.kind == E_OP_DEFAULT)
		printf("-");
	if (self->data.expansion.kind == E_OP_ALTERNATE)
		printf("+");
	if (self->data.expansion.kind == E_OP_ASSIGN_DEFAULT)
		printf("=");
	if (self->data.expansion.kind == E_OP_ERROR_COLON)
		printf(":?");
	if (self->data.expansion.kind == E_OP_DEFAULT_COLON)
		printf(":-");
	if (self->data.expansion.kind == E_OP_ALTERNATE_COLON)
		printf(":+");
	if (self->data.expansion.kind == E_OP_ASSIGN_DEFAULT_COLON)
		printf(":=");

	i = 0;
	while (i < self->data.expansion.args.len)
		ast_print_node(self->data.expansion.args.buffer[i++]);
	printf("}");
}

void ast_print_node_command_substitution(t_ast_node self)
{
	t_usize i;

	if (self == NULL)
		return;
	if (self->kind != AST_COMMAND_SUBSTITUTION)
		return;
	printf("$(");
	i = 0;
	while (i < self->data.command_substitution.body.len)
	{
		ast_print_node(self->data.command_substitution.body.buffer[i++]);
	}
	printf(")");
}

void ast_print_node_command(t_ast_node self)
{
	t_usize i;

	if (self == NULL)
		return;
	if (self->kind != AST_COMMAND)
		return;
	if (self->data.command.bang)
		printf("! ");
	i = 0;
	while (i < self->data.command.prefixes.len)
	{
		ast_print_node(self->data.command.prefixes.buffer[i++]);
		printf(" ");
	}
	i = 0;
	while (i < self->data.command.cmd_word.len)
	{
		ast_print_node(self->data.command.cmd_word.buffer[i++]);
		printf(" ");
	}
	i = 0;
	while (i < self->data.command.suffixes_redirections.len)
	{
		ast_print_node(self->data.command.suffixes_redirections.buffer[i++]);
		printf(" ");
	}
	_print_term(self->data.command.term);
}

void ast_print_node_empty(t_ast_node self)
{
	if (self == NULL)
		return;
	if (self->kind != AST_EMPTY)
		return;
}

void ast_print_node_compound_statement(t_ast_node self)
{
	t_usize i;

	if (self == NULL)
		return;
	if (self->kind != AST_COMPOUND_STATEMENT)
		return;
	i = 0;
	if (self->data.compound_statement.bang)
		printf("! ");
	printf("{ ");
	while (i < self->data.compound_statement.body.len)
	{
		ast_print_node(self->data.compound_statement.body.buffer[i++]);
		printf(" ");
	}
	printf("}");
	i = 0;
	while (i < self->data.compound_statement.suffixes_redirections.len)
	{
		printf(" ");
		ast_print_node(self->data.compound_statement.suffixes_redirections.buffer[i++]);
	}
	printf(" ");
	_print_term(self->data.compound_statement.term);
}

void ast_print_node_subshell(t_ast_node self)
{
	t_usize i;

	if (self == NULL)
		return;
	if (self->kind != AST_SUBSHELL)
		return;
	i = 0;
	if (self->data.subshell.bang)
		printf("! ");
	printf("( ");
	while (i < self->data.subshell.body.len)
	{
		ast_print_node(self->data.subshell.body.buffer[i++]);
		printf(" ");
	}
	printf(")");
	i = 0;
	while (i < self->data.subshell.suffixes_redirections.len)
	{
		printf(" ");
		ast_print_node(self->data.subshell.suffixes_redirections.buffer[i++]);
	}
	printf(" ");
	_print_term(self->data.subshell.term);
}

void ast_print_node_program(t_ast_node self)
{
	t_usize i;

	if (self == NULL)
		return;
	if (self->kind != AST_PROGRAM)
		return;
	i = 0;
	while (i < self->data.program.body.len)
	{
		ast_print_node(self->data.program.body.buffer[i++]);
		printf(" ");
	}
}

void ast_print_node_word(t_ast_node self)
{
	t_usize i;
	t_str	quote_type;

	if (self == NULL)
		return;
	if (self->kind != AST_WORD)
		return;
	quote_type = "";
	if (self->data.word.kind == AST_WORD_SINGLE_QUOTE)
		quote_type = "\'";
	if (self->data.word.kind == AST_WORD_DOUBLE_QUOTE)
		quote_type = "\"";
	i = 0;
	printf("%s", quote_type);
	while (i < self->data.word.inner.len)
		ast_print_node(self->data.word.inner.buffer[i++]);
	printf("%s", quote_type);
}

void ast_print_node_regex(t_ast_node self)
{
	if (self == NULL)
		return;
	if (self->kind != AST_REGEX)
		return;
	printf("%s", self->data.regex.pattern);
}

void ast_print_node_raw_string(t_ast_node self)
{
	if (self == NULL)
		return;
	if (self->kind != AST_RAW_STRING)
		return;
	printf("%s", self->data.raw_string.str);
}

void ast_print_node(t_ast_node self)
{
	if (self == NULL)
		return ((void)printf("ast == NULL\n"));
	if (self->kind == AST_ARITHMETIC_EXPANSION)
		return (ast_print_node_arithmetic_expansion(self));
	if (self->kind == AST_CASE)
		return (ast_print_node_case(self));
	if (self->kind == AST_CASE_ITEM)
		return (ast_print_node_case_item(self));
	if (self->kind == AST_COMMAND)
		return (ast_print_node_command(self));
	if (self->kind == AST_COMMAND_SUBSTITUTION)
		return (ast_print_node_command_substitution(self));
	if (self->kind == AST_COMPOUND_STATEMENT)
		return (ast_print_node_compound_statement(self));
	if (self->kind == AST_ELIF)
		return (ast_print_node_elif(self));
	if (self->kind == AST_ELSE)
		return (ast_print_node_else(self));
	if (self->kind == AST_EMPTY)
		return (ast_print_node_empty(self));
	if (self->kind == AST_EXPANSION)
		return (ast_print_node_expansion(self));
	if (self->kind == AST_EXTGLOB)
		return (ast_print_node_extglob(self));
	if (self->kind == AST_FILE_REDIRECTION)
		return (ast_print_node_file_redirection(self));
	if (self->kind == AST_FOR)
		return (ast_print_node_for(self));
	if (self->kind == AST_FUNCTION_DEFINITION)
		return (ast_print_node_function_definition(self));
	if (self->kind == AST_HEREDOC_REDIRECTION)
		return (ast_print_node_heredoc_redirection(self));
	if (self->kind == AST_IF)
		return (ast_print_node_if(self));
	if (self->kind == AST_LIST)
		return (ast_print_node_list(self));
	if (self->kind == AST_PIPELINE)
		return (ast_print_node_pipeline(self));
	if (self->kind == AST_PROGRAM)
		return (ast_print_node_program(self));
	if (self->kind == AST_RAW_STRING)
		return (ast_print_node_raw_string(self));
	if (self->kind == AST_REGEX)
		return (ast_print_node_regex(self));
	if (self->kind == AST_SUBSHELL)
		return (ast_print_node_subshell(self));
	if (self->kind == AST_UNTIL)
		return (ast_print_node_until(self));
	if (self->kind == AST_VARIABLE_ASSIGNMENT)
		return (ast_print_node_variable_assignment(self));
	if (self->kind == AST_WHILE)
		return (ast_print_node_while(self));
	if (self->kind == AST_WORD)
		return (ast_print_node_word(self));
	printf("Unknown ast->kind: %#04x\n", self->kind);
}
