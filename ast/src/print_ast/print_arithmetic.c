/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arithmetic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:05:36 by rparodi           #+#    #+#             */
/*   Updated: 2024/07/26 13:08:22 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_function_declaration.h"

void	ast_print_node_arithmetic_expansion(t_ast_node self)
{
	if (self == NULL)
		return ;
	if (self->kind != AST_ARITHMETIC_EXPANSION)
		return ;
	printf("$((");
	ast_print_node(self->data.arithmetic_expansion.expr);
	printf("))");
}

void	ast_print_node_function_definition(t_ast_node self)
{
	t_usize	i;

	if (self == NULL)
		return ;
	if (self->kind != AST_FUNCTION_DEFINITION)
		return ;
	printf("%s()", self->data.function_definition.name);
	i = 0;
	while (i < self->data.function_definition.body.len)
	{
		ast_print_node(self->data.function_definition.body.buffer[i++]);
		printf(" ");
	}
}
