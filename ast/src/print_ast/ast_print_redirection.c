/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_print_redirection.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:07:12 by rparodi           #+#    #+#             */
/*   Updated: 2024/07/26 13:25:29 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_function_declaration.h"

void	ast_print_node_file_redirection_heredoc(t_ast_node self)
{
	(void)(self);
}
//{
//	if (self->data.file_redirection.op == AST_REDIR_HEREDOC)
//		printf("<<");
//	if (self->data.file_redirection.op == AST_REDIR_HEREDOC_INDENT)
//		printf("<<-");
//}

void	ast_print_node_file_redirection(t_ast_node self)
{
	if (self == NULL)
		return ;
	if (self->kind != AST_FILE_REDIRECTION)
		return ;
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
	if (self->data.file_redirection.output != NULL)
		ast_print_node(self->data.file_redirection.output);
	return ((void) ast_print_node_file_redirection_heredoc(self));
}
