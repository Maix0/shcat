/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:22:29 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/12 11:52:23 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "exec/run.h"
#include "me/types.h"

#include <stdio.h>
#pragma clang diagnostic ignored "-Wunused-parameter"

/*
t_ast_arithmetic_expansion	arithmetic_expansion;
t_ast_case					case_;
t_ast_case_item				case_item;
t_ast_command				command;
t_ast_command_substitution	command_substitution;
t_ast_compound_statement	compound_statement;
t_ast_elif					elif;
t_ast_else					else_;
t_ast_empty					empty;
t_ast_expansion				expansion;
t_ast_extglob				extglob;
t_ast_file_redirection		file_redirection;
t_ast_for					for_;
t_ast_function_definition	function_definition;
t_ast_heredoc_redirection	heredoc_redirection;
t_ast_if					if_;
t_ast_list					list;
t_ast_pipeline				pipeline;
t_ast_program				program;
t_ast_raw_string			raw_string;
t_ast_regex					regex;
t_ast_subshell				subshell;
t_ast_until					until;
t_ast_variable_assignment	variable_assignment;
t_ast_while					while_;
t_ast_word					word;
*/

#define NOT_DONE                                                                                                                           \
	{                                                                                                                                      \
		printf("function `%s` isn't done !\n", __func__);                                                                                  \
		return (ERROR);                                                                                                                    \
	}

t_error run_arithmetic_expansion(t_ast_arithmetic_expansion arithmetic_expansion, void *arg) NOT_DONE;
t_error run_case_(t_ast_case case_, void *arg) NOT_DONE;
t_error run_case_item(t_ast_case_item case_item, void *arg) NOT_DONE;
t_error run_command(t_ast_command command, void *arg) NOT_DONE;
t_error run_command_substitution(t_ast_command_substitution command_substitution, void *arg) NOT_DONE;
t_error run_compound_statement(t_ast_compound_statement compound_statement, void *arg) NOT_DONE;
t_error run_elif(t_ast_elif elif, void *arg) NOT_DONE;
t_error run_else_(t_ast_else else_, void *arg) NOT_DONE;
t_error run_empty(t_ast_empty empty, void *arg) NOT_DONE;
t_error run_expansion(t_ast_expansion expansion, void *arg) NOT_DONE;
t_error run_extglob(t_ast_extglob extglob, void *arg) NOT_DONE;
t_error run_file_redirection(t_ast_file_redirection file_redirection, void *arg) NOT_DONE;
t_error run_for_(t_ast_for for_, void *arg) NOT_DONE;
t_error run_function_definition(t_ast_function_definition function_definition, void *arg) NOT_DONE;
t_error run_heredoc_redirection(t_ast_heredoc_redirection heredoc_redirection, void *arg) NOT_DONE;
t_error run_if_(t_ast_if if_, void *arg) NOT_DONE;
t_error run_list(t_ast_list list, void *arg) NOT_DONE;
t_error run_pipeline(t_ast_pipeline pipeline, void *arg) NOT_DONE;
t_error run_program(t_ast_program program, void *arg) NOT_DONE;
t_error run_raw_string(t_ast_raw_string raw_string, void *arg) NOT_DONE;
t_error run_regex(t_ast_regex regex, void *arg) NOT_DONE;
t_error run_subshell(t_ast_subshell subshell, void *arg) NOT_DONE;
t_error run_until(t_ast_until until, void *arg) NOT_DONE;
t_error run_variable_assignment(t_ast_variable_assignment variable_assignment, void *arg) NOT_DONE;
t_error run_while_(t_ast_while while_, void *arg) NOT_DONE;
t_error run_word(t_ast_word word, void *arg) NOT_DONE;
