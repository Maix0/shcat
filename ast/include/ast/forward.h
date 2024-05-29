/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forward.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:24:34 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/28 13:51:40 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORWARD_H
#define FORWARD_H

typedef union u_ast_node t_ast_node;

typedef enum e_assignement_modifier t_assignement_modifier;
typedef enum e_ast_type				t_ast_type;
typedef enum e_op_in				t_op_in;
typedef enum e_op_pre				t_op_pre;
typedef enum e_redirect_file_op		t_redirect_file_op;
typedef enum e_redirect_heredoc_op	t_redirect_heredoc_op;

typedef struct s_and_list			  t_and_list;
typedef struct s_and_or_list		  t_and_or_list;
typedef struct s_arithmetic_expansion t_arithmetic_expansion;
typedef struct s_assignment_list	  t_assignment_list;
typedef struct s_assignment			  t_assignment;
typedef struct s_ast_string			  t_ast_string;
typedef struct s_async_command		  t_async_command;
typedef struct s_brace_command		  t_brace_command;
typedef struct s_case_command		  t_case_command;
typedef struct s_case_item			  t_case_item;
typedef struct s_command_backticks	  t_command_backticks;
typedef struct s_command_substitution t_command_substitution;
typedef struct s_command			  t_command;
typedef struct s_compound_list		  t_compound_list;
typedef struct s_double_quote_string  t_double_quote_string;
typedef struct s_elif_clause		  t_elif_clause;
typedef struct s_else_clause		  t_else_clause;
typedef struct s_for_command		  t_for_command;
typedef struct s_function_definition  t_function_definition;
typedef struct s_if_clause			  t_if_clause;
typedef struct s_if_command			  t_if_command;
typedef struct s_name				  t_name;
typedef struct s_not				  t_not;
typedef struct s_or_list			  t_or_list;
typedef struct s_parameter_expansion  t_parameter_expansion;
typedef struct s_pipe_list			  t_pipe_list;
typedef struct s_program			  t_program;
typedef struct s_redirect_file		  t_redirect_file;
typedef struct s_redirect_heredoc	  t_redirect_heredoc;
typedef struct s_sequential_list	  t_sequential_list;
typedef struct s_simple_command		  t_simple_command;
typedef struct s_subshell_command	  t_subshell_command;
typedef struct s_until_command		  t_until_command;
typedef struct s_while_command		  t_while_command;
typedef struct s_word				  t_word;

typedef union u_and_list_body		 t_and_list_body;
typedef union u_and_or_list_body	 t_and_or_list_body;
typedef union u_async_command_body	 t_async_command_body;
typedef union u_command_inner		 t_command_inner;
typedef union u_compound_command	 t_compound_command;
typedef union u_compound_list_body	 t_compound_list_body;
typedef union u_expension_or_string	 t_expension_or_string;
typedef union u_expension			 t_expension;
typedef union u_if_clauses			 t_if_clauses;
typedef union u_not_body			 t_not_body;
typedef union u_or_list_body		 t_or_list_body;
typedef union u_program_body		 t_program_body;
typedef union u_redirect_or_assign	 t_redirect_or_assign;
typedef union u_redirect_or_word	 t_redirect_or_word;
typedef union u_redirect			 t_redirect;
typedef union u_sequential_list_body t_sequential_list_body;

#endif /* FORWARD_H */
