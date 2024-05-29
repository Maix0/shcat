/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 19:30:30 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/28 14:49:05 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AST_H
#define AST_H

#include "ast/forward.h"
#include "me/types.h"

/// @brief Node types enumeration
/// @details This enumeration is used to identify the type of a node
enum e_ast_type
{
	TY_EMPTY = 0,
	TY_AND_LIST,
	TY_AND_OR_LIST,
	TY_ARITHMETIC_EXPANSION,
	TY_ASSIGNMENT,
	TY_ASSIGNMENT_LIST,
	TY_AST_STRING,
	TY_ASYNC_COMMAND,
	TY_BRACE_COMMAND,
	TY_CASE_COMMAND,
	TY_CASE_ITEM,
	TY_COMMAND,
	TY_COMMAND_BACKTICKS,
	TY_COMMAND_SUBSTITUTION,
	TY_COMPOUND_LIST,
	TY_DOUBLE_QUOTE_STRING,
	TY_ELIF_CLAUSE,
	TY_ELSE_CLAUSE,
	TY_FOR_COMMAND,
	TY_FUNCTION_DEFINITION,
	TY_IF_CLAUSE,
	TY_IF_COMMAND,
	TY_NAME,
	TY_NOT,
	TY_OR_LIST,
	TY_PARAMETER_EXPANSION,
	TY_PIPE_LIST,
	TY_PROGRAM,
	TY_REDIRECT_FILE,
	TY_REDIRECT_HEREDOC,
	TY_SEQUENTIAL_LIST,
	TY_SIMPLE_COMMAND,
	TY_SUBSHELL_COMMAND,
	TY_UNTIL_COMMAND,
	TY_WHILE_COMMAND,
	TY_WORD,
};

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
	t_ast_type	 type;
	t_ast_node **cmds;
	t_usize		 cmds_len;
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

enum e_assignement_modifier
{
	AM_NONE = 0,
	AM_EXPORT,
	AM_LOCAL,
	AM_READONLY,
};

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
	t_ast_type	  type;
	t_if_clauses *clauses;
	t_usize		  clauses_len;
	t_redirect	 *redirect;
	t_usize		  redirect_len;
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

enum e_redirect_file_op
{
	RF_INPUT,		// <
	RF_OUTPUT,		// >
	RF_APPEND,		// >>
	RF_DUP_INPUT,	// <&
	RF_DUP_OUTPUT,	// >&
	RF_CLOBBER,		// >|
	RF_INPUT_OUPUT, // <>
};

struct s_redirect_file
{
	t_ast_type		   type;
	t_isize			   fd;
	t_redirect_file_op op;
	t_word			  *file;
};

enum e_redirect_heredoc_op
{
	RH_HEREDOC,		 // <<
	RH_HEREDOC_IDENT // <<-
};

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
	t_str	   value;
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

enum e_op_pre
{
	OP_PRE_HASH = 1, // '#'
};

enum e_op_in
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
};

/// is either a t_parameter_expansion, t_arithmetic_expansion,
/// t_command_substitution or t_command_backticks
union u_expension {
	t_ast_type			   *type;
	t_parameter_expansion  *parameter_expansion;
	t_arithmetic_expansion *arithmetic_expansion;
	t_command_substitution *command_substitution;
	t_command_backticks	   *command_backticks;
	t_double_quote_string  *double_quote_string;
};

struct s_double_quote_string
{
	t_ast_type			   type;
	t_expension_or_string *parts;
	t_usize				   parts_len;
};

struct s_parameter_expansion
{
	t_ast_type	  type;
	t_op_in		  op_pre;
	t_ast_string *param;
	t_op_in		  op_in;
	t_word *_Nullable word;
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
	t_and_list			   and_list;
	t_and_or_list		   and_or_list;
	t_arithmetic_expansion arithmetic_expansion;
	t_assignment		   assignment;
	t_assignment_list	   assignment_list;
	t_ast_string		   ast_string;
	t_async_command		   async_command;
	t_brace_command		   brace_command;
	t_case_command		   case_command;
	t_case_item			   case_item;
	t_command			   command;
	t_command_backticks	   command_backticks;
	t_command_substitution command_substitution;
	t_compound_list		   compound_list;
	t_double_quote_string  double_quote_string;
	t_elif_clause		   elif_clause;
	t_else_clause		   else_clause;
	t_for_command		   for_command;
	t_function_definition  function_definition;
	t_if_clause			   if_clause;
	t_if_command		   if_command;
	t_name				   name;
	t_not				   not_;
	t_or_list			   or_list;
	t_parameter_expansion  parameter_expansion;
	t_pipe_list			   pipe_list;
	t_program			   program;
	t_redirect_file		   redirect_file;
	t_redirect_heredoc	   redirect_heredoc;
	t_sequential_list	   sequential_list;
	t_simple_command	   simple_command;
	t_subshell_command	   subshell_command;
	t_until_command		   until_command;
	t_while_command		   while_command;
	t_word				   word;
};

#endif /* AST_H */
