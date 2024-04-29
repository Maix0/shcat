#include "./language.h"
#include "./subtree.h"
#include "./tree.h"
#include <stdbool.h>

typedef struct
{
	Subtree				parent;
	const t_parse_tree *tree;
	Length				position;
	t_u32				child_index;
	t_u32				structural_child_index;
	const t_symbol	   *alias_sequence;
} NodeChildIterator;

// t_parse_node - constructors

t_parse_node ts_node_new(const t_parse_tree *tree, const Subtree *subtree,
						 Length position, t_symbol alias)
{
	return (t_parse_node){
		{position.bytes, position.extent.row, position.extent.column, alias},
		subtree,
		tree,
	};
}

static inline t_parse_node ts_node__null(void)
{
	return ts_node_new(NULL, NULL, length_zero(), 0);
}

// t_parse_node - accessors

t_u32 ts_node_start_byte(t_parse_node self)
{
	return self.context[0];
}

t_point ts_node_start_point(t_parse_node self)
{
	return (t_point){self.context[1], self.context[2]};
}

static inline t_u32 ts_node__alias(const t_parse_node *self)
{
	return self->context[3];
}

static inline Subtree ts_node__subtree(t_parse_node self)
{
	return *(const Subtree *)self.id;
}

// NodeChildIterator

static inline NodeChildIterator ts_node_iterate_children(
	const t_parse_node *node)
{
	Subtree subtree = ts_node__subtree(*node);
	if (ts_subtree_child_count(subtree) == 0)
	{
		return (NodeChildIterator){
			NULL_SUBTREE, node->tree, length_zero(), 0, 0, NULL};
	}
	const t_symbol *alias_sequence = ts_language_alias_sequence(
		node->tree->language, subtree.ptr->production_id);
	return (NodeChildIterator){
		.tree = node->tree,
		.parent = subtree,
		.position = {ts_node_start_byte(*node), ts_node_start_point(*node)},
		.child_index = 0,
		.structural_child_index = 0,
		.alias_sequence = alias_sequence,
	};
}

static inline bool ts_node_child_iterator_done(NodeChildIterator *self)
{
	return self->child_index == self->parent.ptr->child_count;
}

static inline bool ts_node_child_iterator_next(NodeChildIterator *self,
											   t_parse_node		 *result)
{
	if (!self->parent.ptr || ts_node_child_iterator_done(self))
		return false;
	const Subtree *child =
		&ts_subtree_children(self->parent)[self->child_index];
	t_symbol alias_symbol = 0;
	if (!ts_subtree_extra(*child))
	{
		if (self->alias_sequence)
		{
			alias_symbol = self->alias_sequence[self->structural_child_index];
		}
		self->structural_child_index++;
	}
	if (self->child_index > 0)
	{
		self->position = length_add(self->position, ts_subtree_padding(*child));
	}
	*result = ts_node_new(self->tree, child, self->position, alias_symbol);
	self->position = length_add(self->position, ts_subtree_size(*child));
	self->child_index++;
	return true;
}

// t_parse_node - private

static inline bool ts_node__is_relevant(t_parse_node self,
										bool		 include_anonymous)
{
	Subtree tree = ts_node__subtree(self);
	if (include_anonymous)
	{
		return ts_subtree_visible(tree) || ts_node__alias(&self);
	}
	else
	{
		t_symbol alias = ts_node__alias(&self);
		if (alias)
		{
			return ts_language_symbol_metadata(self.tree->language, alias)
				.named;
		}
		else
		{
			return ts_subtree_visible(tree) && ts_subtree_named(tree);
		}
	}
}

static inline t_u32 ts_node__relevant_child_count(t_parse_node self,
												  bool include_anonymous)
{
	Subtree tree = ts_node__subtree(self);
	if (ts_subtree_child_count(tree) > 0)
	{
		if (include_anonymous)
		{
			return tree.ptr->visible_child_count;
		}
		else
		{
			return tree.ptr->named_child_count;
		}
	}
	else
	{
		return 0;
	}
}

static inline t_parse_node ts_node__child(t_parse_node self, t_u32 child_index,
										  bool include_anonymous)
{
	t_parse_node result = self;
	bool		 did_descend = true;

	while (did_descend)
	{
		did_descend = false;

		t_parse_node	  child;
		t_u32			  index = 0;
		NodeChildIterator iterator = ts_node_iterate_children(&result);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			if (ts_node__is_relevant(child, include_anonymous))
			{
				if (index == child_index)
				{
					return child;
				}
				index++;
			}
			else
			{
				t_u32 grandchild_index = child_index - index;
				t_u32 grandchild_count =
					ts_node__relevant_child_count(child, include_anonymous);
				if (grandchild_index < grandchild_count)
				{
					did_descend = true;
					result = child;
					child_index = grandchild_index;
					break;
				}
				index += grandchild_count;
			}
		}
	}

	return ts_node__null();
}

static bool ts_subtree_has_trailing_empty_descendant(Subtree self,
													 Subtree other)
{
	for (unsigned i = ts_subtree_child_count(self) - 1; i + 1 > 0; i--)
	{
		Subtree child = ts_subtree_children(self)[i];
		if (ts_subtree_total_bytes(child) > 0)
			break;
		if (child.ptr == other.ptr ||
			ts_subtree_has_trailing_empty_descendant(child, other))
		{
			return true;
		}
	}
	return false;
}

static inline t_parse_node ts_node__prev_sibling(t_parse_node self,
												 bool		  include_anonymous)
{
	Subtree self_subtree = ts_node__subtree(self);
	bool	self_is_empty = ts_subtree_total_bytes(self_subtree) == 0;
	t_u32	target_end_byte = ts_node_end_byte(self);

	t_parse_node node = ts_node_parent(self);
	t_parse_node earlier_node = ts_node__null();
	bool		 earlier_node_is_relevant = false;

	while (!ts_node_is_null(node))
	{
		t_parse_node earlier_child = ts_node__null();
		bool		 earlier_child_is_relevant = false;
		bool		 found_child_containing_target = false;

		t_parse_node	  child;
		NodeChildIterator iterator = ts_node_iterate_children(&node);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			if (child.id == self.id)
				break;
			if (iterator.position.bytes > target_end_byte)
			{
				found_child_containing_target = true;
				break;
			}

			if (iterator.position.bytes == target_end_byte &&
				(!self_is_empty || ts_subtree_has_trailing_empty_descendant(
									   ts_node__subtree(child), self_subtree)))
			{
				found_child_containing_target = true;
				break;
			}

			if (ts_node__is_relevant(child, include_anonymous))
			{
				earlier_child = child;
				earlier_child_is_relevant = true;
			}
			else if (ts_node__relevant_child_count(child, include_anonymous) >
					 0)
			{
				earlier_child = child;
				earlier_child_is_relevant = false;
			}
		}

		if (found_child_containing_target)
		{
			if (!ts_node_is_null(earlier_child))
			{
				earlier_node = earlier_child;
				earlier_node_is_relevant = earlier_child_is_relevant;
			}
			node = child;
		}
		else if (earlier_child_is_relevant)
		{
			return earlier_child;
		}
		else if (!ts_node_is_null(earlier_child))
		{
			node = earlier_child;
		}
		else if (earlier_node_is_relevant)
		{
			return earlier_node;
		}
		else
		{
			node = earlier_node;
			earlier_node = ts_node__null();
			earlier_node_is_relevant = false;
		}
	}

	return ts_node__null();
}

static inline t_parse_node ts_node__next_sibling(t_parse_node self,
												 bool		  include_anonymous)
{
	t_u32 target_end_byte = ts_node_end_byte(self);

	t_parse_node node = ts_node_parent(self);
	t_parse_node later_node = ts_node__null();
	bool		 later_node_is_relevant = false;

	while (!ts_node_is_null(node))
	{
		t_parse_node later_child = ts_node__null();
		bool		 later_child_is_relevant = false;
		t_parse_node child_containing_target = ts_node__null();

		t_parse_node	  child;
		NodeChildIterator iterator = ts_node_iterate_children(&node);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			if (iterator.position.bytes < target_end_byte)
				continue;
			if (ts_node_start_byte(child) <= ts_node_start_byte(self))
			{
				if (ts_node__subtree(child).ptr != ts_node__subtree(self).ptr)
				{
					child_containing_target = child;
				}
			}
			else if (ts_node__is_relevant(child, include_anonymous))
			{
				later_child = child;
				later_child_is_relevant = true;
				break;
			}
			else if (ts_node__relevant_child_count(child, include_anonymous) >
					 0)
			{
				later_child = child;
				later_child_is_relevant = false;
				break;
			}
		}

		if (!ts_node_is_null(child_containing_target))
		{
			if (!ts_node_is_null(later_child))
			{
				later_node = later_child;
				later_node_is_relevant = later_child_is_relevant;
			}
			node = child_containing_target;
		}
		else if (later_child_is_relevant)
		{
			return later_child;
		}
		else if (!ts_node_is_null(later_child))
		{
			node = later_child;
		}
		else if (later_node_is_relevant)
		{
			return later_node;
		}
		else
		{
			node = later_node;
		}
	}

	return ts_node__null();
}

static inline t_parse_node ts_node__first_child_for_byte(t_parse_node self,
														 t_u32		  goal,
														 bool include_anonymous)
{
	t_parse_node node = self;
	bool		 did_descend = true;

	while (did_descend)
	{
		did_descend = false;

		t_parse_node	  child;
		NodeChildIterator iterator = ts_node_iterate_children(&node);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			if (ts_node_end_byte(child) > goal)
			{
				if (ts_node__is_relevant(child, include_anonymous))
				{
					return child;
				}
				else if (ts_node_child_count(child) > 0)
				{
					did_descend = true;
					node = child;
					break;
				}
			}
		}
	}

	return ts_node__null();
}

static inline t_parse_node ts_node__descendant_for_byte_range(
	t_parse_node self, t_u32 range_start, t_u32 range_end,
	bool include_anonymous)
{
	t_parse_node node = self;
	t_parse_node last_visible_node = self;

	bool did_descend = true;
	while (did_descend)
	{
		did_descend = false;

		t_parse_node	  child;
		NodeChildIterator iterator = ts_node_iterate_children(&node);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			t_u32 node_end = iterator.position.bytes;

			// The end of this node must extend far enough forward to touch
			// the end of the range and exceed the start of the range.
			if (node_end < range_end)
				continue;
			if (node_end <= range_start)
				continue;

			// The start of this node must extend far enough backward to
			// touch the start of the range.
			if (range_start < ts_node_start_byte(child))
				break;

			node = child;
			if (ts_node__is_relevant(node, include_anonymous))
			{
				last_visible_node = node;
			}
			did_descend = true;
			break;
		}
	}

	return last_visible_node;
}

static inline t_parse_node ts_node__descendant_for_point_range(
	t_parse_node self, t_point range_start, t_point range_end,
	bool include_anonymous)
{
	t_parse_node node = self;
	t_parse_node last_visible_node = self;

	bool did_descend = true;
	while (did_descend)
	{
		did_descend = false;

		t_parse_node	  child;
		NodeChildIterator iterator = ts_node_iterate_children(&node);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			t_point node_end = iterator.position.extent;

			// The end of this node must extend far enough forward to touch
			// the end of the range and exceed the start of the range.
			if (point_lt(node_end, range_end))
				continue;
			if (point_lte(node_end, range_start))
				continue;

			// The start of this node must extend far enough backward to
			// touch the start of the range.
			if (point_lt(range_start, ts_node_start_point(child)))
				break;

			node = child;
			if (ts_node__is_relevant(node, include_anonymous))
			{
				last_visible_node = node;
			}
			did_descend = true;
			break;
		}
	}

	return last_visible_node;
}

// t_parse_node - public

t_u32 ts_node_end_byte(t_parse_node self)
{
	return ts_node_start_byte(self) +
		   ts_subtree_size(ts_node__subtree(self)).bytes;
}

t_point ts_node_end_point(t_parse_node self)
{
	return point_add(ts_node_start_point(self),
					 ts_subtree_size(ts_node__subtree(self)).extent);
}

t_symbol ts_node_symbol(t_parse_node self)
{
	t_symbol symbol = ts_node__alias(&self);
	if (!symbol)
		symbol = ts_subtree_symbol(ts_node__subtree(self));
	return ts_language_public_symbol(self.tree->language, symbol);
}

const char *ts_node_type(t_parse_node self)
{
	t_symbol symbol = ts_node__alias(&self);
	if (!symbol)
		symbol = ts_subtree_symbol(ts_node__subtree(self));
	return ts_language_symbol_name(self.tree->language, symbol);
}

const t_language *ts_node_language(t_parse_node self)
{
	return self.tree->language;
}

t_symbol ts_node_grammar_symbol(t_parse_node self)
{
	return ts_subtree_symbol(ts_node__subtree(self));
}

const char *ts_node_grammar_type(t_parse_node self)
{
	t_symbol symbol = ts_subtree_symbol(ts_node__subtree(self));
	return ts_language_symbol_name(self.tree->language, symbol);
}

char *ts_node_string(t_parse_node self)
{
	t_symbol alias_symbol = ts_node__alias(&self);
	return ts_subtree_string(
		ts_node__subtree(self), alias_symbol,
		ts_language_symbol_metadata(self.tree->language, alias_symbol).visible,
		self.tree->language, false);
}

bool ts_node_eq(t_parse_node self, t_parse_node other)
{
	return self.tree == other.tree && self.id == other.id;
}

bool ts_node_is_null(t_parse_node self)
{
	return self.id == 0;
}

bool ts_node_is_extra(t_parse_node self)
{
	return ts_subtree_extra(ts_node__subtree(self));
}

bool ts_node_is_named(t_parse_node self)
{
	t_symbol alias = ts_node__alias(&self);
	return alias ? ts_language_symbol_metadata(self.tree->language, alias).named
				 : ts_subtree_named(ts_node__subtree(self));
}

bool ts_node_is_missing(t_parse_node self)
{
	return ts_subtree_missing(ts_node__subtree(self));
}

bool ts_node_has_changes(t_parse_node self)
{
	return ts_subtree_has_changes(ts_node__subtree(self));
}

bool ts_node_has_error(t_parse_node self)
{
	return ts_subtree_error_cost(ts_node__subtree(self)) > 0;
}

bool ts_node_is_error(t_parse_node self)
{
	t_symbol symbol = ts_node_symbol(self);
	return symbol == ts_builtin_sym_error;
}

t_u32 ts_node_descendant_count(t_parse_node self)
{
	return ts_subtree_visible_descendant_count(ts_node__subtree(self)) + 1;
}

t_state_id ts_node_parse_state(t_parse_node self)
{
	return ts_subtree_parse_state(ts_node__subtree(self));
}

t_state_id ts_node_next_parse_state(t_parse_node self)
{
	const t_language *language = self.tree->language;
	t_u16			  state = ts_node_parse_state(self);
	if (state == TS_TREE_STATE_NONE)
	{
		return TS_TREE_STATE_NONE;
	}
	t_u16 symbol = ts_node_grammar_symbol(self);
	return ts_language_next_state(language, state, symbol);
}

t_parse_node ts_node_parent(t_parse_node self)
{
	t_parse_node node = ts_tree_root_node(self.tree);
	t_u32		 end_byte = ts_node_end_byte(self);
	if (node.id == self.id)
		return ts_node__null();

	t_parse_node last_visible_node = node;
	bool		 did_descend = true;
	while (did_descend)
	{
		did_descend = false;

		t_parse_node	  child;
		NodeChildIterator iterator = ts_node_iterate_children(&node);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			if (ts_node_start_byte(child) > ts_node_start_byte(self) ||
				child.id == self.id)
				break;
			if (iterator.position.bytes >= end_byte &&
				ts_node_child_count(child) > 0)
			{
				node = child;
				if (ts_node__is_relevant(child, true))
				{
					last_visible_node = node;
				}
				did_descend = true;
				break;
			}
		}
	}

	return last_visible_node;
}

t_parse_node ts_node_child(t_parse_node self, t_u32 child_index)
{
	return ts_node__child(self, child_index, true);
}

t_parse_node ts_node_named_child(t_parse_node self, t_u32 child_index)
{
	return ts_node__child(self, child_index, false);
}

t_parse_node ts_node_child_by_field_id(t_parse_node self, t_field_id field_id)
{
recur:
	if (!field_id || ts_node_child_count(self) == 0)
		return ts_node__null();

	const t_field_map_entry *field_map, *field_map_end;
	ts_language_field_map(self.tree->language,
						  ts_node__subtree(self).ptr->production_id, &field_map,
						  &field_map_end);
	if (field_map == field_map_end)
		return ts_node__null();

	// The field mappings are sorted by their field id. Scan all
	// the mappings to find the ones for the given field id.
	while (field_map->field_id < field_id)
	{
		field_map++;
		if (field_map == field_map_end)
			return ts_node__null();
	}
	while (field_map_end[-1].field_id > field_id)
	{
		field_map_end--;
		if (field_map == field_map_end)
			return ts_node__null();
	}

	t_parse_node	  child;
	NodeChildIterator iterator = ts_node_iterate_children(&self);
	while (ts_node_child_iterator_next(&iterator, &child))
	{
		if (!ts_subtree_extra(ts_node__subtree(child)))
		{
			t_u32 index = iterator.structural_child_index - 1;
			if (index < field_map->child_index)
				continue;

			// Hidden nodes' fields are "inherited" by their visible parent.
			if (field_map->inherited)
			{

				// If this is the *last* possible child node for this field,
				// then perform a tail call to avoid recursion.
				if (field_map + 1 == field_map_end)
				{
					self = child;
					goto recur;
				}

				// Otherwise, descend into this child, but if it doesn't contain
				// the field, continue searching subsequent children.
				else
				{
					t_parse_node result =
						ts_node_child_by_field_id(child, field_id);
					if (result.id)
						return result;
					field_map++;
					if (field_map == field_map_end)
						return ts_node__null();
				}
			}

			else if (ts_node__is_relevant(child, true))
			{
				return child;
			}

			// If the field refers to a hidden node with visible children,
			// return the first visible child.
			else if (ts_node_child_count(child) > 0)
			{
				return ts_node_child(child, 0);
			}

			// Otherwise, continue searching subsequent children.
			else
			{
				field_map++;
				if (field_map == field_map_end)
					return ts_node__null();
			}
		}
	}

	return ts_node__null();
}

static inline const char *ts_node__field_name_from_language(
	t_parse_node self, t_u32 structural_child_index)
{
	const t_field_map_entry *field_map, *field_map_end;
	ts_language_field_map(self.tree->language,
						  ts_node__subtree(self).ptr->production_id, &field_map,
						  &field_map_end);
	for (; field_map != field_map_end; field_map++)
	{
		if (!field_map->inherited &&
			field_map->child_index == structural_child_index)
		{
			return self.tree->language->field_names[field_map->field_id];
		}
	}
	return NULL;
}

const char *ts_node_field_name_for_child(t_parse_node self, t_u32 child_index)
{
	t_parse_node result = self;
	bool		 did_descend = true;
	const char	*inherited_field_name = NULL;

	while (did_descend)
	{
		did_descend = false;

		t_parse_node	  child;
		t_u32			  index = 0;
		NodeChildIterator iterator = ts_node_iterate_children(&result);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			if (ts_node__is_relevant(child, true))
			{
				if (index == child_index)
				{
					const char *field_name = ts_node__field_name_from_language(
						result, iterator.structural_child_index - 1);
					if (field_name)
						return field_name;
					return inherited_field_name;
				}
				index++;
			}
			else
			{
				t_u32 grandchild_index = child_index - index;
				t_u32 grandchild_count =
					ts_node__relevant_child_count(child, true);
				if (grandchild_index < grandchild_count)
				{
					const char *field_name = ts_node__field_name_from_language(
						result, iterator.structural_child_index - 1);
					if (field_name)
						inherited_field_name = field_name;

					did_descend = true;
					result = child;
					child_index = grandchild_index;
					break;
				}
				index += grandchild_count;
			}
		}
	}

	return NULL;
}

t_parse_node ts_node_child_by_field_name(t_parse_node self, const char *name,
										 t_u32 name_length)
{
	t_field_id field_id =
		ts_language_field_id_for_name(self.tree->language, name, name_length);
	return ts_node_child_by_field_id(self, field_id);
}

t_u32 ts_node_child_count(t_parse_node self)
{
	Subtree tree = ts_node__subtree(self);
	if (ts_subtree_child_count(tree) > 0)
	{
		return tree.ptr->visible_child_count;
	}
	else
	{
		return 0;
	}
}

t_u32 ts_node_named_child_count(t_parse_node self)
{
	Subtree tree = ts_node__subtree(self);
	if (ts_subtree_child_count(tree) > 0)
	{
		return tree.ptr->named_child_count;
	}
	else
	{
		return 0;
	}
}

t_parse_node ts_node_next_sibling(t_parse_node self)
{
	return ts_node__next_sibling(self, true);
}

t_parse_node ts_node_next_named_sibling(t_parse_node self)
{
	return ts_node__next_sibling(self, false);
}

t_parse_node ts_node_prev_sibling(t_parse_node self)
{
	return ts_node__prev_sibling(self, true);
}

t_parse_node ts_node_prev_named_sibling(t_parse_node self)
{
	return ts_node__prev_sibling(self, false);
}

t_parse_node ts_node_first_child_for_byte(t_parse_node self, t_u32 byte)
{
	return ts_node__first_child_for_byte(self, byte, true);
}

t_parse_node ts_node_first_named_child_for_byte(t_parse_node self, t_u32 byte)
{
	return ts_node__first_child_for_byte(self, byte, false);
}

t_parse_node ts_node_descendant_for_byte_range(t_parse_node self, t_u32 start,
											   t_u32 end)
{
	return ts_node__descendant_for_byte_range(self, start, end, true);
}

t_parse_node ts_node_named_descendant_for_byte_range(t_parse_node self,
													 t_u32 start, t_u32 end)
{
	return ts_node__descendant_for_byte_range(self, start, end, false);
}

t_parse_node ts_node_descendant_for_point_range(t_parse_node self,
												t_point start, t_point end)
{
	return ts_node__descendant_for_point_range(self, start, end, true);
}

t_parse_node ts_node_named_descendant_for_point_range(t_parse_node self,
													  t_point	   start,
													  t_point	   end)
{
	return ts_node__descendant_for_point_range(self, start, end, false);
}

void ts_node_edit(t_parse_node *self, const t_input_edit *edit)
{
	t_u32	start_byte = ts_node_start_byte(*self);
	t_point start_point = ts_node_start_point(*self);

	if (start_byte >= edit->old_end_byte)
	{
		start_byte = edit->new_end_byte + (start_byte - edit->old_end_byte);
		start_point = point_add(edit->new_end_point,
								point_sub(start_point, edit->old_end_point));
	}
	else if (start_byte > edit->start_byte)
	{
		start_byte = edit->new_end_byte;
		start_point = edit->new_end_point;
	}

	self->context[0] = start_byte;
	self->context[1] = start_point.row;
	self->context[2] = start_point.column;
}
