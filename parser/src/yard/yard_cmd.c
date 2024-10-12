/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yard_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:44:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:57 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

t_error		handle_tok_word_inner(t_token *tok, t_ast_node *out);
t_error		_tok_word(t_token *tok, t_ast_node *out);
t_const_str	_token_to_string(t_token *arg, bool dollar_exp);
t_error		handle_tok_word(t_ast_node cmd, t_token *tok);

static bool	_is_carret(enum e_token type)
{
	return (type == TOK_DLCARRET || type == TOK_DRCARRET || type == TOK_LCARRET
		|| type == TOK_RCARRET);
}

static t_error	_create_ast_redir(enum e_token ty, t_ast_node *out)
{
	t_ast_node	ret;

	ret = NULL;
	if (ty == TOK_DLCARRET)
	{
		ret = ast_alloc(AST_HEREDOC_REDIRECTION);
		ret->data.heredoc_redirection.op = AST_REDIR_HEREDOC;
	}
	else if (ty == TOK_RCARRET || ty == TOK_LCARRET || ty == TOK_DRCARRET)
		ret = ast_alloc(AST_FILE_REDIRECTION);
	else
		return (ERROR);
	if (ty == TOK_DRCARRET)
		ret->data.file_redirection.op = AST_REDIR_APPEND;
	else if (ty == TOK_LCARRET)
		ret->data.file_redirection.op = AST_REDIR_INPUT;
	else if (ty == TOK_DRCARRET)
		ret->data.file_redirection.op = AST_REDIR_OUTPUT;
	return (*out = ret, NO_ERROR);
}

static t_error	_ast_set_redir_arg(t_ast_node node, t_token *arg)
{
	if (node == NULL || arg == NULL || (node->kind != AST_HEREDOC_REDIRECTION
			&& node->kind != AST_FILE_REDIRECTION))
		return (ERROR);
	if (node->kind == AST_HEREDOC_REDIRECTION)
		node->data.heredoc_redirection.delimiter = (t_str)_token_to_string(arg,
				true);
	else if (handle_tok_word_inner(arg, &node->data.file_redirection.output))
		return (ERROR);
	return (NO_ERROR);
}

t_error	handle_tok_redir(t_ast_node cmd, t_token *tok)
{
	t_ast_node	redir;

	if (cmd == NULL || tok == NULL || tok->type != TOK_REDIR
		|| cmd->kind != AST_COMMAND)
		return (ERROR);
	if (!(tok->subtokens.len == 2 && _is_carret(tok->subtokens.buffer[0].type)
			&& tok->subtokens.buffer[1].type == TOK_WORD))
		return (ERROR);
	if (_create_ast_redir(tok->subtokens.buffer[0].type, &redir))
		return (ERROR);
	if (_ast_set_redir_arg(redir, &tok->subtokens.buffer[1]))
		return (ast_free(redir), ERROR);
	vec_ast_push(&cmd->data.command.prefixes, redir);
	return (NO_ERROR);
}

/// la fonction doit prendre une t_token de type TOK_CMD qui contient que 
/// deux type de subtokens TOK_WORD ou TOK_REDIR
/// un TOK_WORD == un arguemnt
/// un TOK_REDIR == une redirection
/// les deux sont dans le bonne ordre.
/// il faut push les TOK_REDIR dans ast_node->data.command.prefix;
/// let TOK_WORD dans ast_node->data.command.arguements;
/// les noms peuvent etre different idk
/// a terme la fonction utilisera t_error et tt;
/// struct s_ast_command `ast/include/ast/_raw_structs.h`
t_error	ast_from_cmd(t_token tok, t_vec_ast *output_queue)
{
	t_ast_node	ret;
	t_usize		i;

	if (tok.type != TOK_CMD)
		return (ERROR);
	ret = ast_alloc(AST_COMMAND);
	i = 0;
	while (i < tok.subtokens.len)
	{
		if (tok.subtokens.buffer[i].type == TOK_REDIR)
		{
			if (handle_tok_redir(ret, &tok.subtokens.buffer[i]))
				return (ast_free(ret), ERROR);
		}
		else if (tok.subtokens.buffer[i].type == TOK_WORD)
		{
			if (handle_tok_word(ret, &tok.subtokens.buffer[i]))
				return (ast_free(ret), ERROR);
		}
		else
			return (ast_free(ret), ERROR);
		i++;
	}
	token_free(tok);
	return (vec_ast_push(output_queue, ret), NO_ERROR);
}
