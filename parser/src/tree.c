#define _POSIX_C_SOURCE 200112L

#include "parser/tree.h"
#include "me/types.h"
#include "parser/api.h"
#include "parser/length.h"
#include "parser/subtree.h"

TSTree *ts_tree_new(Subtree root, const TSLanguage *language)
{
	TSTree *result;
	result = mem_alloc(sizeof(*result));
	result->root = root;
	result->language = language;
	return result;
}

TSTree *ts_tree_copy(const TSTree *self)
{
	ts_subtree_retain(self->root);
	return ts_tree_new(self->root, self->language);
}

void ts_tree_delete(TSTree *self)
{
	if (self == NULL)
		return;
	ts_subtree_release(self->root);
	mem_free(self);
}

TSNode ts_tree_root_node(const TSTree *self)
{
	return ts_node_new(self, &self->root, ts_subtree_padding(self->root), 0);
}

TSNode ts_tree_root_node_with_offset(const TSTree *self, t_u32 offset_bytes, TSPoint offset_extent)
{
	Length offset = {offset_bytes, offset_extent};
	return ts_node_new(self, &self->root, length_add(offset, ts_subtree_padding(self->root)), 0);
}

const TSLanguage *ts_tree_language(const TSTree *self)
{
	return self->language;
}
