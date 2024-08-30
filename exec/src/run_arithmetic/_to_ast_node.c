/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _to_ast_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:59:59 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/30 18:01:09 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_arith.h"
#include "me/types.h"
#include "me/convert/str_to_numbers.h"

t_ast_node	_arith_ternary_to_ast_node(t_ast_arithmetic_ternary *self)
{
	t_u8	*ptr;

	ptr = (void *)(self);
	return ((void *)(ptr - offsetof(\
					struct s_ast_node, data.arithmetic_ternary)));
}

t_ast_node	_arith_unary_to_ast_node(t_ast_arithmetic_unary *self)
{
	t_u8	*ptr;

	ptr = (void *)(self);
	return ((void *)(ptr - offsetof(\
					struct s_ast_node, data.arithmetic_unary)));
}

t_ast_node	_arith_postfix_to_ast_node(t_ast_arithmetic_postfix *self)
{
	t_u8	*ptr;

	ptr = (void *)(self);
	return ((void *)(ptr - offsetof(\
					struct s_ast_node, data.arithmetic_postfix)));
}

// this is black magic don't worry
t_ast_node	_arith_literal_to_ast_node(t_ast_arithmetic_literal *self)
{
	t_u8	*ptr;

	ptr = (void *)(self);
	return ((void *)(ptr - offsetof(\
					struct s_ast_node, data.arithmetic_literal)));
}

// this is black magic don't worry
t_ast_node	_arith_expansion_to_ast_node(t_ast_arithmetic_expansion *self)
{
	t_u8	*ptr;

	ptr = (void *)(self);
	return ((void *)(ptr \
		- offsetof(struct s_ast_node, data.arithmetic_expansion)));
}
