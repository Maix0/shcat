/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_print_global.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:34:09 by rparodi           #+#    #+#             */
/*   Updated: 2024/07/26 13:34:33 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_function_declaration.h"

void	ast_print_node_empty(t_ast_node self)
{
	if (self == NULL)
		return ;
	if (self->kind != AST_EMPTY)
		return ;
}

void	ast_print_node_raw_string(t_ast_node self)
{
	if (self == NULL)
		return ;
	if (self->kind != AST_RAW_STRING)
		return ;
	printf("%s", self->data.raw_string.str);
}

void	ast_print_node_regex(t_ast_node self)
{
	if (self == NULL)
		return ;
	if (self->kind != AST_REGEX)
		return ;
	printf("%s", self->data.regex.pattern);
}
