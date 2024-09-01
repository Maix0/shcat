/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:59:28 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/30 17:59:28 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include <stdlib.h>

t_ast_node *vec_ast_get(t_vec_ast *vec, t_usize i)
{
	if (vec->len >= i)
		return (NULL);
	return (&vec->buffer[i]);
}

t_ast_node *vec_ast_last(t_vec_ast *vec)
{
	if (vec->len == 0)
		return (NULL);
	return (&vec->buffer[vec->len - 1]);
}
