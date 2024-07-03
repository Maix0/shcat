#define _POSIX_C_SOURCE 200112L


#include "me/types.h"
#include "./tree.h"
#include "./array.h"
#include "./length.h"
#include "./subtree.h"
#include "api.h"

TSTree *ts_tree_new(Subtree root, const TSLanguage *language, const TSRange *included_ranges, unsigned included_range_count)
{
	TSTree *result = mem_alloc(sizeof(TSTree));
	result->root = root;
	result->language = ts_language_copy(language);
	result->included_ranges = mem_alloc_array(included_range_count, sizeof(TSRange));
	memcpy(result->included_ranges, included_ranges, included_range_count * sizeof(TSRange));
	result->included_range_count = included_range_count;
	return result;
}

TSTree *ts_tree_copy(const TSTree *self)
{
	ts_subtree_retain(self->root);
	return ts_tree_new(self->root, self->language, self->included_ranges, self->included_range_count);
}

void ts_tree_delete(TSTree *self)
{
	if (!self)
		return;

	SubtreePool pool = ts_subtree_pool_new(0);
	ts_subtree_release(&pool, self->root);
	ts_subtree_pool_delete(&pool);
	ts_language_delete(self->language);
	mem_free(self->included_ranges);
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

void ts_tree_edit(TSTree *self, const TSInputEdit *edit)
{
	for (unsigned i = 0; i < self->included_range_count; i++)
	{
		TSRange *range = &self->included_ranges[i];
		if (range->end_byte >= edit->old_end_byte)
		{
			if (range->end_byte != UINT32_MAX)
			{
				range->end_byte = edit->new_end_byte + (range->end_byte - edit->old_end_byte);
				range->end_point = point_add(edit->new_end_point, point_sub(range->end_point, edit->old_end_point));
				if (range->end_byte < edit->new_end_byte)
				{
					range->end_byte = UINT32_MAX;
					range->end_point = POINT_MAX;
				}
			}
		}
		else if (range->end_byte > edit->start_byte)
		{
			range->end_byte = edit->start_byte;
			range->end_point = edit->start_point;
		}
		if (range->start_byte >= edit->old_end_byte)
		{
			range->start_byte = edit->new_end_byte + (range->start_byte - edit->old_end_byte);
			range->start_point = point_add(edit->new_end_point, point_sub(range->start_point, edit->old_end_point));
			if (range->start_byte < edit->new_end_byte)
			{
				range->start_byte = UINT32_MAX;
				range->start_point = POINT_MAX;
			}
		}
		else if (range->start_byte > edit->start_byte)
		{
			range->start_byte = edit->start_byte;
			range->start_point = edit->start_point;
		}
	}

	SubtreePool pool = ts_subtree_pool_new(0);
	self->root = ts_subtree_edit(self->root, edit, &pool);
	ts_subtree_pool_delete(&pool);
}

TSRange *ts_tree_included_ranges(const TSTree *self, t_u32 *length)
{
	*length = self->included_range_count;
	TSRange *ranges = mem_alloc_array(self->included_range_count, sizeof(TSRange));
	memcpy(ranges, self->included_ranges, self->included_range_count * sizeof(TSRange));
	return ranges;
}
