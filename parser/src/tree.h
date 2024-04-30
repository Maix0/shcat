#ifndef TREE_SITTER_TREE_H_
#define TREE_SITTER_TREE_H_

#include "./subtree.h"

typedef struct
{
	const Subtree *child;
	const Subtree *parent;
	t_parse_length position;
	t_symbol	   alias_symbol;
} ParentCacheEntry;

struct s_parse_tree
{
	Subtree			  root;
	const t_language *language;
	t_parser_range	 *included_ranges;
	t_u32			  included_range_count;
};

t_parse_tree *ts_tree_new(Subtree root, const t_language *language,
						  const t_parser_range *, t_u32);
t_parse_node  ts_node_new(const t_parse_tree *, const Subtree *, t_parse_length,
						  t_symbol);

#endif // TREE_SITTER_TREE_H_
