/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_raw_structs.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:46:58 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/11 14:48:53 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AST_RAW_STRUCTS_H
# define AST_RAW_STRUCTS_H

# include "ast/ast_forward_def.h"
# include "me/types.h"
# include "me/vec/vec_ast.h"

enum e_ast_list_kind
{
	AST_LIST_AND,
	AST_LIST_OR,
};

enum e_ast_word_kind
{
	AST_WORD_NO_QUOTE,
	AST_WORD_SINGLE_QUOTE,
	AST_WORD_DOUBLE_QUOTE,
};

enum e_ast_terminator_kind
{
	AST_TERM_NONE,
	AST_TERM_NEWLINE,
	AST_TERM_DOUBLE_SEMI,
	AST_TERM_SEMI,
	AST_TERM_FORK,
};

/*
	E_OP_NONE = 0,= ${var}
	E_OP_DEFAULT, = ${var-word}
	E_OP_ASSIGN_DEFAULT, = ${var=word}
	E_OP_ERROR, = ${var?word}
	E_OP_ALTERNATE, = ${var+word}
	E_OP_DEFAULT_COLON, = ${var:-word}
	E_OP_ASSIGN_DEFAULT_COLON, = ${var:=word}
	E_OP_ERROR_COLON, = ${var:?word}
	E_OP_ALTERNATE_COLON, = ${var:+word}
	E_OP_SMALLEST_PREFIX, = ${var#pattern}
	E_OP_LARGEST_PREFIX, = ${var##pattern}
	E_OP_SMALLEST_SUFFIX, = ${var%pattern}
	E_OP_LARGEST_SUFFIX, = ${var%%pattern}
*/

enum e_ast_expansion_operator
{
	E_OP_NONE = 0,
	E_OP_DEFAULT,
	E_OP_ASSIGN_DEFAULT,
	E_OP_ERROR,
	E_OP_ALTERNATE,
	E_OP_DEFAULT_COLON,
	E_OP_ASSIGN_DEFAULT_COLON,
	E_OP_ERROR_COLON,
	E_OP_ALTERNATE_COLON,
	E_OP_SMALLEST_PREFIX,
	E_OP_LARGEST_PREFIX,
	E_OP_SMALLEST_SUFFIX,
	E_OP_LARGEST_SUFFIX,
};

/*
	AST_REDIR_INPUT, = <
	AST_REDIR_OUTPUT, = >
	AST_REDIR_APPEND, = >>
	AST_REDIR_HEREDOC, = <<
	AST_REDIR_HEREDOC_INDENT, = <<-
	AST_REDIR_DUP_INPUT, = <&
	AST_REDIR_DUP_OUTPUT, = >&
	AST_REDIR_OUTPUT_CLOBBER, = >|
	AST_REDIR_INPUT_OUTPUT, = <>
	AST_REDIR_CLOSE_INPUT, = <&
	AST_REDIR_CLOSE_OUTPUT, = >&
*/

enum e_ast_redirection_kind
{
	AST_REDIR_INPUT,
	AST_REDIR_OUTPUT,
	AST_REDIR_APPEND,
	AST_REDIR_HEREDOC,
	AST_REDIR_HEREDOC_INDENT,
	AST_REDIR_DUP_INPUT,
	AST_REDIR_DUP_OUTPUT,
	AST_REDIR_OUTPUT_CLOBBER,
	AST_REDIR_INPUT_OUTPUT,
	AST_REDIR_CLOSE_INPUT,
	AST_REDIR_CLOSE_OUTPUT,
};

struct s_ast_empty
{
};

struct s_ast_raw_string
{
	t_str	str;
	t_usize	len;
};

struct s_ast_word
{
	t_ast_word_kind	kind;
	t_vec_ast		inner;
};

struct s_ast_program
{
	t_vec_ast	body;
};

///	Pipeline Statemen
///	```shell
///		cmd1 || cmd2
///		cmd1 && cmd2
///		cmd1 || cmd2 >outfile
///	```

struct s_ast_list
{
	t_ast_node				left;
	t_ast_list_kind			op;
	t_ast_node				right;
	t_ast_terminator_kind	term;
	t_vec_ast				suffixes_redirections;
};

///	Pipeline Statement
///	```shell
///		cat file | grep stuff | banane | truc
///		echo "$sutff" | if truc; then banane; fi | lololol
///	```

struct s_ast_pipeline
{
	bool					bang;
	t_vec_ast				statements;
	t_ast_terminator_kind	term;
	t_vec_ast				suffixes_redirections;
};

///	Command Statement
///	```shell
///		cmd1 arg1 argN
///		>output yes
///		banane >output
///		VALUE=something echo $VALUE >&1 2>somewhere
///	```

struct s_ast_command
{
	t_vec_ast				prefixes;
	t_vec_ast				cmd_word;
	t_vec_ast				suffixes_redirections;
	t_ast_terminator_kind	term;
	bool					bang;
};

///	If Statement
///	```shell
///		if cmd_condition; then
///			cmd $varname;
///		fi
///	```
///	Closely related to `t_ast_elif` and `t_ast_else`

struct s_ast_if
{
	t_vec_ast				condition;
	t_vec_ast				then;
	t_vec_ast				elif_;
	t_ast_node				else_;
	t_ast_terminator_kind	term;
	t_vec_ast				suffixes_redirections;
};

///	Elif Statement
///	```shell
///		elif cmd_condition; then
///			cmd $varname;
///		fi
///	```
///	Closely related to `t_ast_if` and `t_ast_else`

struct s_ast_elif
{
	t_vec_ast	condition;
	t_vec_ast	then;
};

///	Else Statement
///	```shell
///		else cmd_condition; then
///			cmd $varname;
///		fi
///	```
///	Closely related to `t_ast_if` and `t_ast_elif`

struct s_ast_else
{
	t_vec_ast	then;
};

///	While loop
///	```shell
///		while cmd_condition; do
///			cmd $varname;
///		done
///	```

struct s_ast_while
{
	t_vec_ast				condition;
	t_vec_ast				do_;
	t_ast_terminator_kind	term;
	t_vec_ast				suffixes_redirections;
};

///	For loop
///	```shell
///		for varname in words truc bidule; do
///			cmd $varname;
///		done
///	```

struct s_ast_for
{
	t_str					var_name;
	t_vec_ast				words;
	t_vec_ast				do_;
	t_ast_terminator_kind	term;
	t_vec_ast				suffixes_redirections;
};

/// Case Statement
/// ```shell
///		case truc; in
///			*pattern)
///				dosmth;
///			*other_pattern | *another)
///				cmd2;
///			*)
///				fallback;
///		esac
/// ```

struct s_ast_case
{
	t_ast_node				word;
	t_vec_ast				cases;
	t_ast_terminator_kind	term;
	t_vec_ast				suffixes_redirections;
};

///	Case Statement
///	```shell
///		*pattern)
///			dosmth;
///		*other_pattern | *another)
///			cmd2;
///		*)
///			fallback;
///	```
///	Closely tied to `t_ast_case`

struct s_ast_case_item
{
	t_vec_ast				pattern;
	t_vec_ast				body;
	t_ast_terminator_kind	term;
};

/// Until loop
/// ```shell
///		until cmd arg1 arg2 argN; do
///			cmd1;
///			cmd2;
///			truc;
///		done
/// ```

struct s_ast_until
{
	t_vec_ast				condition;
	t_vec_ast				do_;
	t_ast_terminator_kind	term;
	t_vec_ast				suffixes_redirections;
};

///	Function Definition
///	```shell
///		function_name() (comand1; command2 truc banane pomme;)
///		function_name() {comand1; command2 truc banane pomme;}
///	```

struct s_ast_function_definition
{
	t_str		name;
	t_vec_ast	body;
};

/// Parenthesis block
/// ```shell
/// 	(comand1; command2 truc banane pomme;)
/// ```

struct s_ast_subshell
{
	t_vec_ast				body;
	t_ast_terminator_kind	term;
	t_vec_ast				suffixes_redirections;
	bool					bang;
};

/// Brace block
/// ```shell
/// 	{ command1; command2 truc banane pomme; }
/// ```

struct s_ast_compound_statement
{
	t_vec_ast				body;
	t_ast_terminator_kind	term;
	t_vec_ast				suffixes_redirections;
	bool					bang;
};

/// Variable Assignment
/// ```shell
/// 	VARIABLE=something
/// ```

struct s_ast_variable_assignment
{
	t_str		name;
	t_ast_node	value;
	bool		bang;
};

/// File Redirection
/// ```shell
/// 	<infile
/// 	>>outfile
/// 	2>&1
/// ```

struct s_ast_file_redirection
{
	t_ast_node				output;
	t_ast_redirection_kind	op;
	t_ast_node				input;
};

/// File Redirection
/// ```shell
/// 	<< EOF
/// 	TEXT blablabla
/// 	EOF
/// ```

struct s_ast_heredoc_redirection
{
	t_ast_node				output;
	t_ast_redirection_kind	op;
	t_ast_node				delimiter;
};

/// Variable Expension
/// ```shell
/// 	$VARNAME
/// 	${VARNAME}
/// 	${VARNAME:?truc}
/// 	${VARNAME%%trucmuch pattern}
/// 	$@
/// ```

struct s_ast_expansion
{
	t_str						var_name;
	bool						len_operator;
	t_ast_expansion_operator	kind;
	t_vec_ast					args;
};

/// Variable Expension
/// ```shell
/// 	$((VARNAME))
/// 	$((1 + 2))
/// 	$((- 1))
/// 	$((1-1))
/// ```

struct s_ast_arithmetic_expansion
{
	t_ast_node	expr;
};

/// Command Substitution
/// ```shell
/// 	$(command)
/// ```

struct s_ast_command_substitution
{
	t_vec_ast	body;
};

/// Extended Globbing
/// ```shell
/// 	!(pattern)
/// 	?(pattern)
/// 	*(pattern)
/// 	+(pattern)
/// 	@(pattern)
/// ```

struct s_ast_extglob
{
	t_str	pattern;
};

/// Regex
/// ```shell
/// 	~pattern
/// ```

struct s_ast_regex
{
	t_str	pattern;
};

#endif /* AST_RAW_STRUCTS_H */
