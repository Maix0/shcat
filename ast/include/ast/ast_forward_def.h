/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_forward_def.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:24:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/22 16:52:42 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AST_FORWARD_DEF_H
# define AST_FORWARD_DEF_H

typedef enum e_ast_node_kind				t_ast_node_kind;
typedef enum e_ast_word_kind				t_ast_word_kind;
typedef enum e_ast_list_kind				t_ast_list_kind;
typedef enum e_ast_expansion_operator		t_ast_expansion_operator;
typedef enum e_ast_arithmetic_operator		t_ast_arithmetic_operator;
typedef enum e_ast_terminator_kind			t_ast_terminator_kind;
typedef enum e_ast_redirection_kind			t_ast_redirection_kind;
typedef union u_ast_node_data				t_ast_node_data;

typedef struct s_ast_node					*t_ast_node;

typedef struct s_ast_arithmetic_expansion	t_ast_arithmetic_expansion;
typedef struct s_ast_arithmetic_literal		t_ast_arithmetic_literal;
typedef struct s_ast_arithmetic_binary		t_ast_arithmetic_binary;
typedef struct s_ast_arithmetic_postfix		t_ast_arithmetic_postfix;
typedef struct s_ast_arithmetic_ternary		t_ast_arithmetic_ternary;
typedef struct s_ast_arithmetic_unary		t_ast_arithmetic_unary;
typedef struct s_ast_case					t_ast_case;
typedef struct s_ast_case_item				t_ast_case_item;
typedef struct s_ast_command				t_ast_command;
typedef struct s_ast_command_substitution	t_ast_command_substitution;
typedef struct s_ast_compound_statement		t_ast_compound_statement;
typedef struct s_ast_elif					t_ast_elif;
typedef struct s_ast_else					t_ast_else;
typedef struct s_ast_empty					t_ast_empty;
typedef struct s_ast_expansion				t_ast_expansion;
typedef struct s_ast_extglob				t_ast_extglob;
typedef struct s_ast_file_redirection		t_ast_file_redirection;
typedef struct s_ast_for					t_ast_for;
typedef struct s_ast_function_definition	t_ast_function_definition;
typedef struct s_ast_heredoc_redirection	t_ast_heredoc_redirection;
typedef struct s_ast_if						t_ast_if;
typedef struct s_ast_list					t_ast_list;
typedef struct s_ast_pipeline				t_ast_pipeline;
typedef struct s_ast_program				t_ast_program;
typedef struct s_ast_raw_string				t_ast_raw_string;
typedef struct s_ast_regex					t_ast_regex;
typedef struct s_ast_subshell				t_ast_subshell;
typedef struct s_ast_until					t_ast_until;
typedef struct s_ast_variable_assignment	t_ast_variable_assignment;
typedef struct s_ast_while					t_ast_while;
typedef struct s_ast_word					t_ast_word;

/*
t_ast_arithmetic_expansion						arithmetic_expansion;
t_ast_case_item						 		case_item;
t_ast_case										case;
t_ast_command_substitution						command_substitution;
t_ast_command						 			command;
t_ast_compound_statement						compound_statement;
t_ast_elif										elif;
t_ast_else										else;
t_ast_empty						 			empty;
t_ast_expansion						 expansion;
t_ast_file_redirection						file_redirection;
t_ast_for						 for;
t_ast_function_definition						 function_definition;
t_ast_heredoc_redirection						 heredoc_redirection;
t_ast_if						if;
t_ast_list						list;
t_ast_program						program;
t_ast_pipeline						pipeline;
t_ast_raw_string						raw_string;
t_ast_string						string;
t_ast_subshell						subshell;
t_ast_until						 until;
t_ast_variable_assignment						 variable_assignment;
t_ast_while						 while;
t_ast_word						word;
*/

/*
AST_ARITHMETIC_EXPANSION,
AST_CASE_ITEM,
AST_CASE,
AST_COMMAND_SUBSTITUTION,
AST_COMMAND,
AST_COMPOUND_STATEMENT,
AST_ELIF,
AST_ELSE,
AST_EMPTY,
AST_EXPANSION,
AST_FILE_REDIRECTION,
AST_FOR,
AST_FUNCTION_DEFINITION,
AST_HEREDOC_REDIRECTION,
AST_IF,
AST_LIST,
AST_PROGRAM,
AST_PIPELINE,
AST_RAW_STRING,
AST_STRING,
AST_SUBSHELL,
AST_UNTIL,
AST_VARIABLE_ASSIGNMENT,
AST_WHILE,
AST_WORD,
*/

#endif /* AST_FORWARD_DEF_H */
