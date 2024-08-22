#include "me/types.h"
#include "parser/api.h"
#include "parser/language.h"
#include "parser/point.h"
#include "parser/subtree.h"
#include "parser/tree.h"

typedef struct NodeChildIterator
{
	Subtree			parent;
	const TSTree   *tree;
	Length			position;
	t_u32			child_index;
	t_u32			structural_child_index;
	const TSSymbol *alias_sequence;
} NodeChildIterator;

// TSNode - constructors

TSNode ts_node_new(const TSTree *tree, const Subtree *subtree, Length position, TSSymbol alias)
{
	return (TSNode){
		position.bytes, position.extent.row, position.extent.column, alias, subtree, tree,
	};
}

static inline TSNode ts_node__null(void)
{
	return ts_node_new(NULL, NULL, length_zero(), 0);
}

// TSNode - accessors

t_u32 ts_node_start_byte(TSNode self)
{
	return self.start_byte;
}

const TSLanguage *ts_node_language(TSNode self)
{
	return self.tree->language;
}

TSPoint ts_node_start_point(TSNode self)
{
	return (TSPoint){self.start_row, self.start_col};
}

static inline t_u32 ts_node__alias(const TSNode *self)
{
	return self->alias;
}

static inline Subtree ts_node__subtree(TSNode self)
{
	return *(const Subtree *)self.id;
}

// NodeChildIterator

static inline NodeChildIterator ts_node_iterate_children(const TSNode *node)
{
	Subtree subtree = ts_node__subtree(*node);
	if (ts_subtree_child_count(subtree) == 0)
	{
		return (NodeChildIterator){NULL_SUBTREE, node->tree, length_zero(), 0, 0, NULL};
	}
	const TSSymbol *alias_sequence = ts_language_alias_sequence(node->tree->language, subtree->production_id);
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
	return self->child_index == self->parent->child_count;
}

static inline bool ts_node_child_iterator_next(NodeChildIterator *self, TSNode *result)
{
	if (!self->parent || ts_node_child_iterator_done(self))
		return false;
	const Subtree *child = &ts_subtree_children(self->parent)[self->child_index];
	TSSymbol	   alias_symbol = 0;
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

// TSNode - private

static inline bool ts_node__is_relevant(TSNode self, bool include_anonymous)
{
	Subtree tree = ts_node__subtree(self);
	if (include_anonymous)
	{
		return ts_subtree_visible(tree) || ts_node__alias(&self);
	}
	else
	{
		TSSymbol alias = ts_node__alias(&self);
		if (alias)
		{
			return ts_language_symbol_metadata(self.tree->language, alias).named;
		}
		else
		{
			return ts_subtree_visible(tree) && ts_subtree_named(tree);
		}
	}
}

static inline t_u32 ts_node__relevant_child_count(TSNode self, bool include_anonymous)
{
	Subtree tree = ts_node__subtree(self);
	if (ts_subtree_child_count(tree) > 0)
	{
		if (include_anonymous)
		{
			return tree->visible_child_count;
		}
		else
		{
			return tree->named_child_count;
		}
	}
	else
	{
		return 0;
	}
}

static inline TSNode ts_node__child(TSNode self, t_u32 child_index, bool include_anonymous)
{
	TSNode result = self;
	bool   did_descend = true;

	while (did_descend)
	{
		did_descend = false;

		TSNode			  child;
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
				t_u32 grandchild_count = ts_node__relevant_child_count(child, include_anonymous);
				if (grandchild_index < grandchild_count)
				{
					printf("did_descend\n");
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

// TSNode - public

t_u32 ts_node_end_byte(TSNode self)
{
	return ts_node_start_byte(self) + ts_subtree_size(ts_node__subtree(self)).bytes;
}

TSSymbol ts_node_symbol(TSNode self)
{
	TSSymbol symbol = ts_node__alias(&self);
	if (!symbol)
		symbol = ts_subtree_symbol(ts_node__subtree(self));
	return ts_language_public_symbol(self.tree->language, symbol);
}

t_const_str ts_node_type(TSNode self)
{
	TSSymbol symbol = ts_node__alias(&self);
	if (!symbol)
		symbol = ts_subtree_symbol(ts_node__subtree(self));
	return ts_language_symbol_name(self.tree->language, symbol);
}

TSSymbol ts_node_grammar_symbol(TSNode self)
{
	return ts_subtree_symbol(ts_node__subtree(self));
}

t_const_str ts_node_grammar_type(TSNode self)
{
	TSSymbol symbol = ts_subtree_symbol(ts_node__subtree(self));
	return ts_language_symbol_name(self.tree->language, symbol);
}

bool ts_node_is_extra(TSNode self)
{
	return ts_subtree_extra(ts_node__subtree(self));
}

bool ts_node_is_named(TSNode self)
{
	TSSymbol alias = ts_node__alias(&self);
	return alias ? ts_language_symbol_metadata(self.tree->language, alias).named : ts_subtree_named(ts_node__subtree(self));
}

TSNode ts_node_child(TSNode self, t_u32 child_index)
{
	return ts_node__child(self, child_index, true);
}

TSNode ts_node_named_child(TSNode self, t_u32 child_index)
{
	return ts_node__child(self, child_index, false);
}

static inline t_const_str ts_node__field_name_from_language(TSNode self, t_u32 structural_child_index)
{
	const TSFieldMapEntry *field_map, *field_map_end;
	ts_language_field_map(self.tree->language, ts_node__subtree(self)->production_id, &field_map, &field_map_end);
	for (; field_map != field_map_end; field_map++)
	{
		if (!field_map->inherited && field_map->child_index == structural_child_index)
		{
			return self.tree->language->field_names[field_map->field_id];
		}
	}
	return NULL;
}

static inline TSFieldId ts_node__field_id_from_language(TSNode self, t_u32 structural_child_index)
{
	const TSFieldMapEntry *field_map, *field_map_end;
	ts_language_field_map(self.tree->language, ts_node__subtree(self)->production_id, &field_map, &field_map_end);
	for (; field_map != field_map_end; field_map++)
	{
		if (!field_map->inherited && field_map->child_index == structural_child_index)
			return field_map->field_id;
	}
	return 0;
}

t_u32 ts_node_child_count(TSNode self)
{
	Subtree tree = ts_node__subtree(self);
	if (ts_subtree_child_count(tree) > 0)
	{
		return tree->visible_child_count;
	}
	else
	{
		return 0;
	}
}

t_u32 ts_node_named_child_count(TSNode self)
{
	Subtree tree = ts_node__subtree(self);
	if (ts_subtree_child_count(tree) > 0)
		return tree->named_child_count;
	else
		return 0;
}

TSFieldId ts_node_field_id_for_child(TSNode self, t_u32 child_index)
{
	TSNode	  result = self;
	bool	  did_descend = true;
	TSFieldId inherited_field_id = 0;

	while (did_descend)
	{
		did_descend = false;

		TSNode			  child;
		t_u32			  index = 0;
		NodeChildIterator iterator = ts_node_iterate_children(&result);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			if (ts_node__is_relevant(child, true))
			{
				if (index == child_index)
				{
					if (ts_node_is_extra(child))
						return 0;
					TSFieldId field_id = ts_node__field_id_from_language(result, iterator.structural_child_index - 1);
					if (field_id)
						return field_id;
					return inherited_field_id;
				}
				index++;
			}
			else
			{
				t_u32 grandchild_index = child_index - index;
				t_u32 grandchild_count = ts_node__relevant_child_count(child, true);
				if (grandchild_index < grandchild_count)
				{
					TSFieldId field_id = ts_node__field_id_from_language(result, iterator.structural_child_index - 1);
					if (field_id)
						inherited_field_id = field_id;
					did_descend = true;
					result = child;
					child_index = grandchild_index;
					break;
				}
				index += grandchild_count;
			}
		}
	}
	return 0;
}
