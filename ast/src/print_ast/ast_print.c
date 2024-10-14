/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:38:29 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/14 14:12:42 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_print_ast.h"

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

static inline void	ast_print_block1(t_ast_node self);
static inline void	ast_print_block2(t_ast_node self);
static inline void	ast_print_block3(t_ast_node self);

static inline void	ast_print_notdone(t_ast_node self)
{
	printf(" <ast_print_notdone> ");
	(void)(self);
}

static inline void	ast_print_block1(t_ast_node self)
{
	if (self->kind == AST_ARITHMETIC_EXPANSION)
		return (ast_print_node_arithmetic_expansion(self));
	if (self->kind == AST_CASE)
		return (ast_print_notdone(self));
	if (self->kind == AST_CASE_ITEM)
		return (ast_print_notdone(self));
	if (self->kind == AST_COMMAND)
		return (ast_print_node_command(self));
	if (self->kind == AST_COMMAND_SUBSTITUTION)
		return (ast_print_node_command_substitution(self));
	if (self->kind == AST_COMPOUND_STATEMENT)
		return (ast_print_node_compound_statement(self));
	if (self->kind == AST_ELIF)
		return (ast_print_notdone(self));
	if (self->kind == AST_ELSE)
		return (ast_print_notdone(self));
	if (self->kind == AST_EMPTY)
		return ;
	ast_print_block2(self);
}

static inline void	ast_print_block2(t_ast_node self)
{
	if (self->kind == AST_EXPANSION)
		return (ast_print_node_expansion(self));
	if (self->kind == AST_EXTGLOB)
		return (ast_print_node_extglob(self));
	if (self->kind == AST_FILE_REDIRECTION)
		return (ast_print_node_file_redirection(self));
	if (self->kind == AST_FOR)
		return (ast_print_notdone(self));
	if (self->kind == AST_FUNCTION_DEFINITION)
		return (ast_print_node_function_definition(self));
	if (self->kind == AST_HEREDOC_REDIRECTION)
		return (ast_print_node_heredoc_redirection(self));
	if (self->kind == AST_IF)
		return (ast_print_notdone(self));
	if (self->kind == AST_LIST)
		return (ast_print_node_list(self));
	ast_print_block3(self);
}

static inline void	ast_print_block3(t_ast_node self)
{
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
		return (ast_print_notdone(self));
	if (self->kind == AST_VARIABLE_ASSIGNMENT)
		return (ast_print_node_variable_assignment(self));
	if (self->kind == AST_WHILE)
		return (ast_print_notdone(self));
	if (self->kind == AST_WORD)
		return (ast_print_node_word(self));
	printf("Unknown ast->kind: %#04x\n", self->kind);
}

void	ast_print(t_ast_node self)
{
	if (self == NULL)
		return ((void)printf("ast == NULL\n"));
	ast_print_block1(self);
}
