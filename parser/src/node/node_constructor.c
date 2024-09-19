/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_constructor.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:10:57 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:24:15 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/api.h"
#include "parser/length.h"
#include "parser/subtree.h"

t_node	ts_node_new(const t_tree *tree, const t_subtree *subtree, \
		t_length position, t_symbol alias)
{
	return ((t_node){
		position.bytes, position.extent.row, position.extent.column, \
		alias, subtree, tree,
	});
}

t_node	ts_node__null(void)
{
	return (ts_node_new(NULL, NULL, length_zero(), 0));
}
