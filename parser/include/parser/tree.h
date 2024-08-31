/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:04 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 12:04:05 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
#define TREE_H

#include "me/types.h"
#include "parser/subtree.h"

typedef struct ParentCacheEntry ParentCacheEntry;

struct TSTree
{
	Subtree			  root;
	const TSLanguage *language;
};

struct ParentCacheEntry
{
	const Subtree *child;
	const Subtree *parent;
	Length		   position;
	TSSymbol	   alias_symbol;
};

TSTree *ts_tree_new(Subtree root, const TSLanguage *language);
TSNode	ts_node_new(const TSTree *, const Subtree *, Length, TSSymbol);

#endif // TREE_H
