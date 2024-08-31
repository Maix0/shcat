/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:04 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:38:49 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
#define TREE_H

#include "me/types.h"
#include "parser/subtree.h"

struct TSTree
{
	t_subtree			  root;
	const TSLanguage *language;
};

TSTree *ts_tree_new(t_subtree root, const TSLanguage *language);
TSNode	ts_node_new(const TSTree *, const t_subtree *, Length, TSSymbol);

#endif // TREE_H
