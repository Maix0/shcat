#ifndef TREE_H
#define TREE_H

#include "./subtree.h"
#include "me/types.h"



typedef struct ParentCacheEntry ParentCacheEntry;

struct TSTree
{
	Subtree			  root;
	const TSLanguage *language;
	TSRange			 *included_ranges;
	t_u32			  included_range_count;
};

struct ParentCacheEntry
{
	const Subtree *child;
	const Subtree *parent;
	Length		   position;
	TSSymbol	   alias_symbol;
};

TSTree *ts_tree_new(Subtree root, const TSLanguage *language, const TSRange *, t_u32);
TSNode	ts_node_new(const TSTree *, const Subtree *, Length, TSSymbol);

#endif // TREE_H
