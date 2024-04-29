#ifndef TREE_SITTER_TREE_H_
#define TREE_SITTER_TREE_H_

#include "./subtree.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  const Subtree *child;
  const Subtree *parent;
  Length position;
  t_symbol alias_symbol;
} ParentCacheEntry;

struct t_parse_tree {
  Subtree root;
  const t_language *language;
  t_parser_range *included_ranges;
  unsigned included_range_count;
};

t_parse_tree *ts_tree_new(Subtree root, const t_language *language, const t_parser_range *, unsigned);
t_parse_node ts_node_new(const t_parse_tree *, const Subtree *, Length, t_symbol);

#ifdef __cplusplus
}
#endif

#endif  // TREE_SITTER_TREE_H_
