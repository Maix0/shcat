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

TSNode	ts_node_new(const TSTree *tree, const Subtree *subtree, \
		Length position, TSSymbol alias)
{
	return ((TSNode){
		position.bytes, position.extent.row, position.extent.column, \
		alias, subtree, tree,
	});
}

TSNode	ts_node__null(void)
{
	return (ts_node_new(NULL, NULL, length_zero(), 0));
}
