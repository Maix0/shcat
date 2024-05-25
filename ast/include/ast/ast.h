/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 19:30:30 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/25 20:42:26 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AST_H
#define AST_H

#include "me/types.h"
#include "ast/forward.h"

/// @brief Node types enumeration
/// @details This enumeration is used to identify the type of a node
typedef enum e_ast_type
{
	TY_EMPTY = 0,
	TY_PROGRAM,
	TY_COMPOUND_LIST,
	TY_SEQUENTIAL_LIST,
	TY_ASYNC_COMMAND,
	TY_AND_LIST,
	TY_OR_LIST,
	TY_AND_OR_LIST,
	TY_NOT,
	TY_PIPE_LIST
} t_ast_type;

/// Can be either a t_sequential_list, t_async_command, t_and_or_list, t_not,
/// t_pipe_list or an t_command
union u_program_body {
	t_ast_type		  *type;
	t_sequential_list *sequential_list;
	t_async_command	  *async_command;
	t_and_or_list	  *and_or_list;
	t_not			  *not_;
	t_pipe_list		  *pipe_list;
	t_command		  *command;
};

/// @brief Entry point of the AST
struct s_program
{
	t_ast_type		type;
	t_program_body *cmds;
	t_usize			cmds_len;
};

/// Can be either a t_sequential_list, t_async_command, t_and_or_list, t_not,
/// t_pipe_list or an t_command
union u_compound_list_body {
	t_ast_type		  *type;
	t_sequential_list *sequential_list;
	t_async_command	  *async_command;
	t_and_or_list	  *and_or_list;
	t_not			  *not_;
	t_pipe_list		  *pipe_list;
	t_command		  *command;
};

struct s_compound_list
{
	t_ast_type			  type;
	t_compound_list_body *cmds;
	t_usize				  cmds_len;
};

/// Can be either a t_async_command, t_and_or_list, t_not, t_pipe_list or an
/// t_command
union u_sequential_list_body {
	t_ast_type		*type;
	t_async_command *async_command;
	t_and_or_list	*and_or_list;
	t_not			*not_;
	t_pipe_list		*pipe_list;
	t_command		*command;
};

/// @note Commands that are separated by a semicolon ; shall be executed
/// sequentially.
/// @note Read more:
/// http://pubs.opengroup.org/onlinepubs/9699919799/utilities/V3_chap02.html#tag_02_09_03_04
/// @note Format: `command1; command2 [; command3 ] ... [;]`
struct s_sequential_list
{
	t_ast_type				type;
	t_sequential_list_body *cmds;
	t_usize					cmds_len;
};

/// Can be either a t_and_or_list, t_not t_pipe_list or t_command
union u_async_command_body {
	t_ast_type	  *type;
	t_and_or_list *and_or_list;
	t_not		  *not_;
	t_pipe_list	  *pipe_list;
	t_command	  *command;
};

/// @note Commands that are ended by an & shall be executed asynchronously.
struct s_async_command
{
	t_ast_type			 type;
	t_async_command_body cmd;
};

/*
	Part of AND_OR list
*/

/// Can be either a t_not t_pipe_list or t_command.
/// The first element CAN be an t_or_list
union u_and_list_body {
	t_ast_type	*type;
	t_pipe_list *pipe_list;
	t_command	*cmd;
	t_or_list	*or_list;
};

struct s_and_list
{
	t_ast_type		 type;
	t_and_list_body *cmds;
	t_usize			 cmds_len;
};

/// Can be either a t_not t_pipe_list or t_command.
/// The first element CAN be an t_and_list
union u_or_list_body {
	t_ast_type	*type;
	t_pipe_list *pipe_list;
	t_command	*cmd;
	t_and_list	*or_list;
};

struct s_or_list
{
	t_ast_type		type;
	t_or_list_body *cmds;
	t_usize			cmds_len;
};

/// Either an ast_node of type `t_and_list` or `t_or_list`
union u_and_or_list_body {
	t_ast_type *type;
	t_and_list *and_list;
	t_or_list  *or_list;
};

struct s_and_or_list
{
	t_ast_type		   type;
	t_and_or_list_body cmds;
};

/// Can be either a t_pipe_list or a t_command
union u_not_body {
	t_ast_type	*type;
	t_pipe_list *pipe_list;
	t_command	*cmd;
};

struct s_not
{
	t_ast_type type;
	t_not_body cmd;
};

struct s_pipe_list
{
	t_ast_type type;
	t_command *cmds;
	t_usize	   cmds_len;
};

union u_command_inner {
	t_ast_type			  *type;
	t_simple_command	  *simple_command;
	t_compound_command	  *compound_command;
	t_assignment_list	  *assignments_list;
	t_function_definition *function_definition;
};

/// Can be either an t_simple_command, t_compound_command, t_assignments_list or
/// t_function_definition
struct s_command
{
	t_ast_type		type;
	t_command_inner inner;
};

union u_redirect_or_assign {
	t_ast_type		  *type;
	t_redirect		  *redirect;
	t_assignment_list *assignments;
};

union u_redirect_or_word {
	t_ast_type *type;
	t_redirect *redirect;
	t_word	   *word;
};

struct s_simple_command
{
	t_ast_type			  type;
	t_redirect_or_assign *prefix;
	t_usize				  prefix_len;
	t_word *_Nullable cmd;
	t_redirect_or_word *suffix;
	t_usize				suffix_len;
};

typedef enum e_assignement_modifier
{
	AM_NONE = 0,
	AM_EXPORT,
	AM_LOCAL,
	AM_READONLY,
} t_assignement_modifier;

struct s_assignment_list
{
	t_ast_type			   type;
	t_assignment		  *assignments;
	t_usize				   assignments_len;
	t_assignement_modifier modifier;
};

// Compound command

// Can be either a t_brace_command, t_subshell_command, t_if_command,
// t_for_command, t_case_command, t_while_command, t_until_command
union u_compound_command {
	t_ast_type		   *type;
	t_brace_command	   *brace_command;
	t_subshell_command *subshell_command;
	t_if_command	   *if_command;
	t_for_command	   *for_command;
	t_case_command	   *case_command;
	t_while_command	   *while_command;
	t_until_command	   *until_command;
};

struct s_brace_command
{
	t_ast_type		 type;
	t_compound_list *body;
	t_redirect		*redirects;
	t_usize			 redirects_len;
};

struct s_subshell_command
{
	t_ast_type type;
	t_compound_list *_Nullable body;
	t_redirect *redirects;
	t_usize		redirects_len;
};

union u_if_clauses {
	t_ast_type	  *type;
	t_if_clause	  *if_clause;
	t_elif_clause *elif_clause;
	t_else_clause *else_clause;
};

struct s_if_command
{
	t_ast_type	 type;
	t_if_clauses *clauses;
	t_usize		 clauses_len;
	t_redirect	*redirect;
	t_usize		 redirect_len;
};

struct s_if_clause
{
	t_ast_type		 type;
	t_compound_list *condition;
	t_compound_list *body;
};

struct s_elif_clause
{
	t_ast_type		 type;
	t_compound_list *condition;
	t_compound_list *body;
};

struct s_else_clause
{
	t_ast_type		 type;
	t_compound_list *body;
};

struct s_for_command
{
	t_ast_type		 type;
	t_name			*var;
	t_word			*items;
	t_usize			 items_len;
	t_compound_list *body;
	t_redirect		*redirects;
	t_usize			 redirects_len;
};

struct s_case_command
{
	t_ast_type	 type;
	t_name		*var;
	t_case_item *cases;
	t_usize		 cases_len;
	t_redirect	*redirects;
	t_usize		 redirects_len;
};

struct s_case_item
{
	t_ast_type		 type;
	t_word			*pattern;
	t_usize			 pattern_len;
	t_compound_list *body;
};

struct s_while_command
{
	t_ast_type		 type;
	t_compound_list *condition;
	t_compound_list *body;
	t_redirect		*redirects;
	t_usize			 redirects_len;
};

struct s_until_command
{
	t_ast_type		 type;
	t_compound_list *condition;
	t_compound_list *body;
	t_redirect		*redirects;
	t_usize			 redirects_len;
};

struct s_function_definition
{
	t_ast_type			type;
	t_name			   *name;
	t_compound_command *body;
	t_redirect		   *redirects;
	t_usize				redirects_len;
};

/// Can be either a t_redirect_file or t_redirect_heredoc
union u_redirect {
	t_ast_type		   *type;
	t_redirect_file	   *file;
	t_redirect_heredoc *heredoc;
};

typedef enum e_redirect_file_op
{
	RO_INPUT,		// <
	RO_OUTPUT,		// >
	RO_APPEND,		// >>
	RO_DUP_INPUT,	// <&
	RO_DUP_OUTPUT,	// >&
	RO_CLOBBER,		// >|
	RO_INPUT_OUPUT, // <>
} t_redirect_file_op;

struct s_redirect_file
{
	t_ast_type		   type;
	t_isize			   fd;
	t_redirect_file_op op;
	t_word			  *file;
};

typedef enum e_redirect_heredoc_op
{
	RH_HEREDOC,		 // <<
	RH_HEREDOC_IDENT // <<-
} t_redirect_heredoc_op;

struct s_redirect_heredoc
{
	t_ast_type			  type;
	t_isize				  fd;
	t_redirect_heredoc_op op;
	t_word				 *delimiter;
	t_word				 *content;
};

struct s_assignment
{
	t_ast_type	  type;
	t_ast_string *name;
	t_word *_Nullable value;
};

struct s_ast_string
{
	t_ast_type type;
	t_str	  *value;
};

struct s_name
{
	t_ast_type	  type;
	t_ast_string *value;
};

// Can be either a t_expension or a t_ast_string
union u_expension_or_string {
	t_ast_type	 *type;
	t_expension	 *expension;
	t_ast_string *string;
};

struct s_word
{
	t_ast_type			   type;
	t_expension_or_string *contents;
	t_usize				   contents_len;
};

#define OP_NONE 0

typedef enum e_op_pre
{
	OP_PRE_HASH = 1, // '#'
} t_op_pre;

typedef enum e_op_in
{
	OP_IN_COLON_MINUS = 1, // ':-'
	OP_IN_MINUS,		   // '-'
	OP_IN_COLON_EQUAL,	   // ':='
	OP_IN_EQUAL,		   // '='
	OP_IN_COLON_QUESTION,  // ':?'
	OP_IN_QUESTION,		   // '?'
	OP_IN_COLON_PLUS,	   // ':+'
	OP_IN_PLUS,			   // '+'
	OP_IN_PERCENT_PERCENT, // '%%'
	OP_IN_PERCENT,		   // '%'
	OP_IN_HASH_HASH,	   // '##'
	OP_IN_HASH,			   // '#'
	OP_IN_COLON,		   // ':'
	OP_IN_SLASH_SLASH,	   // '//'
	OP_IN_SLASH,		   // '/'
} t_op_in;

/// is either a t_parameter_expansion, t_arithmetic_expansion,
/// t_command_substitution or t_command_backticks
union u_expension {
	t_ast_type			   *type;
	t_parameter_expansion  *parameter_expansion;
	t_arithmetic_expansion *arithmetic_expansion;
	t_command_substitution *command_substitution;
	t_command_backticks	   *command_backticks;
};

struct s_parameter_expansion
{
	t_ast_type	  type;
	t_op_in		  op_pre;
	t_ast_string *param;
	t_op_in		  op_in;
	t_ast_string *_Nullable word;
};

struct s_arithmetic_expansion
{
	t_ast_type	  type;
	t_ast_string *expr;
};

struct s_command_substitution
{
	t_ast_type		 type;
	t_compound_list *cmds;
	t_usize			 cmds_len;
};

struct s_command_backticks
{
	t_ast_type	  type;
	t_ast_string *text;
};

union u_ast_node {
	t_ast_type			   type;
	t_assignment_list	   assignment_list;
	t_expension			   expension;
	t_program_body		   program_body;
	t_sequential_list_body sequential_list_body;
	t_async_command_body   async_command_body;
	t_and_list_body		   and_list_body;
	t_or_list_body		   or_list_body;
	t_and_or_list_body	   and_or_list_body;
	t_not_body			   not_body;
	t_command_inner		   command_inner;
	t_compound_list_body   compound_list_body;
	t_program			   program;
	t_compound_list		   compound_list;
	t_sequential_list	   sequential_list;
	t_async_command		   async_command;
	t_and_list			   and_list;
	t_or_list			   or_list;
	t_and_or_list		   and_or_list;
	t_not				   not_;
	t_command			   command;
	t_pipe_list			   pipe_list;
	t_simple_command	   simple_command;
	t_compound_command	   compound_command;
	t_function_definition  function_definition;
	t_redirect			   redirect;
	t_redirect_file		   redirect_file;
	t_redirect_heredoc	   redirect_heredoc;
	t_assignment		   assignment;
	t_ast_string		   ast_string;
	t_name				   name;
	t_word				   word;
	t_parameter_expansion  parameter_expansion;
	t_arithmetic_expansion arithmetic_expansion;
	t_command_substitution command_substitution;
	t_command_backticks	   command_backticks;
};

#endif /* AST_H */
