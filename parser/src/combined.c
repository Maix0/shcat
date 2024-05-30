#include "./api.h"
#include "./structs.h"

uint32_t	 ts_node_end_byte(t_parse_node self);
t_parse_node ts_node_parent(t_parse_node self);
bool		 ts_node_is_null(t_parse_node self);
uint32_t	 ts_node_child_count(t_parse_node self);
t_parse_node ts_tree_root_node(const t_first_tree *self);
t_parse_node ts_node_child_containing_descendant(t_parse_node self,
												 t_parse_node subnode);
void		 ts_parser_reset(t_first_parser *self);
bool ts_parser_set_language(t_first_parser *self, const t_language *language);
void ts_query_delete(t_parse_query *self);
void ts_tree_cursor_delete(t_tree_cursor *_self);
void ts_tree_cursor_reset(t_tree_cursor *_self, t_parse_node node);
bool ts_tree_cursor_goto_parent(t_tree_cursor *_self);
t_parse_node ts_tree_cursor_current_node(const t_tree_cursor *_self);

// #define DEBUG_GET_CHANGED_RANGES

static void ts_range_array_add(t_range_array *self, t_length start,
							   t_length end)
{
	if (self->size > 0)
	{
		t_parse_range *last_range = array_back(self);
		if (start.bytes <= last_range->end_byte)
		{
			last_range->end_byte = end.bytes;
			last_range->end_point = end.extent;
			return;
		}
	}

	if (start.bytes < end.bytes)
	{
		t_parse_range range = {start.extent, end.extent, start.bytes,
							   end.bytes};
		array_push(self, range);
	}
}

bool ts_range_array_intersects(const t_range_array *self, unsigned start_index,
							   uint32_t start_byte, uint32_t end_byte)
{
	for (unsigned i = start_index; i < self->size; i++)
	{
		t_parse_range *range = &self->contents[i];
		if (range->end_byte > start_byte)
		{
			if (range->start_byte >= end_byte)
				break;
			return true;
		}
	}
	return false;
}

void ts_range_array_get_changed_ranges(const t_parse_range *old_ranges,
									   unsigned				old_range_count,
									   const t_parse_range *new_ranges,
									   unsigned				new_range_count,
									   t_range_array	   *differences)
{
	unsigned new_index = 0;
	unsigned old_index = 0;
	t_length current_position = length_zero();
	bool	 in_old_range = false;
	bool	 in_new_range = false;

	while (old_index < old_range_count || new_index < new_range_count)
	{
		const t_parse_range *old_range = &old_ranges[old_index];
		const t_parse_range *new_range = &new_ranges[new_index];

		t_length next_old_position;
		if (in_old_range)
		{
			next_old_position =
				(t_length){old_range->end_byte, old_range->end_point};
		}
		else if (old_index < old_range_count)
		{
			next_old_position =
				(t_length){old_range->start_byte, old_range->start_point};
		}
		else
		{
			next_old_position = LENGTH_MAX;
		}

		t_length next_new_position;
		if (in_new_range)
		{
			next_new_position =
				(t_length){new_range->end_byte, new_range->end_point};
		}
		else if (new_index < new_range_count)
		{
			next_new_position =
				(t_length){new_range->start_byte, new_range->start_point};
		}
		else
		{
			next_new_position = LENGTH_MAX;
		}

		if (next_old_position.bytes < next_new_position.bytes)
		{
			if (in_old_range != in_new_range)
			{
				ts_range_array_add(differences, current_position,
								   next_old_position);
			}
			if (in_old_range)
				old_index++;
			current_position = next_old_position;
			in_old_range = !in_old_range;
		}
		else if (next_new_position.bytes < next_old_position.bytes)
		{
			if (in_old_range != in_new_range)
			{
				ts_range_array_add(differences, current_position,
								   next_new_position);
			}
			if (in_new_range)
				new_index++;
			current_position = next_new_position;
			in_new_range = !in_new_range;
		}
		else
		{
			if (in_old_range != in_new_range)
			{
				ts_range_array_add(differences, current_position,
								   next_new_position);
			}
			if (in_old_range)
				old_index++;
			if (in_new_range)
				new_index++;
			in_old_range = !in_old_range;
			in_new_range = !in_new_range;
			current_position = next_new_position;
		}
	}
}

static t_iterator iterator_new(t_tree_cursor *cursor, const t_subtree *tree,
							   const t_language *language)
{
	array_clear(&cursor->stack);
	array_push(&cursor->stack, ((t_tree_cursor_entry){
								   .subtree = tree,
								   .position = length_zero(),
								   .child_index = 0,
								   .structural_child_index = 0,
							   }));
	return (t_iterator){
		.cursor = *cursor,
		.language = language,
		.visible_depth = 1,
		.in_padding = false,
	};
}

static bool iterator_done(t_iterator *self)
{
	return self->cursor.stack.size == 0;
}

static t_length iterator_start_position(t_iterator *self)
{
	t_tree_cursor_entry entry = *array_back(&self->cursor.stack);
	if (self->in_padding)
	{
		return entry.position;
	}
	else
	{
		return length_add(entry.position, ts_subtree_padding(*entry.subtree));
	}
}

static t_length iterator_end_position(t_iterator *self)
{
	t_tree_cursor_entry entry = *array_back(&self->cursor.stack);
	t_length			result =
		length_add(entry.position, ts_subtree_padding(*entry.subtree));
	if (self->in_padding)
	{
		return result;
	}
	else
	{
		return length_add(result, ts_subtree_size(*entry.subtree));
	}
}

static bool iterator_tree_is_visible(const t_iterator *self)
{
	t_tree_cursor_entry entry = *array_back(&self->cursor.stack);
	if (ts_subtree_visible(*entry.subtree))
		return true;
	if (self->cursor.stack.size > 1)
	{
		t_subtree parent =
			*self->cursor.stack.contents[self->cursor.stack.size - 2].subtree;
		return ts_language_alias_at(self->language, parent.ptr->production_id,
									entry.structural_child_index) != 0;
	}
	return false;
}

static void iterator_get_visible_state(const t_iterator *self, t_subtree *tree,
									   t_symbol *alias_symbol,
									   uint32_t *start_byte)
{
	uint32_t i = self->cursor.stack.size - 1;

	if (self->in_padding)
	{
		if (i == 0)
			return;
		i--;
	}

	for (; i + 1 > 0; i--)
	{
		t_tree_cursor_entry entry = self->cursor.stack.contents[i];

		if (i > 0)
		{
			const t_subtree *parent =
				self->cursor.stack.contents[i - 1].subtree;
			*alias_symbol =
				ts_language_alias_at(self->language, parent->ptr->production_id,
									 entry.structural_child_index);
		}

		if (ts_subtree_visible(*entry.subtree) || *alias_symbol)
		{
			*tree = *entry.subtree;
			*start_byte = entry.position.bytes;
			break;
		}
	}
}

static void iterator_ascend(t_iterator *self)
{
	if (iterator_done(self))
		return;
	if (iterator_tree_is_visible(self) && !self->in_padding)
		self->visible_depth--;
	if (array_back(&self->cursor.stack)->child_index > 0)
		self->in_padding = false;
	self->cursor.stack.size--;
}

static bool iterator_descend(t_iterator *self, uint32_t goal_position)
{
	if (self->in_padding)
		return false;

	bool did_descend = false;
	do
	{
		did_descend = false;
		t_tree_cursor_entry entry = *array_back(&self->cursor.stack);
		t_length			position = entry.position;
		uint32_t			structural_child_index = 0;
		for (uint32_t i = 0, n = ts_subtree_child_count(*entry.subtree); i < n;
			 i++)
		{
			const t_subtree *child = &ts_subtree_children(*entry.subtree)[i];
			t_length		 child_left =
				length_add(position, ts_subtree_padding(*child));
			t_length child_right =
				length_add(child_left, ts_subtree_size(*child));

			if (child_right.bytes > goal_position)
			{
				array_push(&self->cursor.stack,
						   ((t_tree_cursor_entry){
							   .subtree = child,
							   .position = position,
							   .child_index = i,
							   .structural_child_index = structural_child_index,
						   }));

				if (iterator_tree_is_visible(self))
				{
					if (child_left.bytes > goal_position)
					{
						self->in_padding = true;
					}
					else
					{
						self->visible_depth++;
					}
					return true;
				}

				did_descend = true;
				break;
			}

			position = child_right;
			if (!ts_subtree_extra(*child))
				structural_child_index++;
		}
	} while (did_descend);

	return false;
}

static void iterator_advance(t_iterator *self)
{
	if (self->in_padding)
	{
		self->in_padding = false;
		if (iterator_tree_is_visible(self))
		{
			self->visible_depth++;
		}
		else
		{
			iterator_descend(self, 0);
		}
		return;
	}

	for (;;)
	{
		if (iterator_tree_is_visible(self))
			self->visible_depth--;
		t_tree_cursor_entry entry = array_pop(&self->cursor.stack);
		if (iterator_done(self))
			return;

		const t_subtree *parent = array_back(&self->cursor.stack)->subtree;
		uint32_t		 child_index = entry.child_index + 1;
		if (ts_subtree_child_count(*parent) > child_index)
		{
			t_length position = length_add(
				entry.position, ts_subtree_total_size(*entry.subtree));
			uint32_t structural_child_index = entry.structural_child_index;
			if (!ts_subtree_extra(*entry.subtree))
				structural_child_index++;
			const t_subtree *next_child =
				&ts_subtree_children(*parent)[child_index];

			array_push(&self->cursor.stack,
					   ((t_tree_cursor_entry){
						   .subtree = next_child,
						   .position = position,
						   .child_index = child_index,
						   .structural_child_index = structural_child_index,
					   }));

			if (iterator_tree_is_visible(self))
			{
				if (ts_subtree_padding(*next_child).bytes > 0)
				{
					self->in_padding = true;
				}
				else
				{
					self->visible_depth++;
				}
			}
			else
			{
				iterator_descend(self, 0);
			}
			break;
		}
	}
}

static t_iterator_comparison iterator_compare(const t_iterator *old_iter,
											  const t_iterator *new_iter)
{
	t_subtree old_tree = NULL_SUBTREE;
	t_subtree new_tree = NULL_SUBTREE;
	uint32_t  old_start = 0;
	uint32_t  new_start = 0;
	t_symbol  old_alias_symbol = 0;
	t_symbol  new_alias_symbol = 0;
	iterator_get_visible_state(old_iter, &old_tree, &old_alias_symbol,
							   &old_start);
	iterator_get_visible_state(new_iter, &new_tree, &new_alias_symbol,
							   &new_start);

	if (!old_tree.ptr && !new_tree.ptr)
		return IteratorMatches;
	if (!old_tree.ptr || !new_tree.ptr)
		return IteratorDiffers;

	if (old_alias_symbol == new_alias_symbol &&
		ts_subtree_symbol(old_tree) == ts_subtree_symbol(new_tree))
	{
		if (old_start == new_start && !ts_subtree_has_changes(old_tree) &&
			ts_subtree_symbol(old_tree) != ts_builtin_sym_error &&
			ts_subtree_size(old_tree).bytes ==
				ts_subtree_size(new_tree).bytes &&
			ts_subtree_parse_state(old_tree) != TS_TREE_STATE_NONE &&
			ts_subtree_parse_state(new_tree) != TS_TREE_STATE_NONE &&
			(ts_subtree_parse_state(old_tree) == ERROR_STATE) ==
				(ts_subtree_parse_state(new_tree) == ERROR_STATE))
		{
			return IteratorMatches;
		}
		else
		{
			return IteratorMayDiffer;
		}
	}

	return IteratorDiffers;
}

#ifdef DEBUG_GET_CHANGED_RANGES
static inline void iterator_print_state(t_iterator *self)
{
	t_tree_cursor_entry entry = *array_back(&self->cursor.stack);
	t_point				start = iterator_start_position(self).extent;
	t_point				end = iterator_end_position(self).extent;
	const char		   *name = ts_language_symbol_name(
		self->language, ts_subtree_symbol(*entry.subtree));
	printf("(%-25s %s\t depth:%u [%u, %u] - [%u, %u])", name,
		   self->in_padding ? "(p)" : "   ", self->visible_depth, start.row + 1,
		   start.column, end.row + 1, end.column);
}
#endif

unsigned ts_subtree_get_changed_ranges(
	const t_subtree *old_tree, const t_subtree *new_tree,
	t_tree_cursor *cursor1, t_tree_cursor *cursor2, const t_language *language,
	const t_range_array *included_range_differences, t_parse_range **ranges)
{
	t_range_array results = array_new();

	t_iterator old_iter = iterator_new(cursor1, old_tree, language);
	t_iterator new_iter = iterator_new(cursor2, new_tree, language);

	unsigned included_range_difference_index = 0;

	t_length position = iterator_start_position(&old_iter);
	t_length next_position = iterator_start_position(&new_iter);
	if (position.bytes < next_position.bytes)
	{
		ts_range_array_add(&results, position, next_position);
		position = next_position;
	}
	else if (position.bytes > next_position.bytes)
	{
		ts_range_array_add(&results, next_position, position);
		next_position = position;
	}

	do
	{
#ifdef DEBUG_GET_CHANGED_RANGES
		printf("At [%-2u, %-2u] Compare ", position.extent.row + 1,
			   position.extent.column);
		iterator_print_state(&old_iter);
		printf("\tvs\t");
		iterator_print_state(&new_iter);
		puts("");
#endif

		// Compare the old and new subtrees.
		t_iterator_comparison comparison =
			iterator_compare(&old_iter, &new_iter);

		// Even if the two subtrees appear to be identical, they could differ
		// internally if they contain a range of text that was previously
		// excluded from the parse, and is now included, or vice-versa.
		if (comparison == IteratorMatches &&
			ts_range_array_intersects(
				included_range_differences, included_range_difference_index,
				position.bytes, iterator_end_position(&old_iter).bytes))
		{
			comparison = IteratorMayDiffer;
		}

		bool is_changed = false;
		switch (comparison)
		{
		// If the subtrees are definitely identical, move to the end
		// of both subtrees.
		case IteratorMatches:
			next_position = iterator_end_position(&old_iter);
			break;

		// If the subtrees might differ internally, descend into both
		// subtrees, finding the first child that spans the current position.
		case IteratorMayDiffer:
			if (iterator_descend(&old_iter, position.bytes))
			{
				if (!iterator_descend(&new_iter, position.bytes))
				{
					is_changed = true;
					next_position = iterator_end_position(&old_iter);
				}
			}
			else if (iterator_descend(&new_iter, position.bytes))
			{
				is_changed = true;
				next_position = iterator_end_position(&new_iter);
			}
			else
			{
				next_position = length_min(iterator_end_position(&old_iter),
										   iterator_end_position(&new_iter));
			}
			break;

		// If the subtrees are different, record a change and then move
		// to the end of both subtrees.
		case IteratorDiffers:
			is_changed = true;
			next_position = length_min(iterator_end_position(&old_iter),
									   iterator_end_position(&new_iter));
			break;
		}

		// Ensure that both iterators are caught up to the current position.
		while (!iterator_done(&old_iter) &&
			   iterator_end_position(&old_iter).bytes <= next_position.bytes)
			iterator_advance(&old_iter);
		while (!iterator_done(&new_iter) &&
			   iterator_end_position(&new_iter).bytes <= next_position.bytes)
			iterator_advance(&new_iter);

		// Ensure that both iterators are at the same depth in the tree.
		while (old_iter.visible_depth > new_iter.visible_depth)
		{
			iterator_ascend(&old_iter);
		}
		while (new_iter.visible_depth > old_iter.visible_depth)
		{
			iterator_ascend(&new_iter);
		}

		if (is_changed)
		{
#ifdef DEBUG_GET_CHANGED_RANGES
			printf("  change: [[%u, %u] - [%u, %u]]\n", position.extent.row + 1,
				   position.extent.column, next_position.extent.row + 1,
				   next_position.extent.column);
#endif

			ts_range_array_add(&results, position, next_position);
		}

		position = next_position;

		// Keep track of the current position in the included range differences
		// array in order to avoid scanning the entire array on each iteration.
		while (included_range_difference_index <
			   included_range_differences->size)
		{
			const t_parse_range *range =
				&included_range_differences
					 ->contents[included_range_difference_index];
			if (range->end_byte <= position.bytes)
			{
				included_range_difference_index++;
			}
			else
			{
				break;
			}
		}
	} while (!iterator_done(&old_iter) && !iterator_done(&new_iter));

	t_length old_size = ts_subtree_total_size(*old_tree);
	t_length new_size = ts_subtree_total_size(*new_tree);
	if (old_size.bytes < new_size.bytes)
	{
		ts_range_array_add(&results, old_size, new_size);
	}
	else if (new_size.bytes < old_size.bytes)
	{
		ts_range_array_add(&results, new_size, old_size);
	}

	*cursor1 = old_iter.cursor;
	*cursor2 = new_iter.cursor;
	*ranges = results.contents;
	return results.size;
}

const t_language *ts_language_copy(const t_language *self)
{
	return self;
}

void ts_language_delete(const t_language *self)
{
	(void)(self);
}

uint32_t ts_language_symbol_count(const t_language *self)
{
	return self->symbol_count + self->alias_count;
}

uint32_t ts_language_state_count(const t_language *self)
{
	return self->state_count;
}

uint32_t ts_language_version(const t_language *self)
{
	return self->version;
}

uint32_t ts_language_field_count(const t_language *self)
{
	return self->field_count;
}

void ts_language_table_entry(const t_language *self, t_state_id state,
							 t_symbol symbol, t_table_entry *result)
{
	if (symbol == ts_builtin_sym_error || symbol == ts_builtin_sym_error_repeat)
	{
		result->action_count = 0;
		result->is_reusable = false;
		result->actions = NULL;
	}
	else
	{
		assert(symbol < self->token_count);
		uint32_t action_index = ts_language_lookup(self, state, symbol);
		const t_parse_action_entry *entry = &self->parse_actions[action_index];
		result->action_count = entry->entry.count;
		result->is_reusable = entry->entry.reusable;
		result->actions = (const t_parse_action *)(entry + 1);
	}
}

t_symbol_metadata ts_language_symbol_metadata(const t_language *self,
											  t_symbol			symbol)
{
	if (symbol == ts_builtin_sym_error)
	{
		return (t_symbol_metadata){.visible = true, .named = true};
	}
	else if (symbol == ts_builtin_sym_error_repeat)
	{
		return (t_symbol_metadata){.visible = false, .named = false};
	}
	else
	{
		return self->symbol_metadata[symbol];
	}
}

t_symbol ts_language_public_symbol(const t_language *self, t_symbol symbol)
{
	if (symbol == ts_builtin_sym_error)
		return symbol;
	return self->public_symbol_map[symbol];
}

t_state_id ts_language_next_state(const t_language *self, t_state_id state,
								  t_symbol symbol)
{
	if (symbol == ts_builtin_sym_error || symbol == ts_builtin_sym_error_repeat)
	{
		return 0;
	}
	else if (symbol < self->token_count)
	{
		uint32_t			  count;
		const t_parse_action *actions =
			ts_language_actions(self, state, symbol, &count);
		if (count > 0)
		{
			t_parse_action action = actions[count - 1];
			if (action.type == TSParseActionTypeShift)
			{
				return action.shift.extra ? state : action.shift.state;
			}
		}
		return 0;
	}
	else
	{
		return ts_language_lookup(self, state, symbol);
	}
}

const char *ts_language_symbol_name(const t_language *self, t_symbol symbol)
{
	if (symbol == ts_builtin_sym_error)
	{
		return "ERROR";
	}
	else if (symbol == ts_builtin_sym_error_repeat)
	{
		return "_ERROR";
	}
	else if (symbol < ts_language_symbol_count(self))
	{
		return self->symbol_names[symbol];
	}
	else
	{
		return NULL;
	}
}

t_symbol ts_language_symbol_for_name(const t_language *self, const char *string,
									 uint32_t length, bool is_named)
{
	if (!strncmp(string, "ERROR", length))
		return ts_builtin_sym_error;
	uint16_t count = (uint16_t)ts_language_symbol_count(self);
	for (t_symbol i = 0; i < count; i++)
	{
		t_symbol_metadata metadata = ts_language_symbol_metadata(self, i);
		if ((!metadata.visible && !metadata.supertype) ||
			metadata.named != is_named)
			continue;
		const char *symbol_name = self->symbol_names[i];
		if (!strncmp(symbol_name, string, length) && !symbol_name[length])
		{
			return self->public_symbol_map[i];
		}
	}
	return 0;
}

t_symbol_type ts_language_symbol_type(const t_language *self, t_symbol symbol)
{
	t_symbol_metadata metadata = ts_language_symbol_metadata(self, symbol);
	if (metadata.named && metadata.visible)
	{
		return TSSymbolTypeRegular;
	}
	else if (metadata.visible)
	{
		return TSSymbolTypeAnonymous;
	}
	else
	{
		return TSSymbolTypeAuxiliary;
	}
}

const char *ts_language_field_name_for_id(const t_language *self, t_field_id id)
{
	uint32_t count = ts_language_field_count(self);
	if (count && id <= count)
	{
		return self->field_names[id];
	}
	else
	{
		return NULL;
	}
}

t_field_id ts_language_field_id_for_name(const t_language *self,
										 const char *name, uint32_t name_length)
{
	uint16_t count = (uint16_t)ts_language_field_count(self);
	for (t_symbol i = 1; i < count + 1; i++)
	{
		switch (strncmp(name, self->field_names[i], name_length))
		{
		case 0:
			if (self->field_names[i][name_length] == 0)
				return i;
			break;
		case -1:
			return 0;
		default:
			break;
		}
	}
	return 0;
}

t_lookahead_iterator *ts_lookahead_iterator_new(const t_language *self,
												t_state_id		  state)
{
	if (state >= self->state_count)
		return NULL;
	t_lookahead_iterator *iterator = malloc(sizeof(t_lookahead_iterator));
	*iterator = ts_language_lookaheads(self, state);
	return (t_lookahead_iterator *)iterator;
}

void ts_lookahead_iterator_delete(t_lookahead_iterator *self)
{
	free(self);
}

bool ts_lookahead_iterator_reset_state(t_lookahead_iterator *self,
									   t_state_id			 state)
{
	t_lookahead_iterator *iterator = (t_lookahead_iterator *)self;
	if (state >= iterator->language->state_count)
		return false;
	*iterator = ts_language_lookaheads(iterator->language, state);
	return true;
}

const t_language *ts_lookahead_iterator_language(
	const t_lookahead_iterator *self)
{
	const t_lookahead_iterator *iterator = (const t_lookahead_iterator *)self;
	return iterator->language;
}

bool ts_lookahead_iterator_reset(t_lookahead_iterator *self,
								 const t_language *language, t_state_id state)
{
	if (state >= language->state_count)
		return false;
	t_lookahead_iterator *iterator = (t_lookahead_iterator *)self;
	*iterator = ts_language_lookaheads(language, state);
	return true;
}

bool ts_lookahead_iterator_next(t_lookahead_iterator *self)
{
	t_lookahead_iterator *iterator = (t_lookahead_iterator *)self;
	return ts_lookahead_iterator__next(iterator);
}

t_symbol ts_lookahead_iterator_current_symbol(const t_lookahead_iterator *self)
{
	const t_lookahead_iterator *iterator = (const t_lookahead_iterator *)self;
	return iterator->symbol;
}

const char *ts_lookahead_iterator_current_symbol_name(
	const t_lookahead_iterator *self)
{
	const t_lookahead_iterator *iterator = (const t_lookahead_iterator *)self;
	return ts_language_symbol_name(iterator->language, iterator->symbol);
}

static const int32_t BYTE_ORDER_MARK = 0xFEFF;

static const t_parse_range DEFAULT_RANGE = {.start_point =
												{
													.row = 0,
													.column = 0,
												},
											.end_point =
												{
													.row = UINT32_MAX,
													.column = UINT32_MAX,
												},
											.start_byte = 0,
											.end_byte = UINT32_MAX};

// Check if the lexer has reached EOF. This state is stored
// by setting the lexer's `current_included_range_index` such that
// it has consumed all of its available ranges.
static bool ts_lexer__eof(const t_lexer_data *_self)
{
	t_lexer *self = (t_lexer *)_self;
	return self->current_included_range_index == self->included_range_count;
}

// Clear the currently stored chunk of source code, because the lexer's
// position has changed.
static void ts_lexer__clear_chunk(t_lexer *self)
{
	self->chunk = NULL;
	self->chunk_size = 0;
	self->chunk_start = 0;
}

// Call the lexer's input callback to obtain a new chunk of source code
// for the current position.
static void ts_lexer__get_chunk(t_lexer *self)
{
	self->chunk_start = self->current_position.bytes;
	self->chunk =
		self->input.read(self->input.payload, self->current_position.bytes,
						 self->current_position.extent, &self->chunk_size);
	if (!self->chunk_size)
	{
		self->current_included_range_index = self->included_range_count;
		self->chunk = NULL;
	}
}

uint32_t ascii_decode(const uint8_t *chunk, uint32_t size, int32_t *codepoint)
{
	(void)(size);
	*(uint8_t *)codepoint = *chunk;
	return (1);
}

// Decode the next unicode character in the current chunk of source code.
// This assumes that the lexer has already retrieved a chunk of source
// code that spans the current position.
static void ts_lexer__get_lookahead(t_lexer *self)
{
	uint32_t position_in_chunk =
		self->current_position.bytes - self->chunk_start;
	uint32_t size = self->chunk_size - position_in_chunk;

	if (size == 0)
	{
		self->lookahead_size = 1;
		self->data.lookahead = '\0';
		return;
	}

	const uint8_t *chunk = (const uint8_t *)self->chunk + position_in_chunk;
	t_unicode_decode_function decode = ascii_decode;

	self->lookahead_size = decode(chunk, size, &self->data.lookahead);

	// If this chunk ended in the middle of a multi-byte character,
	// try again with a fresh chunk.
	if (self->data.lookahead == TS_DECODE_ERROR && size < 4)
	{
		ts_lexer__get_chunk(self);
		chunk = (const uint8_t *)self->chunk;
		size = self->chunk_size;
		self->lookahead_size = decode(chunk, size, &self->data.lookahead);
	}

	if (self->data.lookahead == TS_DECODE_ERROR)
	{
		self->lookahead_size = 1;
	}
}

static void ts_lexer_goto(t_lexer *self, t_length position)
{
	self->current_position = position;

	// Move to the first valid position at or after the given position.
	bool found_included_range = false;
	for (unsigned i = 0; i < self->included_range_count; i++)
	{
		t_parse_range *included_range = &self->included_ranges[i];
		if (included_range->end_byte > self->current_position.bytes &&
			included_range->end_byte > included_range->start_byte)
		{
			if (included_range->start_byte >= self->current_position.bytes)
			{
				self->current_position = (t_length){
					.bytes = included_range->start_byte,
					.extent = included_range->start_point,
				};
			}

			self->current_included_range_index = i;
			found_included_range = true;
			break;
		}
	}

	if (found_included_range)
	{
		// If the current position is outside of the current chunk of text,
		// then clear out the current chunk of text.
		if (self->chunk && (self->current_position.bytes < self->chunk_start ||
							self->current_position.bytes >=
								self->chunk_start + self->chunk_size))
		{
			ts_lexer__clear_chunk(self);
		}

		self->lookahead_size = 0;
		self->data.lookahead = '\0';
	}

	// If the given position is beyond any of included ranges, move to the EOF
	// state - past the end of the included ranges.
	else
	{
		self->current_included_range_index = self->included_range_count;
		t_parse_range *last_included_range =
			&self->included_ranges[self->included_range_count - 1];
		self->current_position = (t_length){
			.bytes = last_included_range->end_byte,
			.extent = last_included_range->end_point,
		};
		ts_lexer__clear_chunk(self);
		self->lookahead_size = 1;
		self->data.lookahead = '\0';
	}
}

// Intended to be called only from functions that control logging.
static void ts_lexer__do_advance(t_lexer *self, bool skip)
{
	if (self->lookahead_size)
	{
		self->current_position.bytes += self->lookahead_size;
		if (self->data.lookahead == '\n')
		{
			self->current_position.extent.row++;
			self->current_position.extent.column = 0;
		}
		else
		{
			self->current_position.extent.column += self->lookahead_size;
		}
	}

	const t_parse_range *current_range =
		&self->included_ranges[self->current_included_range_index];
	while (self->current_position.bytes >= current_range->end_byte ||
		   current_range->end_byte == current_range->start_byte)
	{
		if (self->current_included_range_index < self->included_range_count)
		{
			self->current_included_range_index++;
		}
		if (self->current_included_range_index < self->included_range_count)
		{
			current_range++;
			self->current_position = (t_length){
				current_range->start_byte,
				current_range->start_point,
			};
		}
		else
		{
			current_range = NULL;
			break;
		}
	}

	if (skip)
		self->token_start_position = self->current_position;

	if (current_range)
	{
		if (self->current_position.bytes < self->chunk_start ||
			self->current_position.bytes >=
				self->chunk_start + self->chunk_size)
		{
			ts_lexer__get_chunk(self);
		}
		ts_lexer__get_lookahead(self);
	}
	else
	{
		ts_lexer__clear_chunk(self);
		self->data.lookahead = '\0';
		self->lookahead_size = 1;
	}
}

// Advance to the next character in the source code, retrieving a new
// chunk of source code if needed.
static void ts_lexer__advance(t_lexer_data *_self, bool skip)
{
	t_lexer *self = (t_lexer *)_self;
	if (!self->chunk)
		return;

	if (skip)
	{
	}
	else
	{
	}

	ts_lexer__do_advance(self, skip);
}

// Mark that a token match has completed. This can be called multiple
// times if a longer match is found later.
static void ts_lexer__mark_end(t_lexer_data *_self)
{
	t_lexer *self = (t_lexer *)_self;
	if (!ts_lexer__eof(&self->data))
	{
		// If the lexer is right at the beginning of included range,
		// then the token should be considered to end at the *end* of the
		// previous included range, rather than here.
		t_parse_range *current_included_range =
			&self->included_ranges[self->current_included_range_index];
		if (self->current_included_range_index > 0 &&
			self->current_position.bytes == current_included_range->start_byte)
		{
			t_parse_range *previous_included_range = current_included_range - 1;
			self->token_end_position = (t_length){
				previous_included_range->end_byte,
				previous_included_range->end_point,
			};
			return;
		}
	}
	self->token_end_position = self->current_position;
}

static uint32_t ts_lexer__get_column(t_lexer_data *_self)
{
	t_lexer *self = (t_lexer *)_self;

	uint32_t goal_byte = self->current_position.bytes;

	self->did_get_column = true;
	self->current_position.bytes -= self->current_position.extent.column;
	self->current_position.extent.column = 0;

	if (self->current_position.bytes < self->chunk_start)
	{
		ts_lexer__get_chunk(self);
	}

	uint32_t result = 0;
	if (!ts_lexer__eof(_self))
	{
		ts_lexer__get_lookahead(self);
		while (self->current_position.bytes < goal_byte && self->chunk)
		{
			result++;
			ts_lexer__do_advance(self, false);
			if (ts_lexer__eof(_self))
				break;
		}
	}

	return result;
}

// Is the lexer at a boundary between two disjoint included ranges of
// source code? This is exposed as an API because some languages' external
// scanners need to perform custom actions at these boundaries.
static bool ts_lexer__is_at_included_range_start(const t_lexer_data *_self)
{
	const t_lexer *self = (const t_lexer *)_self;
	if (self->current_included_range_index < self->included_range_count)
	{
		t_parse_range *current_range =
			&self->included_ranges[self->current_included_range_index];
		return self->current_position.bytes == current_range->start_byte;
	}
	else
	{
		return false;
	}
}

void ts_lexer_init(t_lexer *self)
{
	*self = (t_lexer){
		.data =
			{
				// The lexer's methods are stored as struct fields so that
				// generated
				// parsers can call them without needing to be linked against
				// this
				// library.
				.advance = ts_lexer__advance,
				.mark_end = ts_lexer__mark_end,
				.get_column = ts_lexer__get_column,
				.is_at_included_range_start =
					ts_lexer__is_at_included_range_start,
				.eof = ts_lexer__eof,
				.lookahead = 0,
				.result_symbol = 0,
			},
		.chunk = NULL,
		.chunk_size = 0,
		.chunk_start = 0,
		.current_position = {0, {0, 0}},
		.logger = {.payload = NULL, .log = NULL},
		.included_ranges = NULL,
		.included_range_count = 0,
		.current_included_range_index = 0,
	};
	ts_lexer_set_included_ranges(self, NULL, 0);
}

void ts_lexer_delete(t_lexer *self)
{
	free(self->included_ranges);
}

void ts_lexer_set_input(t_lexer *self, t_parse_input input)
{
	self->input = input;
	ts_lexer__clear_chunk(self);
	ts_lexer_goto(self, self->current_position);
}

// Move the lexer to the given position. This doesn't do any work
// if the parser is already at the given position.
void ts_lexer_reset(t_lexer *self, t_length position)
{
	if (position.bytes != self->current_position.bytes)
	{
		ts_lexer_goto(self, position);
	}
}

void ts_lexer_start(t_lexer *self)
{
	self->token_start_position = self->current_position;
	self->token_end_position = LENGTH_UNDEFINED;
	self->data.result_symbol = 0;
	self->did_get_column = false;
	if (!ts_lexer__eof(&self->data))
	{
		if (!self->chunk_size)
			ts_lexer__get_chunk(self);
		if (!self->lookahead_size)
			ts_lexer__get_lookahead(self);
		if (self->current_position.bytes == 0 &&
			self->data.lookahead == BYTE_ORDER_MARK)
			ts_lexer__advance(&self->data, true);
	}
}

void ts_lexer_finish(t_lexer *self, uint32_t *lookahead_end_byte)
{
	if (length_is_undefined(self->token_end_position))
	{
		ts_lexer__mark_end(&self->data);
	}

	// If the token ended at an included range boundary, then its end position
	// will have been reset to the end of the preceding range. Reset the start
	// position to match.
	if (self->token_end_position.bytes < self->token_start_position.bytes)
	{
		self->token_start_position = self->token_end_position;
	}

	uint32_t current_lookahead_end_byte = self->current_position.bytes + 1;

	// In order to determine that a byte sequence is invalid UTF8 or UTF16,
	// the character decoding algorithm may have looked at the following byte.
	// Therefore, the next byte *after* the current (invalid) character
	// affects the interpretation of the current character.
	if (self->data.lookahead == TS_DECODE_ERROR)
	{
		current_lookahead_end_byte += 4; // the maximum number of bytes read to
										 // identify an invalid code point
	}

	if (current_lookahead_end_byte > *lookahead_end_byte)
	{
		*lookahead_end_byte = current_lookahead_end_byte;
	}
}

void ts_lexer_advance_to_end(t_lexer *self)
{
	while (self->chunk)
	{
		ts_lexer__advance(&self->data, false);
	}
}

void ts_lexer_mark_end(t_lexer *self)
{
	ts_lexer__mark_end(&self->data);
}

bool ts_lexer_set_included_ranges(t_lexer *self, const t_parse_range *ranges,
								  uint32_t count)
{
	if (count == 0 || !ranges)
	{
		ranges = &DEFAULT_RANGE;
		count = 1;
	}
	else
	{
		uint32_t previous_byte = 0;
		for (unsigned i = 0; i < count; i++)
		{
			const t_parse_range *range = &ranges[i];
			if (range->start_byte < previous_byte ||
				range->end_byte < range->start_byte)
				return false;
			previous_byte = range->end_byte;
		}
	}

	size_t size = count * sizeof(t_parse_range);
	self->included_ranges = realloc(self->included_ranges, size);
	memcpy(self->included_ranges, ranges, size);
	self->included_range_count = count;
	ts_lexer_goto(self, self->current_position);
	return true;
}

t_parse_range *ts_lexer_included_ranges(const t_lexer *self, uint32_t *count)
{
	*count = self->included_range_count;
	return self->included_ranges;
}

#undef LOG

// t_parse_node - constructors

t_parse_node ts_node_new(const t_first_tree *tree, const t_subtree *subtree,
						 t_length position, t_symbol alias)
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

uint32_t ts_node_start_byte(t_parse_node self)
{
	return self.context[0];
}

t_point ts_node_start_point(t_parse_node self)
{
	return (t_point){self.context[1], self.context[2]};
}

static inline uint32_t ts_node__alias(const t_parse_node *self)
{
	return self->context[3];
}

static inline t_subtree ts_node__subtree(t_parse_node self)
{
	return *(const t_subtree *)self.id;
}

// t_node_child_iterator

static inline t_node_child_iterator ts_node_iterate_children(
	const t_parse_node *node)
{
	t_subtree subtree = ts_node__subtree(*node);
	if (ts_subtree_child_count(subtree) == 0)
	{
		return (t_node_child_iterator){
			NULL_SUBTREE, node->tree, length_zero(), 0, 0, NULL};
	}
	const t_symbol *alias_sequence = ts_language_alias_sequence(
		node->tree->language, subtree.ptr->production_id);
	return (t_node_child_iterator){
		.tree = node->tree,
		.parent = subtree,
		.position = {ts_node_start_byte(*node), ts_node_start_point(*node)},
		.child_index = 0,
		.structural_child_index = 0,
		.alias_sequence = alias_sequence,
	};
}

static inline bool ts_node_child_iterator_done(t_node_child_iterator *self)
{
	return self->child_index == self->parent.ptr->child_count;
}

static inline bool ts_node_child_iterator_next(t_node_child_iterator *self,
											   t_parse_node			 *result)
{
	if (!self->parent.ptr || ts_node_child_iterator_done(self))
		return false;
	const t_subtree *child =
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
	t_subtree tree = ts_node__subtree(self);
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

static inline uint32_t ts_node__relevant_child_count(t_parse_node self,
													 bool include_anonymous)
{
	t_subtree tree = ts_node__subtree(self);
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

static inline t_parse_node ts_node__child(t_parse_node self,
										  uint32_t	   child_index,
										  bool		   include_anonymous)
{
	t_parse_node result = self;
	bool		 did_descend = true;

	while (did_descend)
	{
		did_descend = false;

		t_parse_node		  child;
		uint32_t			  index = 0;
		t_node_child_iterator iterator = ts_node_iterate_children(&result);
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
				uint32_t grandchild_index = child_index - index;
				uint32_t grandchild_count =
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

static bool ts_subtree_has_trailing_empty_descendant(t_subtree self,
													 t_subtree other)
{
	for (unsigned i = ts_subtree_child_count(self) - 1; i + 1 > 0; i--)
	{
		t_subtree child = ts_subtree_children(self)[i];
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
	t_subtree self_subtree = ts_node__subtree(self);
	bool	  self_is_empty = ts_subtree_total_bytes(self_subtree) == 0;
	uint32_t  target_end_byte = ts_node_end_byte(self);

	t_parse_node node = ts_node_parent(self);
	t_parse_node earlier_node = ts_node__null();
	bool		 earlier_node_is_relevant = false;

	while (!ts_node_is_null(node))
	{
		t_parse_node earlier_child = ts_node__null();
		bool		 earlier_child_is_relevant = false;
		bool		 found_child_containing_target = false;

		t_parse_node		  child;
		t_node_child_iterator iterator = ts_node_iterate_children(&node);
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
	uint32_t target_end_byte = ts_node_end_byte(self);

	t_parse_node node = ts_node_parent(self);
	t_parse_node later_node = ts_node__null();
	bool		 later_node_is_relevant = false;

	while (!ts_node_is_null(node))
	{
		t_parse_node later_child = ts_node__null();
		bool		 later_child_is_relevant = false;
		t_parse_node child_containing_target = ts_node__null();

		t_parse_node		  child;
		t_node_child_iterator iterator = ts_node_iterate_children(&node);
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
														 uint32_t	  goal,
														 bool include_anonymous)
{
	t_parse_node node = self;
	bool		 did_descend = true;

	while (did_descend)
	{
		did_descend = false;

		t_parse_node		  child;
		t_node_child_iterator iterator = ts_node_iterate_children(&node);
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
	t_parse_node self, uint32_t range_start, uint32_t range_end,
	bool include_anonymous)
{
	t_parse_node node = self;
	t_parse_node last_visible_node = self;

	bool did_descend = true;
	while (did_descend)
	{
		did_descend = false;

		t_parse_node		  child;
		t_node_child_iterator iterator = ts_node_iterate_children(&node);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			uint32_t node_end = iterator.position.bytes;

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

		t_parse_node		  child;
		t_node_child_iterator iterator = ts_node_iterate_children(&node);
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

uint32_t ts_node_end_byte(t_parse_node self)
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

uint32_t ts_node_descendant_count(t_parse_node self)
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
	uint16_t		  state = ts_node_parse_state(self);
	if (state == TS_TREE_STATE_NONE)
	{
		return TS_TREE_STATE_NONE;
	}
	uint16_t symbol = ts_node_grammar_symbol(self);
	return ts_language_next_state(language, state, symbol);
}

t_parse_node ts_node_parent(t_parse_node self)
{
	t_parse_node node = ts_tree_root_node(self.tree);
	if (node.id == self.id)
		return ts_node__null();

	while (true)
	{
		t_parse_node next_node =
			ts_node_child_containing_descendant(node, self);
		if (ts_node_is_null(next_node))
			break;
		node = next_node;
	}

	return node;
}

t_parse_node ts_node_child_containing_descendant(t_parse_node self,
												 t_parse_node subnode)
{
	uint32_t start_byte = ts_node_start_byte(subnode);
	uint32_t end_byte = ts_node_end_byte(subnode);

	do
	{
		t_node_child_iterator iter = ts_node_iterate_children(&self);
		do
		{
			if (!ts_node_child_iterator_next(&iter, &self) ||
				ts_node_start_byte(self) > start_byte || self.id == subnode.id)
			{
				return ts_node__null();
			}
		} while (iter.position.bytes < end_byte ||
				 ts_node_child_count(self) == 0);
	} while (!ts_node__is_relevant(self, true));

	return self;
}

t_parse_node ts_node_child(t_parse_node self, uint32_t child_index)
{
	return ts_node__child(self, child_index, true);
}

t_parse_node ts_node_named_child(t_parse_node self, uint32_t child_index)
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

	t_parse_node		  child;
	t_node_child_iterator iterator = ts_node_iterate_children(&self);
	while (ts_node_child_iterator_next(&iterator, &child))
	{
		if (!ts_subtree_extra(ts_node__subtree(child)))
		{
			uint32_t index = iterator.structural_child_index - 1;
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
	t_parse_node self, uint32_t structural_child_index)
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

const char *ts_node_field_name_for_child(t_parse_node self,
										 uint32_t	  child_index)
{
	t_parse_node result = self;
	bool		 did_descend = true;
	const char	*inherited_field_name = NULL;

	while (did_descend)
	{
		did_descend = false;

		t_parse_node		  child;
		uint32_t			  index = 0;
		t_node_child_iterator iterator = ts_node_iterate_children(&result);
		while (ts_node_child_iterator_next(&iterator, &child))
		{
			if (ts_node__is_relevant(child, true))
			{
				if (index == child_index)
				{
					if (ts_node_is_extra(child))
					{
						return NULL;
					}
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
				uint32_t grandchild_index = child_index - index;
				uint32_t grandchild_count =
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
										 uint32_t name_length)
{
	t_field_id field_id =
		ts_language_field_id_for_name(self.tree->language, name, name_length);
	return ts_node_child_by_field_id(self, field_id);
}

uint32_t ts_node_child_count(t_parse_node self)
{
	t_subtree tree = ts_node__subtree(self);
	if (ts_subtree_child_count(tree) > 0)
	{
		return tree.ptr->visible_child_count;
	}
	else
	{
		return 0;
	}
}

uint32_t ts_node_named_child_count(t_parse_node self)
{
	t_subtree tree = ts_node__subtree(self);
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

t_parse_node ts_node_first_child_for_byte(t_parse_node self, uint32_t byte)
{
	return ts_node__first_child_for_byte(self, byte, true);
}

t_parse_node ts_node_first_named_child_for_byte(t_parse_node self,
												uint32_t	 byte)
{
	return ts_node__first_child_for_byte(self, byte, false);
}

t_parse_node ts_node_descendant_for_byte_range(t_parse_node self,
											   uint32_t start, uint32_t end)
{
	return ts_node__descendant_for_byte_range(self, start, end, true);
}

t_parse_node ts_node_named_descendant_for_byte_range(t_parse_node self,
													 uint32_t	  start,
													 uint32_t	  end)
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
	uint32_t start_byte = ts_node_start_byte(*self);
	t_point	 start_point = ts_node_start_point(*self);

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

#define SYM_NAME(symbol) ts_language_symbol_name(self->language, symbol)

#define TREE_NAME(tree) SYM_NAME(ts_subtree_symbol(tree))

static const unsigned MAX_VERSION_COUNT = 6;
static const unsigned MAX_VERSION_COUNT_OVERFLOW = 4;
static const unsigned MAX_SUMMARY_DEPTH = 16;
static const unsigned MAX_COST_DIFFERENCE = 16 * ERROR_COST_PER_SKIPPED_TREE;
static const unsigned OP_COUNT_PER_TIMEOUT_CHECK = 100;

// StringInput

static const char *ts_string_input_read(void *_self, uint32_t byte,
										t_point point, uint32_t *length)
{
	(void)point;
	t_string_input *self = (t_string_input *)_self;
	if (byte >= self->length)
	{
		*length = 0;
		return "";
	}
	else
	{
		*length = self->length - byte;
		return self->string + byte;
	}
}

// Parser - Private

static bool ts_parser__breakdown_top_of_stack(t_first_parser *self,
											  t_stack_version version)
{
	bool did_break_down = false;
	bool pending = false;

	do
	{
		t_stack_slice_array pop = ts_stack_pop_pending(self->stack, version);
		if (!pop.size)
			break;

		did_break_down = true;
		pending = false;
		for (uint32_t i = 0; i < pop.size; i++)
		{
			t_stack_slice slice = pop.contents[i];
			t_state_id	  state = ts_stack_state(self->stack, slice.version);
			t_subtree	  parent = *array_front(&slice.subtrees);

			for (uint32_t j = 0, n = ts_subtree_child_count(parent); j < n; j++)
			{
				t_subtree child = ts_subtree_children(parent)[j];
				pending = ts_subtree_child_count(child) > 0;

				if (ts_subtree_is_error(child))
				{
					state = ERROR_STATE;
				}
				else if (!ts_subtree_extra(child))
				{
					state = ts_language_next_state(self->language, state,
												   ts_subtree_symbol(child));
				}

				ts_subtree_retain(child);
				ts_stack_push(self->stack, slice.version, child, pending,
							  state);
			}

			for (uint32_t j = 1; j < slice.subtrees.size; j++)
			{
				t_subtree tree = slice.subtrees.contents[j];
				ts_stack_push(self->stack, slice.version, tree, false, state);
			}

			ts_subtree_release(&self->tree_pool, parent);
			array_delete(&slice.subtrees);
		}
	} while (pending);

	return did_break_down;
}

static void ts_parser__breakdown_lookahead(t_first_parser  *self,
										   t_subtree	   *lookahead,
										   t_state_id		state,
										   t_reusable_node *reusable_node)
{
	bool	  did_descend = false;
	t_subtree tree = reusable_node_tree(reusable_node);
	while (ts_subtree_child_count(tree) > 0 &&
		   ts_subtree_parse_state(tree) != state)
	{
		reusable_node_descend(reusable_node);
		tree = reusable_node_tree(reusable_node);
		did_descend = true;
	}

	if (did_descend)
	{
		ts_subtree_release(&self->tree_pool, *lookahead);
		*lookahead = tree;
		ts_subtree_retain(*lookahead);
	}
}

static t_error_comparaison ts_parser__compare_versions(t_first_parser *self,
													   t_error_status  a,
													   t_error_status  b)
{
	(void)self;
	if (!a.is_in_error && b.is_in_error)
	{
		if (a.cost < b.cost)
		{
			return ErrorComparisonTakeLeft;
		}
		else
		{
			return ErrorComparisonPreferLeft;
		}
	}

	if (a.is_in_error && !b.is_in_error)
	{
		if (b.cost < a.cost)
		{
			return ErrorComparisonTakeRight;
		}
		else
		{
			return ErrorComparisonPreferRight;
		}
	}

	if (a.cost < b.cost)
	{
		if ((b.cost - a.cost) * (1 + a.node_count) > MAX_COST_DIFFERENCE)
		{
			return ErrorComparisonTakeLeft;
		}
		else
		{
			return ErrorComparisonPreferLeft;
		}
	}

	if (b.cost < a.cost)
	{
		if ((a.cost - b.cost) * (1 + b.node_count) > MAX_COST_DIFFERENCE)
		{
			return ErrorComparisonTakeRight;
		}
		else
		{
			return ErrorComparisonPreferRight;
		}
	}

	if (a.dynamic_precedence > b.dynamic_precedence)
		return ErrorComparisonPreferLeft;
	if (b.dynamic_precedence > a.dynamic_precedence)
		return ErrorComparisonPreferRight;
	return ErrorComparisonNone;
}

static t_error_status ts_parser__version_status(t_first_parser *self,
												t_stack_version version)
{
	unsigned cost = ts_stack_error_cost(self->stack, version);
	bool	 is_paused = ts_stack_is_paused(self->stack, version);
	if (is_paused)
		cost += ERROR_COST_PER_SKIPPED_TREE;
	return (t_error_status){
		.cost = cost,
		.node_count = ts_stack_node_count_since_error(self->stack, version),
		.dynamic_precedence = ts_stack_dynamic_precedence(self->stack, version),
		.is_in_error =
			is_paused || ts_stack_state(self->stack, version) == ERROR_STATE};
}

static bool ts_parser__better_version_exists(t_first_parser *self,
											 t_stack_version version,
											 bool is_in_error, unsigned cost)
{
	if (self->finished_tree.ptr &&
		ts_subtree_error_cost(self->finished_tree) <= cost)
	{
		return true;
	}

	t_length	   position = ts_stack_position(self->stack, version);
	t_error_status status = {
		.cost = cost,
		.is_in_error = is_in_error,
		.dynamic_precedence = ts_stack_dynamic_precedence(self->stack, version),
		.node_count = ts_stack_node_count_since_error(self->stack, version),
	};

	for (t_stack_version i = 0, n = ts_stack_version_count(self->stack); i < n;
		 i++)
	{
		if (i == version || !ts_stack_is_active(self->stack, i) ||
			ts_stack_position(self->stack, i).bytes < position.bytes)
			continue;
		t_error_status status_i = ts_parser__version_status(self, i);
		switch (ts_parser__compare_versions(self, status, status_i))
		{
		case ErrorComparisonTakeRight:
			return true;
		case ErrorComparisonPreferRight:
			if (ts_stack_can_merge(self->stack, i, version))
				return true;
			break;
		default:
			break;
		}
	}

	return false;
}

static bool ts_parser__call_main_lex_fn(t_first_parser *self,
										t_lex_mode		lex_mode)
{
	return self->language->lex_fn(&self->lexer.data, lex_mode.lex_state);
}

static bool ts_parser__call_keyword_lex_fn(t_first_parser *self,
										   t_lex_mode	   lex_mode)
{

	(void)(lex_mode);
	return self->language->keyword_lex_fn(&self->lexer.data, 0);
}

static void ts_parser__external_scanner_create(t_first_parser *self)
{
	if (self->language && self->language->external_scanner.states)
	{
		if (self->language->external_scanner.create)
		{
			self->external_scanner_payload =
				self->language->external_scanner.create();
		}
	}
}

static void ts_parser__external_scanner_destroy(t_first_parser *self)
{
	if (self->language && self->external_scanner_payload &&
		self->language->external_scanner.destroy)
	{
		self->language->external_scanner.destroy(
			self->external_scanner_payload);
	}
	self->external_scanner_payload = NULL;
}

static unsigned ts_parser__external_scanner_serialize(t_first_parser *self)
{

	uint32_t length = self->language->external_scanner.serialize(
		self->external_scanner_payload, self->lexer.debug_buffer);
	assert(length <= TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
	return length;
}

static void ts_parser__external_scanner_deserialize(t_first_parser *self,
													t_subtree external_token)
{
	const char *data = NULL;
	uint32_t	length = 0;
	if (external_token.ptr)
	{
		data = ts_external_scanner_state_data(
			&external_token.ptr->external_scanner_state);
		length = external_token.ptr->external_scanner_state.length;
	}

	self->language->external_scanner.deserialize(self->external_scanner_payload,
												 data, length);
}

static bool ts_parser__external_scanner_scan(t_first_parser *self,
											 t_state_id		 external_lex_state)
{

	const bool *valid_external_tokens =
		ts_language_enabled_external_tokens(self->language, external_lex_state);
	return self->language->external_scanner.scan(self->external_scanner_payload,
												 &self->lexer.data,
												 valid_external_tokens);
}

static bool ts_parser__can_reuse_first_leaf(t_first_parser *self,
											t_state_id state, t_subtree tree,
											t_table_entry *table_entry)
{
	t_lex_mode current_lex_mode = self->language->lex_modes[state];
	t_symbol   leaf_symbol = ts_subtree_leaf_symbol(tree);
	t_state_id leaf_state = ts_subtree_leaf_parse_state(tree);
	t_lex_mode leaf_lex_mode = self->language->lex_modes[leaf_state];

	// At the end of a non-terminal extra node, the lexer normally returns
	// NULL, which indicates that the parser should look for a reduce action
	// at symbol `0`. Avoid reusing tokens in this situation to ensure that
	// the same thing happens when incrementally reparsing.
	if (current_lex_mode.lex_state == (uint16_t)(-1))
		return false;

	// If the token was created in a state with the same set of lookaheads, it
	// is reusable.
	if (table_entry->action_count > 0 &&
		memcmp(&leaf_lex_mode, &current_lex_mode, sizeof(t_lex_mode)) == 0 &&
		(leaf_symbol != self->language->keyword_capture_token ||
		 (!ts_subtree_is_keyword(tree) &&
		  ts_subtree_parse_state(tree) == state)))
		return true;

	// Empty tokens are not reusable in states with different lookaheads.
	if (ts_subtree_size(tree).bytes == 0 && leaf_symbol != ts_builtin_sym_end)
		return false;

	// If the current state allows external tokens or other tokens that conflict
	// with this token, this token is not reusable.
	return current_lex_mode.external_lex_state == 0 && table_entry->is_reusable;
}

const t_external_scanner_state *ts_subtree_external_scanner_state(
	t_subtree self)
{
	static const t_external_scanner_state empty_state = {{.short_data = {0}},
														 .length = 0};
	if (self.ptr && !self.data.is_inline && self.ptr->has_external_tokens &&
		self.ptr->child_count == 0)
	{
		return &self.ptr->external_scanner_state;
	}
	else
	{
		return &empty_state;
	}
}

static t_subtree ts_parser__lex(t_first_parser *self, t_stack_version version,
								t_state_id parse_state)
{
	t_lex_mode lex_mode = self->language->lex_modes[parse_state];
	if (lex_mode.lex_state == (uint16_t)-1)
	{
		return NULL_SUBTREE;
	}

	const t_length	start_position = ts_stack_position(self->stack, version);
	const t_subtree external_token =
		ts_stack_last_external_token(self->stack, version);

	bool	 found_external_token = false;
	bool	 error_mode = parse_state == ERROR_STATE;
	bool	 skipped_error = false;
	bool	 called_get_column = false;
	int32_t	 first_error_character = 0;
	t_length error_start_position = length_zero();
	t_length error_end_position = length_zero();
	uint32_t lookahead_end_byte = 0;
	uint32_t external_scanner_state_len = 0;
	bool	 external_scanner_state_changed = false;
	ts_lexer_reset(&self->lexer, start_position);

	for (;;)
	{
		bool	 found_token = false;
		t_length current_position = self->lexer.current_position;

		if (lex_mode.external_lex_state != 0)
		{
			ts_lexer_start(&self->lexer);
			ts_parser__external_scanner_deserialize(self, external_token);
			found_token = ts_parser__external_scanner_scan(
				self, lex_mode.external_lex_state);
			if (self->has_scanner_error)
				return NULL_SUBTREE;
			ts_lexer_finish(&self->lexer, &lookahead_end_byte);

			if (found_token)
			{
				external_scanner_state_len =
					ts_parser__external_scanner_serialize(self);
				external_scanner_state_changed = !ts_external_scanner_state_eq(
					ts_subtree_external_scanner_state(external_token),
					self->lexer.debug_buffer, external_scanner_state_len);

				// When recovering from an error, ignore any zero-length
				// external tokens unless they have changed the external
				// scanner's state. This helps to avoid infinite loops which
				// could otherwise occur, because the lexer is looking for any
				// possible token, instead of looking for the specific set of
				// tokens that are valid in some parse state.
				//
				// Note that it's possible that the token end position may be
				// *before* the original position of the lexer because of the
				// way that tokens are positioned at included range boundaries:
				// when a token is terminated at the start of an included range,
				// it is marked as ending at the *end* of the preceding included
				// range.
				if (self->lexer.token_end_position.bytes <=
						current_position.bytes &&
					(error_mode || !ts_stack_has_advanced_since_error(
									   self->stack, version)) &&
					!external_scanner_state_changed)
				{
					found_token = false;
				}
			}

			if (found_token)
			{
				found_external_token = true;
				called_get_column = self->lexer.did_get_column;
				break;
			}

			ts_lexer_reset(&self->lexer, current_position);
		}
		ts_lexer_start(&self->lexer);
		found_token = ts_parser__call_main_lex_fn(self, lex_mode);
		ts_lexer_finish(&self->lexer, &lookahead_end_byte);
		if (found_token)
			break;

		if (!error_mode)
		{
			error_mode = true;
			lex_mode = self->language->lex_modes[ERROR_STATE];
			ts_lexer_reset(&self->lexer, start_position);
			continue;
		}

		if (!skipped_error)
		{
			skipped_error = true;
			error_start_position = self->lexer.token_start_position;
			error_end_position = self->lexer.token_start_position;
			first_error_character = self->lexer.data.lookahead;
		}

		if (self->lexer.current_position.bytes == error_end_position.bytes)
		{
			if (self->lexer.data.eof(&self->lexer.data))
			{
				self->lexer.data.result_symbol = ts_builtin_sym_error;
				break;
			}
			self->lexer.data.advance(&self->lexer.data, false);
		}

		error_end_position = self->lexer.current_position;
	}

	t_subtree result;
	if (skipped_error)
	{
		t_length padding = length_sub(error_start_position, start_position);
		t_length size = length_sub(error_end_position, error_start_position);
		uint32_t lookahead_bytes =
			lookahead_end_byte - error_end_position.bytes;
		result = ts_subtree_new_error(&self->tree_pool, first_error_character,
									  padding, size, lookahead_bytes,
									  parse_state, self->language);
	}
	else
	{
		bool	 is_keyword = false;
		t_symbol symbol = self->lexer.data.result_symbol;
		t_length padding =
			length_sub(self->lexer.token_start_position, start_position);
		t_length size = length_sub(self->lexer.token_end_position,
								   self->lexer.token_start_position);
		uint32_t lookahead_bytes =
			lookahead_end_byte - self->lexer.token_end_position.bytes;

		if (found_external_token)
		{
			symbol = self->language->external_scanner.symbol_map[symbol];
		}
		else if (symbol == self->language->keyword_capture_token && symbol != 0)
		{
			uint32_t end_byte = self->lexer.token_end_position.bytes;
			ts_lexer_reset(&self->lexer, self->lexer.token_start_position);
			ts_lexer_start(&self->lexer);

			is_keyword = ts_parser__call_keyword_lex_fn(self, lex_mode);

			if (is_keyword &&
				self->lexer.token_end_position.bytes == end_byte &&
				ts_language_has_actions(self->language, parse_state,
										self->lexer.data.result_symbol))
			{
				symbol = self->lexer.data.result_symbol;
			}
		}

		result = ts_subtree_new_leaf(&self->tree_pool, symbol, padding, size,
									 lookahead_bytes, parse_state,
									 found_external_token, called_get_column,
									 is_keyword, self->language);

		if (found_external_token)
		{
			t_mutable_subtree mut_result = ts_subtree_to_mut_unsafe(result);
			ts_external_scanner_state_init(
				&mut_result.ptr->external_scanner_state,
				self->lexer.debug_buffer, external_scanner_state_len);
			mut_result.ptr->has_external_scanner_state_change =
				external_scanner_state_changed;
		}
	}
	return result;
}

static t_subtree ts_parser__get_cached_token(t_first_parser *self,
											 t_state_id state, size_t position,
											 t_subtree		last_external_token,
											 t_table_entry *table_entry)
{
	t_token_cache *cache = &self->token_cache;
	if (cache->token.ptr && cache->byte_index == position &&
		ts_subtree_external_scanner_state_eq(cache->last_external_token,
											 last_external_token))
	{
		ts_language_table_entry(self->language, state,
								ts_subtree_symbol(cache->token), table_entry);
		if (ts_parser__can_reuse_first_leaf(self, state, cache->token,
											table_entry))
		{
			ts_subtree_retain(cache->token);
			return cache->token;
		}
	}
	return NULL_SUBTREE;
}

static void ts_parser__set_cached_token(t_first_parser *self,
										uint32_t		byte_index,
										t_subtree		last_external_token,
										t_subtree		token)
{
	t_token_cache *cache = &self->token_cache;
	if (token.ptr)
		ts_subtree_retain(token);
	if (last_external_token.ptr)
		ts_subtree_retain(last_external_token);
	if (cache->token.ptr)
		ts_subtree_release(&self->tree_pool, cache->token);
	if (cache->last_external_token.ptr)
		ts_subtree_release(&self->tree_pool, cache->last_external_token);
	cache->token = token;
	cache->byte_index = byte_index;
	cache->last_external_token = last_external_token;
}

static bool ts_parser__has_included_range_difference(const t_first_parser *self,
													 uint32_t start_position,
													 uint32_t end_position)
{
	return ts_range_array_intersects(&self->included_range_differences,
									 self->included_range_difference_index,
									 start_position, end_position);
}

static t_subtree ts_parser__reuse_node(t_first_parser *self,
									   t_stack_version version,
									   t_state_id *state, uint32_t position,
									   t_subtree	  last_external_token,
									   t_table_entry *table_entry)
{
	t_subtree result;
	while ((result = reusable_node_tree(&self->reusable_node)).ptr)
	{
		uint32_t byte_offset = reusable_node_byte_offset(&self->reusable_node);
		uint32_t end_byte_offset = byte_offset + ts_subtree_total_bytes(result);

		// Do not reuse an EOF node if the included ranges array has changes
		// later on in the file.
		if (ts_subtree_is_eof(result))
			end_byte_offset = UINT32_MAX;

		if (byte_offset > position)
		{

			break;
		}

		if (byte_offset < position)
		{

			if (end_byte_offset <= position ||
				!reusable_node_descend(&self->reusable_node))
			{
				reusable_node_advance(&self->reusable_node);
			}
			continue;
		}

		if (!ts_subtree_external_scanner_state_eq(
				self->reusable_node.last_external_token, last_external_token))
		{
			reusable_node_advance(&self->reusable_node);
			continue;
		}

		const char *reason = NULL;
		if (ts_subtree_has_changes(result))
		{
			reason = "has_changes";
		}
		else if (ts_subtree_is_error(result))
		{
			reason = "is_error";
		}
		else if (ts_subtree_missing(result))
		{
			reason = "is_missing";
		}
		else if (ts_subtree_is_fragile(result))
		{
			reason = "is_fragile";
		}
		else if (ts_parser__has_included_range_difference(self, byte_offset,
														  end_byte_offset))
		{
			reason = "contains_different_included_range";
		}

		if (reason)
		{
			if (!reusable_node_descend(&self->reusable_node))
			{
				reusable_node_advance(&self->reusable_node);
				ts_parser__breakdown_top_of_stack(self, version);
				*state = ts_stack_state(self->stack, version);
			}
			continue;
		}

		t_symbol leaf_symbol = ts_subtree_leaf_symbol(result);
		ts_language_table_entry(self->language, *state, leaf_symbol,
								table_entry);
		if (!ts_parser__can_reuse_first_leaf(self, *state, result, table_entry))
		{
			reusable_node_advance_past_leaf(&self->reusable_node);
			break;
		}
		ts_subtree_retain(result);
		return result;
	}

	return NULL_SUBTREE;
}

// Determine if a given tree should be replaced by an alternative tree.
//
// The decision is based on the trees' error costs (if any), their dynamic
// precedence, and finally, as a default, by a recursive comparison of the
// trees' symbols.
static bool ts_parser__select_tree(t_first_parser *self, t_subtree left,
								   t_subtree right)
{
	if (!left.ptr)
		return true;
	if (!right.ptr)
		return false;

	if (ts_subtree_error_cost(right) < ts_subtree_error_cost(left))
	{
		return true;
	}

	if (ts_subtree_error_cost(left) < ts_subtree_error_cost(right))
	{
		return false;
	}

	if (ts_subtree_dynamic_precedence(right) >
		ts_subtree_dynamic_precedence(left))
	{
		return true;
	}

	if (ts_subtree_dynamic_precedence(left) >
		ts_subtree_dynamic_precedence(right))
	{
		return false;
	}

	if (ts_subtree_error_cost(left) > 0)
		return true;

	int comparison = ts_subtree_compare(left, right, &self->tree_pool);
	switch (comparison)
	{
	case -1:
		return false;
		break;
	case 1:
		return true;
	default:
		return false;
	}
}

// Determine if a given tree's children should be replaced by an alternative
// array of children.
static bool ts_parser__select_children(t_first_parser *self, t_subtree left,
									   const t_subtree_array *children)
{
	array_assign(&self->scratch_trees, children);

	// Create a temporary subtree using the scratch trees array. This node does
	// not perform any allocation except for possibly growing the array to make
	// room for its own heap data. The scratch tree is never explicitly
	// released, so the same 'scratch trees' array can be reused again later.
	t_mutable_subtree scratch_tree = ts_subtree_new_node(
		ts_subtree_symbol(left), &self->scratch_trees, 0, self->language);

	return ts_parser__select_tree(self, left,
								  ts_subtree_from_mut(scratch_tree));
}

static void ts_parser__shift(t_first_parser *self, t_stack_version version,
							 t_state_id state, t_subtree lookahead, bool extra)
{
	bool	  is_leaf = ts_subtree_child_count(lookahead) == 0;
	t_subtree subtree_to_push = lookahead;
	if (extra != ts_subtree_extra(lookahead) && is_leaf)
	{
		t_mutable_subtree result =
			ts_subtree_make_mut(&self->tree_pool, lookahead);
		ts_subtree_set_extra(&result, extra);
		subtree_to_push = ts_subtree_from_mut(result);
	}

	ts_stack_push(self->stack, version, subtree_to_push, !is_leaf, state);
	if (ts_subtree_has_external_tokens(subtree_to_push))
	{
		ts_stack_set_last_external_token(
			self->stack, version,
			ts_subtree_last_external_token(subtree_to_push));
	}
}

static t_stack_version ts_parser__reduce(
	t_first_parser *self, t_stack_version version, t_symbol symbol,
	uint32_t count, int dynamic_precedence, uint16_t production_id,
	bool is_fragile, bool end_of_non_terminal_extra)
{
	uint32_t initial_version_count = ts_stack_version_count(self->stack);

	// Pop the given number of nodes from the given version of the parse stack.
	// If stack versions have previously merged, then there may be more than one
	// path back through the stack. For each path, create a new parent node to
	// contain the popped children, and push it onto the stack in place of the
	// children.
	t_stack_slice_array pop = ts_stack_pop_count(self->stack, version, count);
	uint32_t			removed_version_count = 0;
	for (uint32_t i = 0; i < pop.size; i++)
	{
		t_stack_slice	slice = pop.contents[i];
		t_stack_version slice_version = slice.version - removed_version_count;

		// This is where new versions are added to the parse stack. The versions
		// will all be sorted and truncated at the end of the outer parsing
		// loop. Allow the maximum version count to be temporarily exceeded, but
		// only by a limited threshold.
		if (slice_version > MAX_VERSION_COUNT + MAX_VERSION_COUNT_OVERFLOW)
		{
			ts_stack_remove_version(self->stack, slice_version);
			ts_subtree_array_delete(&self->tree_pool, &slice.subtrees);
			removed_version_count++;
			while (i + 1 < pop.size)
			{
				t_stack_slice next_slice = pop.contents[i + 1];
				if (next_slice.version != slice.version)
					break;
				ts_subtree_array_delete(&self->tree_pool, &next_slice.subtrees);
				i++;
			}
			continue;
		}

		// Extra tokens on top of the stack should not be included in this new
		// parent node. They will be re-pushed onto the stack after the parent
		// node is created and pushed.
		t_subtree_array children = slice.subtrees;
		ts_subtree_array_remove_trailing_extras(&children,
												&self->trailing_extras);

		t_mutable_subtree parent = ts_subtree_new_node(
			symbol, &children, production_id, self->language);

		// This pop operation may have caused multiple stack versions to
		// collapse into one, because they all diverged from a common state. In
		// that case, choose one of the arrays of trees to be the parent node's
		// children, and delete the rest of the tree arrays.
		while (i + 1 < pop.size)
		{
			t_stack_slice next_slice = pop.contents[i + 1];
			if (next_slice.version != slice.version)
				break;
			i++;

			t_subtree_array next_slice_children = next_slice.subtrees;
			ts_subtree_array_remove_trailing_extras(&next_slice_children,
													&self->trailing_extras2);

			if (ts_parser__select_children(self, ts_subtree_from_mut(parent),
										   &next_slice_children))
			{
				ts_subtree_array_clear(&self->tree_pool,
									   &self->trailing_extras);
				ts_subtree_release(&self->tree_pool,
								   ts_subtree_from_mut(parent));
				array_swap(&self->trailing_extras, &self->trailing_extras2);
				parent = ts_subtree_new_node(symbol, &next_slice_children,
											 production_id, self->language);
			}
			else
			{
				array_clear(&self->trailing_extras2);
				ts_subtree_array_delete(&self->tree_pool, &next_slice.subtrees);
			}
		}

		t_state_id state = ts_stack_state(self->stack, slice_version);
		t_state_id next_state =
			ts_language_next_state(self->language, state, symbol);
		if (end_of_non_terminal_extra && next_state == state)
		{
			parent.ptr->extra = true;
		}
		if (is_fragile || pop.size > 1 || initial_version_count > 1)
		{
			parent.ptr->fragile_left = true;
			parent.ptr->fragile_right = true;
			parent.ptr->parse_state = TS_TREE_STATE_NONE;
		}
		else
		{
			parent.ptr->parse_state = state;
		}
		parent.ptr->dynamic_precedence += dynamic_precedence;

		// Push the parent node onto the stack, along with any extra tokens that
		// were previously on top of the stack.
		ts_stack_push(self->stack, slice_version, ts_subtree_from_mut(parent),
					  false, next_state);
		for (uint32_t j = 0; j < self->trailing_extras.size; j++)
		{
			ts_stack_push(self->stack, slice_version,
						  self->trailing_extras.contents[j], false, next_state);
		}

		for (t_stack_version j = 0; j < slice_version; j++)
		{
			if (j == version)
				continue;
			if (ts_stack_merge(self->stack, j, slice_version))
			{
				removed_version_count++;
				break;
			}
		}
	}

	// Return the first new stack version that was created.
	return ts_stack_version_count(self->stack) > initial_version_count
			   ? initial_version_count
			   : STACK_VERSION_NONE;
}

static void ts_parser__accept(t_first_parser *self, t_stack_version version,
							  t_subtree lookahead)
{
	assert(ts_subtree_is_eof(lookahead));
	ts_stack_push(self->stack, version, lookahead, false, 1);

	t_stack_slice_array pop = ts_stack_pop_all(self->stack, version);
	for (uint32_t i = 0; i < pop.size; i++)
	{
		t_subtree_array trees = pop.contents[i].subtrees;

		t_subtree root = NULL_SUBTREE;
		for (uint32_t j = trees.size - 1; j + 1 > 0; j--)
		{
			t_subtree tree = trees.contents[j];
			if (!ts_subtree_extra(tree))
			{
				assert(!tree.data.is_inline);
				uint32_t		 child_count = ts_subtree_child_count(tree);
				const t_subtree *children = ts_subtree_children(tree);
				for (uint32_t k = 0; k < child_count; k++)
				{
					ts_subtree_retain(children[k]);
				}
				array_splice(&trees, j, 1, child_count, children);
				root = ts_subtree_from_mut(ts_subtree_new_node(
					ts_subtree_symbol(tree), &trees, tree.ptr->production_id,
					self->language));
				ts_subtree_release(&self->tree_pool, tree);
				break;
			}
		}

		assert(root.ptr);
		self->accept_count++;

		if (self->finished_tree.ptr)
		{
			if (ts_parser__select_tree(self, self->finished_tree, root))
			{
				ts_subtree_release(&self->tree_pool, self->finished_tree);
				self->finished_tree = root;
			}
			else
			{
				ts_subtree_release(&self->tree_pool, root);
			}
		}
		else
		{
			self->finished_tree = root;
		}
	}

	ts_stack_remove_version(self->stack, pop.contents[0].version);
	ts_stack_halt(self->stack, version);
}

static bool ts_parser__do_all_potential_reductions(
	t_first_parser *self, t_stack_version starting_version,
	t_symbol lookahead_symbol)
{
	uint32_t initial_version_count = ts_stack_version_count(self->stack);

	bool			can_shift_lookahead_symbol = false;
	t_stack_version version = starting_version;
	for (unsigned i = 0; true; i++)
	{
		uint32_t version_count = ts_stack_version_count(self->stack);
		if (version >= version_count)
			break;

		bool merged = false;
		for (t_stack_version j = initial_version_count; j < version; j++)
		{
			if (ts_stack_merge(self->stack, j, version))
			{
				merged = true;
				break;
			}
		}
		if (merged)
			continue;

		t_state_id state = ts_stack_state(self->stack, version);
		bool	   has_shift_action = false;
		array_clear(&self->reduce_actions);

		t_symbol first_symbol, end_symbol;
		if (lookahead_symbol != 0)
		{
			first_symbol = lookahead_symbol;
			end_symbol = lookahead_symbol + 1;
		}
		else
		{
			first_symbol = 1;
			end_symbol = self->language->token_count;
		}

		for (t_symbol symbol = first_symbol; symbol < end_symbol; symbol++)
		{
			t_table_entry entry;
			ts_language_table_entry(self->language, state, symbol, &entry);
			for (uint32_t j = 0; j < entry.action_count; j++)
			{
				t_parse_action action = entry.actions[j];
				switch (action.type)
				{
				case TSParseActionTypeShift:
				case TSParseActionTypeRecover:
					if (!action.shift.extra && !action.shift.repetition)
						has_shift_action = true;
					break;
				case TSParseActionTypeReduce:
					if (action.reduce.child_count > 0)
						ts_reduce_action_set_add(
							&self->reduce_actions,
							(t_reduce_action){
								.symbol = action.reduce.symbol,
								.count = action.reduce.child_count,
								.dynamic_precedence =
									action.reduce.dynamic_precedence,
								.production_id = action.reduce.production_id,
							});
					break;
				default:
					break;
				}
			}
		}

		t_stack_version reduction_version = STACK_VERSION_NONE;
		for (uint32_t j = 0; j < self->reduce_actions.size; j++)
		{
			t_reduce_action action = self->reduce_actions.contents[j];

			reduction_version = ts_parser__reduce(
				self, version, action.symbol, action.count,
				action.dynamic_precedence, action.production_id, true, false);
		}

		if (has_shift_action)
		{
			can_shift_lookahead_symbol = true;
		}
		else if (reduction_version != STACK_VERSION_NONE &&
				 i < MAX_VERSION_COUNT)
		{
			ts_stack_renumber_version(self->stack, reduction_version, version);
			continue;
		}
		else if (lookahead_symbol != 0)
		{
			ts_stack_remove_version(self->stack, version);
		}

		if (version == starting_version)
		{
			version = version_count;
		}
		else
		{
			version++;
		}
	}

	return can_shift_lookahead_symbol;
}

static bool ts_parser__recover_to_state(t_first_parser *self,
										t_stack_version version, unsigned depth,
										t_state_id goal_state)
{
	t_stack_slice_array pop = ts_stack_pop_count(self->stack, version, depth);
	t_stack_version		previous_version = STACK_VERSION_NONE;

	for (unsigned i = 0; i < pop.size; i++)
	{
		t_stack_slice slice = pop.contents[i];

		if (slice.version == previous_version)
		{
			ts_subtree_array_delete(&self->tree_pool, &slice.subtrees);
			array_erase(&pop, i--);
			continue;
		}

		if (ts_stack_state(self->stack, slice.version) != goal_state)
		{
			ts_stack_halt(self->stack, slice.version);
			ts_subtree_array_delete(&self->tree_pool, &slice.subtrees);
			array_erase(&pop, i--);
			continue;
		}

		t_subtree_array error_trees =
			ts_stack_pop_error(self->stack, slice.version);
		if (error_trees.size > 0)
		{
			assert(error_trees.size == 1);
			t_subtree error_tree = error_trees.contents[0];
			uint32_t  error_child_count = ts_subtree_child_count(error_tree);
			if (error_child_count > 0)
			{
				array_splice(&slice.subtrees, 0, 0, error_child_count,
							 ts_subtree_children(error_tree));
				for (unsigned j = 0; j < error_child_count; j++)
				{
					ts_subtree_retain(slice.subtrees.contents[j]);
				}
			}
			ts_subtree_array_delete(&self->tree_pool, &error_trees);
		}

		ts_subtree_array_remove_trailing_extras(&slice.subtrees,
												&self->trailing_extras);

		if (slice.subtrees.size > 0)
		{
			t_subtree error = ts_subtree_new_error_node(&slice.subtrees, true,
														self->language);
			ts_stack_push(self->stack, slice.version, error, false, goal_state);
		}
		else
		{
			array_delete(&slice.subtrees);
		}

		for (unsigned j = 0; j < self->trailing_extras.size; j++)
		{
			t_subtree tree = self->trailing_extras.contents[j];
			ts_stack_push(self->stack, slice.version, tree, false, goal_state);
		}

		previous_version = slice.version;
	}

	return previous_version != STACK_VERSION_NONE;
}

static void ts_parser__recover(t_first_parser *self, t_stack_version version,
							   t_subtree lookahead)
{
	bool	 did_recover = false;
	unsigned previous_version_count = ts_stack_version_count(self->stack);
	t_length position = ts_stack_position(self->stack, version);
	t_stack_summary *summary = ts_stack_get_summary(self->stack, version);
	unsigned		 node_count_since_error =
		ts_stack_node_count_since_error(self->stack, version);
	unsigned current_error_cost = ts_stack_error_cost(self->stack, version);

	// When the parser is in the error state, there are two strategies for
	// recovering with a given lookahead token:
	// 1. Find a previous state on the stack in which that lookahead token would
	// be valid. Then,
	//    create a new stack version that is in that state again. This entails
	//    popping all of the subtrees that have been pushed onto the stack since
	//    that previous state, and wrapping them in an ERROR node.
	// 2. Wrap the lookahead token in an ERROR node, push that ERROR node onto
	// the stack, and
	//    move on to the next lookahead token, remaining in the error state.
	//
	// First, try the strategy 1. Upon entering the error state, the parser
	// recorded a summary of the previous parse states and their depths. Look at
	// each state in the summary, to see if the current lookahead token would be
	// valid in that state.
	if (summary && !ts_subtree_is_error(lookahead))
	{
		for (unsigned i = 0; i < summary->size; i++)
		{
			t_stack_summary_entry entry = summary->contents[i];

			if (entry.state == ERROR_STATE)
				continue;
			if (entry.position.bytes == position.bytes)
				continue;
			unsigned depth = entry.depth;
			if (node_count_since_error > 0)
				depth++;

			// Do not recover in ways that create redundant stack versions.
			bool would_merge = false;
			for (unsigned j = 0; j < previous_version_count; j++)
			{
				if (ts_stack_state(self->stack, j) == entry.state &&
					ts_stack_position(self->stack, j).bytes == position.bytes)
				{
					would_merge = true;
					break;
				}
			}
			if (would_merge)
				continue;

			// Do not recover if the result would clearly be worse than some
			// existing stack version.
			unsigned new_cost =
				current_error_cost + entry.depth * ERROR_COST_PER_SKIPPED_TREE +
				(position.bytes - entry.position.bytes) *
					ERROR_COST_PER_SKIPPED_CHAR +
				(position.extent.row - entry.position.extent.row) *
					ERROR_COST_PER_SKIPPED_LINE;
			if (ts_parser__better_version_exists(self, version, false,
												 new_cost))
				break;

			// If the current lookahead token is valid in some previous state,
			// recover to that state. Then stop looking for further recoveries.
			if (ts_language_has_actions(self->language, entry.state,
										ts_subtree_symbol(lookahead)))
			{
				if (ts_parser__recover_to_state(self, version, depth,
												entry.state))
				{
					did_recover = true;
					break;
				}
			}
		}
	}

	// In the process of attempting to recover, some stack versions may have
	// been created and subsequently halted. Remove those versions.
	for (unsigned i = previous_version_count;
		 i < ts_stack_version_count(self->stack); i++)
	{
		if (!ts_stack_is_active(self->stack, i))
		{
			ts_stack_remove_version(self->stack, i--);
		}
	}

	// If strategy 1 succeeded, a new stack version will have been created which
	// is able to handle the current lookahead token. Now, in addition, try
	// strategy 2 described above: skip the current lookahead token by wrapping
	// it in an ERROR node.

	// Don't pursue this additional strategy if there are already too many stack
	// versions.
	if (did_recover && ts_stack_version_count(self->stack) > MAX_VERSION_COUNT)
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(&self->tree_pool, lookahead);
		return;
	}

	if (did_recover && ts_subtree_has_external_scanner_state_change(lookahead))
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(&self->tree_pool, lookahead);
		return;
	}

	// If the parser is still in the error state at the end of the file, just
	// wrap everything in an ERROR node and terminate.
	if (ts_subtree_is_eof(lookahead))
	{
		t_subtree_array children = array_new();
		t_subtree		parent =
			ts_subtree_new_error_node(&children, false, self->language);
		ts_stack_push(self->stack, version, parent, false, 1);
		ts_parser__accept(self, version, lookahead);
		return;
	}

	// Do not recover if the result would clearly be worse than some existing
	// stack version.
	unsigned new_cost =
		current_error_cost + ERROR_COST_PER_SKIPPED_TREE +
		ts_subtree_total_bytes(lookahead) * ERROR_COST_PER_SKIPPED_CHAR +
		ts_subtree_total_size(lookahead).extent.row *
			ERROR_COST_PER_SKIPPED_LINE;
	if (ts_parser__better_version_exists(self, version, false, new_cost))
	{
		ts_stack_halt(self->stack, version);
		ts_subtree_release(&self->tree_pool, lookahead);
		return;
	}

	// If the current lookahead token is an extra token, mark it as extra. This
	// means it won't be counted in error cost calculations.
	unsigned			  n;
	const t_parse_action *actions = ts_language_actions(
		self->language, 1, ts_subtree_symbol(lookahead), &n);
	if (n > 0 && actions[n - 1].type == TSParseActionTypeShift &&
		actions[n - 1].shift.extra)
	{
		t_mutable_subtree mutable_lookahead =
			ts_subtree_make_mut(&self->tree_pool, lookahead);
		ts_subtree_set_extra(&mutable_lookahead, true);
		lookahead = ts_subtree_from_mut(mutable_lookahead);
	}

	// Wrap the lookahead token in an ERROR.
	t_subtree_array children = array_new();
	array_reserve(&children, 1);
	array_push(&children, lookahead);
	t_mutable_subtree error_repeat = ts_subtree_new_node(
		ts_builtin_sym_error_repeat, &children, 0, self->language);

	// If other tokens have already been skipped, so there is already an ERROR
	// at the top of the stack, then pop that ERROR off the stack and wrap the
	// two ERRORs together into one larger ERROR.
	if (node_count_since_error > 0)
	{
		t_stack_slice_array pop = ts_stack_pop_count(self->stack, version, 1);

		// TODO: Figure out how to make this condition occur.
		// See https://github.com/atom/atom/issues/18450#issuecomment-439579778
		// If multiple stack versions have merged at this point, just pick one
		// of the errors arbitrarily and discard the rest.
		if (pop.size > 1)
		{
			for (unsigned i = 1; i < pop.size; i++)
			{
				ts_subtree_array_delete(&self->tree_pool,
										&pop.contents[i].subtrees);
			}
			while (ts_stack_version_count(self->stack) >
				   pop.contents[0].version + 1)
			{
				ts_stack_remove_version(self->stack,
										pop.contents[0].version + 1);
			}
		}

		ts_stack_renumber_version(self->stack, pop.contents[0].version,
								  version);
		array_push(&pop.contents[0].subtrees,
				   ts_subtree_from_mut(error_repeat));
		error_repeat =
			ts_subtree_new_node(ts_builtin_sym_error_repeat,
								&pop.contents[0].subtrees, 0, self->language);
	}

	// Push the new ERROR onto the stack.
	ts_stack_push(self->stack, version, ts_subtree_from_mut(error_repeat),
				  false, ERROR_STATE);
	if (ts_subtree_has_external_tokens(lookahead))
	{
		ts_stack_set_last_external_token(
			self->stack, version, ts_subtree_last_external_token(lookahead));
	}
}

static void ts_parser__handle_error(t_first_parser *self,
									t_stack_version version,
									t_subtree		lookahead)
{
	uint32_t previous_version_count = ts_stack_version_count(self->stack);

	// Perform any reductions that can happen in this state, regardless of the
	// lookahead. After skipping one or more invalid tokens, the parser might
	// find a token that would have allowed a reduction to take place.
	ts_parser__do_all_potential_reductions(self, version, 0);
	uint32_t version_count = ts_stack_version_count(self->stack);
	t_length position = ts_stack_position(self->stack, version);

	// Push a discontinuity onto the stack. Merge all of the stack versions that
	// were created in the previous step.
	bool did_insert_missing_token = false;
	for (t_stack_version v = version; v < version_count;)
	{
		if (!did_insert_missing_token)
		{
			t_state_id state = ts_stack_state(self->stack, v);
			for (t_symbol missing_symbol = 1;
				 missing_symbol < (uint16_t)self->language->token_count;
				 missing_symbol++)
			{
				t_state_id state_after_missing_symbol = ts_language_next_state(
					self->language, state, missing_symbol);
				if (state_after_missing_symbol == 0 ||
					state_after_missing_symbol == state)
				{
					continue;
				}

				if (ts_language_has_reduce_action(
						self->language, state_after_missing_symbol,
						ts_subtree_leaf_symbol(lookahead)))
				{
					// In case the parser is currently outside of any included
					// range, the lexer will snap to the beginning of the next
					// included range. The missing token's padding must be
					// assigned to position it within the next included range.
					ts_lexer_reset(&self->lexer, position);
					ts_lexer_mark_end(&self->lexer);
					t_length padding =
						length_sub(self->lexer.token_end_position, position);
					uint32_t lookahead_bytes =
						ts_subtree_total_bytes(lookahead) +
						ts_subtree_lookahead_bytes(lookahead);

					t_stack_version version_with_missing_tree =
						ts_stack_copy_version(self->stack, v);
					t_subtree missing_tree = ts_subtree_new_missing_leaf(
						&self->tree_pool, missing_symbol, padding,
						lookahead_bytes, self->language);
					ts_stack_push(self->stack, version_with_missing_tree,
								  missing_tree, false,
								  state_after_missing_symbol);

					if (ts_parser__do_all_potential_reductions(
							self, version_with_missing_tree,
							ts_subtree_leaf_symbol(lookahead)))
					{
						did_insert_missing_token = true;
						break;
					}
				}
			}
		}

		ts_stack_push(self->stack, v, NULL_SUBTREE, false, ERROR_STATE);
		v = (v == version) ? previous_version_count : v + 1;
	}

	for (unsigned i = previous_version_count; i < version_count; i++)
	{
		bool did_merge =
			ts_stack_merge(self->stack, version, previous_version_count);
		assert(did_merge);
		(void)did_merge; //	fix warning/error with clang -Os
	}

	ts_stack_record_summary(self->stack, version, MAX_SUMMARY_DEPTH);

	// Begin recovery with the current lookahead node, rather than waiting for
	// the next turn of the parse loop. This ensures that the tree accounts for
	// the current lookahead token's "lookahead bytes" value, which describes
	// how far the lexer needed to look ahead beyond the content of the token in
	// order to recognize it.
	if (ts_subtree_child_count(lookahead) > 0)
	{
		ts_parser__breakdown_lookahead(self, &lookahead, ERROR_STATE,
									   &self->reusable_node);
	}
	ts_parser__recover(self, version, lookahead);
}

static bool ts_parser__advance(t_first_parser *self, t_stack_version version,
							   bool allow_node_reuse)
{
	t_state_id state = ts_stack_state(self->stack, version);
	uint32_t   position = ts_stack_position(self->stack, version).bytes;
	t_subtree  last_external_token =
		ts_stack_last_external_token(self->stack, version);

	bool		  did_reuse = true;
	t_subtree	  lookahead = NULL_SUBTREE;
	t_table_entry table_entry = {.action_count = 0};

	// If possible, reuse a node from the previous syntax tree.
	if (allow_node_reuse)
	{
		lookahead = ts_parser__reuse_node(self, version, &state, position,
										  last_external_token, &table_entry);
	}

	// If no node from the previous syntax tree could be reused, then try to
	// reuse the token previously returned by the lexer.
	if (!lookahead.ptr)
	{
		did_reuse = false;
		lookahead = ts_parser__get_cached_token(
			self, state, position, last_external_token, &table_entry);
	}

	bool needs_lex = !lookahead.ptr;
	for (;;)
	{
		// Otherwise, re-run the lexer.
		if (needs_lex)
		{
			needs_lex = false;
			lookahead = ts_parser__lex(self, version, state);
			if (self->has_scanner_error)
				return false;

			if (lookahead.ptr)
			{
				ts_parser__set_cached_token(self, position, last_external_token,
											lookahead);
				ts_language_table_entry(self->language, state,
										ts_subtree_symbol(lookahead),
										&table_entry);
			}

			// When parsing a non-terminal extra, a null lookahead indicates the
			// end of the rule. The reduction is stored in the EOF table entry.
			// After the reduction, the lexer needs to be run again.
			else
			{
				ts_language_table_entry(self->language, state,
										ts_builtin_sym_end, &table_entry);
			}
		}

		// If a cancellation flag or a timeout was provided, then check every
		// time a fixed number of parse actions has been processed.
		if (++self->operation_count == OP_COUNT_PER_TIMEOUT_CHECK)
		{
			self->operation_count = 0;
		}

		// Process each parse action for the current lookahead token in
		// the current state. If there are multiple actions, then this is
		// an ambiguous state. REDUCE actions always create a new stack
		// version, whereas SHIFT actions update the existing stack version
		// and terminate this loop.
		t_stack_version last_reduction_version = STACK_VERSION_NONE;
		for (uint32_t i = 0; i < table_entry.action_count; i++)
		{
			t_parse_action action = table_entry.actions[i];

			switch (action.type)
			{
			case TSParseActionTypeShift: {
				if (action.shift.repetition)
					break;
				t_state_id next_state;
				if (action.shift.extra)
				{
					next_state = state;
				}
				else
				{
					next_state = action.shift.state;
				}

				if (ts_subtree_child_count(lookahead) > 0)
				{
					ts_parser__breakdown_lookahead(self, &lookahead, state,
												   &self->reusable_node);
					next_state = ts_language_next_state(
						self->language, state, ts_subtree_symbol(lookahead));
				}

				ts_parser__shift(self, version, next_state, lookahead,
								 action.shift.extra);
				if (did_reuse)
					reusable_node_advance(&self->reusable_node);
				return true;
			}

			case TSParseActionTypeReduce: {
				bool is_fragile = table_entry.action_count > 1;
				bool end_of_non_terminal_extra = lookahead.ptr == NULL;
				t_stack_version reduction_version = ts_parser__reduce(
					self, version, action.reduce.symbol,
					action.reduce.child_count, action.reduce.dynamic_precedence,
					action.reduce.production_id, is_fragile,
					end_of_non_terminal_extra);
				if (reduction_version != STACK_VERSION_NONE)
				{
					last_reduction_version = reduction_version;
				}
				break;
			}

			case TSParseActionTypeAccept: {
				ts_parser__accept(self, version, lookahead);
				return true;
			}

			case TSParseActionTypeRecover: {
				if (ts_subtree_child_count(lookahead) > 0)
				{
					ts_parser__breakdown_lookahead(
						self, &lookahead, ERROR_STATE, &self->reusable_node);
				}

				ts_parser__recover(self, version, lookahead);
				if (did_reuse)
					reusable_node_advance(&self->reusable_node);
				return true;
			}
			}
		}

		// If a reduction was performed, then replace the current stack version
		// with one of the stack versions created by a reduction, and continue
		// processing this version of the stack with the same lookahead symbol.
		if (last_reduction_version != STACK_VERSION_NONE)
		{
			ts_stack_renumber_version(self->stack, last_reduction_version,
									  version);
			state = ts_stack_state(self->stack, version);

			// At the end of a non-terminal extra rule, the lexer will return a
			// null subtree, because the parser needs to perform a fixed
			// reduction regardless of the lookahead node. After performing that
			// reduction, (and completing the non-terminal extra rule) run the
			// lexer again based on the current parse state.
			if (!lookahead.ptr)
			{
				needs_lex = true;
			}
			else
			{
				ts_language_table_entry(self->language, state,
										ts_subtree_leaf_symbol(lookahead),
										&table_entry);
			}

			continue;
		}

		// A non-terminal extra rule was reduced and merged into an existing
		// stack version. This version can be discarded.
		if (!lookahead.ptr)
		{
			ts_stack_halt(self->stack, version);
			return true;
		}

		// If there were no parse actions for the current lookahead token, then
		// it is not valid in this state. If the current lookahead token is a
		// keyword, then switch to treating it as the normal word token if that
		// token is valid in this state.
		if (ts_subtree_is_keyword(lookahead) &&
			ts_subtree_symbol(lookahead) !=
				self->language->keyword_capture_token)
		{
			ts_language_table_entry(self->language, state,
									self->language->keyword_capture_token,
									&table_entry);
			if (table_entry.action_count > 0)
			{

				t_mutable_subtree mutable_lookahead =
					ts_subtree_make_mut(&self->tree_pool, lookahead);
				ts_subtree_set_symbol(&mutable_lookahead,
									  self->language->keyword_capture_token,
									  self->language);
				lookahead = ts_subtree_from_mut(mutable_lookahead);
				continue;
			}
		}

		// If the current lookahead token is not valid and the parser is
		// already in the error state, restart the error recovery process.
		// TODO - can this be unified with the other `RECOVER` case above?
		if (state == ERROR_STATE)
		{
			ts_parser__recover(self, version, lookahead);
			return true;
		}

		// If the current lookahead token is not valid and the previous
		// subtree on the stack was reused from an old tree, it isn't actually
		// valid to reuse it. Remove it from the stack, and in its place,
		// push each of its children. Then try again to process the current
		// lookahead.
		if (ts_parser__breakdown_top_of_stack(self, version))
		{
			state = ts_stack_state(self->stack, version);
			ts_subtree_release(&self->tree_pool, lookahead);
			needs_lex = true;
			continue;
		}

		// At this point, the current lookahead token is definitely not valid
		// for this parse stack version. Mark this version as paused and
		// continue processing any other stack versions that might exist. If
		// some other version advances successfully, then this version can
		// simply be removed. But if all versions end up paused, then error
		// recovery is needed.
		ts_stack_pause(self->stack, version, lookahead);
		return true;
	}
}

static unsigned ts_parser__condense_stack(t_first_parser *self)
{
	bool	 made_changes = false;
	unsigned min_error_cost = UINT_MAX;
	for (t_stack_version i = 0; i < ts_stack_version_count(self->stack); i++)
	{
		// Prune any versions that have been marked for removal.
		if (ts_stack_is_halted(self->stack, i))
		{
			ts_stack_remove_version(self->stack, i);
			i--;
			continue;
		}

		// Keep track of the minimum error cost of any stack version so
		// that it can be returned.
		t_error_status status_i = ts_parser__version_status(self, i);
		if (!status_i.is_in_error && status_i.cost < min_error_cost)
		{
			min_error_cost = status_i.cost;
		}

		// Examine each pair of stack versions, removing any versions that
		// are clearly worse than another version. Ensure that the versions
		// are ordered from most promising to least promising.
		for (t_stack_version j = 0; j < i; j++)
		{
			t_error_status status_j = ts_parser__version_status(self, j);

			switch (ts_parser__compare_versions(self, status_j, status_i))
			{
			case ErrorComparisonTakeLeft:
				made_changes = true;
				ts_stack_remove_version(self->stack, i);
				i--;
				j = i;
				break;

			case ErrorComparisonPreferLeft:
			case ErrorComparisonNone:
				if (ts_stack_merge(self->stack, j, i))
				{
					made_changes = true;
					i--;
					j = i;
				}
				break;

			case ErrorComparisonPreferRight:
				made_changes = true;
				if (ts_stack_merge(self->stack, j, i))
				{
					i--;
					j = i;
				}
				else
				{
					ts_stack_swap_versions(self->stack, i, j);
				}
				break;

			case ErrorComparisonTakeRight:
				made_changes = true;
				ts_stack_remove_version(self->stack, j);
				i--;
				j--;
				break;
			}
		}
	}

	// Enforce a hard upper bound on the number of stack versions by
	// discarding the least promising versions.
	while (ts_stack_version_count(self->stack) > MAX_VERSION_COUNT)
	{
		ts_stack_remove_version(self->stack, MAX_VERSION_COUNT);
		made_changes = true;
	}

	// If the best-performing stack version is currently paused, or all
	// versions are paused, then resume the best paused version and begin
	// the error recovery process. Otherwise, remove the paused versions.
	if (ts_stack_version_count(self->stack) > 0)
	{
		bool has_unpaused_version = false;
		for (t_stack_version i = 0, n = ts_stack_version_count(self->stack);
			 i < n; i++)
		{
			if (ts_stack_is_paused(self->stack, i))
			{
				if (!has_unpaused_version &&
					self->accept_count < MAX_VERSION_COUNT)
				{
					min_error_cost = ts_stack_error_cost(self->stack, i);
					t_subtree lookahead = ts_stack_resume(self->stack, i);
					ts_parser__handle_error(self, i, lookahead);
					has_unpaused_version = true;
				}
				else
				{
					ts_stack_remove_version(self->stack, i);
					i--;
					n--;
				}
			}
			else
			{
				has_unpaused_version = true;
			}
		}
	}
	if (made_changes)
		(void)(made_changes);
	return min_error_cost;
}

static bool ts_parser_has_outstanding_parse(t_first_parser *self)
{
	return (self->external_scanner_payload ||
			ts_stack_state(self->stack, 0) != 1 ||
			ts_stack_node_count_since_error(self->stack, 0) != 0);
}

// Parser - Public

t_first_parser *ts_parser_new(void)
{
	t_first_parser *self = calloc(1, sizeof(t_first_parser));
	ts_lexer_init(&self->lexer);
	array_init(&self->reduce_actions);
	array_reserve(&self->reduce_actions, 4);
	self->tree_pool = ts_subtree_pool_new(32);
	self->stack = ts_stack_new(&self->tree_pool);
	self->finished_tree = NULL_SUBTREE;
	self->reusable_node = reusable_node_new();
	self->cancellation_flag = NULL;
	self->timeout_duration = 0;
	self->language = NULL;
	self->has_scanner_error = false;
	self->external_scanner_payload = NULL;
	self->end_clock = 0;
	self->operation_count = 0;
	self->old_tree = NULL_SUBTREE;
	self->included_range_differences = (t_range_array)array_new();
	self->included_range_difference_index = 0;
	ts_parser__set_cached_token(self, 0, NULL_SUBTREE, NULL_SUBTREE);
	return self;
}

void ts_parser_delete(t_first_parser *self)
{
	if (!self)
		return;

	ts_parser_set_language(self, NULL);
	ts_stack_delete(self->stack);
	if (self->reduce_actions.contents)
	{
		array_delete(&self->reduce_actions);
	}
	if (self->included_range_differences.contents)
	{
		array_delete(&self->included_range_differences);
	}
	if (self->old_tree.ptr)
	{
		ts_subtree_release(&self->tree_pool, self->old_tree);
		self->old_tree = NULL_SUBTREE;
	}
	ts_lexer_delete(&self->lexer);
	ts_parser__set_cached_token(self, 0, NULL_SUBTREE, NULL_SUBTREE);
	ts_subtree_pool_delete(&self->tree_pool);
	reusable_node_delete(&self->reusable_node);
	array_delete(&self->trailing_extras);
	array_delete(&self->trailing_extras2);
	array_delete(&self->scratch_trees);
	free(self);
}

const t_language *ts_parser_language(const t_first_parser *self)
{
	return self->language;
}

bool ts_parser_set_language(t_first_parser *self, const t_language *language)
{
	ts_parser_reset(self);
	ts_language_delete(self->language);
	self->language = NULL;

	self->language = ts_language_copy(language);
	return true;
}

t_parse_logger ts_parser_logger(const t_first_parser *self)
{
	return self->lexer.logger;
}

void ts_parser_set_logger(t_first_parser *self, t_parse_logger logger)
{
	self->lexer.logger = logger;
}

void ts_parser_print_dot_graphs(t_first_parser *self, int fd)
{
	(void)(self);
	(void)(fd);
}

const size_t *ts_parser_cancellation_flag(const t_first_parser *self)
{
	return (const size_t *)self->cancellation_flag;
}

void ts_parser_set_cancellation_flag(t_first_parser *self, const size_t *flag)
{
	self->cancellation_flag = (const volatile size_t *)flag;
}

uint64_t ts_parser_timeout_micros(const t_first_parser *self)
{
	(void)(self);
	return 0;
}

void ts_parser_set_timeout_micros(t_first_parser *self, uint64_t timeout_micros)
{
	(void)(timeout_micros);
	self->timeout_duration = 0;
}

bool ts_parser_set_included_ranges(t_first_parser	   *self,
								   const t_parse_range *ranges, uint32_t count)
{
	return ts_lexer_set_included_ranges(&self->lexer, ranges, count);
}

const t_parse_range *ts_parser_included_ranges(const t_first_parser *self,
											   uint32_t				*count)
{
	return ts_lexer_included_ranges(&self->lexer, count);
}

void ts_parser_reset(t_first_parser *self)
{
	ts_parser__external_scanner_destroy(self);
	if (self->old_tree.ptr)
	{
		ts_subtree_release(&self->tree_pool, self->old_tree);
		self->old_tree = NULL_SUBTREE;
	}

	reusable_node_clear(&self->reusable_node);
	ts_lexer_reset(&self->lexer, length_zero());
	ts_stack_clear(self->stack);
	ts_parser__set_cached_token(self, 0, NULL_SUBTREE, NULL_SUBTREE);
	if (self->finished_tree.ptr)
	{
		ts_subtree_release(&self->tree_pool, self->finished_tree);
		self->finished_tree = NULL_SUBTREE;
	}
	self->accept_count = 0;
	self->has_scanner_error = false;
}

t_first_tree *ts_parser_parse(t_first_parser	 *self,
							  const t_first_tree *old_tree, t_parse_input input)
{
	t_first_tree *result = NULL;
	if (!self->language || !input.read)
		return NULL;

	ts_lexer_set_input(&self->lexer, input);
	array_clear(&self->included_range_differences);
	self->included_range_difference_index = 0;

	if (ts_parser_has_outstanding_parse(self))
	{
	}
	else
	{
		ts_parser__external_scanner_create(self);
		if (self->has_scanner_error)
			goto exit;

		if (old_tree)
		{
			ts_subtree_retain(old_tree->root);
			self->old_tree = old_tree->root;
			ts_range_array_get_changed_ranges(
				old_tree->included_ranges, old_tree->included_range_count,
				self->lexer.included_ranges, self->lexer.included_range_count,
				&self->included_range_differences);
			reusable_node_reset(&self->reusable_node, old_tree->root);
		}
		else
		{
			reusable_node_clear(&self->reusable_node);
		}
	}

	self->operation_count = 0;

	uint32_t position = 0, last_position = 0, version_count = 0;
	do
	{
		for (t_stack_version version = 0;
			 version_count = ts_stack_version_count(self->stack),
							 version < version_count;
			 version++)
		{
			bool allow_node_reuse = version_count == 1;
			while (ts_stack_is_active(self->stack, version))
			{

				if (!ts_parser__advance(self, version, allow_node_reuse))
				{
					if (self->has_scanner_error)
						goto exit;
					return NULL;
				}

				position = ts_stack_position(self->stack, version).bytes;
				if (position > last_position ||
					(version > 0 && position == last_position))
				{
					last_position = position;
					break;
				}
			}
		}

		// After advancing each version of the stack, re-sort the versions by
		// their cost, removing any versions that are no longer worth pursuing.
		unsigned min_error_cost = ts_parser__condense_stack(self);

		// If there's already a finished parse tree that's better than any
		// in-progress version, then terminate parsing. Clear the parse stack to
		// remove any extra references to subtrees within the finished tree,
		// ensuring that these subtrees can be safely mutated in-place for
		// rebalancing.
		if (self->finished_tree.ptr &&
			ts_subtree_error_cost(self->finished_tree) < min_error_cost)
		{
			ts_stack_clear(self->stack);
			break;
		}

		while (self->included_range_difference_index <
			   self->included_range_differences.size)
		{
			t_parse_range *range =
				&self->included_range_differences
					 .contents[self->included_range_difference_index];
			if (range->end_byte <= position)
			{
				self->included_range_difference_index++;
			}
			else
			{
				break;
			}
		}
	} while (version_count != 0);

	assert(self->finished_tree.ptr);
	ts_subtree_balance(self->finished_tree, &self->tree_pool, self->language);

	result = ts_tree_new(self->finished_tree, self->language,
						 self->lexer.included_ranges,
						 self->lexer.included_range_count);
	self->finished_tree = NULL_SUBTREE;

exit:
	ts_parser_reset(self);
	return result;
}

t_first_tree *ts_parser_parse_string_encoding(t_first_parser	 *self,
											  const t_first_tree *old_tree,
											  const char		 *string,
											  uint32_t			  length,
											  t_input_encoding	  encoding);

t_first_tree *ts_parser_parse_string(t_first_parser		*self,
									 const t_first_tree *old_tree,
									 const char *string, uint32_t length)
{
	return ts_parser_parse_string_encoding(self, old_tree, string, length,
										   TSInputEncodingUTF8);
}

t_first_tree *ts_parser_parse_string_encoding(t_first_parser	 *self,
											  const t_first_tree *old_tree,
											  const char		 *string,
											  uint32_t			  length,
											  t_input_encoding	  encoding)
{
	t_string_input input = {string, length};
	return ts_parser_parse(self, old_tree,
						   (t_parse_input){
							   &input,
							   ts_string_input_read,
							   encoding,
						   });
}

static const t_query_error PARENT_DONE = -1;
static const uint16_t	   PATTERN_DONE_MARKER = UINT16_MAX;
static const uint16_t	   NONE = UINT16_MAX;
static const t_symbol	   WILDCARD_SYMBOL = 0;

/**********
 * t_stream
 **********/

// Advance to the next unicode code point in the stream.
static bool stream_advance(t_stream *self)
{
	self->input += self->next_size;
	if (self->input < self->end)
	{
		uint32_t size =
			ascii_decode((const uint8_t *)self->input,
						 (uint32_t)(self->end - self->input), &self->next);
		if (size > 0)
		{
			self->next_size = size;
			return true;
		}
	}
	else
	{
		self->next_size = 0;
		self->next = '\0';
	}
	return false;
}

// Reset the stream to the given input position, represented as a pointer
// into the input string.
static void stream_reset(t_stream *self, const char *input)
{
	self->input = input;
	self->next_size = 0;
	stream_advance(self);
}

static t_stream stream_new(const char *string, uint32_t length)
{
	t_stream self = {
		.next = 0,
		.input = string,
		.start = string,
		.end = string + length,
	};
	stream_advance(&self);
	return self;
}

static void stream_skip_whitespace(t_stream *self)
{
	for (;;)
	{
		if (me_isspace(self->next))
		{
			stream_advance(self);
		}
		else if (self->next == ';')
		{
			// skip over comments
			stream_advance(self);
			while (self->next && self->next != '\n')
			{
				if (!stream_advance(self))
					break;
			}
		}
		else
		{
			break;
		}
	}
}

static bool stream_is_ident_start(t_stream *self)
{
	return me_isalnum(self->next) || self->next == '_' || self->next == '-';
}

static void stream_scan_identifier(t_stream *stream)
{
	do
	{
		stream_advance(stream);
	} while (me_isalnum(stream->next) || stream->next == '_' ||
			 stream->next == '-' || stream->next == '.' ||
			 stream->next == '?' || stream->next == '!');
}

static uint32_t stream_offset(t_stream *self)
{
	return (uint32_t)(self->input - self->start);
}

/******************
 * t_capture_list_pool
 ******************/

static t_capture_list_pool capture_list_pool_new(void)
{
	return (t_capture_list_pool){
		.list = array_new(),
		.empty_list = array_new(),
		.max_capture_list_count = UINT32_MAX,
		.free_capture_list_count = 0,
	};
}

static void capture_list_pool_reset(t_capture_list_pool *self)
{
	for (uint16_t i = 0; i < (uint16_t)self->list.size; i++)
	{
		// This invalid size means that the list is not in use.
		self->list.contents[i].size = UINT32_MAX;
	}
	self->free_capture_list_count = self->list.size;
}

static void capture_list_pool_delete(t_capture_list_pool *self)
{
	for (uint16_t i = 0; i < (uint16_t)self->list.size; i++)
	{
		array_delete(&self->list.contents[i]);
	}
	array_delete(&self->list);
}

static const t_capture_list *capture_list_pool_get(
	const t_capture_list_pool *self, uint16_t id)
{
	if (id >= self->list.size)
		return &self->empty_list;
	return &self->list.contents[id];
}

static t_capture_list *capture_list_pool_get_mut(t_capture_list_pool *self,
												 uint16_t			  id)
{
	assert(id < self->list.size);
	return &self->list.contents[id];
}

static bool capture_list_pool_is_empty(const t_capture_list_pool *self)
{
	// The capture list pool is empty if all allocated lists are in use, and we
	// have reached the maximum allowed number of allocated lists.
	return self->free_capture_list_count == 0 &&
		   self->list.size >= self->max_capture_list_count;
}

static uint16_t capture_list_pool_acquire(t_capture_list_pool *self)
{
	// First see if any already allocated capture list is currently unused.
	if (self->free_capture_list_count > 0)
	{
		for (uint16_t i = 0; i < (uint16_t)self->list.size; i++)
		{
			if (self->list.contents[i].size == UINT32_MAX)
			{
				array_clear(&self->list.contents[i]);
				self->free_capture_list_count--;
				return i;
			}
		}
	}

	// Otherwise allocate and initialize a new capture list, as long as that
	// doesn't put us over the requested maximum.
	uint32_t i = self->list.size;
	if (i >= self->max_capture_list_count)
	{
		return NONE;
	}
	t_capture_list list;
	array_init(&list);
	array_push(&self->list, list);
	return i;
}

static void capture_list_pool_release(t_capture_list_pool *self, uint16_t id)
{
	if (id >= self->list.size)
		return;
	self->list.contents[id].size = UINT32_MAX;
	self->free_capture_list_count++;
}

/**************
 * Quantifiers
 **************/

static t_quantifier quantifier_mul(t_quantifier left, t_quantifier right)
{
	switch (left)
	{
	case TSQuantifierZero:
		return TSQuantifierZero;
	case TSQuantifierZeroOrOne:
		switch (right)
		{
		case TSQuantifierZero:
			return TSQuantifierZero;
		case TSQuantifierZeroOrOne:
		case TSQuantifierOne:
			return TSQuantifierZeroOrOne;
		case TSQuantifierZeroOrMore:
		case TSQuantifierOneOrMore:
			return TSQuantifierZeroOrMore;
		};
		break;
	case TSQuantifierZeroOrMore:
		switch (right)
		{
		case TSQuantifierZero:
			return TSQuantifierZero;
		case TSQuantifierZeroOrOne:
		case TSQuantifierZeroOrMore:
		case TSQuantifierOne:
		case TSQuantifierOneOrMore:
			return TSQuantifierZeroOrMore;
		};
		break;
	case TSQuantifierOne:
		return right;
	case TSQuantifierOneOrMore:
		switch (right)
		{
		case TSQuantifierZero:
			return TSQuantifierZero;
		case TSQuantifierZeroOrOne:
		case TSQuantifierZeroOrMore:
			return TSQuantifierZeroOrMore;
		case TSQuantifierOne:
		case TSQuantifierOneOrMore:
			return TSQuantifierOneOrMore;
		};
		break;
	}
	return TSQuantifierZero; // to make compiler happy, but all cases should be
							 // covered above!
}

static t_quantifier quantifier_join(t_quantifier left, t_quantifier right)
{
	switch (left)
	{
	case TSQuantifierZero:
		switch (right)
		{
		case TSQuantifierZero:
			return TSQuantifierZero;
		case TSQuantifierZeroOrOne:
		case TSQuantifierOne:
			return TSQuantifierZeroOrOne;
		case TSQuantifierZeroOrMore:
		case TSQuantifierOneOrMore:
			return TSQuantifierZeroOrMore;
		};
		break;
	case TSQuantifierZeroOrOne:
		switch (right)
		{
		case TSQuantifierZero:
		case TSQuantifierZeroOrOne:
		case TSQuantifierOne:
			return TSQuantifierZeroOrOne;
			break;
		case TSQuantifierZeroOrMore:
		case TSQuantifierOneOrMore:
			return TSQuantifierZeroOrMore;
			break;
		};
		break;
	case TSQuantifierZeroOrMore:
		return TSQuantifierZeroOrMore;
	case TSQuantifierOne:
		switch (right)
		{
		case TSQuantifierZero:
		case TSQuantifierZeroOrOne:
			return TSQuantifierZeroOrOne;
		case TSQuantifierZeroOrMore:
			return TSQuantifierZeroOrMore;
		case TSQuantifierOne:
			return TSQuantifierOne;
		case TSQuantifierOneOrMore:
			return TSQuantifierOneOrMore;
		};
		break;
	case TSQuantifierOneOrMore:
		switch (right)
		{
		case TSQuantifierZero:
		case TSQuantifierZeroOrOne:
		case TSQuantifierZeroOrMore:
			return TSQuantifierZeroOrMore;
		case TSQuantifierOne:
		case TSQuantifierOneOrMore:
			return TSQuantifierOneOrMore;
		};
		break;
	}
	return TSQuantifierZero; // to make compiler happy, but all cases should be
							 // covered above!
}

static t_quantifier quantifier_add(t_quantifier left, t_quantifier right)
{
	switch (left)
	{
	case TSQuantifierZero:
		return right;
	case TSQuantifierZeroOrOne:
		switch (right)
		{
		case TSQuantifierZero:
			return TSQuantifierZeroOrOne;
		case TSQuantifierZeroOrOne:
		case TSQuantifierZeroOrMore:
			return TSQuantifierZeroOrMore;
		case TSQuantifierOne:
		case TSQuantifierOneOrMore:
			return TSQuantifierOneOrMore;
		};
		break;
	case TSQuantifierZeroOrMore:
		switch (right)
		{
		case TSQuantifierZero:
			return TSQuantifierZeroOrMore;
		case TSQuantifierZeroOrOne:
		case TSQuantifierZeroOrMore:
			return TSQuantifierZeroOrMore;
		case TSQuantifierOne:
		case TSQuantifierOneOrMore:
			return TSQuantifierOneOrMore;
		};
		break;
	case TSQuantifierOne:
		switch (right)
		{
		case TSQuantifierZero:
			return TSQuantifierOne;
		case TSQuantifierZeroOrOne:
		case TSQuantifierZeroOrMore:
		case TSQuantifierOne:
		case TSQuantifierOneOrMore:
			return TSQuantifierOneOrMore;
		};
		break;
	case TSQuantifierOneOrMore:
		return TSQuantifierOneOrMore;
	}
	return TSQuantifierZero; // to make compiler happy, but all cases should be
							 // covered above!
}

// Create new capture quantifiers structure
static t_capture_quantifiers capture_quantifiers_new(void)
{
	return (t_capture_quantifiers)array_new();
}

// Delete capture quantifiers structure
static void capture_quantifiers_delete(t_capture_quantifiers *self)
{
	array_delete(self);
}

// Clear capture quantifiers structure
static void capture_quantifiers_clear(t_capture_quantifiers *self)
{
	array_clear(self);
}

// Replace capture quantifiers with the given quantifiers
static void capture_quantifiers_replace(t_capture_quantifiers *self,
										t_capture_quantifiers *quantifiers)
{
	array_clear(self);
	array_push_all(self, quantifiers);
}

// Return capture quantifier for the given capture id
static t_quantifier capture_quantifier_for_id(const t_capture_quantifiers *self,
											  uint16_t					   id)
{
	return (self->size <= id) ? TSQuantifierZero
							  : (t_quantifier)*array_get(self, id);
}

// Add the given quantifier to the current value for id
static void capture_quantifiers_add_for_id(t_capture_quantifiers *self,
										   uint16_t id, t_quantifier quantifier)
{
	if (self->size <= id)
	{
		array_grow_by(self, id + 1 - self->size);
	}
	uint8_t *own_quantifier = array_get(self, id);
	*own_quantifier =
		(uint8_t)quantifier_add((t_quantifier)*own_quantifier, quantifier);
}

// Point-wise add the given quantifiers to the current values
static void capture_quantifiers_add_all(t_capture_quantifiers *self,
										t_capture_quantifiers *quantifiers)
{
	if (self->size < quantifiers->size)
	{
		array_grow_by(self, quantifiers->size - self->size);
	}
	for (uint16_t id = 0; id < (uint16_t)quantifiers->size; id++)
	{
		uint8_t *quantifier = array_get(quantifiers, id);
		uint8_t *own_quantifier = array_get(self, id);
		*own_quantifier = (uint8_t)quantifier_add((t_quantifier)*own_quantifier,
												  (t_quantifier)*quantifier);
	}
}

// Join the given quantifier with the current values
static void capture_quantifiers_mul(t_capture_quantifiers *self,
									t_quantifier		   quantifier)
{
	for (uint16_t id = 0; id < (uint16_t)self->size; id++)
	{
		uint8_t *own_quantifier = array_get(self, id);
		*own_quantifier =
			(uint8_t)quantifier_mul((t_quantifier)*own_quantifier, quantifier);
	}
}

// Point-wise join the quantifiers from a list of alternatives with the current
// values
static void capture_quantifiers_join_all(t_capture_quantifiers *self,
										 t_capture_quantifiers *quantifiers)
{
	if (self->size < quantifiers->size)
	{
		array_grow_by(self, quantifiers->size - self->size);
	}
	for (uint32_t id = 0; id < quantifiers->size; id++)
	{
		uint8_t *quantifier = array_get(quantifiers, id);
		uint8_t *own_quantifier = array_get(self, id);
		*own_quantifier = (uint8_t)quantifier_join(
			(t_quantifier)*own_quantifier, (t_quantifier)*quantifier);
	}
	for (uint32_t id = quantifiers->size; id < self->size; id++)
	{
		uint8_t *own_quantifier = array_get(self, id);
		*own_quantifier = (uint8_t)quantifier_join(
			(t_quantifier)*own_quantifier, TSQuantifierZero);
	}
}

/**************
 * t_symbol_table
 **************/

static t_symbol_table symbol_table_new(void)
{
	return (t_symbol_table){
		.characters = array_new(),
		.slices = array_new(),
	};
}

static void symbol_table_delete(t_symbol_table *self)
{
	array_delete(&self->characters);
	array_delete(&self->slices);
}

static int symbol_table_id_for_name(const t_symbol_table *self,
									const char *name, uint32_t length)
{
	for (unsigned i = 0; i < self->slices.size; i++)
	{
		t_slice slice = self->slices.contents[i];
		if (slice.length == length &&
			!strncmp(&self->characters.contents[slice.offset], name, length))
			return i;
	}
	return -1;
}

static const char *symbol_table_name_for_id(const t_symbol_table *self,
											uint16_t id, uint32_t *length)
{
	t_slice slice = self->slices.contents[id];
	*length = slice.length;
	return &self->characters.contents[slice.offset];
}

static uint16_t symbol_table_insert_name(t_symbol_table *self, const char *name,
										 uint32_t length)
{
	int id = symbol_table_id_for_name(self, name, length);
	if (id >= 0)
		return (uint16_t)id;
	t_slice slice = {
		.offset = self->characters.size,
		.length = length,
	};
	array_grow_by(&self->characters, length + 1);
	memcpy(&self->characters.contents[slice.offset], name, length);
	self->characters.contents[self->characters.size - 1] = 0;
	array_push(&self->slices, slice);
	return self->slices.size - 1;
}

/************
 * t_query_step
 ************/

static t_query_step query_step__new(t_symbol symbol, uint16_t depth,
									bool is_immediate)
{
	t_query_step step = {
		.symbol = symbol,
		.depth = depth,
		.field = 0,
		.alternative_index = NONE,
		.negated_field_list_id = 0,
		.contains_captures = false,
		.is_last_child = false,
		.is_named = false,
		.is_pass_through = false,
		.is_dead_end = false,
		.root_pattern_guaranteed = false,
		.is_immediate = is_immediate,
		.alternative_is_immediate = false,
	};
	for (unsigned i = 0; i < MAX_STEP_CAPTURE_COUNT; i++)
	{
		step.capture_ids[i] = NONE;
	}
	return step;
}

static void query_step__add_capture(t_query_step *self, uint16_t capture_id)
{
	for (unsigned i = 0; i < MAX_STEP_CAPTURE_COUNT; i++)
	{
		if (self->capture_ids[i] == NONE)
		{
			self->capture_ids[i] = capture_id;
			break;
		}
	}
}

static void query_step__remove_capture(t_query_step *self, uint16_t capture_id)
{
	for (unsigned i = 0; i < MAX_STEP_CAPTURE_COUNT; i++)
	{
		if (self->capture_ids[i] == capture_id)
		{
			self->capture_ids[i] = NONE;
			while (i + 1 < MAX_STEP_CAPTURE_COUNT)
			{
				if (self->capture_ids[i + 1] == NONE)
					break;
				self->capture_ids[i] = self->capture_ids[i + 1];
				self->capture_ids[i + 1] = NONE;
				i++;
			}
			break;
		}
	}
}

/**********************
 * t_state_predecessor_map
 **********************/

static inline t_state_predecessor_map state_predecessor_map_new(
	const t_language *language)
{
	return (t_state_predecessor_map){
		.contents = calloc((size_t)language->state_count *
							   (MAX_STATE_PREDECESSOR_COUNT + 1),
						   sizeof(t_state_id)),
	};
}

static inline void state_predecessor_map_delete(t_state_predecessor_map *self)
{
	free(self->contents);
}

static inline void state_predecessor_map_add(t_state_predecessor_map *self,
											 t_state_id				  state,
											 t_state_id predecessor)
{
	size_t		index = (size_t)state * (MAX_STATE_PREDECESSOR_COUNT + 1);
	t_state_id *count = &self->contents[index];
	if (*count == 0 || (*count < MAX_STATE_PREDECESSOR_COUNT &&
						self->contents[index + *count] != predecessor))
	{
		(*count)++;
		self->contents[index + *count] = predecessor;
	}
}

static inline const t_state_id *state_predecessor_map_get(
	const t_state_predecessor_map *self, t_state_id state, unsigned *count)
{
	size_t index = (size_t)state * (MAX_STATE_PREDECESSOR_COUNT + 1);
	*count = self->contents[index];
	return &self->contents[index + 1];
}

/****************
 * t_analysis_state
 ****************/

static unsigned analysis_state__recursion_depth(const t_analysis_state *self)
{
	unsigned result = 0;
	for (unsigned i = 0; i < self->depth; i++)
	{
		t_symbol symbol = self->stack[i].parent_symbol;
		for (unsigned j = 0; j < i; j++)
		{
			if (self->stack[j].parent_symbol == symbol)
			{
				result++;
				break;
			}
		}
	}
	return result;
}

static inline int analysis_state__compare_position(
	t_analysis_state *const *self, t_analysis_state *const *other)
{
	for (unsigned i = 0; i < (*self)->depth; i++)
	{
		if (i >= (*other)->depth)
			return -1;
		if ((*self)->stack[i].child_index < (*other)->stack[i].child_index)
			return -1;
		if ((*self)->stack[i].child_index > (*other)->stack[i].child_index)
			return 1;
	}
	if ((*self)->depth < (*other)->depth)
		return 1;
	if ((*self)->step_index < (*other)->step_index)
		return -1;
	if ((*self)->step_index > (*other)->step_index)
		return 1;
	return 0;
}

static inline int analysis_state__compare(t_analysis_state *const *self,
										  t_analysis_state *const *other)
{
	int result = analysis_state__compare_position(self, other);
	if (result != 0)
		return result;
	for (unsigned i = 0; i < (*self)->depth; i++)
	{
		if ((*self)->stack[i].parent_symbol < (*other)->stack[i].parent_symbol)
			return -1;
		if ((*self)->stack[i].parent_symbol > (*other)->stack[i].parent_symbol)
			return 1;
		if ((*self)->stack[i].parse_state < (*other)->stack[i].parse_state)
			return -1;
		if ((*self)->stack[i].parse_state > (*other)->stack[i].parse_state)
			return 1;
		if ((*self)->stack[i].field_id < (*other)->stack[i].field_id)
			return -1;
		if ((*self)->stack[i].field_id > (*other)->stack[i].field_id)
			return 1;
	}
	return 0;
}

static inline t_analysis_state_entry *analysis_state__top(
	t_analysis_state *self)
{
	if (self->depth == 0)
	{
		return &self->stack[0];
	}
	return &self->stack[self->depth - 1];
}

static inline bool analysis_state__has_supertype(t_analysis_state *self,
												 t_symbol		   symbol)
{
	for (unsigned i = 0; i < self->depth; i++)
	{
		if (self->stack[i].parent_symbol == symbol)
			return true;
	}
	return false;
}

/******************
 * t_analysis_state_set
 ******************/

// Obtains an `t_analysis_state` instance, either by consuming one from this
// set's object pool, or by cloning one from scratch.
static inline t_analysis_state *analysis_state_pool__clone_or_reuse(
	t_analysis_state_set *self, t_analysis_state *borrowed_item)
{
	t_analysis_state *new_item;
	if (self->size)
	{
		new_item = array_pop(self);
	}
	else
	{
		new_item = malloc(sizeof(t_analysis_state));
	}
	*new_item = *borrowed_item;
	return new_item;
}

// Inserts a clone of the passed-in item at the appropriate position to maintain
// ordering in this set. The set does not contain duplicates, so if the item is
// already present, it will not be inserted, and no clone will be made.
//
// The caller retains ownership of the passed-in memory. However, the clone that
// is created by this function will be managed by the state set.
static inline void analysis_state_set__insert_sorted(
	t_analysis_state_set *self, t_analysis_state_set *pool,
	t_analysis_state *borrowed_item)
{
	unsigned index, exists;
	array_search_sorted_with(self, analysis_state__compare, &borrowed_item,
							 &index, &exists);
	if (!exists)
	{
		t_analysis_state *new_item =
			analysis_state_pool__clone_or_reuse(pool, borrowed_item);
		array_insert(self, index, new_item);
	}
}

// Inserts a clone of the passed-in item at the end position of this list.
//
// IMPORTANT: The caller MUST ENSURE that this item is larger (by the comparison
// function `analysis_state__compare`) than largest item already in this set. If
// items are inserted in the wrong order, the set will not function properly for
// future use.
//
// The caller retains ownership of the passed-in memory. However, the clone that
// is created by this function will be managed by the state set.
static inline void analysis_state_set__push(t_analysis_state_set *self,
											t_analysis_state_set *pool,
											t_analysis_state	 *borrowed_item)
{
	t_analysis_state *new_item =
		analysis_state_pool__clone_or_reuse(pool, borrowed_item);
	array_push(self, new_item);
}

// Removes all items from this set, returning it to an empty state.
static inline void analysis_state_set__clear(t_analysis_state_set *self,
											 t_analysis_state_set *pool)
{
	array_push_all(pool, self);
	array_clear(self);
}

// Releases all memory that is managed with this state set, including any items
// currently present. After calling this function, the set is no longer suitable
// for use.
static inline void analysis_state_set__delete(t_analysis_state_set *self)
{
	for (unsigned i = 0; i < self->size; i++)
	{
		free(self->contents[i]);
	}
	array_delete(self);
}

/****************
 * QueryAnalyzer
 ****************/

static inline t_query_analysis query_analysis__new(void)
{
	return (t_query_analysis){
		.states = array_new(),
		.next_states = array_new(),
		.deeper_states = array_new(),
		.state_pool = array_new(),
		.final_step_indices = array_new(),
		.finished_parent_symbols = array_new(),
		.did_abort = false,
	};
}

static inline void query_analysis__delete(t_query_analysis *self)
{
	analysis_state_set__delete(&self->states);
	analysis_state_set__delete(&self->next_states);
	analysis_state_set__delete(&self->deeper_states);
	analysis_state_set__delete(&self->state_pool);
	array_delete(&self->final_step_indices);
	array_delete(&self->finished_parent_symbols);
}

/***********************
 * t_analysis_subgraph_node
 ***********************/

static inline int analysis_subgraph_node__compare(
	const t_analysis_subgraph_node *self, const t_analysis_subgraph_node *other)
{
	if (self->state < other->state)
		return -1;
	if (self->state > other->state)
		return 1;
	if (self->child_index < other->child_index)
		return -1;
	if (self->child_index > other->child_index)
		return 1;
	if (self->done < other->done)
		return -1;
	if (self->done > other->done)
		return 1;
	if (self->production_id < other->production_id)
		return -1;
	if (self->production_id > other->production_id)
		return 1;
	return 0;
}

/*********
 * Query
 *********/

// The `pattern_map` contains a mapping from t_symbol values to indices in the
// `steps` array. For a given syntax node, the `pattern_map` makes it possible
// to quickly find the starting steps of all of the patterns whose root matches
// that node. Each entry has two fields: a `pattern_index`, which identifies one
// of the patterns in the query, and a `step_index`, which indicates the start
// offset of that pattern's steps within the `steps` array.
//
// The entries are sorted by the patterns' root symbols, and lookups use a
// binary search. This ensures that the cost of this initial lookup step
// scales logarithmically with the number of patterns in the query.
//
// This returns `true` if the symbol is present and `false` otherwise.
// If the symbol is not present `*result` is set to the index where the
// symbol should be inserted.
static inline bool ts_query__pattern_map_search(const t_parse_query *self,
												t_symbol			 needle,
												uint32_t			*result)
{
	uint32_t base_index = self->wildcard_root_pattern_count;
	uint32_t size = self->pattern_map.size - base_index;
	if (size == 0)
	{
		*result = base_index;
		return false;
	}
	while (size > 1)
	{
		uint32_t half_size = size / 2;
		uint32_t mid_index = base_index + half_size;
		t_symbol mid_symbol =
			self->steps
				.contents[self->pattern_map.contents[mid_index].step_index]
				.symbol;
		if (needle > mid_symbol)
			base_index = mid_index;
		size -= half_size;
	}

	t_symbol symbol =
		self->steps.contents[self->pattern_map.contents[base_index].step_index]
			.symbol;

	if (needle > symbol)
	{
		base_index++;
		if (base_index < self->pattern_map.size)
		{
			symbol =
				self->steps
					.contents[self->pattern_map.contents[base_index].step_index]
					.symbol;
		}
	}

	*result = base_index;
	return needle == symbol;
}

// Insert a new pattern's start index into the pattern map, maintaining
// the pattern map's ordering invariant.
static inline void ts_query__pattern_map_insert(t_parse_query  *self,
												t_symbol		symbol,
												t_pattern_entry new_entry)
{
	uint32_t index;
	ts_query__pattern_map_search(self, symbol, &index);

	// Ensure that the entries are sorted not only by symbol, but also
	// by pattern_index. This way, states for earlier patterns will be
	// initiated first, which allows the ordering of the states array
	// to be maintained more efficiently.
	while (index < self->pattern_map.size)
	{
		t_pattern_entry *entry = &self->pattern_map.contents[index];
		if (self->steps.contents[entry->step_index].symbol == symbol &&
			entry->pattern_index < new_entry.pattern_index)
		{
			index++;
		}
		else
		{
			break;
		}
	}

	array_insert(&self->pattern_map, index, new_entry);
}

// Walk the subgraph for this non-terminal, tracking all of the possible
// sequences of progress within the pattern.
static void ts_query__perform_analysis(
	t_parse_query *self, const t_analysis_subgraph_array *subgraphs,
	t_query_analysis *analysis)
{
	unsigned recursion_depth_limit = 0;
	unsigned prev_final_step_count = 0;
	array_clear(&analysis->final_step_indices);
	array_clear(&analysis->finished_parent_symbols);

	for (unsigned iteration = 0;; iteration++)
	{
		if (iteration == MAX_ANALYSIS_ITERATION_COUNT)
		{
			analysis->did_abort = true;
			break;
		}

#ifdef DEBUG_ANALYZE_QUERY
		printf("Iteration: %u. Final step indices:", iteration);
		for (unsigned j = 0; j < analysis->final_step_indices.size; j++)
		{
			printf(" %4u", analysis->final_step_indices.contents[j]);
		}
		printf("\n");
		for (unsigned j = 0; j < analysis->states.size; j++)
		{
			t_analysis_state *state = analysis->states.contents[j];
			printf("  %3u: step: %u, stack: [", j, state->step_index);
			for (unsigned k = 0; k < state->depth; k++)
			{
				printf(
					" {%s, child: %u, state: %4u",
					self->language->symbol_names[state->stack[k].parent_symbol],
					state->stack[k].child_index, state->stack[k].parse_state);
				if (state->stack[k].field_id)
					printf(
						", field: %s",
						self->language->field_names[state->stack[k].field_id]);
				if (state->stack[k].done)
					printf(", DONE");
				printf("}");
			}
			printf(" ]\n");
		}
#endif

		// If no further progress can be made within the current recursion depth
		// limit, then bump the depth limit by one, and continue to process the
		// states the exceeded the limit. But only allow this if progress has
		// been made since the last time the depth limit was increased.
		if (analysis->states.size == 0)
		{
			if (analysis->deeper_states.size > 0 &&
				analysis->final_step_indices.size > prev_final_step_count)
			{
#ifdef DEBUG_ANALYZE_QUERY
				printf("Increase recursion depth limit to %u\n",
					   recursion_depth_limit + 1);
#endif

				prev_final_step_count = analysis->final_step_indices.size;
				recursion_depth_limit++;
				t_analysis_state_set _states = analysis->states;
				analysis->states = analysis->deeper_states;
				analysis->deeper_states = _states;
				continue;
			}

			break;
		}

		analysis_state_set__clear(&analysis->next_states,
								  &analysis->state_pool);
		for (unsigned j = 0; j < analysis->states.size; j++)
		{
			t_analysis_state *const state = analysis->states.contents[j];

			// For efficiency, it's important to avoid processing the same
			// analysis state more than once. To achieve this, keep the states
			// in order of ascending position within their hypothetical syntax
			// trees. In each iteration of this loop, start by advancing the
			// states that have made the least progress. Avoid advancing states
			// that have already made more progress.
			if (analysis->next_states.size > 0)
			{
				int comparison = analysis_state__compare_position(
					&state, array_back(&analysis->next_states));
				if (comparison == 0)
				{
					analysis_state_set__insert_sorted(
						&analysis->next_states, &analysis->state_pool, state);
					continue;
				}
				else if (comparison > 0)
				{
#ifdef DEBUG_ANALYZE_QUERY
					printf("Terminate iteration at state %u\n", j);
#endif
					while (j < analysis->states.size)
					{
						analysis_state_set__push(&analysis->next_states,
												 &analysis->state_pool,
												 analysis->states.contents[j]);
						j++;
					}
					break;
				}
			}

			const t_state_id parse_state =
				analysis_state__top(state)->parse_state;
			const t_symbol parent_symbol =
				analysis_state__top(state)->parent_symbol;
			const t_field_id parent_field_id =
				analysis_state__top(state)->field_id;
			const unsigned child_index =
				analysis_state__top(state)->child_index;
			const t_query_step *const step =
				&self->steps.contents[state->step_index];

			unsigned subgraph_index, exists;
			array_search_sorted_by(subgraphs, .symbol, parent_symbol,
								   &subgraph_index, &exists);
			if (!exists)
				continue;
			const t_analysis_subgraph *subgraph =
				&subgraphs->contents[subgraph_index];

			// Follow every possible path in the parse table, but only visit
			// states that are part of the subgraph for the current symbol.
			t_lookahead_iterator lookahead_iterator =
				ts_language_lookaheads(self->language, parse_state);
			while (ts_lookahead_iterator__next(&lookahead_iterator))
			{
				t_symbol sym = lookahead_iterator.symbol;

				t_analysis_subgraph_node successor = {
					.state = parse_state,
					.child_index = child_index,
				};
				if (lookahead_iterator.action_count)
				{
					const t_parse_action *action =
						&lookahead_iterator
							 .actions[lookahead_iterator.action_count - 1];
					if (action->type == TSParseActionTypeShift)
					{
						if (!action->shift.extra)
						{
							successor.state = action->shift.state;
							successor.child_index++;
						}
					}
					else
					{
						continue;
					}
				}
				else if (lookahead_iterator.next_state != 0)
				{
					successor.state = lookahead_iterator.next_state;
					successor.child_index++;
				}
				else
				{
					continue;
				}

				unsigned node_index;
				array_search_sorted_with(&subgraph->nodes,
										 analysis_subgraph_node__compare,
										 &successor, &node_index, &exists);
				while (node_index < subgraph->nodes.size)
				{
					t_analysis_subgraph_node *node =
						&subgraph->nodes.contents[node_index++];
					if (node->state != successor.state ||
						node->child_index != successor.child_index)
						break;

					// Use the subgraph to determine what alias and field will
					// eventually be applied to this child node.
					t_symbol alias = ts_language_alias_at(
						self->language, node->production_id, child_index);
					t_symbol visible_symbol =
						alias ? alias
						: self->language->symbol_metadata[sym].visible
							? self->language->public_symbol_map[sym]
							: 0;
					t_field_id field_id = parent_field_id;
					if (!field_id)
					{
						const t_field_map_entry *field_map, *field_map_end;
						ts_language_field_map(self->language,
											  node->production_id, &field_map,
											  &field_map_end);
						for (; field_map != field_map_end; field_map++)
						{
							if (!field_map->inherited &&
								field_map->child_index == child_index)
							{
								field_id = field_map->field_id;
								break;
							}
						}
					}

					// Create a new state that has advanced past this
					// hypothetical subtree.
					t_analysis_state		next_state = *state;
					t_analysis_state_entry *next_state_top =
						analysis_state__top(&next_state);
					next_state_top->child_index = successor.child_index;
					next_state_top->parse_state = successor.state;
					if (node->done)
						next_state_top->done = true;

					// Determine if this hypothetical child node would match the
					// current step of the query pattern.
					bool does_match = false;
					if (visible_symbol)
					{
						does_match = true;
						if (step->symbol == WILDCARD_SYMBOL)
						{
							if (step->is_named &&
								!self->language->symbol_metadata[visible_symbol]
									 .named)
								does_match = false;
						}
						else if (step->symbol != visible_symbol)
						{
							does_match = false;
						}
						if (step->field && step->field != field_id)
						{
							does_match = false;
						}
						if (step->supertype_symbol &&
							!analysis_state__has_supertype(
								state, step->supertype_symbol))
							does_match = false;
					}

					// If this child is hidden, then descend into it and walk
					// through its children. If the top entry of the stack is at
					// the end of its rule, then that entry can be replaced.
					// Otherwise, push a new entry onto the stack.
					else if (sym >= self->language->token_count)
					{
						if (!next_state_top->done)
						{
							if (next_state.depth + 1 >=
								MAX_ANALYSIS_STATE_DEPTH)
							{
#ifdef DEBUG_ANALYZE_QUERY
								printf("Exceeded depth limit for state %u\n",
									   j);
#endif

								analysis->did_abort = true;
								continue;
							}

							next_state.depth++;
							next_state_top = analysis_state__top(&next_state);
						}

						*next_state_top = (t_analysis_state_entry){
							.parse_state = parse_state,
							.parent_symbol = sym,
							.child_index = 0,
							.field_id = field_id,
							.done = false,
						};

						if (analysis_state__recursion_depth(&next_state) >
							recursion_depth_limit)
						{
							analysis_state_set__insert_sorted(
								&analysis->deeper_states, &analysis->state_pool,
								&next_state);
							continue;
						}
					}

					// Pop from the stack when this state reached the end of its
					// current syntax node.
					while (next_state.depth > 0 && next_state_top->done)
					{
						next_state.depth--;
						next_state_top = analysis_state__top(&next_state);
					}

					// If this hypothetical child did match the current step of
					// the query pattern, then advance to the next step at the
					// current depth. This involves skipping over any descendant
					// steps of the current child.
					const t_query_step *next_step = step;
					if (does_match)
					{
						for (;;)
						{
							next_state.step_index++;
							next_step =
								&self->steps.contents[next_state.step_index];
							if (next_step->depth == PATTERN_DONE_MARKER ||
								next_step->depth <= step->depth)
								break;
						}
					}
					else if (successor.state == parse_state)
					{
						continue;
					}

					for (;;)
					{
						// Skip pass-through states. Although these states have
						// alternatives, they are only used to implement
						// repetitions, and query analysis does not need to
						// process repetitions in order to determine whether
						// steps are possible and definite.
						if (next_step->is_pass_through)
						{
							next_state.step_index++;
							next_step++;
							continue;
						}

						// If the pattern is finished or hypothetical parent
						// node is complete, then record that matching can
						// terminate at this step of the pattern. Otherwise, add
						// this state to the list of states to process on the
						// next iteration.
						if (!next_step->is_dead_end)
						{
							bool did_finish_pattern =
								self->steps.contents[next_state.step_index]
									.depth != step->depth;
							if (did_finish_pattern)
							{
								array_insert_sorted_by(
									&analysis->finished_parent_symbols, ,
									state->root_symbol);
							}
							else if (next_state.depth == 0)
							{
								array_insert_sorted_by(
									&analysis->final_step_indices, ,
									next_state.step_index);
							}
							else
							{
								analysis_state_set__insert_sorted(
									&analysis->next_states,
									&analysis->state_pool, &next_state);
							}
						}

						// If the state has advanced to a step with an
						// alternative step, then add another state at that
						// alternative step. This process is simpler than the
						// process of actually matching a pattern during query
						// execution, because for the purposes of query
						// analysis, there is no need to process repetitions.
						if (does_match &&
							next_step->alternative_index != NONE &&
							next_step->alternative_index >
								next_state.step_index)
						{
							next_state.step_index =
								next_step->alternative_index;
							next_step =
								&self->steps.contents[next_state.step_index];
						}
						else
						{
							break;
						}
					}
				}
			}
		}

		t_analysis_state_set _states = analysis->states;
		analysis->states = analysis->next_states;
		analysis->next_states = _states;
	}
}

static bool ts_query__analyze_patterns(t_parse_query *self,
									   unsigned		 *error_offset)
{
	Array(uint16_t) non_rooted_pattern_start_steps = array_new();
	for (unsigned i = 0; i < self->pattern_map.size; i++)
	{
		t_pattern_entry *pattern = &self->pattern_map.contents[i];
		if (!pattern->is_rooted)
		{
			t_query_step *step = &self->steps.contents[pattern->step_index];
			if (step->symbol != WILDCARD_SYMBOL)
			{
				array_push(&non_rooted_pattern_start_steps, i);
			}
		}
	}

	// Walk forward through all of the steps in the query, computing some
	// basic information about each step. Mark all of the steps that contain
	// captures, and record the indices of all of the steps that have child
	// steps.
	Array(uint32_t) parent_step_indices = array_new();
	for (unsigned i = 0; i < self->steps.size; i++)
	{
		t_query_step *step = &self->steps.contents[i];
		if (step->depth == PATTERN_DONE_MARKER)
		{
			step->parent_pattern_guaranteed = true;
			step->root_pattern_guaranteed = true;
			continue;
		}

		bool has_children = false;
		bool is_wildcard = step->symbol == WILDCARD_SYMBOL;
		step->contains_captures = step->capture_ids[0] != NONE;
		for (unsigned j = i + 1; j < self->steps.size; j++)
		{
			t_query_step *next_step = &self->steps.contents[j];
			if (next_step->depth == PATTERN_DONE_MARKER ||
				next_step->depth <= step->depth)
				break;
			if (next_step->capture_ids[0] != NONE)
			{
				step->contains_captures = true;
			}
			if (!is_wildcard)
			{
				next_step->root_pattern_guaranteed = true;
				next_step->parent_pattern_guaranteed = true;
			}
			has_children = true;
		}

		if (has_children && !is_wildcard)
		{
			array_push(&parent_step_indices, i);
		}
	}

	// For every parent symbol in the query, initialize an 'analysis subgraph'.
	// This subgraph lists all of the states in the parse table that are
	// directly involved in building subtrees for this symbol.
	//
	// In addition to the parent symbols in the query, construct subgraphs for
	// all of the hidden symbols in the grammar, because these might occur
	// within one of the parent nodes, such that their children appear to belong
	// to the parent.
	t_analysis_subgraph_array subgraphs = array_new();
	for (unsigned i = 0; i < parent_step_indices.size; i++)
	{
		uint32_t parent_step_index = parent_step_indices.contents[i];
		t_symbol parent_symbol = self->steps.contents[parent_step_index].symbol;
		t_analysis_subgraph subgraph = {.symbol = parent_symbol};
		array_insert_sorted_by(&subgraphs, .symbol, subgraph);
	}
	for (t_symbol sym = (uint16_t)self->language->token_count;
		 sym < (uint16_t)self->language->symbol_count; sym++)
	{
		if (!ts_language_symbol_metadata(self->language, sym).visible)
		{
			t_analysis_subgraph subgraph = {.symbol = sym};
			array_insert_sorted_by(&subgraphs, .symbol, subgraph);
		}
	}

	// Scan the parse table to find the data needed to populate these subgraphs.
	// Collect three things during this scan:
	//   1) All of the parse states where one of these symbols can start.
	//   2) All of the parse states where one of these symbols can end, along
	//      with information about the node that would be created.
	//   3) A list of predecessor states for each state.
	t_state_predecessor_map predecessor_map =
		state_predecessor_map_new(self->language);
	for (t_state_id state = 1; state < (uint16_t)self->language->state_count;
		 state++)
	{
		unsigned			 subgraph_index, exists;
		t_lookahead_iterator lookahead_iterator =
			ts_language_lookaheads(self->language, state);
		while (ts_lookahead_iterator__next(&lookahead_iterator))
		{
			if (lookahead_iterator.action_count)
			{
				for (unsigned i = 0; i < lookahead_iterator.action_count; i++)
				{
					const t_parse_action *action =
						&lookahead_iterator.actions[i];
					if (action->type == TSParseActionTypeReduce)
					{
						const t_symbol *aliases, *aliases_end;
						ts_language_aliases_for_symbol(self->language,
													   action->reduce.symbol,
													   &aliases, &aliases_end);
						for (const t_symbol *symbol = aliases;
							 symbol < aliases_end; symbol++)
						{
							array_search_sorted_by(&subgraphs, .symbol, *symbol,
												   &subgraph_index, &exists);
							if (exists)
							{
								t_analysis_subgraph *subgraph =
									&subgraphs.contents[subgraph_index];
								if (subgraph->nodes.size == 0 ||
									array_back(&subgraph->nodes)->state !=
										state)
								{
									array_push(
										&subgraph->nodes,
										((t_analysis_subgraph_node){
											.state = state,
											.production_id =
												action->reduce.production_id,
											.child_index =
												action->reduce.child_count,
											.done = true,
										}));
								}
							}
						}
					}
					else if (action->type == TSParseActionTypeShift &&
							 !action->shift.extra)
					{
						t_state_id next_state = action->shift.state;
						state_predecessor_map_add(&predecessor_map, next_state,
												  state);
					}
				}
			}
			else if (lookahead_iterator.next_state != 0)
			{
				if (lookahead_iterator.next_state != state)
				{
					state_predecessor_map_add(
						&predecessor_map, lookahead_iterator.next_state, state);
				}
				if (ts_language_state_is_primary(self->language, state))
				{
					const t_symbol *aliases, *aliases_end;
					ts_language_aliases_for_symbol(self->language,
												   lookahead_iterator.symbol,
												   &aliases, &aliases_end);
					for (const t_symbol *symbol = aliases; symbol < aliases_end;
						 symbol++)
					{
						array_search_sorted_by(&subgraphs, .symbol, *symbol,
											   &subgraph_index, &exists);
						if (exists)
						{
							t_analysis_subgraph *subgraph =
								&subgraphs.contents[subgraph_index];
							if (subgraph->start_states.size == 0 ||
								*array_back(&subgraph->start_states) != state)
								array_push(&subgraph->start_states, state);
						}
					}
				}
			}
		}
	}

	// For each subgraph, compute the preceding states by walking backward
	// from the end states using the predecessor map.
	Array(t_analysis_subgraph_node) next_nodes = array_new();
	for (unsigned i = 0; i < subgraphs.size; i++)
	{
		t_analysis_subgraph *subgraph = &subgraphs.contents[i];
		if (subgraph->nodes.size == 0)
		{
			array_delete(&subgraph->start_states);
			array_erase(&subgraphs, i);
			i--;
			continue;
		}
		array_assign(&next_nodes, &subgraph->nodes);
		while (next_nodes.size > 0)
		{
			t_analysis_subgraph_node node = array_pop(&next_nodes);
			if (node.child_index > 1)
			{
				unsigned		  predecessor_count;
				const t_state_id *predecessors = state_predecessor_map_get(
					&predecessor_map, node.state, &predecessor_count);
				for (unsigned j = 0; j < predecessor_count; j++)
				{
					t_analysis_subgraph_node predecessor_node = {
						.state = predecessors[j],
						.child_index = node.child_index - 1,
						.production_id = node.production_id,
						.done = false,
					};
					unsigned index, exists;
					array_search_sorted_with(
						&subgraph->nodes, analysis_subgraph_node__compare,
						&predecessor_node, &index, &exists);
					if (!exists)
					{
						array_insert(&subgraph->nodes, index, predecessor_node);
						array_push(&next_nodes, predecessor_node);
					}
				}
			}
		}
	}

#ifdef DEBUG_ANALYZE_QUERY
	printf("\nSubgraphs:\n");
	for (unsigned i = 0; i < subgraphs.size; i++)
	{
		t_analysis_subgraph *subgraph = &subgraphs.contents[i];
		printf("  %u, %s:\n", subgraph->symbol,
			   ts_language_symbol_name(self->language, subgraph->symbol));
		for (unsigned j = 0; j < subgraph->start_states.size; j++)
		{
			printf("    {state: %u}\n", subgraph->start_states.contents[j]);
		}
		for (unsigned j = 0; j < subgraph->nodes.size; j++)
		{
			t_analysis_subgraph_node *node = &subgraph->nodes.contents[j];
			printf("    {state: %u, child_index: %u, production_id: %u, done: "
				   "%d}\n",
				   node->state, node->child_index, node->production_id,
				   node->done);
		}
		printf("\n");
	}
#endif

	// For each non-terminal pattern, determine if the pattern can successfully
	// match, and identify all of the possible children within the pattern where
	// matching could fail.
	bool			 all_patterns_are_valid = true;
	t_query_analysis analysis = query_analysis__new();
	for (unsigned i = 0; i < parent_step_indices.size; i++)
	{
		uint16_t parent_step_index = parent_step_indices.contents[i];
		uint16_t parent_depth = self->steps.contents[parent_step_index].depth;
		t_symbol parent_symbol = self->steps.contents[parent_step_index].symbol;
		if (parent_symbol == ts_builtin_sym_error)
			continue;

		// Find the subgraph that corresponds to this pattern's root symbol. If
		// the pattern's root symbol is a terminal, then return an error.
		unsigned subgraph_index, exists;
		array_search_sorted_by(&subgraphs, .symbol, parent_symbol,
							   &subgraph_index, &exists);
		if (!exists)
		{
			unsigned first_child_step_index = parent_step_index + 1;
			uint32_t j, child_exists;
			array_search_sorted_by(&self->step_offsets, .step_index,
								   first_child_step_index, &j, &child_exists);
			assert(child_exists);
			*error_offset = self->step_offsets.contents[j].byte_offset;
			all_patterns_are_valid = false;
			break;
		}

		// Initialize an analysis state at every parse state in the table where
		// this parent symbol can occur.
		t_analysis_subgraph *subgraph = &subgraphs.contents[subgraph_index];
		analysis_state_set__clear(&analysis.states, &analysis.state_pool);
		analysis_state_set__clear(&analysis.deeper_states,
								  &analysis.state_pool);
		for (unsigned j = 0; j < subgraph->start_states.size; j++)
		{
			t_state_id parse_state = subgraph->start_states.contents[j];
			analysis_state_set__push(
				&analysis.states, &analysis.state_pool,
				&((t_analysis_state){
					.step_index = parent_step_index + 1,
					.stack =
						{
							[0] =
								{
									.parse_state = parse_state,
									.parent_symbol = parent_symbol,
									.child_index = 0,
									.field_id = 0,
									.done = false,
								},
						},
					.depth = 1,
					.root_symbol = parent_symbol,
				}));
		}

#ifdef DEBUG_ANALYZE_QUERY
		printf("\nWalk states for %s:\n",
			   ts_language_symbol_name(
				   self->language,
				   analysis.states.contents[0]->stack[0].parent_symbol));
#endif

		analysis.did_abort = false;
		ts_query__perform_analysis(self, &subgraphs, &analysis);

		// If this pattern could not be fully analyzed, then every step should
		// be considered fallible.
		if (analysis.did_abort)
		{
			for (unsigned j = parent_step_index + 1; j < self->steps.size; j++)
			{
				t_query_step *step = &self->steps.contents[j];
				if (step->depth <= parent_depth ||
					step->depth == PATTERN_DONE_MARKER)
					break;
				if (!step->is_dead_end)
				{
					step->parent_pattern_guaranteed = false;
					step->root_pattern_guaranteed = false;
				}
			}
			continue;
		}

		// If this pattern cannot match, store the pattern index so that it can
		// be returned to the caller.
		if (analysis.finished_parent_symbols.size == 0)
		{
			assert(analysis.final_step_indices.size > 0);
			uint16_t impossible_step_index =
				*array_back(&analysis.final_step_indices);
			uint32_t j, impossible_exists;
			array_search_sorted_by(&self->step_offsets, .step_index,
								   impossible_step_index, &j,
								   &impossible_exists);
			if (j >= self->step_offsets.size)
				j = self->step_offsets.size - 1;
			*error_offset = self->step_offsets.contents[j].byte_offset;
			all_patterns_are_valid = false;
			break;
		}

		// Mark as fallible any step where a match terminated.
		// Later, this property will be propagated to all of the step's
		// predecessors.
		for (unsigned j = 0; j < analysis.final_step_indices.size; j++)
		{
			uint32_t final_step_index = analysis.final_step_indices.contents[j];
			t_query_step *step = &self->steps.contents[final_step_index];
			if (step->depth != PATTERN_DONE_MARKER &&
				step->depth > parent_depth && !step->is_dead_end)
			{
				step->parent_pattern_guaranteed = false;
				step->root_pattern_guaranteed = false;
			}
		}
	}

	// Mark as indefinite any step with captures that are used in predicates.
	Array(uint16_t) predicate_capture_ids = array_new();
	for (unsigned i = 0; i < self->patterns.size; i++)
	{
		t_query_pattern *pattern = &self->patterns.contents[i];

		// Gather all of the captures that are used in predicates for this
		// pattern.
		array_clear(&predicate_capture_ids);
		for (unsigned start = pattern->predicate_steps.offset,
					  end = start + pattern->predicate_steps.length, j = start;
			 j < end; j++)
		{
			t_query_predicate_step *step = &self->predicate_steps.contents[j];
			if (step->type == TSQueryPredicateStepTypeCapture)
			{
				uint16_t value_id = step->value_id;
				array_insert_sorted_by(&predicate_capture_ids, , value_id);
			}
		}

		// Find all of the steps that have these captures.
		for (unsigned start = pattern->steps.offset,
					  end = start + pattern->steps.length, j = start;
			 j < end; j++)
		{
			t_query_step *step = &self->steps.contents[j];
			for (unsigned k = 0; k < MAX_STEP_CAPTURE_COUNT; k++)
			{
				uint16_t capture_id = step->capture_ids[k];
				if (capture_id == NONE)
					break;
				unsigned index, exists;
				array_search_sorted_by(&predicate_capture_ids, , capture_id,
									   &index, &exists);
				if (exists)
				{
					step->root_pattern_guaranteed = false;
					break;
				}
			}
		}
	}

	// Propagate fallibility. If a pattern is fallible at a given step, then it
	// is fallible at all of its preceding steps.
	bool done = self->steps.size == 0;
	while (!done)
	{
		done = true;
		for (unsigned i = self->steps.size - 1; i > 0; i--)
		{
			t_query_step *step = &self->steps.contents[i];
			if (step->depth == PATTERN_DONE_MARKER)
				continue;

			// Determine if this step is definite or has definite alternatives.
			bool parent_pattern_guaranteed = false;
			for (;;)
			{
				if (step->root_pattern_guaranteed)
				{
					parent_pattern_guaranteed = true;
					break;
				}
				if (step->alternative_index == NONE ||
					step->alternative_index < i)
				{
					break;
				}
				step = &self->steps.contents[step->alternative_index];
			}

			// If not, mark its predecessor as indefinite.
			if (!parent_pattern_guaranteed)
			{
				t_query_step *prev_step = &self->steps.contents[i - 1];
				if (!prev_step->is_dead_end &&
					prev_step->depth != PATTERN_DONE_MARKER &&
					prev_step->root_pattern_guaranteed)
				{
					prev_step->root_pattern_guaranteed = false;
					done = false;
				}
			}
		}
	}

#ifdef DEBUG_ANALYZE_QUERY
	printf("Steps:\n");
	for (unsigned i = 0; i < self->steps.size; i++)
	{
		t_query_step *step = &self->steps.contents[i];
		if (step->depth == PATTERN_DONE_MARKER)
		{
			printf("  %u: DONE\n", i);
		}
		else
		{
			printf(
				"  %u: {symbol: %s, field: %s, depth: %u, "
				"parent_pattern_guaranteed: %d, root_pattern_guaranteed: %d}\n",
				i,
				(step->symbol == WILDCARD_SYMBOL)
					? "ANY"
					: ts_language_symbol_name(self->language, step->symbol),
				(step->field ? ts_language_field_name_for_id(self->language,
															 step->field)
							 : "-"),
				step->depth, step->parent_pattern_guaranteed,
				step->root_pattern_guaranteed);
		}
	}
#endif

	// Determine which repetition symbols in this language have the possibility
	// of matching non-rooted patterns in this query. These repetition symbols
	// prevent certain optimizations with range restrictions.
	analysis.did_abort = false;
	for (uint32_t i = 0; i < non_rooted_pattern_start_steps.size; i++)
	{
		uint16_t pattern_entry_index =
			non_rooted_pattern_start_steps.contents[i];
		t_pattern_entry *pattern_entry =
			&self->pattern_map.contents[pattern_entry_index];

		analysis_state_set__clear(&analysis.states, &analysis.state_pool);
		analysis_state_set__clear(&analysis.deeper_states,
								  &analysis.state_pool);
		for (unsigned j = 0; j < subgraphs.size; j++)
		{
			t_analysis_subgraph *subgraph = &subgraphs.contents[j];
			t_symbol_metadata	 metadata =
				ts_language_symbol_metadata(self->language, subgraph->symbol);
			if (metadata.visible || metadata.named)
				continue;

			for (uint32_t k = 0; k < subgraph->start_states.size; k++)
			{
				t_state_id parse_state = subgraph->start_states.contents[k];
				analysis_state_set__push(
					&analysis.states, &analysis.state_pool,
					&((t_analysis_state){
						.step_index = pattern_entry->step_index,
						.stack =
							{
								[0] =
									{
										.parse_state = parse_state,
										.parent_symbol = subgraph->symbol,
										.child_index = 0,
										.field_id = 0,
										.done = false,
									},
							},
						.root_symbol = subgraph->symbol,
						.depth = 1,
					}));
			}
		}

#ifdef DEBUG_ANALYZE_QUERY
		printf("\nWalk states for rootless pattern step %u:\n",
			   pattern_entry->step_index);
#endif

		ts_query__perform_analysis(self, &subgraphs, &analysis);

		if (analysis.finished_parent_symbols.size > 0)
		{
			self->patterns.contents[pattern_entry->pattern_index].is_non_local =
				true;
		}

		for (unsigned k = 0; k < analysis.finished_parent_symbols.size; k++)
		{
			t_symbol symbol = analysis.finished_parent_symbols.contents[k];
			array_insert_sorted_by(&self->repeat_symbols_with_rootless_patterns,
								   , symbol);
		}
	}

#ifdef DEBUG_ANALYZE_QUERY
	if (self->repeat_symbols_with_rootless_patterns.size > 0)
	{
		printf("\nRepetition symbols with rootless patterns:\n");
		printf("aborted analysis: %d\n", analysis.did_abort);
		for (unsigned i = 0;
			 i < self->repeat_symbols_with_rootless_patterns.size; i++)
		{
			t_symbol symbol =
				self->repeat_symbols_with_rootless_patterns.contents[i];
			printf("  %u, %s\n", symbol,
				   ts_language_symbol_name(self->language, symbol));
		}
		printf("\n");
	}
#endif

	// Cleanup
	for (unsigned i = 0; i < subgraphs.size; i++)
	{
		array_delete(&subgraphs.contents[i].start_states);
		array_delete(&subgraphs.contents[i].nodes);
	}
	array_delete(&subgraphs);
	query_analysis__delete(&analysis);
	array_delete(&next_nodes);
	array_delete(&non_rooted_pattern_start_steps);
	array_delete(&parent_step_indices);
	array_delete(&predicate_capture_ids);
	state_predecessor_map_delete(&predecessor_map);

	return all_patterns_are_valid;
}

static void ts_query__add_negated_fields(t_parse_query *self,
										 uint16_t		step_index,
										 t_field_id	   *field_ids,
										 uint16_t		field_count)
{
	t_query_step *step = &self->steps.contents[step_index];

	// The negated field array stores a list of field lists, separated by zeros.
	// Try to find the start index of an existing list that matches this new
	// list.
	bool	 failed_match = false;
	unsigned match_count = 0;
	unsigned start_i = 0;
	for (unsigned i = 0; i < self->negated_fields.size; i++)
	{
		t_field_id existing_field_id = self->negated_fields.contents[i];

		// At each zero value, terminate the match attempt. If we've exactly
		// matched the new field list, then reuse this index. Otherwise,
		// start over the matching process.
		if (existing_field_id == 0)
		{
			if (match_count == field_count)
			{
				step->negated_field_list_id = start_i;
				return;
			}
			else
			{
				start_i = i + 1;
				match_count = 0;
				failed_match = false;
			}
		}

		// If the existing list matches our new list so far, then advance
		// to the next element of the new list.
		else if (match_count < field_count &&
				 existing_field_id == field_ids[match_count] && !failed_match)
		{
			match_count++;
		}

		// Otherwise, this existing list has failed to match.
		else
		{
			match_count = 0;
			failed_match = true;
		}
	}

	step->negated_field_list_id = self->negated_fields.size;
	array_extend(&self->negated_fields, field_count, field_ids);
	array_push(&self->negated_fields, 0);
}

static t_query_error ts_query__parse_string_literal(t_parse_query *self,
													t_stream	  *stream)
{
	const char *string_start = stream->input;
	if (stream->next != '"')
		return TSQueryErrorSyntax;
	stream_advance(stream);
	const char *prev_position = stream->input;

	bool is_escaped = false;
	array_clear(&self->string_buffer);
	for (;;)
	{
		if (is_escaped)
		{
			is_escaped = false;
			switch (stream->next)
			{
			case 'n':
				array_push(&self->string_buffer, '\n');
				break;
			case 'r':
				array_push(&self->string_buffer, '\r');
				break;
			case 't':
				array_push(&self->string_buffer, '\t');
				break;
			case '0':
				array_push(&self->string_buffer, '\0');
				break;
			default:
				array_extend(&self->string_buffer, stream->next_size,
							 stream->input);
				break;
			}
			prev_position = stream->input + stream->next_size;
		}
		else
		{
			if (stream->next == '\\')
			{
				array_extend(&self->string_buffer,
							 (uint32_t)(stream->input - prev_position),
							 prev_position);
				prev_position = stream->input + 1;
				is_escaped = true;
			}
			else if (stream->next == '"')
			{
				array_extend(&self->string_buffer,
							 (uint32_t)(stream->input - prev_position),
							 prev_position);
				stream_advance(stream);
				return TSQueryErrorNone;
			}
			else if (stream->next == '\n')
			{
				stream_reset(stream, string_start);
				return TSQueryErrorSyntax;
			}
		}
		if (!stream_advance(stream))
		{
			stream_reset(stream, string_start);
			return TSQueryErrorSyntax;
		}
	}
}

// Parse a single predicate associated with a pattern, adding it to the
// query's internal `predicate_steps` array. Predicates are arbitrary
// S-expressions associated with a pattern which are meant to be handled at
// a higher level of abstraction, such as the Rust/JavaScript bindings. They
// can contain '@'-prefixed capture names, double-quoted strings, and bare
// symbols, which also represent strings.
static t_query_error ts_query__parse_predicate(t_parse_query *self,
											   t_stream		 *stream)
{
	if (!stream_is_ident_start(stream))
		return TSQueryErrorSyntax;
	const char *predicate_name = stream->input;
	stream_scan_identifier(stream);
	uint32_t length = (uint32_t)(stream->input - predicate_name);
	uint16_t id = symbol_table_insert_name(&self->predicate_values,
										   predicate_name, length);
	array_push(&self->predicate_steps,
			   ((t_query_predicate_step){
				   .type = TSQueryPredicateStepTypeString,
				   .value_id = id,
			   }));
	stream_skip_whitespace(stream);

	for (;;)
	{
		if (stream->next == ')')
		{
			stream_advance(stream);
			stream_skip_whitespace(stream);
			array_push(&self->predicate_steps,
					   ((t_query_predicate_step){
						   .type = TSQueryPredicateStepTypeDone,
						   .value_id = 0,
					   }));
			break;
		}

		// Parse an '@'-prefixed capture name
		else if (stream->next == '@')
		{
			stream_advance(stream);

			// Parse the capture name
			if (!stream_is_ident_start(stream))
				return TSQueryErrorSyntax;
			const char *capture_name = stream->input;
			stream_scan_identifier(stream);
			uint32_t capture_length = (uint32_t)(stream->input - capture_name);

			// Add the capture id to the first step of the pattern
			int capture_id = symbol_table_id_for_name(
				&self->captures, capture_name, capture_length);
			if (capture_id == -1)
			{
				stream_reset(stream, capture_name);
				return TSQueryErrorCapture;
			}

			array_push(&self->predicate_steps,
					   ((t_query_predicate_step){
						   .type = TSQueryPredicateStepTypeCapture,
						   .value_id = capture_id,
					   }));
		}

		// Parse a string literal
		else if (stream->next == '"')
		{
			t_query_error e = ts_query__parse_string_literal(self, stream);
			if (e)
				return e;
			uint16_t query_id = symbol_table_insert_name(
				&self->predicate_values, self->string_buffer.contents,
				self->string_buffer.size);
			array_push(&self->predicate_steps,
					   ((t_query_predicate_step){
						   .type = TSQueryPredicateStepTypeString,
						   .value_id = query_id,
					   }));
		}

		// Parse a bare symbol
		else if (stream_is_ident_start(stream))
		{
			const char *symbol_start = stream->input;
			stream_scan_identifier(stream);
			uint32_t symbol_length = (uint32_t)(stream->input - symbol_start);
			uint16_t query_id = symbol_table_insert_name(
				&self->predicate_values, symbol_start, symbol_length);
			array_push(&self->predicate_steps,
					   ((t_query_predicate_step){
						   .type = TSQueryPredicateStepTypeString,
						   .value_id = query_id,
					   }));
		}

		else
		{
			return TSQueryErrorSyntax;
		}

		stream_skip_whitespace(stream);
	}

	return 0;
}

// Read one S-expression pattern from the stream, and incorporate it into
// the query's internal state machine representation. For nested patterns,
// this function calls itself recursively.
//
// The caller is responsible for passing in a dedicated t_capture_quantifiers.
// These should not be shared between different calls to
// ts_query__parse_pattern!
static t_query_error ts_query__parse_pattern(
	t_parse_query *self, t_stream *stream, uint32_t depth, bool is_immediate,
	t_capture_quantifiers *capture_quantifiers)
{
	if (stream->next == 0)
		return TSQueryErrorSyntax;
	if (stream->next == ')' || stream->next == ']')
		return PARENT_DONE;

	const uint32_t starting_step_index = self->steps.size;

	// Store the byte offset of each step in the query.
	if (self->step_offsets.size == 0 ||
		array_back(&self->step_offsets)->step_index != starting_step_index)
	{
		array_push(&self->step_offsets,
				   ((t_step_offset){
					   .step_index = starting_step_index,
					   .byte_offset = stream_offset(stream),
				   }));
	}

	// An open bracket is the start of an alternation.
	if (stream->next == '[')
	{
		stream_advance(stream);
		stream_skip_whitespace(stream);

		// Parse each branch, and add a placeholder step in between the
		// branches.
		Array(uint32_t) branch_step_indices = array_new();
		t_capture_quantifiers branch_capture_quantifiers =
			capture_quantifiers_new();
		for (;;)
		{
			uint32_t	  start_index = self->steps.size;
			t_query_error e = ts_query__parse_pattern(
				self, stream, depth, is_immediate, &branch_capture_quantifiers);

			if (e == PARENT_DONE)
			{
				if (stream->next == ']' && branch_step_indices.size > 0)
				{
					stream_advance(stream);
					break;
				}
				e = TSQueryErrorSyntax;
			}
			if (e)
			{
				capture_quantifiers_delete(&branch_capture_quantifiers);
				array_delete(&branch_step_indices);
				return e;
			}

			if (start_index == starting_step_index)
			{
				capture_quantifiers_replace(capture_quantifiers,
											&branch_capture_quantifiers);
			}
			else
			{
				capture_quantifiers_join_all(capture_quantifiers,
											 &branch_capture_quantifiers);
			}

			array_push(&branch_step_indices, start_index);
			array_push(&self->steps, query_step__new(0, depth, false));
			capture_quantifiers_clear(&branch_capture_quantifiers);
		}
		(void)array_pop(&self->steps);

		// For all of the branches except for the last one, add the subsequent
		// branch as an alternative, and link the end of the branch to the
		// current end of the steps.
		for (unsigned i = 0; i < branch_step_indices.size - 1; i++)
		{
			uint32_t	  step_index = branch_step_indices.contents[i];
			uint32_t	  next_step_index = branch_step_indices.contents[i + 1];
			t_query_step *start_step = &self->steps.contents[step_index];
			t_query_step *end_step = &self->steps.contents[next_step_index - 1];
			start_step->alternative_index = next_step_index;
			end_step->alternative_index = self->steps.size;
			end_step->is_dead_end = true;
		}

		capture_quantifiers_delete(&branch_capture_quantifiers);
		array_delete(&branch_step_indices);
	}

	// An open parenthesis can be the start of three possible constructs:
	// * A grouped sequence
	// * A predicate
	// * A named node
	else if (stream->next == '(')
	{
		stream_advance(stream);
		stream_skip_whitespace(stream);

		// If this parenthesis is followed by a node, then it represents a
		// grouped sequence.
		if (stream->next == '(' || stream->next == '"' || stream->next == '[')
		{
			bool				  child_is_immediate = is_immediate;
			t_capture_quantifiers child_capture_quantifiers =
				capture_quantifiers_new();
			for (;;)
			{
				if (stream->next == '.')
				{
					child_is_immediate = true;
					stream_advance(stream);
					stream_skip_whitespace(stream);
				}
				t_query_error e = ts_query__parse_pattern(
					self, stream, depth, child_is_immediate,
					&child_capture_quantifiers);
				if (e == PARENT_DONE)
				{
					if (stream->next == ')')
					{
						stream_advance(stream);
						break;
					}
					e = TSQueryErrorSyntax;
				}
				if (e)
				{
					capture_quantifiers_delete(&child_capture_quantifiers);
					return e;
				}

				capture_quantifiers_add_all(capture_quantifiers,
											&child_capture_quantifiers);
				capture_quantifiers_clear(&child_capture_quantifiers);
				child_is_immediate = false;
			}

			capture_quantifiers_delete(&child_capture_quantifiers);
		}

		// A dot/pound character indicates the start of a predicate.
		else if (stream->next == '.' || stream->next == '#')
		{
			stream_advance(stream);
			return ts_query__parse_predicate(self, stream);
		}

		// Otherwise, this parenthesis is the start of a named node.
		else
		{
			t_symbol symbol;

			// Parse a normal node name
			if (stream_is_ident_start(stream))
			{
				const char *node_name = stream->input;
				stream_scan_identifier(stream);
				uint32_t length = (uint32_t)(stream->input - node_name);

				// Parse the wildcard symbol
				if (length == 1 && node_name[0] == '_')
				{
					symbol = WILDCARD_SYMBOL;
				}

				else
				{
					symbol = ts_language_symbol_for_name(
						self->language, node_name, length, true);
					if (!symbol)
					{
						stream_reset(stream, node_name);
						return TSQueryErrorNodeType;
					}
				}
			}
			else
			{
				return TSQueryErrorSyntax;
			}

			// Add a step for the node.
			array_push(&self->steps,
					   query_step__new(symbol, depth, is_immediate));
			t_query_step *step = array_back(&self->steps);
			if (ts_language_symbol_metadata(self->language, symbol).supertype)
			{
				step->supertype_symbol = step->symbol;
				step->symbol = WILDCARD_SYMBOL;
			}
			if (symbol == WILDCARD_SYMBOL)
			{
				step->is_named = true;
			}

			stream_skip_whitespace(stream);

			if (stream->next == '/')
			{
				stream_advance(stream);
				if (!stream_is_ident_start(stream))
				{
					return TSQueryErrorSyntax;
				}

				const char *node_name = stream->input;
				stream_scan_identifier(stream);
				uint32_t length = (uint32_t)(stream->input - node_name);

				step->symbol = ts_language_symbol_for_name(
					self->language, node_name, length, true);
				if (!step->symbol)
				{
					stream_reset(stream, node_name);
					return TSQueryErrorNodeType;
				}

				stream_skip_whitespace(stream);
			}

			// Parse the child patterns
			bool				  child_is_immediate = false;
			uint16_t			  last_child_step_index = 0;
			uint16_t			  negated_field_count = 0;
			t_field_id			  negated_field_ids[MAX_NEGATED_FIELD_COUNT];
			t_capture_quantifiers child_capture_quantifiers =
				capture_quantifiers_new();
			for (;;)
			{
				// Parse a negated field assertion
				if (stream->next == '!')
				{
					stream_advance(stream);
					stream_skip_whitespace(stream);
					if (!stream_is_ident_start(stream))
					{
						capture_quantifiers_delete(&child_capture_quantifiers);
						return TSQueryErrorSyntax;
					}
					const char *field_name = stream->input;
					stream_scan_identifier(stream);
					uint32_t length = (uint32_t)(stream->input - field_name);
					stream_skip_whitespace(stream);

					t_field_id field_id = ts_language_field_id_for_name(
						self->language, field_name, length);
					if (!field_id)
					{
						stream->input = field_name;
						capture_quantifiers_delete(&child_capture_quantifiers);
						return TSQueryErrorField;
					}

					// Keep the field ids sorted.
					if (negated_field_count < MAX_NEGATED_FIELD_COUNT)
					{
						negated_field_ids[negated_field_count] = field_id;
						negated_field_count++;
					}

					continue;
				}

				// Parse a sibling anchor
				if (stream->next == '.')
				{
					child_is_immediate = true;
					stream_advance(stream);
					stream_skip_whitespace(stream);
				}

				uint16_t	  step_index = self->steps.size;
				t_query_error e = ts_query__parse_pattern(
					self, stream, depth + 1, child_is_immediate,
					&child_capture_quantifiers);
				if (e == PARENT_DONE)
				{
					if (stream->next == ')')
					{
						if (child_is_immediate)
						{
							if (last_child_step_index == 0)
							{
								capture_quantifiers_delete(
									&child_capture_quantifiers);
								return TSQueryErrorSyntax;
							}
							self->steps.contents[last_child_step_index]
								.is_last_child = true;
						}

						if (negated_field_count)
						{
							ts_query__add_negated_fields(
								self, starting_step_index, negated_field_ids,
								negated_field_count);
						}

						stream_advance(stream);
						break;
					}
					e = TSQueryErrorSyntax;
				}
				if (e)
				{
					capture_quantifiers_delete(&child_capture_quantifiers);
					return e;
				}

				capture_quantifiers_add_all(capture_quantifiers,
											&child_capture_quantifiers);

				last_child_step_index = step_index;
				child_is_immediate = false;
				capture_quantifiers_clear(&child_capture_quantifiers);
			}
			capture_quantifiers_delete(&child_capture_quantifiers);
		}
	}

	// Parse a wildcard pattern
	else if (stream->next == '_')
	{
		stream_advance(stream);
		stream_skip_whitespace(stream);

		// Add a step that matches any kind of node
		array_push(&self->steps,
				   query_step__new(WILDCARD_SYMBOL, depth, is_immediate));
	}

	// Parse a double-quoted anonymous leaf node expression
	else if (stream->next == '"')
	{
		const char	 *string_start = stream->input;
		t_query_error e = ts_query__parse_string_literal(self, stream);
		if (e)
			return e;

		// Add a step for the node
		t_symbol symbol = ts_language_symbol_for_name(
			self->language, self->string_buffer.contents,
			self->string_buffer.size, false);
		if (!symbol)
		{
			stream_reset(stream, string_start + 1);
			return TSQueryErrorNodeType;
		}
		array_push(&self->steps, query_step__new(symbol, depth, is_immediate));
	}

	// Parse a field-prefixed pattern
	else if (stream_is_ident_start(stream))
	{
		// Parse the field name
		const char *field_name = stream->input;
		stream_scan_identifier(stream);
		uint32_t length = (uint32_t)(stream->input - field_name);
		stream_skip_whitespace(stream);

		if (stream->next != ':')
		{
			stream_reset(stream, field_name);
			return TSQueryErrorSyntax;
		}
		stream_advance(stream);
		stream_skip_whitespace(stream);

		// Parse the pattern
		t_capture_quantifiers field_capture_quantifiers =
			capture_quantifiers_new();
		t_query_error e = ts_query__parse_pattern(
			self, stream, depth, is_immediate, &field_capture_quantifiers);
		if (e)
		{
			capture_quantifiers_delete(&field_capture_quantifiers);
			if (e == PARENT_DONE)
				e = TSQueryErrorSyntax;
			return e;
		}

		// Add the field name to the first step of the pattern
		t_field_id field_id =
			ts_language_field_id_for_name(self->language, field_name, length);
		if (!field_id)
		{
			stream->input = field_name;
			return TSQueryErrorField;
		}

		uint32_t	  step_index = starting_step_index;
		t_query_step *step = &self->steps.contents[step_index];
		for (;;)
		{
			step->field = field_id;
			if (step->alternative_index != NONE &&
				step->alternative_index > step_index &&
				step->alternative_index < self->steps.size)
			{
				step_index = step->alternative_index;
				step = &self->steps.contents[step_index];
			}
			else
			{
				break;
			}
		}

		capture_quantifiers_add_all(capture_quantifiers,
									&field_capture_quantifiers);
		capture_quantifiers_delete(&field_capture_quantifiers);
	}

	else
	{
		return TSQueryErrorSyntax;
	}

	stream_skip_whitespace(stream);

	// Parse suffixes modifiers for this pattern
	t_quantifier quantifier = TSQuantifierOne;
	for (;;)
	{
		// Parse the one-or-more operator.
		if (stream->next == '+')
		{
			quantifier = quantifier_join(TSQuantifierOneOrMore, quantifier);

			stream_advance(stream);
			stream_skip_whitespace(stream);

			t_query_step repeat_step =
				query_step__new(WILDCARD_SYMBOL, depth, false);
			repeat_step.alternative_index = starting_step_index;
			repeat_step.is_pass_through = true;
			repeat_step.alternative_is_immediate = true;
			array_push(&self->steps, repeat_step);
		}

		// Parse the zero-or-more repetition operator.
		else if (stream->next == '*')
		{
			quantifier = quantifier_join(TSQuantifierZeroOrMore, quantifier);

			stream_advance(stream);
			stream_skip_whitespace(stream);

			t_query_step repeat_step =
				query_step__new(WILDCARD_SYMBOL, depth, false);
			repeat_step.alternative_index = starting_step_index;
			repeat_step.is_pass_through = true;
			repeat_step.alternative_is_immediate = true;
			array_push(&self->steps, repeat_step);

			// Stop when `step->alternative_index` is `NONE` or it points to
			// `repeat_step` or beyond. Note that having just been pushed,
			// `repeat_step` occupies slot `self->steps.size - 1`.
			t_query_step *step = &self->steps.contents[starting_step_index];
			while (step->alternative_index != NONE &&
				   step->alternative_index < self->steps.size - 1)
			{
				step = &self->steps.contents[step->alternative_index];
			}
			step->alternative_index = self->steps.size;
		}

		// Parse the optional operator.
		else if (stream->next == '?')
		{
			quantifier = quantifier_join(TSQuantifierZeroOrOne, quantifier);

			stream_advance(stream);
			stream_skip_whitespace(stream);

			t_query_step *step = &self->steps.contents[starting_step_index];
			while (step->alternative_index != NONE &&
				   step->alternative_index < self->steps.size)
			{
				step = &self->steps.contents[step->alternative_index];
			}
			step->alternative_index = self->steps.size;
		}

		// Parse an '@'-prefixed capture pattern
		else if (stream->next == '@')
		{
			stream_advance(stream);
			if (!stream_is_ident_start(stream))
				return TSQueryErrorSyntax;
			const char *capture_name = stream->input;
			stream_scan_identifier(stream);
			uint32_t length = (uint32_t)(stream->input - capture_name);
			stream_skip_whitespace(stream);

			// Add the capture id to the first step of the pattern
			uint16_t capture_id =
				symbol_table_insert_name(&self->captures, capture_name, length);

			// Add the capture quantifier
			capture_quantifiers_add_for_id(capture_quantifiers, capture_id,
										   TSQuantifierOne);

			uint32_t step_index = starting_step_index;
			for (;;)
			{
				t_query_step *step = &self->steps.contents[step_index];
				query_step__add_capture(step, capture_id);
				if (step->alternative_index != NONE &&
					step->alternative_index > step_index &&
					step->alternative_index < self->steps.size)
				{
					step_index = step->alternative_index;
				}
				else
				{
					break;
				}
			}
		}

		// No more suffix modifiers
		else
		{
			break;
		}
	}

	capture_quantifiers_mul(capture_quantifiers, quantifier);

	return 0;
}

t_parse_query *ts_query_new(const t_language *language, const char *source,
							uint32_t source_len, uint32_t *error_offset,
							t_query_error *error_type)
{

	t_parse_query *self = malloc(sizeof(t_parse_query));
	*self = (t_parse_query){
		.steps = array_new(),
		.pattern_map = array_new(),
		.captures = symbol_table_new(),
		.capture_quantifiers = array_new(),
		.predicate_values = symbol_table_new(),
		.predicate_steps = array_new(),
		.patterns = array_new(),
		.step_offsets = array_new(),
		.string_buffer = array_new(),
		.negated_fields = array_new(),
		.repeat_symbols_with_rootless_patterns = array_new(),
		.wildcard_root_pattern_count = 0,
		.language = ts_language_copy(language),
	};

	array_push(&self->negated_fields, 0);

	// Parse all of the S-expressions in the given string.
	t_stream stream = stream_new(source, source_len);
	stream_skip_whitespace(&stream);
	while (stream.input < stream.end)
	{
		uint32_t pattern_index = self->patterns.size;
		uint32_t start_step_index = self->steps.size;
		uint32_t start_predicate_step_index = self->predicate_steps.size;
		array_push(&self->patterns,
				   ((t_query_pattern){
					   .steps = (t_slice){.offset = start_step_index},
					   .predicate_steps =
						   (t_slice){.offset = start_predicate_step_index},
					   .start_byte = stream_offset(&stream),
					   .is_non_local = false,
				   }));
		t_capture_quantifiers capture_quantifiers = capture_quantifiers_new();
		*error_type = ts_query__parse_pattern(self, &stream, 0, false,
											  &capture_quantifiers);
		array_push(&self->steps,
				   query_step__new(0, PATTERN_DONE_MARKER, false));

		t_query_pattern *pattern = array_back(&self->patterns);
		pattern->steps.length = self->steps.size - start_step_index;
		pattern->predicate_steps.length =
			self->predicate_steps.size - start_predicate_step_index;

		// If any pattern could not be parsed, then report the error information
		// and terminate.
		if (*error_type)
		{
			if (*error_type == PARENT_DONE)
				*error_type = TSQueryErrorSyntax;
			*error_offset = stream_offset(&stream);
			capture_quantifiers_delete(&capture_quantifiers);
			ts_query_delete(self);
			return NULL;
		}

		// Maintain a list of capture quantifiers for each pattern
		array_push(&self->capture_quantifiers, capture_quantifiers);

		// Maintain a map that can look up patterns for a given root symbol.
		uint16_t wildcard_root_alternative_index = NONE;
		for (;;)
		{
			t_query_step *step = &self->steps.contents[start_step_index];

			// If a pattern has a wildcard at its root, but it has a
			// non-wildcard child, then optimize the matching process by
			// skipping matching the wildcard. Later, during the matching
			// process, the query cursor will check that there is a parent node,
			// and capture it if necessary.
			if (step->symbol == WILDCARD_SYMBOL && step->depth == 0 &&
				!step->field)
			{
				t_query_step *second_step =
					&self->steps.contents[start_step_index + 1];
				if (second_step->symbol != WILDCARD_SYMBOL &&
					second_step->depth == 1)
				{
					wildcard_root_alternative_index = step->alternative_index;
					start_step_index += 1;
					step = second_step;
				}
			}

			// Determine whether the pattern has a single root node. This
			// affects decisions about whether or not to start matching the
			// pattern when a query cursor has a range restriction or when
			// immediately within an error node.
			uint32_t start_depth = step->depth;
			bool	 is_rooted = start_depth == 0;
			for (uint32_t step_index = start_step_index + 1;
				 step_index < self->steps.size; step_index++)
			{
				t_query_step *child_step = &self->steps.contents[step_index];
				if (child_step->is_dead_end)
					break;
				if (child_step->depth == start_depth)
				{
					is_rooted = false;
					break;
				}
			}

			ts_query__pattern_map_insert(
				self, step->symbol,
				(t_pattern_entry){.step_index = start_step_index,
								  .pattern_index = pattern_index,
								  .is_rooted = is_rooted});
			if (step->symbol == WILDCARD_SYMBOL)
			{
				self->wildcard_root_pattern_count++;
			}

			// If there are alternatives or options at the root of the pattern,
			// then add multiple entries to the pattern map.
			if (step->alternative_index != NONE)
			{
				start_step_index = step->alternative_index;
			}
			else if (wildcard_root_alternative_index != NONE)
			{
				start_step_index = wildcard_root_alternative_index;
				wildcard_root_alternative_index = NONE;
			}
			else
			{
				break;
			}
		}
	}

	if (!ts_query__analyze_patterns(self, error_offset))
	{
		*error_type = TSQueryErrorStructure;
		ts_query_delete(self);
		return NULL;
	}

	array_delete(&self->string_buffer);
	return self;
}

void ts_query_delete(t_parse_query *self)
{
	if (self)
	{
		array_delete(&self->steps);
		array_delete(&self->pattern_map);
		array_delete(&self->predicate_steps);
		array_delete(&self->patterns);
		array_delete(&self->step_offsets);
		array_delete(&self->string_buffer);
		array_delete(&self->negated_fields);
		array_delete(&self->repeat_symbols_with_rootless_patterns);
		ts_language_delete(self->language);
		symbol_table_delete(&self->captures);
		symbol_table_delete(&self->predicate_values);
		for (uint32_t index = 0; index < self->capture_quantifiers.size;
			 index++)
		{
			t_capture_quantifiers *capture_quantifiers =
				array_get(&self->capture_quantifiers, index);
			capture_quantifiers_delete(capture_quantifiers);
		}
		array_delete(&self->capture_quantifiers);
		free(self);
	}
}

uint32_t ts_query_pattern_count(const t_parse_query *self)
{
	return self->patterns.size;
}

uint32_t ts_query_capture_count(const t_parse_query *self)
{
	return self->captures.slices.size;
}

uint32_t ts_query_string_count(const t_parse_query *self)
{
	return self->predicate_values.slices.size;
}

const char *ts_query_capture_name_for_id(const t_parse_query *self,
										 uint32_t index, uint32_t *length)
{
	return symbol_table_name_for_id(&self->captures, index, length);
}

t_quantifier ts_query_capture_quantifier_for_id(const t_parse_query *self,
												uint32_t pattern_index,
												uint32_t capture_index)
{
	t_capture_quantifiers *capture_quantifiers =
		array_get(&self->capture_quantifiers, pattern_index);
	return capture_quantifier_for_id(capture_quantifiers, capture_index);
}

const char *ts_query_string_value_for_id(const t_parse_query *self,
										 uint32_t index, uint32_t *length)
{
	return symbol_table_name_for_id(&self->predicate_values, index, length);
}

const t_query_predicate_step *ts_query_predicates_for_pattern(
	const t_parse_query *self, uint32_t pattern_index, uint32_t *step_count)
{
	t_slice slice = self->patterns.contents[pattern_index].predicate_steps;
	*step_count = slice.length;
	if (self->predicate_steps.contents == NULL)
	{
		return NULL;
	}
	return &self->predicate_steps.contents[slice.offset];
}

uint32_t ts_query_start_byte_for_pattern(const t_parse_query *self,
										 uint32_t			  pattern_index)
{
	return self->patterns.contents[pattern_index].start_byte;
}

bool ts_query_is_pattern_rooted(const t_parse_query *self,
								uint32_t			 pattern_index)
{
	for (unsigned i = 0; i < self->pattern_map.size; i++)
	{
		t_pattern_entry *entry = &self->pattern_map.contents[i];
		if (entry->pattern_index == pattern_index)
		{
			if (!entry->is_rooted)
				return false;
		}
	}
	return true;
}

bool ts_query_is_pattern_non_local(const t_parse_query *self,
								   uint32_t				pattern_index)
{
	if (pattern_index < self->patterns.size)
	{
		return self->patterns.contents[pattern_index].is_non_local;
	}
	else
	{
		return false;
	}
}

bool ts_query_is_pattern_guaranteed_at_step(const t_parse_query *self,
											uint32_t			 byte_offset)
{
	uint32_t step_index = UINT32_MAX;
	for (unsigned i = 0; i < self->step_offsets.size; i++)
	{
		t_step_offset *step_offset = &self->step_offsets.contents[i];
		if (step_offset->byte_offset > byte_offset)
			break;
		step_index = step_offset->step_index;
	}
	if (step_index < self->steps.size)
	{
		return self->steps.contents[step_index].root_pattern_guaranteed;
	}
	else
	{
		return false;
	}
}

bool ts_query__step_is_fallible(const t_parse_query *self, uint16_t step_index)
{
	assert((uint32_t)step_index + 1 < self->steps.size);
	t_query_step *step = &self->steps.contents[step_index];
	t_query_step *next_step = &self->steps.contents[step_index + 1];
	return (next_step->depth != PATTERN_DONE_MARKER &&
			next_step->depth > step->depth &&
			!next_step->parent_pattern_guaranteed);
}

void ts_query_disable_capture(t_parse_query *self, const char *name,
							  uint32_t length)
{
	// Remove capture information for any pattern step that previously
	// captured with the given name.
	int id = symbol_table_id_for_name(&self->captures, name, length);
	if (id != -1)
	{
		for (unsigned i = 0; i < self->steps.size; i++)
		{
			t_query_step *step = &self->steps.contents[i];
			query_step__remove_capture(step, id);
		}
	}
}

void ts_query_disable_pattern(t_parse_query *self, uint32_t pattern_index)
{
	// Remove the given pattern from the pattern map. Its steps will still
	// be in the `steps` array, but they will never be read.
	for (unsigned i = 0; i < self->pattern_map.size; i++)
	{
		t_pattern_entry *pattern = &self->pattern_map.contents[i];
		if (pattern->pattern_index == pattern_index)
		{
			array_erase(&self->pattern_map, i);
			i--;
		}
	}
}

/***************
 * QueryCursor
 ***************/

t_query_cursor *ts_query_cursor_new(void)
{
	t_query_cursor *self = malloc(sizeof(t_query_cursor));
	*self = (t_query_cursor){
		.did_exceed_match_limit = false,
		.ascending = false,
		.halted = false,
		.states = array_new(),
		.finished_states = array_new(),
		.capture_list_pool = capture_list_pool_new(),
		.start_byte = 0,
		.end_byte = UINT32_MAX,
		.start_point = {0, 0},
		.end_point = POINT_MAX,
		.max_start_depth = UINT32_MAX,
	};
	array_reserve(&self->states, 8);
	array_reserve(&self->finished_states, 8);
	return self;
}

void ts_query_cursor_delete(t_query_cursor *self)
{
	array_delete(&self->states);
	array_delete(&self->finished_states);
	ts_tree_cursor_delete(&self->cursor);
	capture_list_pool_delete(&self->capture_list_pool);
	free(self);
}

bool ts_query_cursor_did_exceed_match_limit(const t_query_cursor *self)
{
	return self->did_exceed_match_limit;
}

uint32_t ts_query_cursor_match_limit(const t_query_cursor *self)
{
	return self->capture_list_pool.max_capture_list_count;
}

void ts_query_cursor_set_match_limit(t_query_cursor *self, uint32_t limit)
{
	self->capture_list_pool.max_capture_list_count = limit;
}

#ifdef DEBUG_EXECUTE_QUERY
# define LOG(...) fprintf(stderr, __VA_ARGS__)
#else
# define LOG(...)
#endif

void ts_query_cursor_exec(t_query_cursor *self, const t_parse_query *query,
						  t_parse_node node)
{
	if (query)
	{
		LOG("query steps:\n");
		for (unsigned i = 0; i < query->steps.size; i++)
		{
			t_query_step *step = &query->steps.contents[i];
			LOG("  %u: {", i);
			if (step->depth == PATTERN_DONE_MARKER)
			{
				LOG("DONE");
			}
			else if (step->is_dead_end)
			{
				LOG("dead_end");
			}
			else if (step->is_pass_through)
			{
				LOG("pass_through");
			}
			else if (step->symbol != WILDCARD_SYMBOL)
			{
				LOG("symbol: %s", query->language->symbol_names[step->symbol]);
			}
			else
			{
				LOG("symbol: *");
			}
			if (step->field)
			{
				LOG(", field: %s", query->language->field_names[step->field]);
			}
			if (step->alternative_index != NONE)
			{
				LOG(", alternative: %u", step->alternative_index);
			}
			LOG("},\n");
		}
	}

	array_clear(&self->states);
	array_clear(&self->finished_states);
	ts_tree_cursor_reset(&self->cursor, node);
	capture_list_pool_reset(&self->capture_list_pool);
	self->on_visible_node = true;
	self->next_state_id = 0;
	self->depth = 0;
	self->ascending = false;
	self->halted = false;
	self->query = query;
	self->did_exceed_match_limit = false;
}

void ts_query_cursor_set_byte_range(t_query_cursor *self, uint32_t start_byte,
									uint32_t end_byte)
{
	if (end_byte == 0)
	{
		end_byte = UINT32_MAX;
	}
	self->start_byte = start_byte;
	self->end_byte = end_byte;
}

void ts_query_cursor_set_point_range(t_query_cursor *self, t_point start_point,
									 t_point end_point)
{
	if (end_point.row == 0 && end_point.column == 0)
	{
		end_point = POINT_MAX;
	}
	self->start_point = start_point;
	self->end_point = end_point;
}

// Search through all of the in-progress states, and find the captured
// node that occurs earliest in the document.
static bool ts_query_cursor__first_in_progress_capture(
	t_query_cursor *self, uint32_t *state_index, uint32_t *byte_offset,
	uint32_t *pattern_index, bool *root_pattern_guaranteed)
{
	bool result = false;
	*state_index = UINT32_MAX;
	*byte_offset = UINT32_MAX;
	*pattern_index = UINT32_MAX;
	for (unsigned i = 0; i < self->states.size; i++)
	{
		t_query_state *state = &self->states.contents[i];
		if (state->dead)
			continue;

		const t_capture_list *captures = capture_list_pool_get(
			&self->capture_list_pool, state->capture_list_id);
		if (state->consumed_capture_count >= captures->size)
		{
			continue;
		}

		t_parse_node node =
			captures->contents[state->consumed_capture_count].node;
		if (ts_node_end_byte(node) <= self->start_byte ||
			point_lte(ts_node_end_point(node), self->start_point))
		{
			state->consumed_capture_count++;
			i--;
			continue;
		}

		uint32_t node_start_byte = ts_node_start_byte(node);
		if (!result || node_start_byte < *byte_offset ||
			(node_start_byte == *byte_offset &&
			 state->pattern_index < *pattern_index))
		{
			t_query_step *step =
				&self->query->steps.contents[state->step_index];
			if (root_pattern_guaranteed)
			{
				*root_pattern_guaranteed = step->root_pattern_guaranteed;
			}
			else if (step->root_pattern_guaranteed)
			{
				continue;
			}

			result = true;
			*state_index = i;
			*byte_offset = node_start_byte;
			*pattern_index = state->pattern_index;
		}
	}
	return result;
}

// Determine which node is first in a depth-first traversal
int ts_query_cursor__compare_nodes(t_parse_node left, t_parse_node right)
{
	if (left.id != right.id)
	{
		uint32_t left_start = ts_node_start_byte(left);
		uint32_t right_start = ts_node_start_byte(right);
		if (left_start < right_start)
			return -1;
		if (left_start > right_start)
			return 1;
		uint32_t left_node_count = ts_node_end_byte(left);
		uint32_t right_node_count = ts_node_end_byte(right);
		if (left_node_count > right_node_count)
			return -1;
		if (left_node_count < right_node_count)
			return 1;
	}
	return 0;
}

// Determine if either state contains a superset of the other state's captures.
void ts_query_cursor__compare_captures(t_query_cursor *self,
									   t_query_state  *left_state,
									   t_query_state  *right_state,
									   bool			  *left_contains_right,
									   bool			  *right_contains_left)
{
	const t_capture_list *left_captures = capture_list_pool_get(
		&self->capture_list_pool, left_state->capture_list_id);
	const t_capture_list *right_captures = capture_list_pool_get(
		&self->capture_list_pool, right_state->capture_list_id);
	*left_contains_right = true;
	*right_contains_left = true;
	unsigned i = 0, j = 0;
	for (;;)
	{
		if (i < left_captures->size)
		{
			if (j < right_captures->size)
			{
				t_query_capture *left = &left_captures->contents[i];
				t_query_capture *right = &right_captures->contents[j];
				if (left->node.id == right->node.id &&
					left->index == right->index)
				{
					i++;
					j++;
				}
				else
				{
					switch (
						ts_query_cursor__compare_nodes(left->node, right->node))
					{
					case -1:
						*right_contains_left = false;
						i++;
						break;
					case 1:
						*left_contains_right = false;
						j++;
						break;
					default:
						*right_contains_left = false;
						*left_contains_right = false;
						i++;
						j++;
						break;
					}
				}
			}
			else
			{
				*right_contains_left = false;
				break;
			}
		}
		else
		{
			if (j < right_captures->size)
			{
				*left_contains_right = false;
			}
			break;
		}
	}
}

static void ts_query_cursor__add_state(t_query_cursor		 *self,
									   const t_pattern_entry *pattern)
{
	t_query_step *step = &self->query->steps.contents[pattern->step_index];
	uint32_t	  start_depth = self->depth - step->depth;

	// Keep the states array in ascending order of start_depth and
	// pattern_index, so that it can be processed more efficiently elsewhere.
	// Usually, there is no work to do here because of two facts:
	// * States with lower start_depth are naturally added first due to the
	//   order in which nodes are visited.
	// * Earlier patterns are naturally added first because of the ordering of
	// the
	//   pattern_map data structure that's used to initiate matches.
	//
	// This loop is only needed in cases where two conditions hold:
	// * A pattern consists of more than one sibling node, so that its states
	//   remain in progress after exiting the node that started the match.
	// * The first node in the pattern matches against multiple nodes at the
	//   same depth.
	//
	// An example of this is the pattern '((comment)* (function))'. If multiple
	// `comment` nodes appear in a row, then we may initiate a new state for
	// this pattern while another state for the same pattern is already in
	// progress. If there are multiple patterns like this in a query, then this
	// loop will need to execute in order to keep the states ordered by
	// pattern_index.
	uint32_t index = self->states.size;
	while (index > 0)
	{
		t_query_state *prev_state = &self->states.contents[index - 1];
		if (prev_state->start_depth < start_depth)
			break;
		if (prev_state->start_depth == start_depth)
		{
			// Avoid inserting an unnecessary duplicate state, which would be
			// immediately pruned by the longest-match criteria.
			if (prev_state->pattern_index == pattern->pattern_index &&
				prev_state->step_index == pattern->step_index)
				return;
			if (prev_state->pattern_index <= pattern->pattern_index)
				break;
		}
		index--;
	}

	LOG("  start state. pattern:%u, step:%u\n", pattern->pattern_index,
		pattern->step_index);
	array_insert(&self->states, index,
				 ((t_query_state){
					 .id = UINT32_MAX,
					 .capture_list_id = NONE,
					 .step_index = pattern->step_index,
					 .pattern_index = pattern->pattern_index,
					 .start_depth = start_depth,
					 .consumed_capture_count = 0,
					 .seeking_immediate_match = true,
					 .has_in_progress_alternatives = false,
					 .needs_parent = step->depth == 1,
					 .dead = false,
				 }));
}

// Acquire a capture list for this state. If there are no capture lists left in
// the pool, this will steal the capture list from another existing state, and
// mark that other state as 'dead'.
static t_capture_list *ts_query_cursor__prepare_to_capture(
	t_query_cursor *self, t_query_state *state,
	unsigned state_index_to_preserve)
{
	if (state->capture_list_id == NONE)
	{
		state->capture_list_id =
			capture_list_pool_acquire(&self->capture_list_pool);

		// If there are no capture lists left in the pool, then terminate
		// whichever state has captured the earliest node in the document, and
		// steal its capture list.
		if (state->capture_list_id == NONE)
		{
			self->did_exceed_match_limit = true;
			uint32_t state_index, byte_offset, pattern_index;
			if (ts_query_cursor__first_in_progress_capture(
					self, &state_index, &byte_offset, &pattern_index, NULL) &&
				state_index != state_index_to_preserve)
			{
				LOG("  abandon state. index:%u, pattern:%u, offset:%u.\n",
					state_index, pattern_index, byte_offset);
				t_query_state *other_state =
					&self->states.contents[state_index];
				state->capture_list_id = other_state->capture_list_id;
				other_state->capture_list_id = NONE;
				other_state->dead = true;
				t_capture_list *list = capture_list_pool_get_mut(
					&self->capture_list_pool, state->capture_list_id);
				array_clear(list);
				return list;
			}
			else
			{
				LOG("  ran out of capture lists");
				return NULL;
			}
		}
	}
	return capture_list_pool_get_mut(&self->capture_list_pool,
									 state->capture_list_id);
}

static void ts_query_cursor__capture(t_query_cursor *self, t_query_state *state,
									 t_query_step *step, t_parse_node node)
{
	if (state->dead)
		return;
	t_capture_list *capture_list =
		ts_query_cursor__prepare_to_capture(self, state, UINT32_MAX);
	if (!capture_list)
	{
		state->dead = true;
		return;
	}

	for (unsigned j = 0; j < MAX_STEP_CAPTURE_COUNT; j++)
	{
		uint16_t capture_id = step->capture_ids[j];
		if (step->capture_ids[j] == NONE)
			break;
		array_push(capture_list, ((t_query_capture){node, capture_id}));
		LOG("  capture node. type:%s, pattern:%u, capture_id:%u, "
			"capture_count:%u\n",
			ts_node_type(node), state->pattern_index, capture_id,
			capture_list->size);
	}
}

// Duplicate the given state and insert the newly-created state immediately
// after the given state in the `states` array. Ensures that the given state
// reference is still valid, even if the states array is reallocated.
static t_query_state *ts_query_cursor__copy_state(t_query_cursor *self,
												  t_query_state **state_ref)
{
	const t_query_state *state = *state_ref;
	uint32_t	  state_index = (uint32_t)(state - self->states.contents);
	t_query_state copy = *state;
	copy.capture_list_id = NONE;

	// If the state has captures, copy its capture list.
	if (state->capture_list_id != NONE)
	{
		t_capture_list *new_captures =
			ts_query_cursor__prepare_to_capture(self, &copy, state_index);
		if (!new_captures)
			return NULL;
		const t_capture_list *old_captures = capture_list_pool_get(
			&self->capture_list_pool, state->capture_list_id);
		array_push_all(new_captures, old_captures);
	}

	array_insert(&self->states, state_index + 1, copy);
	*state_ref = &self->states.contents[state_index];
	return &self->states.contents[state_index + 1];
}

static inline bool ts_query_cursor__should_descend(t_query_cursor *self,
												   bool node_intersects_range)
{

	if (node_intersects_range && self->depth < self->max_start_depth)
	{
		return true;
	}

	// If there are in-progress matches whose remaining steps occur
	// deeper in the tree, then descend.
	for (unsigned i = 0; i < self->states.size; i++)
	{
		t_query_state *state = &self->states.contents[i];
		;
		t_query_step *next_step =
			&self->query->steps.contents[state->step_index];
		if (next_step->depth != PATTERN_DONE_MARKER &&
			state->start_depth + next_step->depth > self->depth)
		{
			return true;
		}
	}

	if (self->depth >= self->max_start_depth)
	{
		return false;
	}

	// If the current node is hidden, then a non-rooted pattern might match
	// one if its roots inside of this node, and match another of its roots
	// as part of a sibling node, so we may need to descend.
	if (!self->on_visible_node)
	{
		// Descending into a repetition node outside of the range can be
		// expensive, because these nodes can have many visible children.
		// Avoid descending into repetition nodes unless we have already
		// determined that this query can match rootless patterns inside
		// of this type of repetition node.
		t_subtree subtree = ts_tree_cursor_current_subtree(&self->cursor);
		if (ts_subtree_is_repetition(subtree))
		{
			bool	 exists;
			uint32_t index;
			array_search_sorted_by(
				&self->query->repeat_symbols_with_rootless_patterns, ,
				ts_subtree_symbol(subtree), &index, &exists);
			return exists;
		}

		return true;
	}

	return false;
}

// Walk the tree, processing patterns until at least one pattern finishes,
// If one or more patterns finish, return `true` and store their states in the
// `finished_states` array. Multiple patterns can finish on the same node. If
// there are no more matches, return `false`.
static inline bool ts_query_cursor__advance(t_query_cursor *self,
											bool stop_on_definite_step)
{
	bool did_match = false;
	for (;;)
	{
		if (self->halted)
		{
			while (self->states.size > 0)
			{
				t_query_state state = array_pop(&self->states);
				capture_list_pool_release(&self->capture_list_pool,
										  state.capture_list_id);
			}
		}

		if (did_match || self->halted)
			return did_match;

		// Exit the current node.
		if (self->ascending)
		{
			if (self->on_visible_node)
			{
				LOG("leave node. depth:%u, type:%s\n", self->depth,
					ts_node_type(ts_tree_cursor_current_node(&self->cursor)));

				// After leaving a node, remove any states that cannot make
				// further progress.
				uint32_t deleted_count = 0;
				for (unsigned i = 0, n = self->states.size; i < n; i++)
				{
					t_query_state *state = &self->states.contents[i];
					t_query_step  *step =
						&self->query->steps.contents[state->step_index];

					// If a state completed its pattern inside of this node, but
					// was deferred from finishing in order to search for longer
					// matches, mark it as finished.
					if (step->depth == PATTERN_DONE_MARKER &&
						(state->start_depth > self->depth || self->depth == 0))
					{
						LOG("  finish pattern %u\n", state->pattern_index);
						array_push(&self->finished_states, *state);
						did_match = true;
						deleted_count++;
					}

					// If a state needed to match something within this node,
					// then remove that state as it has failed to match.
					else if (step->depth != PATTERN_DONE_MARKER &&
							 (uint32_t)state->start_depth +
									 (uint32_t)step->depth >
								 self->depth)
					{
						LOG("  failed to match. pattern:%u, step:%u\n",
							state->pattern_index, state->step_index);
						capture_list_pool_release(&self->capture_list_pool,
												  state->capture_list_id);
						deleted_count++;
					}

					else if (deleted_count > 0)
					{
						self->states.contents[i - deleted_count] = *state;
					}
				}
				self->states.size -= deleted_count;
			}

			// Leave this node by stepping to its next sibling or to its parent.
			switch (ts_tree_cursor_goto_next_sibling_internal(&self->cursor))
			{
			case TreeCursorStepVisible:
				if (!self->on_visible_node)
				{
					self->depth++;
					self->on_visible_node = true;
				}
				self->ascending = false;
				break;
			case TreeCursorStepHidden:
				if (self->on_visible_node)
				{
					self->depth--;
					self->on_visible_node = false;
				}
				self->ascending = false;
				break;
			default:
				if (ts_tree_cursor_goto_parent(&self->cursor))
				{
					self->depth--;
				}
				else
				{
					LOG("halt at root\n");
					self->halted = true;
				}
			}
		}

		// Enter a new node.
		else
		{
			// Get the properties of the current node.
			t_parse_node node = ts_tree_cursor_current_node(&self->cursor);
			t_parse_node parent_node =
				ts_tree_cursor_parent_node(&self->cursor);
			bool parent_precedes_range =
				!ts_node_is_null(parent_node) &&
				(ts_node_end_byte(parent_node) <= self->start_byte ||
				 point_lte(ts_node_end_point(parent_node), self->start_point));
			bool parent_follows_range =
				!ts_node_is_null(parent_node) &&
				(ts_node_start_byte(parent_node) >= self->end_byte ||
				 point_gte(ts_node_start_point(parent_node), self->end_point));
			bool node_precedes_range =
				parent_precedes_range ||
				(ts_node_end_byte(node) <= self->start_byte ||
				 point_lte(ts_node_end_point(node), self->start_point));
			bool node_follows_range =
				parent_follows_range ||
				(ts_node_start_byte(node) >= self->end_byte ||
				 point_gte(ts_node_start_point(node), self->end_point));
			bool parent_intersects_range =
				!parent_precedes_range && !parent_follows_range;
			bool node_intersects_range =
				!node_precedes_range && !node_follows_range;

			if (self->on_visible_node)
			{
				t_symbol   symbol = ts_node_symbol(node);
				bool	   is_named = ts_node_is_named(node);
				bool	   has_later_siblings;
				bool	   has_later_named_siblings;
				bool	   can_have_later_siblings_with_this_field;
				t_field_id field_id = 0;
				t_symbol   supertypes[8] = {0};
				unsigned   supertype_count = 8;
				ts_tree_cursor_current_status(
					&self->cursor, &field_id, &has_later_siblings,
					&has_later_named_siblings,
					&can_have_later_siblings_with_this_field, supertypes,
					&supertype_count);
				LOG("enter node. depth:%u, type:%s, field:%s, row:%u "
					"state_count:%u, finished_state_count:%u\n",
					self->depth, ts_node_type(node),
					ts_language_field_name_for_id(self->query->language,
												  field_id),
					ts_node_start_point(node).row, self->states.size,
					self->finished_states.size);

				bool node_is_error = symbol == ts_builtin_sym_error;
				bool parent_is_error =
					!ts_node_is_null(parent_node) &&
					ts_node_symbol(parent_node) == ts_builtin_sym_error;

				// Add new states for any patterns whose root node is a
				// wildcard.
				if (!node_is_error)
				{
					for (unsigned i = 0;
						 i < self->query->wildcard_root_pattern_count; i++)
					{
						t_pattern_entry *pattern =
							&self->query->pattern_map.contents[i];

						// If this node matches the first step of the pattern,
						// then add a new state at the start of this pattern.
						t_query_step *step =
							&self->query->steps.contents[pattern->step_index];
						uint32_t start_depth = self->depth - step->depth;
						if ((pattern->is_rooted ? node_intersects_range
												: (parent_intersects_range &&
												   !parent_is_error)) &&
							(!step->field || field_id == step->field) &&
							(!step->supertype_symbol || supertype_count > 0) &&
							(start_depth <= self->max_start_depth))
						{
							ts_query_cursor__add_state(self, pattern);
						}
					}
				}

				// Add new states for any patterns whose root node matches this
				// node.
				unsigned i;
				if (ts_query__pattern_map_search(self->query, symbol, &i))
				{
					t_pattern_entry *pattern =
						&self->query->pattern_map.contents[i];

					t_query_step *step =
						&self->query->steps.contents[pattern->step_index];
					uint32_t start_depth = self->depth - step->depth;
					do
					{
						// If this node matches the first step of the pattern,
						// then add a new state at the start of this pattern.
						if ((pattern->is_rooted ? node_intersects_range
												: (parent_intersects_range &&
												   !parent_is_error)) &&
							(!step->field || field_id == step->field) &&
							(start_depth <= self->max_start_depth))
						{
							ts_query_cursor__add_state(self, pattern);
						}

						// Advance to the next pattern whose root node matches
						// this node.
						i++;
						if (i == self->query->pattern_map.size)
							break;
						pattern = &self->query->pattern_map.contents[i];
						step =
							&self->query->steps.contents[pattern->step_index];
					} while (step->symbol == symbol);
				}

				// Update all of the in-progress states with current node.
				for (unsigned j = 0, copy_count = 0; j < self->states.size;
					 j += 1 + copy_count)
				{
					t_query_state *state = &self->states.contents[j];
					t_query_step  *step =
						&self->query->steps.contents[state->step_index];
					state->has_in_progress_alternatives = false;
					copy_count = 0;

					// Check that the node matches all of the criteria for the
					// next step of the pattern.
					if ((uint32_t)state->start_depth + (uint32_t)step->depth !=
						self->depth)
						continue;

					// Determine if this node matches this step of the pattern,
					// and also if this node can have later siblings that match
					// this step of the pattern.
					bool node_does_match = false;
					if (step->symbol == WILDCARD_SYMBOL)
					{
						node_does_match =
							!node_is_error && (is_named || !step->is_named);
					}
					else
					{
						node_does_match = symbol == step->symbol;
					}
					bool later_sibling_can_match = has_later_siblings;
					if ((step->is_immediate && is_named) ||
						state->seeking_immediate_match)
					{
						later_sibling_can_match = false;
					}
					if (step->is_last_child && has_later_named_siblings)
					{
						node_does_match = false;
					}
					if (step->supertype_symbol)
					{
						bool has_supertype = false;
						for (unsigned k = 0; k < supertype_count; k++)
						{
							if (supertypes[k] == step->supertype_symbol)
							{
								has_supertype = true;
								break;
							}
						}
						if (!has_supertype)
							node_does_match = false;
					}
					if (step->field)
					{
						if (step->field == field_id)
						{
							if (!can_have_later_siblings_with_this_field)
							{
								later_sibling_can_match = false;
							}
						}
						else
						{
							node_does_match = false;
						}
					}

					if (step->negated_field_list_id)
					{
						t_field_id *negated_field_ids =
							&self->query->negated_fields
								 .contents[step->negated_field_list_id];
						for (;;)
						{
							t_field_id negated_field_id = *negated_field_ids;
							if (negated_field_id)
							{
								negated_field_ids++;
								if (ts_node_child_by_field_id(node,
															  negated_field_id)
										.id)
								{
									node_does_match = false;
									break;
								}
							}
							else
							{
								break;
							}
						}
					}

					// Remove states immediately if it is ever clear that they
					// cannot match.
					if (!node_does_match)
					{
						if (!later_sibling_can_match)
						{
							LOG("  discard state. pattern:%u, step:%u\n",
								state->pattern_index, state->step_index);
							capture_list_pool_release(&self->capture_list_pool,
													  state->capture_list_id);
							array_erase(&self->states, j);
							j--;
						}
						continue;
					}

					// Some patterns can match their root node in multiple ways,
					// capturing different children. If this pattern step could
					// match later children within the same parent, then this
					// query state cannot simply be updated in place. It must be
					// split into two states: one that matches this node, and
					// one which skips over this node, to preserve the
					// possibility of matching later siblings.
					if (later_sibling_can_match &&
						(step->contains_captures ||
						 ts_query__step_is_fallible(self->query,
													state->step_index)))
					{
						if (ts_query_cursor__copy_state(self, &state))
						{
							LOG("  split state for capture. pattern:%u, "
								"step:%u\n",
								state->pattern_index, state->step_index);
							copy_count++;
						}
					}

					// If this pattern started with a wildcard, such that the
					// pattern map actually points to the *second* step of the
					// pattern, then check that the node has a parent, and
					// capture the parent node if necessary.
					if (state->needs_parent)
					{
						t_parse_node parent =
							ts_tree_cursor_parent_node(&self->cursor);
						if (ts_node_is_null(parent))
						{
							LOG("  missing parent node\n");
							state->dead = true;
						}
						else
						{
							state->needs_parent = false;
							t_query_step *skipped_wildcard_step = step;
							do
							{
								skipped_wildcard_step--;
							} while (skipped_wildcard_step->is_dead_end ||
									 skipped_wildcard_step->is_pass_through ||
									 skipped_wildcard_step->depth > 0);
							if (skipped_wildcard_step->capture_ids[0] != NONE)
							{
								LOG("  capture wildcard parent\n");
								ts_query_cursor__capture(
									self, state, skipped_wildcard_step, parent);
							}
						}
					}

					// If the current node is captured in this pattern, add it
					// to the capture list.
					if (step->capture_ids[0] != NONE)
					{
						ts_query_cursor__capture(self, state, step, node);
					}

					if (state->dead)
					{
						array_erase(&self->states, j);
						j--;
						continue;
					}

					// Advance this state to the next step of its pattern.
					state->step_index++;
					state->seeking_immediate_match = false;
					LOG("  advance state. pattern:%u, step:%u\n",
						state->pattern_index, state->step_index);

					t_query_step *next_step =
						&self->query->steps.contents[state->step_index];
					if (stop_on_definite_step &&
						next_step->root_pattern_guaranteed)
						did_match = true;

					// If this state's next step has an alternative step, then
					// copy the state in order to pursue both alternatives. The
					// alternative step itself may have an alternative, so this
					// is an interactive process.
					unsigned end_index = j + 1;
					for (unsigned k = j; k < end_index; k++)
					{
						t_query_state *child_state = &self->states.contents[k];
						t_query_step  *child_step =
							&self->query->steps
								 .contents[child_state->step_index];
						if (child_step->alternative_index != NONE)
						{
							// A "dead-end" step exists only to add a
							// non-sequential jump into the step sequence, via
							// its alternative index. When a state reaches a
							// dead-end step, it jumps straight to the step's
							// alternative.
							if (child_step->is_dead_end)
							{
								child_state->step_index =
									child_step->alternative_index;
								k--;
								continue;
							}

							// A "pass-through" step exists only to add a branch
							// into the step sequence, via its
							// alternative_index. When a state reaches a
							// pass-through step, it splits in order to process
							// the alternative step, and then it advances to the
							// next step.
							if (child_step->is_pass_through)
							{
								child_state->step_index++;
								k--;
							}

							t_query_state *copy =
								ts_query_cursor__copy_state(self, &child_state);
							if (copy)
							{
								LOG("  split state for branch. pattern:%u, "
									"from_step:%u, to_step:%u, immediate:%d, "
									"capture_count: %u\n",
									copy->pattern_index, copy->step_index,
									next_step->alternative_index,
									next_step->alternative_is_immediate,
									capture_list_pool_get(
										&self->capture_list_pool,
										copy->capture_list_id)
										->size);
								end_index++;
								copy_count++;
								copy->step_index =
									child_step->alternative_index;
								if (child_step->alternative_is_immediate)
								{
									copy->seeking_immediate_match = true;
								}
							}
						}
					}
				}

				for (unsigned j = 0; j < self->states.size; j++)
				{
					t_query_state *state = &self->states.contents[j];
					if (state->dead)
					{
						array_erase(&self->states, j);
						j--;
						continue;
					}

					// Enforce the longest-match criteria. When a query pattern
					// contains optional or repeated nodes, this is necessary to
					// avoid multiple redundant states, where one state has a
					// strict subset of another state's captures.
					bool did_remove = false;
					for (unsigned k = j + 1; k < self->states.size; k++)
					{
						t_query_state *other_state = &self->states.contents[k];

						// Query states are kept in ascending order of
						// start_depth and pattern_index. Since the
						// longest-match criteria is only used for deduping
						// matches of the same pattern and root node, we only
						// need to perform pairwise comparisons within a small
						// slice of the states array.
						if (other_state->start_depth != state->start_depth ||
							other_state->pattern_index != state->pattern_index)
							break;

						bool left_contains_right, right_contains_left;
						ts_query_cursor__compare_captures(
							self, state, other_state, &left_contains_right,
							&right_contains_left);
						if (left_contains_right)
						{
							if (state->step_index == other_state->step_index)
							{
								LOG("  drop shorter state. pattern: %u, "
									"step_index: %u\n",
									state->pattern_index, state->step_index);
								capture_list_pool_release(
									&self->capture_list_pool,
									other_state->capture_list_id);
								array_erase(&self->states, k);
								k--;
								continue;
							}
							other_state->has_in_progress_alternatives = true;
						}
						if (right_contains_left)
						{
							if (state->step_index == other_state->step_index)
							{
								LOG("  drop shorter state. pattern: %u, "
									"step_index: %u\n",
									state->pattern_index, state->step_index);
								capture_list_pool_release(
									&self->capture_list_pool,
									state->capture_list_id);
								array_erase(&self->states, j);
								j--;
								did_remove = true;
								break;
							}
							state->has_in_progress_alternatives = true;
						}
					}

					// If the state is at the end of its pattern, remove it from
					// the list of in-progress states and add it to the list of
					// finished states.
					if (!did_remove)
					{
						LOG("  keep state. pattern: %u, start_depth: %u, "
							"step_index: %u, capture_count: %u\n",
							state->pattern_index, state->start_depth,
							state->step_index,
							capture_list_pool_get(&self->capture_list_pool,
												  state->capture_list_id)
								->size);
						t_query_step *next_step =
							&self->query->steps.contents[state->step_index];
						if (next_step->depth == PATTERN_DONE_MARKER)
						{
							if (state->has_in_progress_alternatives)
							{
								LOG("  defer finishing pattern %u\n",
									state->pattern_index);
							}
							else
							{
								LOG("  finish pattern %u\n",
									state->pattern_index);
								array_push(&self->finished_states, *state);
								array_erase(
									&self->states,
									(uint32_t)(state - self->states.contents));
								did_match = true;
								j--;
							}
						}
					}
				}
			}

			if (ts_query_cursor__should_descend(self, node_intersects_range))
			{
				switch (ts_tree_cursor_goto_first_child_internal(&self->cursor))
				{
				case TreeCursorStepVisible:
					self->depth++;
					self->on_visible_node = true;
					continue;
				case TreeCursorStepHidden:
					self->on_visible_node = false;
					continue;
				default:
					break;
				}
			}

			self->ascending = true;
		}
	}
}

bool ts_query_cursor_next_match(t_query_cursor *self, t_query_match *match)
{
	if (self->finished_states.size == 0)
	{
		if (!ts_query_cursor__advance(self, false))
		{
			return false;
		}
	}

	t_query_state *state = &self->finished_states.contents[0];
	if (state->id == UINT32_MAX)
		state->id = self->next_state_id++;
	match->id = state->id;
	match->pattern_index = state->pattern_index;
	const t_capture_list *captures =
		capture_list_pool_get(&self->capture_list_pool, state->capture_list_id);
	match->captures = captures->contents;
	match->capture_count = captures->size;
	capture_list_pool_release(&self->capture_list_pool, state->capture_list_id);
	array_erase(&self->finished_states, 0);
	return true;
}

void ts_query_cursor_remove_match(t_query_cursor *self, uint32_t match_id)
{
	for (unsigned i = 0; i < self->finished_states.size; i++)
	{
		const t_query_state *state = &self->finished_states.contents[i];
		if (state->id == match_id)
		{
			capture_list_pool_release(&self->capture_list_pool,
									  state->capture_list_id);
			array_erase(&self->finished_states, i);
			return;
		}
	}

	// Remove unfinished query states as well to prevent future
	// captures for a match being removed.
	for (unsigned i = 0; i < self->states.size; i++)
	{
		const t_query_state *state = &self->states.contents[i];
		if (state->id == match_id)
		{
			capture_list_pool_release(&self->capture_list_pool,
									  state->capture_list_id);
			array_erase(&self->states, i);
			return;
		}
	}
}

bool ts_query_cursor_next_capture(t_query_cursor *self, t_query_match *match,
								  uint32_t *capture_index)
{
	// The goal here is to return captures in order, even though they may not
	// be discovered in order, because patterns can overlap. Search for matches
	// until there is a finished capture that is before any unfinished capture.
	for (;;)
	{
		// First, find the earliest capture in an unfinished match.
		uint32_t first_unfinished_capture_byte;
		uint32_t first_unfinished_pattern_index;
		uint32_t first_unfinished_state_index;
		bool	 first_unfinished_state_is_definite = false;
		ts_query_cursor__first_in_progress_capture(
			self, &first_unfinished_state_index, &first_unfinished_capture_byte,
			&first_unfinished_pattern_index,
			&first_unfinished_state_is_definite);

		// Then find the earliest capture in a finished match. It must occur
		// before the first capture in an *unfinished* match.
		t_query_state *first_finished_state = NULL;
		uint32_t first_finished_capture_byte = first_unfinished_capture_byte;
		uint32_t first_finished_pattern_index = first_unfinished_pattern_index;
		for (unsigned i = 0; i < self->finished_states.size;)
		{
			t_query_state		 *state = &self->finished_states.contents[i];
			const t_capture_list *captures = capture_list_pool_get(
				&self->capture_list_pool, state->capture_list_id);

			// Remove states whose captures are all consumed.
			if (state->consumed_capture_count >= captures->size)
			{
				capture_list_pool_release(&self->capture_list_pool,
										  state->capture_list_id);
				array_erase(&self->finished_states, i);
				continue;
			}

			t_parse_node node =
				captures->contents[state->consumed_capture_count].node;

			bool node_precedes_range =
				(ts_node_end_byte(node) <= self->start_byte ||
				 point_lte(ts_node_end_point(node), self->start_point));
			bool node_follows_range =
				(ts_node_start_byte(node) >= self->end_byte ||
				 point_gte(ts_node_start_point(node), self->end_point));
			bool node_outside_of_range =
				node_precedes_range || node_follows_range;

			// Skip captures that are outside of the cursor's range.
			if (node_outside_of_range)
			{
				state->consumed_capture_count++;
				continue;
			}

			uint32_t node_start_byte = ts_node_start_byte(node);
			if (node_start_byte < first_finished_capture_byte ||
				(node_start_byte == first_finished_capture_byte &&
				 state->pattern_index < first_finished_pattern_index))
			{
				first_finished_state = state;
				first_finished_capture_byte = node_start_byte;
				first_finished_pattern_index = state->pattern_index;
			}
			i++;
		}

		// If there is finished capture that is clearly before any unfinished
		// capture, then return its match, and its capture index. Internally
		// record the fact that the capture has been 'consumed'.
		t_query_state *state;
		if (first_finished_state)
		{
			state = first_finished_state;
		}
		else if (first_unfinished_state_is_definite)
		{
			state = &self->states.contents[first_unfinished_state_index];
		}
		else
		{
			state = NULL;
		}

		if (state)
		{
			if (state->id == UINT32_MAX)
				state->id = self->next_state_id++;
			match->id = state->id;
			match->pattern_index = state->pattern_index;
			const t_capture_list *captures = capture_list_pool_get(
				&self->capture_list_pool, state->capture_list_id);
			match->captures = captures->contents;
			match->capture_count = captures->size;
			*capture_index = state->consumed_capture_count;
			state->consumed_capture_count++;
			return true;
		}

		if (capture_list_pool_is_empty(&self->capture_list_pool))
		{
			LOG("  abandon state. index:%u, pattern:%u, offset:%u.\n",
				first_unfinished_state_index, first_unfinished_pattern_index,
				first_unfinished_capture_byte);
			capture_list_pool_release(
				&self->capture_list_pool,
				self->states.contents[first_unfinished_state_index]
					.capture_list_id);
			array_erase(&self->states, first_unfinished_state_index);
		}

		// If there are no finished matches that are ready to be returned, then
		// continue finding more matches.
		if (!ts_query_cursor__advance(self, true) &&
			self->finished_states.size == 0)
			return false;
	}
}

void ts_query_cursor_set_max_start_depth(t_query_cursor *self,
										 uint32_t		 max_start_depth)
{
	self->max_start_depth = max_start_depth;
}

#undef LOG

static void stack_node_retain(t_stack_node *self)
{
	if (!self)
		return;
	assert(self->ref_count > 0);
	self->ref_count++;
	assert(self->ref_count != 0);
}

static void stack_node_release(t_stack_node *self, t_stack_node_array *pool,
							   t_subtree_pool *subtree_pool)
{
recur:
	assert(self->ref_count != 0);
	self->ref_count--;
	if (self->ref_count > 0)
		return;

	t_stack_node *first_predecessor = NULL;
	if (self->link_count > 0)
	{
		for (unsigned i = self->link_count - 1; i > 0; i--)
		{
			t_stack_link link = self->links[i];
			if (link.subtree.ptr)
				ts_subtree_release(subtree_pool, link.subtree);
			stack_node_release(link.node, pool, subtree_pool);
		}
		t_stack_link link = self->links[0];
		if (link.subtree.ptr)
			ts_subtree_release(subtree_pool, link.subtree);
		first_predecessor = self->links[0].node;
	}

	if (pool->size < MAX_NODE_POOL_SIZE)
	{
		array_push(pool, self);
	}
	else
	{
		free(self);
	}

	if (first_predecessor)
	{
		self = first_predecessor;
		goto recur;
	}
}

/// Get the number of nodes in the subtree, for the purpose of measuring
/// how much progress has been made by a given version of the stack.
static uint32_t stack__subtree_node_count(t_subtree subtree)
{
	uint32_t count = ts_subtree_visible_descendant_count(subtree);
	if (ts_subtree_visible(subtree))
		count++;

	// Count intermediate error nodes even though they are not visible,
	// because a stack version's node count is used to check whether it
	// has made any progress since the last time it encountered an error.
	if (ts_subtree_symbol(subtree) == ts_builtin_sym_error_repeat)
		count++;

	return count;
}

static t_stack_node *stack_node_new(t_stack_node *previous_node,
									t_subtree subtree, bool is_pending,
									t_state_id state, t_stack_node_array *pool)
{
	t_stack_node *node =
		pool->size > 0 ? array_pop(pool) : malloc(sizeof(t_stack_node));
	*node = (t_stack_node){.ref_count = 1, .link_count = 0, .state = state};

	if (previous_node)
	{
		node->link_count = 1;
		node->links[0] = (t_stack_link){
			.node = previous_node,
			.subtree = subtree,
			.is_pending = is_pending,
		};

		node->position = previous_node->position;
		node->error_cost = previous_node->error_cost;
		node->dynamic_precedence = previous_node->dynamic_precedence;
		node->node_count = previous_node->node_count;

		if (subtree.ptr)
		{
			node->error_cost += ts_subtree_error_cost(subtree);
			node->position =
				length_add(node->position, ts_subtree_total_size(subtree));
			node->node_count += stack__subtree_node_count(subtree);
			node->dynamic_precedence += ts_subtree_dynamic_precedence(subtree);
		}
	}
	else
	{
		node->position = length_zero();
		node->error_cost = 0;
	}

	return node;
}

static bool stack__subtree_is_equivalent(t_subtree left, t_subtree right)
{
	if (left.ptr == right.ptr)
		return true;
	if (!left.ptr || !right.ptr)
		return false;

	// Symbols must match
	if (ts_subtree_symbol(left) != ts_subtree_symbol(right))
		return false;

	// If both have errors, don't bother keeping both.
	if (ts_subtree_error_cost(left) > 0 && ts_subtree_error_cost(right) > 0)
		return true;

	return (ts_subtree_padding(left).bytes == ts_subtree_padding(right).bytes &&
			ts_subtree_size(left).bytes == ts_subtree_size(right).bytes &&
			ts_subtree_child_count(left) == ts_subtree_child_count(right) &&
			ts_subtree_extra(left) == ts_subtree_extra(right) &&
			ts_subtree_external_scanner_state_eq(left, right));
}

static void stack_node_add_link(t_stack_node *self, t_stack_link link,
								t_subtree_pool *subtree_pool)
{
	if (link.node == self)
		return;

	for (int i = 0; i < self->link_count; i++)
	{
		t_stack_link *existing_link = &self->links[i];
		if (stack__subtree_is_equivalent(existing_link->subtree, link.subtree))
		{
			// In general, we preserve ambiguities until they are removed from
			// the stack during a pop operation where multiple paths lead to the
			// same node. But in the special case where two links directly
			// connect the same pair of nodes, we can safely remove the
			// ambiguity ahead of time without changing behavior.
			if (existing_link->node == link.node)
			{
				if (ts_subtree_dynamic_precedence(link.subtree) >
					ts_subtree_dynamic_precedence(existing_link->subtree))
				{
					ts_subtree_retain(link.subtree);
					ts_subtree_release(subtree_pool, existing_link->subtree);
					existing_link->subtree = link.subtree;
					self->dynamic_precedence =
						link.node->dynamic_precedence +
						ts_subtree_dynamic_precedence(link.subtree);
				}
				return;
			}

			// If the previous nodes are mergeable, merge them recursively.
			if (existing_link->node->state == link.node->state &&
				existing_link->node->position.bytes ==
					link.node->position.bytes &&
				existing_link->node->error_cost == link.node->error_cost)
			{
				for (int j = 0; j < link.node->link_count; j++)
				{
					stack_node_add_link(existing_link->node,
										link.node->links[j], subtree_pool);
				}
				int32_t dynamic_precedence = link.node->dynamic_precedence;
				if (link.subtree.ptr)
				{
					dynamic_precedence +=
						ts_subtree_dynamic_precedence(link.subtree);
				}
				if (dynamic_precedence > self->dynamic_precedence)
				{
					self->dynamic_precedence = dynamic_precedence;
				}
				return;
			}
		}
	}

	if (self->link_count == MAX_LINK_COUNT)
		return;

	stack_node_retain(link.node);
	unsigned node_count = link.node->node_count;
	int		 dynamic_precedence = link.node->dynamic_precedence;
	self->links[self->link_count++] = link;

	if (link.subtree.ptr)
	{
		ts_subtree_retain(link.subtree);
		node_count += stack__subtree_node_count(link.subtree);
		dynamic_precedence += ts_subtree_dynamic_precedence(link.subtree);
	}

	if (node_count > self->node_count)
		self->node_count = node_count;
	if (dynamic_precedence > self->dynamic_precedence)
		self->dynamic_precedence = dynamic_precedence;
}

static void stack_head_delete(t_stack_head *self, t_stack_node_array *pool,
							  t_subtree_pool *subtree_pool)
{
	if (self->node)
	{
		if (self->last_external_token.ptr)
		{
			ts_subtree_release(subtree_pool, self->last_external_token);
		}
		if (self->lookahead_when_paused.ptr)
		{
			ts_subtree_release(subtree_pool, self->lookahead_when_paused);
		}
		if (self->summary)
		{
			array_delete(self->summary);
			free(self->summary);
		}
		stack_node_release(self->node, pool, subtree_pool);
	}
}

static t_stack_version ts_stack__add_version(t_stack		*self,
											 t_stack_version original_version,
											 t_stack_node	*node)
{
	t_stack_head head = {
		.node = node,
		.node_count_at_last_error =
			self->heads.contents[original_version].node_count_at_last_error,
		.last_external_token =
			self->heads.contents[original_version].last_external_token,
		.status = StackStatusActive,
		.lookahead_when_paused = NULL_SUBTREE,
	};
	array_push(&self->heads, head);
	stack_node_retain(node);
	if (head.last_external_token.ptr)
		ts_subtree_retain(head.last_external_token);
	return (t_stack_version)(self->heads.size - 1);
}

static void ts_stack__add_slice(t_stack *self, t_stack_version original_version,
								t_stack_node *node, t_subtree_array *subtrees)
{
	for (uint32_t i = self->slices.size - 1; i + 1 > 0; i--)
	{
		t_stack_version version = self->slices.contents[i].version;
		if (self->heads.contents[version].node == node)
		{
			t_stack_slice slice = {*subtrees, version};
			array_insert(&self->slices, i + 1, slice);
			return;
		}
	}

	t_stack_version version =
		ts_stack__add_version(self, original_version, node);
	t_stack_slice slice = {*subtrees, version};
	array_push(&self->slices, slice);
}

static t_stack_slice_array stack__iter(t_stack *self, t_stack_version version,
									   t_stack_callback callback, void *payload,
									   int goal_subtree_count)
{
	array_clear(&self->slices);
	array_clear(&self->iterators);

	t_stack_head	*head = array_get(&self->heads, version);
	t_stack_iterator new_iterator = {
		.node = head->node,
		.subtrees = array_new(),
		.subtree_count = 0,
		.is_pending = true,
	};

	bool include_subtrees = false;
	if (goal_subtree_count >= 0)
	{
		include_subtrees = true;
		array_reserve(&new_iterator.subtrees,
					  (uint32_t)ts_subtree_alloc_size(goal_subtree_count) /
						  sizeof(t_subtree));
	}

	array_push(&self->iterators, new_iterator);

	while (self->iterators.size > 0)
	{
		for (uint32_t i = 0, size = self->iterators.size; i < size; i++)
		{
			t_stack_iterator *iterator = &self->iterators.contents[i];
			t_stack_node	 *node = iterator->node;

			t_stack_action action = callback(payload, iterator);
			bool		   should_pop = action & StackActionPop;
			bool		   should_stop =
				action & StackActionStop || node->link_count == 0;

			if (should_pop)
			{
				t_subtree_array subtrees = iterator->subtrees;
				if (!should_stop)
				{
					ts_subtree_array_copy(subtrees, &subtrees);
				}
				ts_subtree_array_reverse(&subtrees);
				ts_stack__add_slice(self, version, node, &subtrees);
			}

			if (should_stop)
			{
				if (!should_pop)
				{
					ts_subtree_array_delete(self->subtree_pool,
											&iterator->subtrees);
				}
				array_erase(&self->iterators, i);
				i--, size--;
				continue;
			}

			for (uint32_t j = 1; j <= node->link_count; j++)
			{
				t_stack_iterator *next_iterator;
				t_stack_link	  link;
				if (j == node->link_count)
				{
					link = node->links[0];
					next_iterator = &self->iterators.contents[i];
				}
				else
				{
					if (self->iterators.size >= MAX_ITERATOR_COUNT)
						continue;
					link = node->links[j];
					t_stack_iterator current_iterator =
						self->iterators.contents[i];
					array_push(&self->iterators, current_iterator);
					next_iterator = array_back(&self->iterators);
					ts_subtree_array_copy(next_iterator->subtrees,
										  &next_iterator->subtrees);
				}

				next_iterator->node = link.node;
				if (link.subtree.ptr)
				{
					if (include_subtrees)
					{
						array_push(&next_iterator->subtrees, link.subtree);
						ts_subtree_retain(link.subtree);
					}

					if (!ts_subtree_extra(link.subtree))
					{
						next_iterator->subtree_count++;
						if (!link.is_pending)
						{
							next_iterator->is_pending = false;
						}
					}
				}
				else
				{
					next_iterator->subtree_count++;
					next_iterator->is_pending = false;
				}
			}
		}
	}

	return self->slices;
}

t_stack *ts_stack_new(t_subtree_pool *subtree_pool)
{
	t_stack *self = calloc(1, sizeof(t_stack));

	array_init(&self->heads);
	array_init(&self->slices);
	array_init(&self->iterators);
	array_init(&self->node_pool);
	array_reserve(&self->heads, 4);
	array_reserve(&self->slices, 4);
	array_reserve(&self->iterators, 4);
	array_reserve(&self->node_pool, MAX_NODE_POOL_SIZE);

	self->subtree_pool = subtree_pool;
	self->base_node =
		stack_node_new(NULL, NULL_SUBTREE, false, 1, &self->node_pool);
	ts_stack_clear(self);

	return self;
}

void ts_stack_delete(t_stack *self)
{
	if (self->slices.contents)
		array_delete(&self->slices);
	if (self->iterators.contents)
		array_delete(&self->iterators);
	stack_node_release(self->base_node, &self->node_pool, self->subtree_pool);
	for (uint32_t i = 0; i < self->heads.size; i++)
	{
		stack_head_delete(&self->heads.contents[i], &self->node_pool,
						  self->subtree_pool);
	}
	array_clear(&self->heads);
	if (self->node_pool.contents)
	{
		for (uint32_t i = 0; i < self->node_pool.size; i++)
			free(self->node_pool.contents[i]);
		array_delete(&self->node_pool);
	}
	array_delete(&self->heads);
	free(self);
}

uint32_t ts_stack_version_count(const t_stack *self)
{
	return self->heads.size;
}

t_state_id ts_stack_state(const t_stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->node->state;
}

t_length ts_stack_position(const t_stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->node->position;
}

t_subtree ts_stack_last_external_token(const t_stack  *self,
									   t_stack_version version)
{
	return array_get(&self->heads, version)->last_external_token;
}

void ts_stack_set_last_external_token(t_stack *self, t_stack_version version,
									  t_subtree token)
{
	t_stack_head *head = array_get(&self->heads, version);
	if (token.ptr)
		ts_subtree_retain(token);
	if (head->last_external_token.ptr)
		ts_subtree_release(self->subtree_pool, head->last_external_token);
	head->last_external_token = token;
}

unsigned ts_stack_error_cost(const t_stack *self, t_stack_version version)
{
	t_stack_head *head = array_get(&self->heads, version);
	unsigned	  result = head->node->error_cost;
	if (head->status == StackStatusPaused ||
		(head->node->state == ERROR_STATE && !head->node->links[0].subtree.ptr))
	{
		result += ERROR_COST_PER_RECOVERY;
	}
	return result;
}

unsigned ts_stack_node_count_since_error(const t_stack	*self,
										 t_stack_version version)
{
	t_stack_head *head = array_get(&self->heads, version);
	if (head->node->node_count < head->node_count_at_last_error)
	{
		head->node_count_at_last_error = head->node->node_count;
	}
	return head->node->node_count - head->node_count_at_last_error;
}

void ts_stack_push(t_stack *self, t_stack_version version, t_subtree subtree,
				   bool pending, t_state_id state)
{
	t_stack_head *head = array_get(&self->heads, version);
	t_stack_node *new_node =
		stack_node_new(head->node, subtree, pending, state, &self->node_pool);
	if (!subtree.ptr)
		head->node_count_at_last_error = new_node->node_count;
	head->node = new_node;
}

static inline t_stack_action pop_count_callback(
	void *payload, const t_stack_iterator *iterator)
{
	unsigned *goal_subtree_count = payload;
	if (iterator->subtree_count == *goal_subtree_count)
	{
		return StackActionPop | StackActionStop;
	}
	else
	{
		return StackActionNone;
	}
}

t_stack_slice_array ts_stack_pop_count(t_stack *self, t_stack_version version,
									   uint32_t count)
{
	return stack__iter(self, version, pop_count_callback, &count, (int)count);
}

static inline t_stack_action pop_pending_callback(
	void *payload, const t_stack_iterator *iterator)
{
	(void)payload;
	if (iterator->subtree_count >= 1)
	{
		if (iterator->is_pending)
		{
			return StackActionPop | StackActionStop;
		}
		else
		{
			return StackActionStop;
		}
	}
	else
	{
		return StackActionNone;
	}
}

t_stack_slice_array ts_stack_pop_pending(t_stack *self, t_stack_version version)
{
	t_stack_slice_array pop =
		stack__iter(self, version, pop_pending_callback, NULL, 0);
	if (pop.size > 0)
	{
		ts_stack_renumber_version(self, pop.contents[0].version, version);
		pop.contents[0].version = version;
	}
	return pop;
}

static inline t_stack_action pop_error_callback(
	void *payload, const t_stack_iterator *iterator)
{
	if (iterator->subtrees.size > 0)
	{
		bool *found_error = payload;
		if (!*found_error &&
			ts_subtree_is_error(iterator->subtrees.contents[0]))
		{
			*found_error = true;
			return StackActionPop | StackActionStop;
		}
		else
		{
			return StackActionStop;
		}
	}
	else
	{
		return StackActionNone;
	}
}

t_subtree_array ts_stack_pop_error(t_stack *self, t_stack_version version)
{
	t_stack_node *node = array_get(&self->heads, version)->node;
	for (unsigned i = 0; i < node->link_count; i++)
	{
		if (node->links[i].subtree.ptr &&
			ts_subtree_is_error(node->links[i].subtree))
		{
			bool				found_error = false;
			t_stack_slice_array pop =
				stack__iter(self, version, pop_error_callback, &found_error, 1);
			if (pop.size > 0)
			{
				assert(pop.size == 1);
				ts_stack_renumber_version(self, pop.contents[0].version,
										  version);
				return pop.contents[0].subtrees;
			}
			break;
		}
	}
	return (t_subtree_array){.size = 0};
}

static inline t_stack_action pop_all_callback(void					 *payload,
											  const t_stack_iterator *iterator)
{
	(void)payload;
	return iterator->node->link_count == 0 ? StackActionPop : StackActionNone;
}

t_stack_slice_array ts_stack_pop_all(t_stack *self, t_stack_version version)
{
	return stack__iter(self, version, pop_all_callback, NULL, 0);
}

static inline t_stack_action summarize_stack_callback(
	void *payload, const t_stack_iterator *iterator)
{
	t_summarize_stack_session *session = payload;
	t_state_id				   state = iterator->node->state;
	unsigned				   depth = iterator->subtree_count;
	if (depth > session->max_depth)
		return StackActionStop;
	for (unsigned i = session->summary->size - 1; i + 1 > 0; i--)
	{
		t_stack_summary_entry entry = session->summary->contents[i];
		if (entry.depth < depth)
			break;
		if (entry.depth == depth && entry.state == state)
			return StackActionNone;
	}
	array_push(session->summary, ((t_stack_summary_entry){
									 .position = iterator->node->position,
									 .depth = depth,
									 .state = state,
								 }));
	return StackActionNone;
}

void ts_stack_record_summary(t_stack *self, t_stack_version version,
							 unsigned max_depth)
{
	t_summarize_stack_session session = {
		.summary = malloc(sizeof(t_stack_summary)), .max_depth = max_depth};
	array_init(session.summary);
	stack__iter(self, version, summarize_stack_callback, &session, -1);
	t_stack_head *head = &self->heads.contents[version];
	if (head->summary)
	{
		array_delete(head->summary);
		free(head->summary);
	}
	head->summary = session.summary;
}

t_stack_summary *ts_stack_get_summary(t_stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->summary;
}

int ts_stack_dynamic_precedence(t_stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->node->dynamic_precedence;
}

bool ts_stack_has_advanced_since_error(const t_stack  *self,
									   t_stack_version version)
{
	const t_stack_head *head = array_get(&self->heads, version);
	const t_stack_node *node = head->node;
	if (node->error_cost == 0)
		return true;
	while (node)
	{
		if (node->link_count > 0)
		{
			t_subtree subtree = node->links[0].subtree;
			if (subtree.ptr)
			{
				if (ts_subtree_total_bytes(subtree) > 0)
				{
					return true;
				}
				else if (node->node_count > head->node_count_at_last_error &&
						 ts_subtree_error_cost(subtree) == 0)
				{
					node = node->links[0].node;
					continue;
				}
			}
		}
		break;
	}
	return false;
}

void ts_stack_remove_version(t_stack *self, t_stack_version version)
{
	stack_head_delete(array_get(&self->heads, version), &self->node_pool,
					  self->subtree_pool);
	array_erase(&self->heads, version);
}

void ts_stack_renumber_version(t_stack *self, t_stack_version v1,
							   t_stack_version v2)
{
	if (v1 == v2)
		return;
	assert(v2 < v1);
	assert((uint32_t)v1 < self->heads.size);
	t_stack_head *source_head = &self->heads.contents[v1];
	t_stack_head *target_head = &self->heads.contents[v2];
	if (target_head->summary && !source_head->summary)
	{
		source_head->summary = target_head->summary;
		target_head->summary = NULL;
	}
	stack_head_delete(target_head, &self->node_pool, self->subtree_pool);
	*target_head = *source_head;
	array_erase(&self->heads, v1);
}

void ts_stack_swap_versions(t_stack *self, t_stack_version v1,
							t_stack_version v2)
{
	t_stack_head temporary_head = self->heads.contents[v1];
	self->heads.contents[v1] = self->heads.contents[v2];
	self->heads.contents[v2] = temporary_head;
}

t_stack_version ts_stack_copy_version(t_stack *self, t_stack_version version)
{
	assert(version < self->heads.size);
	array_push(&self->heads, self->heads.contents[version]);
	t_stack_head *head = array_back(&self->heads);
	stack_node_retain(head->node);
	if (head->last_external_token.ptr)
		ts_subtree_retain(head->last_external_token);
	head->summary = NULL;
	return self->heads.size - 1;
}

bool ts_stack_merge(t_stack *self, t_stack_version version1,
					t_stack_version version2)
{
	if (!ts_stack_can_merge(self, version1, version2))
		return false;
	t_stack_head *head1 = &self->heads.contents[version1];
	t_stack_head *head2 = &self->heads.contents[version2];
	for (uint32_t i = 0; i < head2->node->link_count; i++)
	{
		stack_node_add_link(head1->node, head2->node->links[i],
							self->subtree_pool);
	}
	if (head1->node->state == ERROR_STATE)
	{
		head1->node_count_at_last_error = head1->node->node_count;
	}
	ts_stack_remove_version(self, version2);
	return true;
}

bool ts_stack_can_merge(t_stack *self, t_stack_version version1,
						t_stack_version version2)
{
	t_stack_head *head1 = &self->heads.contents[version1];
	t_stack_head *head2 = &self->heads.contents[version2];
	return head1->status == StackStatusActive &&
		   head2->status == StackStatusActive &&
		   head1->node->state == head2->node->state &&
		   head1->node->position.bytes == head2->node->position.bytes &&
		   head1->node->error_cost == head2->node->error_cost &&
		   ts_subtree_external_scanner_state_eq(head1->last_external_token,
												head2->last_external_token);
}

void ts_stack_halt(t_stack *self, t_stack_version version)
{
	array_get(&self->heads, version)->status = StackStatusHalted;
}

void ts_stack_pause(t_stack *self, t_stack_version version, t_subtree lookahead)
{
	t_stack_head *head = array_get(&self->heads, version);
	head->status = StackStatusPaused;
	head->lookahead_when_paused = lookahead;
	head->node_count_at_last_error = head->node->node_count;
}

bool ts_stack_is_active(const t_stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->status == StackStatusActive;
}

bool ts_stack_is_halted(const t_stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->status == StackStatusHalted;
}

bool ts_stack_is_paused(const t_stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->status == StackStatusPaused;
}

t_subtree ts_stack_resume(t_stack *self, t_stack_version version)
{
	t_stack_head *head = array_get(&self->heads, version);
	assert(head->status == StackStatusPaused);
	t_subtree result = head->lookahead_when_paused;
	head->status = StackStatusActive;
	head->lookahead_when_paused = NULL_SUBTREE;
	return result;
}

void ts_stack_clear(t_stack *self)
{
	stack_node_retain(self->base_node);
	for (uint32_t i = 0; i < self->heads.size; i++)
	{
		stack_head_delete(&self->heads.contents[i], &self->node_pool,
						  self->subtree_pool);
	}
	array_clear(&self->heads);
	array_push(&self->heads, ((t_stack_head){
								 .node = self->base_node,
								 .status = StackStatusActive,
								 .last_external_token = NULL_SUBTREE,
								 .lookahead_when_paused = NULL_SUBTREE,
							 }));
}

bool ts_stack_print_dot_graph(t_stack *self, const t_language *language,
							  void *f)
{
	(void)(self);
	(void)(language);
	(void)(f);
	return (false);
}

// t_external_scanner_state

void ts_external_scanner_state_init(t_external_scanner_state *self,
									const char *data, unsigned length)
{
	self->length = length;
	if (length > sizeof(self->short_data))
	{
		self->long_data = malloc(length);
		memcpy(self->long_data, data, length);
	}
	else
	{
		memcpy(self->short_data, data, length);
	}
}

t_external_scanner_state ts_external_scanner_state_copy(
	const t_external_scanner_state *self)
{
	t_external_scanner_state result = *self;
	if (self->length > sizeof(self->short_data))
	{
		result.long_data = malloc(self->length);
		memcpy(result.long_data, self->long_data, self->length);
	}
	return result;
}

void ts_external_scanner_state_delete(t_external_scanner_state *self)
{
	if (self->length > sizeof(self->short_data))
	{
		free(self->long_data);
	}
}

const char *ts_external_scanner_state_data(const t_external_scanner_state *self)
{
	if (self->length > sizeof(self->short_data))
	{
		return self->long_data;
	}
	else
	{
		return self->short_data;
	}
}

bool ts_external_scanner_state_eq(const t_external_scanner_state *self,
								  const char *buffer, unsigned length)
{
	return self->length == length &&
		   memcmp(ts_external_scanner_state_data(self), buffer, length) == 0;
}

// t_subtree_array

void ts_subtree_array_copy(t_subtree_array self, t_subtree_array *dest)
{
	dest->size = self.size;
	dest->capacity = self.capacity;
	dest->contents = self.contents;
	if (self.capacity > 0)
	{
		dest->contents = calloc(self.capacity, sizeof(t_subtree));
		memcpy(dest->contents, self.contents, self.size * sizeof(t_subtree));
		for (uint32_t i = 0; i < self.size; i++)
		{
			ts_subtree_retain(dest->contents[i]);
		}
	}
}

void ts_subtree_array_clear(t_subtree_pool *pool, t_subtree_array *self)
{
	for (uint32_t i = 0; i < self->size; i++)
	{
		ts_subtree_release(pool, self->contents[i]);
	}
	array_clear(self);
}

void ts_subtree_array_delete(t_subtree_pool *pool, t_subtree_array *self)
{
	ts_subtree_array_clear(pool, self);
	array_delete(self);
}

void ts_subtree_array_remove_trailing_extras(t_subtree_array *self,
											 t_subtree_array *destination)
{
	array_clear(destination);
	while (self->size > 0)
	{
		t_subtree last = self->contents[self->size - 1];
		if (ts_subtree_extra(last))
		{
			self->size--;
			array_push(destination, last);
		}
		else
		{
			break;
		}
	}
	ts_subtree_array_reverse(destination);
}

void ts_subtree_array_reverse(t_subtree_array *self)
{
	for (uint32_t i = 0, limit = self->size / 2; i < limit; i++)
	{
		size_t	  reverse_index = self->size - 1 - i;
		t_subtree swap = self->contents[i];
		self->contents[i] = self->contents[reverse_index];
		self->contents[reverse_index] = swap;
	}
}

// t_subtree_pool

t_subtree_pool ts_subtree_pool_new(uint32_t capacity)
{
	t_subtree_pool self = {array_new(), array_new()};
	array_reserve(&self.free_trees, capacity);
	return self;
}

void ts_subtree_pool_delete(t_subtree_pool *self)
{
	if (self->free_trees.contents)
	{
		for (unsigned i = 0; i < self->free_trees.size; i++)
		{
			free(self->free_trees.contents[i].ptr);
		}
		array_delete(&self->free_trees);
	}
	if (self->tree_stack.contents)
		array_delete(&self->tree_stack);
}

static t_subtree_heap_data *ts_subtree_pool_allocate(t_subtree_pool *self)
{
	if (self->free_trees.size > 0)
	{
		return array_pop(&self->free_trees).ptr;
	}
	else
	{
		return malloc(sizeof(t_subtree_heap_data));
	}
}

static void ts_subtree_pool_free(t_subtree_pool		 *self,
								 t_subtree_heap_data *tree)
{
	if (self->free_trees.capacity > 0 &&
		self->free_trees.size + 1 <= TS_MAX_TREE_POOL_SIZE)
	{
		array_push(&self->free_trees, (t_mutable_subtree){.ptr = tree});
	}
	else
	{
		free(tree);
	}
}

// t_subtree

static inline bool ts_subtree_can_inline(t_length padding, t_length size,
										 uint32_t lookahead_bytes)
{
	return padding.bytes < TS_MAX_INLINE_TREE_LENGTH &&
		   padding.extent.row < 16 &&
		   padding.extent.column < TS_MAX_INLINE_TREE_LENGTH &&
		   size.extent.row == 0 &&
		   size.extent.column < TS_MAX_INLINE_TREE_LENGTH &&
		   lookahead_bytes < 16;
}

t_subtree ts_subtree_new_leaf(t_subtree_pool *pool, t_symbol symbol,
							  t_length padding, t_length size,
							  uint32_t lookahead_bytes, t_state_id parse_state,
							  bool has_external_tokens, bool depends_on_column,
							  bool is_keyword, const t_language *language)
{
	t_symbol_metadata metadata = ts_language_symbol_metadata(language, symbol);
	bool			  extra = symbol == ts_builtin_sym_end;

	bool is_inline = (symbol <= UINT8_MAX && !has_external_tokens &&
					  ts_subtree_can_inline(padding, size, lookahead_bytes));

	if (is_inline)
	{
		return (t_subtree){{
			.parse_state = parse_state,
			.symbol = symbol,
			.padding_bytes = padding.bytes,
			.padding_rows = padding.extent.row,
			.padding_columns = padding.extent.column,
			.size_bytes = size.bytes,
			.lookahead_bytes = lookahead_bytes,
			.visible = metadata.visible,
			.named = metadata.named,
			.extra = extra,
			.has_changes = false,
			.is_missing = false,
			.is_keyword = is_keyword,
			.is_inline = true,
		}};
	}
	else
	{
		t_subtree_heap_data *data = ts_subtree_pool_allocate(pool);
		*data = (t_subtree_heap_data){
			.ref_count = 1,
			.padding = padding,
			.size = size,
			.lookahead_bytes = lookahead_bytes,
			.error_cost = 0,
			.child_count = 0,
			.symbol = symbol,
			.parse_state = parse_state,
			.visible = metadata.visible,
			.named = metadata.named,
			.extra = extra,
			.fragile_left = false,
			.fragile_right = false,
			.has_changes = false,
			.has_external_tokens = has_external_tokens,
			.has_external_scanner_state_change = false,
			.depends_on_column = depends_on_column,
			.is_missing = false,
			.is_keyword = is_keyword,
			{{.first_leaf = {.symbol = 0, .parse_state = 0}}}};
		return (t_subtree){.ptr = data};
	}
}

void ts_subtree_set_symbol(t_mutable_subtree *self, t_symbol symbol,
						   const t_language *language)
{
	t_symbol_metadata metadata = ts_language_symbol_metadata(language, symbol);
	if (self->data.is_inline)
	{
		assert(symbol < UINT8_MAX);
		self->data.symbol = symbol;
		self->data.named = metadata.named;
		self->data.visible = metadata.visible;
	}
	else
	{
		self->ptr->symbol = symbol;
		self->ptr->named = metadata.named;
		self->ptr->visible = metadata.visible;
	}
}

t_subtree ts_subtree_new_error(t_subtree_pool *pool, int32_t lookahead_char,
							   t_length padding, t_length size,
							   uint32_t bytes_scanned, t_state_id parse_state,
							   const t_language *language)
{
	t_subtree result = ts_subtree_new_leaf(pool, ts_builtin_sym_error, padding,
										   size, bytes_scanned, parse_state,
										   false, false, false, language);
	t_subtree_heap_data *data = (t_subtree_heap_data *)result.ptr;
	data->fragile_left = true;
	data->fragile_right = true;
	data->lookahead_char = lookahead_char;
	return result;
}

// Clone a subtree.
t_mutable_subtree ts_subtree_clone(t_subtree self)
{
	size_t	   alloc_size = ts_subtree_alloc_size(self.ptr->child_count);
	t_subtree *new_children = malloc(alloc_size);
	t_subtree *old_children = ts_subtree_children(self);
	memcpy(new_children, old_children, alloc_size);
	t_subtree_heap_data *result =
		(t_subtree_heap_data *)&new_children[self.ptr->child_count];
	if (self.ptr->child_count > 0)
	{
		for (uint32_t i = 0; i < self.ptr->child_count; i++)
		{
			ts_subtree_retain(new_children[i]);
		}
	}
	else if (self.ptr->has_external_tokens)
	{
		result->external_scanner_state =
			ts_external_scanner_state_copy(&self.ptr->external_scanner_state);
	}
	result->ref_count = 1;
	return (t_mutable_subtree){.ptr = result};
}

// Get mutable version of a subtree.
//
// This takes ownership of the subtree. If the subtree has only one owner,
// this will directly convert it into a mutable version. Otherwise, it will
// perform a copy.
t_mutable_subtree ts_subtree_make_mut(t_subtree_pool *pool, t_subtree self)
{
	if (self.data.is_inline)
		return (t_mutable_subtree){self.data};
	if (self.ptr->ref_count == 1)
		return ts_subtree_to_mut_unsafe(self);
	t_mutable_subtree result = ts_subtree_clone(self);
	ts_subtree_release(pool, self);
	return result;
}

static void ts_subtree__compress(t_mutable_subtree self, unsigned count,
								 const t_language		 *language,
								 t_mutable_subtree_array *stack)
{
	unsigned initial_stack_size = stack->size;

	t_mutable_subtree tree = self;
	t_symbol		  symbol = tree.ptr->symbol;
	for (unsigned i = 0; i < count; i++)
	{
		if (tree.ptr->ref_count > 1 || tree.ptr->child_count < 2)
			break;

		t_mutable_subtree child =
			ts_subtree_to_mut_unsafe(ts_subtree_children(tree)[0]);
		if (child.data.is_inline || child.ptr->child_count < 2 ||
			child.ptr->ref_count > 1 || child.ptr->symbol != symbol)
			break;

		t_mutable_subtree grandchild =
			ts_subtree_to_mut_unsafe(ts_subtree_children(child)[0]);
		if (grandchild.data.is_inline || grandchild.ptr->child_count < 2 ||
			grandchild.ptr->ref_count > 1 || grandchild.ptr->symbol != symbol)
			break;

		ts_subtree_children(tree)[0] = ts_subtree_from_mut(grandchild);
		ts_subtree_children(child)[0] =
			ts_subtree_children(grandchild)[grandchild.ptr->child_count - 1];
		ts_subtree_children(grandchild)[grandchild.ptr->child_count - 1] =
			ts_subtree_from_mut(child);
		array_push(stack, tree);
		tree = grandchild;
	}

	while (stack->size > initial_stack_size)
	{
		tree = array_pop(stack);
		t_mutable_subtree child =
			ts_subtree_to_mut_unsafe(ts_subtree_children(tree)[0]);
		t_mutable_subtree grandchild = ts_subtree_to_mut_unsafe(
			ts_subtree_children(child)[child.ptr->child_count - 1]);
		ts_subtree_summarize_children(grandchild, language);
		ts_subtree_summarize_children(child, language);
		ts_subtree_summarize_children(tree, language);
	}
}

void ts_subtree_balance(t_subtree self, t_subtree_pool *pool,
						const t_language *language)
{
	array_clear(&pool->tree_stack);

	if (ts_subtree_child_count(self) > 0 && self.ptr->ref_count == 1)
	{
		array_push(&pool->tree_stack, ts_subtree_to_mut_unsafe(self));
	}

	while (pool->tree_stack.size > 0)
	{
		t_mutable_subtree tree = array_pop(&pool->tree_stack);

		if (tree.ptr->repeat_depth > 0)
		{
			t_subtree child1 = ts_subtree_children(tree)[0];
			t_subtree child2 =
				ts_subtree_children(tree)[tree.ptr->child_count - 1];
			long repeat_delta = (long)ts_subtree_repeat_depth(child1) -
								(long)ts_subtree_repeat_depth(child2);
			if (repeat_delta > 0)
			{
				unsigned n = (unsigned)repeat_delta;
				for (unsigned i = n / 2; i > 0; i /= 2)
				{
					ts_subtree__compress(tree, i, language, &pool->tree_stack);
					n -= i;
				}
			}
		}

		for (uint32_t i = 0; i < tree.ptr->child_count; i++)
		{
			t_subtree child = ts_subtree_children(tree)[i];
			if (ts_subtree_child_count(child) > 0 && child.ptr->ref_count == 1)
			{
				array_push(&pool->tree_stack, ts_subtree_to_mut_unsafe(child));
			}
		}
	}
}

// Assign all of the node's properties that depend on its children.
void ts_subtree_summarize_children(t_mutable_subtree self,
								   const t_language *language)
{
	assert(!self.data.is_inline);

	self.ptr->named_child_count = 0;
	self.ptr->visible_child_count = 0;
	self.ptr->error_cost = 0;
	self.ptr->repeat_depth = 0;
	self.ptr->visible_descendant_count = 0;
	self.ptr->has_external_tokens = false;
	self.ptr->depends_on_column = false;
	self.ptr->has_external_scanner_state_change = false;
	self.ptr->dynamic_precedence = 0;

	uint32_t		structural_index = 0;
	const t_symbol *alias_sequence =
		ts_language_alias_sequence(language, self.ptr->production_id);
	uint32_t lookahead_end_byte = 0;

	const t_subtree *children = ts_subtree_children(self);
	for (uint32_t i = 0; i < self.ptr->child_count; i++)
	{
		t_subtree child = children[i];

		if (self.ptr->size.extent.row == 0 &&
			ts_subtree_depends_on_column(child))
		{
			self.ptr->depends_on_column = true;
		}

		if (ts_subtree_has_external_scanner_state_change(child))
		{
			self.ptr->has_external_scanner_state_change = true;
		}

		if (i == 0)
		{
			self.ptr->padding = ts_subtree_padding(child);
			self.ptr->size = ts_subtree_size(child);
		}
		else
		{
			self.ptr->size =
				length_add(self.ptr->size, ts_subtree_total_size(child));
		}

		uint32_t child_lookahead_end_byte = self.ptr->padding.bytes +
											self.ptr->size.bytes +
											ts_subtree_lookahead_bytes(child);
		if (child_lookahead_end_byte > lookahead_end_byte)
		{
			lookahead_end_byte = child_lookahead_end_byte;
		}

		if (ts_subtree_symbol(child) != ts_builtin_sym_error_repeat)
		{
			self.ptr->error_cost += ts_subtree_error_cost(child);
		}

		uint32_t grandchild_count = ts_subtree_child_count(child);
		if (self.ptr->symbol == ts_builtin_sym_error ||
			self.ptr->symbol == ts_builtin_sym_error_repeat)
		{
			if (!ts_subtree_extra(child) &&
				!(ts_subtree_is_error(child) && grandchild_count == 0))
			{
				if (ts_subtree_visible(child))
				{
					self.ptr->error_cost += ERROR_COST_PER_SKIPPED_TREE;
				}
				else if (grandchild_count > 0)
				{
					self.ptr->error_cost += ERROR_COST_PER_SKIPPED_TREE *
											child.ptr->visible_child_count;
				}
			}
		}

		self.ptr->dynamic_precedence += ts_subtree_dynamic_precedence(child);
		self.ptr->visible_descendant_count +=
			ts_subtree_visible_descendant_count(child);

		if (alias_sequence && alias_sequence[structural_index] != 0 &&
			!ts_subtree_extra(child))
		{
			self.ptr->visible_descendant_count++;
			self.ptr->visible_child_count++;
			if (ts_language_symbol_metadata(language,
											alias_sequence[structural_index])
					.named)
			{
				self.ptr->named_child_count++;
			}
		}
		else if (ts_subtree_visible(child))
		{
			self.ptr->visible_descendant_count++;
			self.ptr->visible_child_count++;
			if (ts_subtree_named(child))
				self.ptr->named_child_count++;
		}
		else if (grandchild_count > 0)
		{
			self.ptr->visible_child_count += child.ptr->visible_child_count;
			self.ptr->named_child_count += child.ptr->named_child_count;
		}

		if (ts_subtree_has_external_tokens(child))
			self.ptr->has_external_tokens = true;

		if (ts_subtree_is_error(child))
		{
			self.ptr->fragile_left = self.ptr->fragile_right = true;
			self.ptr->parse_state = TS_TREE_STATE_NONE;
		}

		if (!ts_subtree_extra(child))
			structural_index++;
	}

	self.ptr->lookahead_bytes =
		lookahead_end_byte - self.ptr->size.bytes - self.ptr->padding.bytes;

	if (self.ptr->symbol == ts_builtin_sym_error ||
		self.ptr->symbol == ts_builtin_sym_error_repeat)
	{
		self.ptr->error_cost +=
			ERROR_COST_PER_RECOVERY +
			ERROR_COST_PER_SKIPPED_CHAR * self.ptr->size.bytes +
			ERROR_COST_PER_SKIPPED_LINE * self.ptr->size.extent.row;
	}

	if (self.ptr->child_count > 0)
	{
		t_subtree first_child = children[0];
		t_subtree last_child = children[self.ptr->child_count - 1];

		self.ptr->first_leaf.symbol = ts_subtree_leaf_symbol(first_child);
		self.ptr->first_leaf.parse_state =
			ts_subtree_leaf_parse_state(first_child);

		if (ts_subtree_fragile_left(first_child))
			self.ptr->fragile_left = true;
		if (ts_subtree_fragile_right(last_child))
			self.ptr->fragile_right = true;

		if (self.ptr->child_count >= 2 && !self.ptr->visible &&
			!self.ptr->named &&
			ts_subtree_symbol(first_child) == self.ptr->symbol)
		{
			if (ts_subtree_repeat_depth(first_child) >
				ts_subtree_repeat_depth(last_child))
			{
				self.ptr->repeat_depth =
					ts_subtree_repeat_depth(first_child) + 1;
			}
			else
			{
				self.ptr->repeat_depth =
					ts_subtree_repeat_depth(last_child) + 1;
			}
		}
	}
}

// Create a new parent node with the given children.
//
// This takes ownership of the children array.
t_mutable_subtree ts_subtree_new_node(t_symbol			symbol,
									  t_subtree_array  *children,
									  unsigned			production_id,
									  const t_language *language)
{
	t_symbol_metadata metadata = ts_language_symbol_metadata(language, symbol);
	bool			  fragile =
		symbol == ts_builtin_sym_error || symbol == ts_builtin_sym_error_repeat;

	// Allocate the node's data at the end of the array of children.
	size_t new_byte_size = ts_subtree_alloc_size(children->size);
	if (children->capacity * sizeof(t_subtree) < new_byte_size)
	{
		children->contents = realloc(children->contents, new_byte_size);
		children->capacity = (uint32_t)(new_byte_size / sizeof(t_subtree));
	}
	t_subtree_heap_data *data =
		(t_subtree_heap_data *)&children->contents[children->size];

	*data =
		(t_subtree_heap_data){.ref_count = 1,
							  .symbol = symbol,
							  .child_count = children->size,
							  .visible = metadata.visible,
							  .named = metadata.named,
							  .has_changes = false,
							  .has_external_scanner_state_change = false,
							  .fragile_left = fragile,
							  .fragile_right = fragile,
							  .is_keyword = false,
							  {{
								  .visible_descendant_count = 0,
								  .production_id = production_id,
								  .first_leaf = {.symbol = 0, .parse_state = 0},
							  }}};
	t_mutable_subtree result = {.ptr = data};
	ts_subtree_summarize_children(result, language);
	return result;
}

// Create a new error node containing the given children.
//
// This node is treated as 'extra'. Its children are prevented from having
// having any effect on the parse state.
t_subtree ts_subtree_new_error_node(t_subtree_array *children, bool extra,
									const t_language *language)
{
	t_mutable_subtree result =
		ts_subtree_new_node(ts_builtin_sym_error, children, 0, language);
	result.ptr->extra = extra;
	return ts_subtree_from_mut(result);
}

// Create a new 'missing leaf' node.
//
// This node is treated as 'extra'. Its children are prevented from having
// having any effect on the parse state.
t_subtree ts_subtree_new_missing_leaf(t_subtree_pool *pool, t_symbol symbol,
									  t_length			padding,
									  uint32_t			lookahead_bytes,
									  const t_language *language)
{
	t_subtree result =
		ts_subtree_new_leaf(pool, symbol, padding, length_zero(),
							lookahead_bytes, 0, false, false, false, language);
	if (result.data.is_inline)
	{
		result.data.is_missing = true;
	}
	else
	{
		((t_subtree_heap_data *)result.ptr)->is_missing = true;
	}
	return result;
}

void ts_subtree_retain(t_subtree self)
{
	if (self.data.is_inline)
		return;
	assert(self.ptr->ref_count > 0);
	atomic_inc((volatile uint32_t *)&self.ptr->ref_count);
	assert(self.ptr->ref_count != 0);
}

void ts_subtree_release(t_subtree_pool *pool, t_subtree self)
{
	if (self.data.is_inline)
		return;
	array_clear(&pool->tree_stack);

	assert(self.ptr->ref_count > 0);
	if (atomic_dec((volatile uint32_t *)&self.ptr->ref_count) == 0)
	{
		array_push(&pool->tree_stack, ts_subtree_to_mut_unsafe(self));
	}

	while (pool->tree_stack.size > 0)
	{
		t_mutable_subtree tree = array_pop(&pool->tree_stack);
		if (tree.ptr->child_count > 0)
		{
			t_subtree *children = ts_subtree_children(tree);
			for (uint32_t i = 0; i < tree.ptr->child_count; i++)
			{
				t_subtree child = children[i];
				if (child.data.is_inline)
					continue;
				assert(child.ptr->ref_count > 0);
				if (atomic_dec((volatile uint32_t *)&child.ptr->ref_count) == 0)
				{
					array_push(&pool->tree_stack,
							   ts_subtree_to_mut_unsafe(child));
				}
			}
			free(children);
		}
		else
		{
			if (tree.ptr->has_external_tokens)
			{
				ts_external_scanner_state_delete(
					&tree.ptr->external_scanner_state);
			}
			ts_subtree_pool_free(pool, tree.ptr);
		}
	}
}

int ts_subtree_compare(t_subtree left, t_subtree right, t_subtree_pool *pool)
{
	array_push(&pool->tree_stack, ts_subtree_to_mut_unsafe(left));
	array_push(&pool->tree_stack, ts_subtree_to_mut_unsafe(right));

	while (pool->tree_stack.size > 0)
	{
		right = ts_subtree_from_mut(array_pop(&pool->tree_stack));
		left = ts_subtree_from_mut(array_pop(&pool->tree_stack));

		int result = 0;
		if (ts_subtree_symbol(left) < ts_subtree_symbol(right))
			result = -1;
		else if (ts_subtree_symbol(right) < ts_subtree_symbol(left))
			result = 1;
		else if (ts_subtree_child_count(left) < ts_subtree_child_count(right))
			result = -1;
		else if (ts_subtree_child_count(right) < ts_subtree_child_count(left))
			result = 1;
		if (result != 0)
		{
			array_clear(&pool->tree_stack);
			return result;
		}

		for (uint32_t i = ts_subtree_child_count(left); i > 0; i--)
		{
			t_subtree left_child = ts_subtree_children(left)[i - 1];
			t_subtree right_child = ts_subtree_children(right)[i - 1];
			array_push(&pool->tree_stack, ts_subtree_to_mut_unsafe(left_child));
			array_push(&pool->tree_stack,
					   ts_subtree_to_mut_unsafe(right_child));
		}
	}

	return 0;
}

static inline void ts_subtree_set_has_changes(t_mutable_subtree *self)
{
	if (self->data.is_inline)
	{
		self->data.has_changes = true;
	}
	else
	{
		self->ptr->has_changes = true;
	}
}

t_subtree ts_subtree_edit(t_subtree self, const t_input_edit *input_edit,
						  t_subtree_pool *pool)
{

	Array(t_edit_entry) stack = array_new();
	array_push(
		&stack,
		((t_edit_entry){
			.tree = &self,
			.edit =
				(t_edit){
					.start = {input_edit->start_byte, input_edit->start_point},
					.old_end = {input_edit->old_end_byte,
								input_edit->old_end_point},
					.new_end = {input_edit->new_end_byte,
								input_edit->new_end_point},
				},
		}));

	while (stack.size)
	{
		t_edit_entry entry = array_pop(&stack);
		t_edit		 edit = entry.edit;
		bool		 is_noop = edit.old_end.bytes == edit.start.bytes &&
					   edit.new_end.bytes == edit.start.bytes;
		bool is_pure_insertion = edit.old_end.bytes == edit.start.bytes;
		bool invalidate_first_row = ts_subtree_depends_on_column(*entry.tree);

		t_length size = ts_subtree_size(*entry.tree);
		t_length padding = ts_subtree_padding(*entry.tree);
		t_length total_size = length_add(padding, size);
		uint32_t lookahead_bytes = ts_subtree_lookahead_bytes(*entry.tree);
		uint32_t end_byte = total_size.bytes + lookahead_bytes;
		if (edit.start.bytes > end_byte ||
			(is_noop && edit.start.bytes == end_byte))
			continue;

		// If the edit is entirely within the space before this subtree, then
		// shift this subtree over according to the edit without changing its
		// size.
		if (edit.old_end.bytes <= padding.bytes)
		{
			padding =
				length_add(edit.new_end, length_sub(padding, edit.old_end));
		}

		// If the edit starts in the space before this subtree and extends into
		// this subtree, shrink the subtree's content to compensate for the
		// change in the space before it.
		else if (edit.start.bytes < padding.bytes)
		{
			size =
				length_saturating_sub(size, length_sub(edit.old_end, padding));
			padding = edit.new_end;
		}

		// If the edit is a pure insertion right at the start of the subtree,
		// shift the subtree over according to the insertion.
		else if (edit.start.bytes == padding.bytes && is_pure_insertion)
		{
			padding = edit.new_end;
		}

		// If the edit is within this subtree, resize the subtree to reflect the
		// edit.
		else if (edit.start.bytes < total_size.bytes ||
				 (edit.start.bytes == total_size.bytes && is_pure_insertion))
		{
			size = length_add(length_sub(edit.new_end, padding),
							  length_saturating_sub(total_size, edit.old_end));
		}

		t_mutable_subtree result = ts_subtree_make_mut(pool, *entry.tree);

		if (result.data.is_inline)
		{
			if (ts_subtree_can_inline(padding, size, lookahead_bytes))
			{
				result.data.padding_bytes = padding.bytes;
				result.data.padding_rows = padding.extent.row;
				result.data.padding_columns = padding.extent.column;
				result.data.size_bytes = size.bytes;
			}
			else
			{
				t_subtree_heap_data *data = ts_subtree_pool_allocate(pool);
				data->ref_count = 1;
				data->padding = padding;
				data->size = size;
				data->lookahead_bytes = lookahead_bytes;
				data->error_cost = 0;
				data->child_count = 0;
				data->symbol = result.data.symbol;
				data->parse_state = result.data.parse_state;
				data->visible = result.data.visible;
				data->named = result.data.named;
				data->extra = result.data.extra;
				data->fragile_left = false;
				data->fragile_right = false;
				data->has_changes = false;
				data->has_external_tokens = false;
				data->depends_on_column = false;
				data->is_missing = result.data.is_missing;
				data->is_keyword = result.data.is_keyword;
				result.ptr = data;
			}
		}
		else
		{
			result.ptr->padding = padding;
			result.ptr->size = size;
		}

		ts_subtree_set_has_changes(&result);
		*entry.tree = ts_subtree_from_mut(result);

		t_length child_left, child_right = length_zero();
		for (uint32_t i = 0, n = ts_subtree_child_count(*entry.tree); i < n;
			 i++)
		{
			t_subtree *child = &ts_subtree_children(*entry.tree)[i];
			t_length   child_size = ts_subtree_total_size(*child);
			child_left = child_right;
			child_right = length_add(child_left, child_size);

			// If this child ends before the edit, it is not affected.
			if (child_right.bytes + ts_subtree_lookahead_bytes(*child) <
				edit.start.bytes)
				continue;

			// Keep editing child nodes until a node is reached that starts
			// after the edit. Also, if this node's validity depends on its
			// column position, then continue invaliditing child nodes until
			// reaching a line break.
			if (((child_left.bytes > edit.old_end.bytes) ||
				 (child_left.bytes == edit.old_end.bytes &&
				  child_size.bytes > 0 && i > 0)) &&
				(!invalidate_first_row ||
				 child_left.extent.row > entry.tree->ptr->padding.extent.row))
			{
				break;
			}

			// Transform edit into the child's coordinate space.
			t_edit child_edit = {
				.start = length_saturating_sub(edit.start, child_left),
				.old_end = length_saturating_sub(edit.old_end, child_left),
				.new_end = length_saturating_sub(edit.new_end, child_left),
			};

			// Interpret all inserted text as applying to the *first* child that
			// touches the edit. Subsequent children are only never have any
			// text inserted into them; they are only shrunk to compensate for
			// the edit.
			if (child_right.bytes > edit.start.bytes ||
				(child_right.bytes == edit.start.bytes && is_pure_insertion))
			{
				edit.new_end = edit.start;
			}

			// Children that occur before the edit are not reshaped by the edit.
			else
			{
				child_edit.old_end = child_edit.start;
				child_edit.new_end = child_edit.start;
			}

			// Queue processing of this child's subtree.
			array_push(&stack, ((t_edit_entry){
								   .tree = child,
								   .edit = child_edit,
							   }));
		}
	}

	array_delete(&stack);
	return self;
}

t_subtree ts_subtree_last_external_token(t_subtree tree)
{
	if (!ts_subtree_has_external_tokens(tree))
		return NULL_SUBTREE;
	while (tree.ptr->child_count > 0)
	{
		for (uint32_t i = tree.ptr->child_count - 1; i + 1 > 0; i--)
		{
			t_subtree child = ts_subtree_children(tree)[i];
			if (ts_subtree_has_external_tokens(child))
			{
				tree = child;
				break;
			}
		}
	}
	return tree;
}

static const char *const ROOT_FIELD = "__ROOT__";

static size_t ts_subtree__write_to_string(
	t_subtree self, char *string, size_t limit, const t_language *language,
	bool include_all, t_symbol alias_symbol, bool alias_is_named,
	const char *field_name)
{
	(void)(self);
	(void)(string);
	(void)(limit);
	(void)(language);
	(void)(include_all);
	(void)(alias_symbol);
	(void)(alias_is_named);
	(void)(field_name);
	return (0);
}

char *ts_subtree_string(t_subtree self, t_symbol alias_symbol,
						bool alias_is_named, const t_language *language,
						bool include_all)
{
	char   scratch_string[1];
	size_t size = ts_subtree__write_to_string(self, scratch_string, 1, language,
											  include_all, alias_symbol,
											  alias_is_named, ROOT_FIELD) +
				  1;
	char *result = malloc(size * sizeof(char));
	ts_subtree__write_to_string(self, result, size, language, include_all,
								alias_symbol, alias_is_named, ROOT_FIELD);
	return result;
}

void ts_subtree__print_dot_graph(const t_subtree *self, uint32_t start_offset,
								 const t_language *language,
								 t_symbol alias_symbol, void *f)
{
	(void)(self);
	(void)(start_offset);
	(void)(language);
	(void)(alias_symbol);
	(void)(f);
}

bool ts_subtree_external_scanner_state_eq(t_subtree self, t_subtree other)
{
	const t_external_scanner_state *state_self =
		ts_subtree_external_scanner_state(self);
	const t_external_scanner_state *state_other =
		ts_subtree_external_scanner_state(other);
	return ts_external_scanner_state_eq(
		state_self, ts_external_scanner_state_data(state_other),
		state_other->length);
}

t_first_tree *ts_tree_new(t_subtree root, const t_language *language,
						  const t_parse_range *included_ranges,
						  unsigned			   included_range_count)
{
	t_first_tree *result = malloc(sizeof(t_first_tree));
	result->root = root;
	result->language = ts_language_copy(language);
	result->included_ranges =
		calloc(included_range_count, sizeof(t_parse_range));
	memcpy(result->included_ranges, included_ranges,
		   included_range_count * sizeof(t_parse_range));
	result->included_range_count = included_range_count;
	return result;
}

t_first_tree *ts_tree_copy(const t_first_tree *self)
{
	ts_subtree_retain(self->root);
	return ts_tree_new(self->root, self->language, self->included_ranges,
					   self->included_range_count);
}

void ts_tree_delete(t_first_tree *self)
{
	if (!self)
		return;

	t_subtree_pool pool = ts_subtree_pool_new(0);
	ts_subtree_release(&pool, self->root);
	ts_subtree_pool_delete(&pool);
	ts_language_delete(self->language);
	free(self->included_ranges);
	free(self);
}

t_parse_node ts_tree_root_node(const t_first_tree *self)
{
	return ts_node_new(self, &self->root, ts_subtree_padding(self->root), 0);
}

t_parse_node ts_tree_root_node_with_offset(const t_first_tree *self,
										   uint32_t			   offset_bytes,
										   t_point			   offset_extent)
{
	t_length offset = {offset_bytes, offset_extent};
	return ts_node_new(self, &self->root,
					   length_add(offset, ts_subtree_padding(self->root)), 0);
}

const t_language *ts_tree_language(const t_first_tree *self)
{
	return self->language;
}

void ts_tree_edit(t_first_tree *self, const t_input_edit *edit)
{
	for (unsigned i = 0; i < self->included_range_count; i++)
	{
		t_parse_range *range = &self->included_ranges[i];
		if (range->end_byte >= edit->old_end_byte)
		{
			if (range->end_byte != UINT32_MAX)
			{
				range->end_byte =
					edit->new_end_byte + (range->end_byte - edit->old_end_byte);
				range->end_point =
					point_add(edit->new_end_point,
							  point_sub(range->end_point, edit->old_end_point));
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
			range->start_byte =
				edit->new_end_byte + (range->start_byte - edit->old_end_byte);
			range->start_point =
				point_add(edit->new_end_point,
						  point_sub(range->start_point, edit->old_end_point));
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

	t_subtree_pool pool = ts_subtree_pool_new(0);
	self->root = ts_subtree_edit(self->root, edit, &pool);
	ts_subtree_pool_delete(&pool);
}

t_parse_range *ts_tree_included_ranges(const t_first_tree *self,
									   uint32_t			  *length)
{
	*length = self->included_range_count;
	t_parse_range *ranges =
		calloc(self->included_range_count, sizeof(t_parse_range));
	memcpy(ranges, self->included_ranges,
		   self->included_range_count * sizeof(t_parse_range));
	return ranges;
}

t_parse_range *ts_tree_get_changed_ranges(const t_first_tree *old_tree,
										  const t_first_tree *new_tree,
										  uint32_t			 *length)
{
	t_tree_cursor cursor1 = {NULL, array_new(), 0};
	t_tree_cursor cursor2 = {NULL, array_new(), 0};
	ts_tree_cursor_init(&cursor1, ts_tree_root_node(old_tree));
	ts_tree_cursor_init(&cursor2, ts_tree_root_node(new_tree));

	t_range_array included_range_differences = array_new();
	ts_range_array_get_changed_ranges(
		old_tree->included_ranges, old_tree->included_range_count,
		new_tree->included_ranges, new_tree->included_range_count,
		&included_range_differences);

	t_parse_range *result;
	*length = ts_subtree_get_changed_ranges(
		&old_tree->root, &new_tree->root, &cursor1, &cursor2,
		old_tree->language, &included_range_differences, &result);

	array_delete(&included_range_differences);
	array_delete(&cursor1.stack);
	array_delete(&cursor2.stack);
	return result;
}

#ifdef _WIN32

# include <io.h>
# include <windows.h>

int _ts_dup(HANDLE handle)
{
	HANDLE dup_handle;
	if (!DuplicateHandle(GetCurrentProcess(), handle, GetCurrentProcess(),
						 &dup_handle, 0, FALSE, DUPLICATE_SAME_ACCESS))
		return -1;

	return _open_osfhandle((intptr_t)dup_handle, 0);
}

void ts_tree_print_dot_graph(const t_first_tree *self, int fd)
{
	FILE *file = _fdopen(_ts_dup((HANDLE)_get_osfhandle(fd)), "a");
	ts_subtree_print_dot_graph(self->root, self->language, file);
	fclose(file);
}

#else

# include <unistd.h>

int _ts_dup(int file_descriptor)
{
	return dup(file_descriptor);
}

void ts_tree_print_dot_graph(const t_first_tree *self, int file_descriptor)
{
	(void)(self);
	(void)(file_descriptor);
}

#endif

// t_cursor_child_iterator

static inline bool ts_tree_cursor_is_entry_visible(const t_tree_cursor *self,
												   uint32_t				index)
{
	t_tree_cursor_entry *entry = &self->stack.contents[index];
	if (index == 0 || ts_subtree_visible(*entry->subtree))
	{
		return true;
	}
	else if (!ts_subtree_extra(*entry->subtree))
	{
		t_tree_cursor_entry *parent_entry = &self->stack.contents[index - 1];
		return ts_language_alias_at(self->tree->language,
									parent_entry->subtree->ptr->production_id,
									entry->structural_child_index);
	}
	else
	{
		return false;
	}
}

static inline t_cursor_child_iterator ts_tree_cursor_iterate_children(
	const t_tree_cursor *self)
{
	t_tree_cursor_entry *last_entry = array_back(&self->stack);
	if (ts_subtree_child_count(*last_entry->subtree) == 0)
	{
		return (t_cursor_child_iterator){
			NULL_SUBTREE, self->tree, length_zero(), 0, 0, 0, NULL};
	}
	const t_symbol *alias_sequence = ts_language_alias_sequence(
		self->tree->language, last_entry->subtree->ptr->production_id);

	uint32_t descendant_index = last_entry->descendant_index;
	if (ts_tree_cursor_is_entry_visible(self, self->stack.size - 1))
	{
		descendant_index += 1;
	}

	return (t_cursor_child_iterator){
		.tree = self->tree,
		.parent = *last_entry->subtree,
		.position = last_entry->position,
		.child_index = 0,
		.structural_child_index = 0,
		.descendant_index = descendant_index,
		.alias_sequence = alias_sequence,
	};
}

static inline bool ts_tree_cursor_child_iterator_next(
	t_cursor_child_iterator *self, t_tree_cursor_entry *result, bool *visible)
{
	if (!self->parent.ptr || self->child_index == self->parent.ptr->child_count)
		return false;
	const t_subtree *child =
		&ts_subtree_children(self->parent)[self->child_index];
	*result = (t_tree_cursor_entry){
		.subtree = child,
		.position = self->position,
		.child_index = self->child_index,
		.structural_child_index = self->structural_child_index,
		.descendant_index = self->descendant_index,
	};
	*visible = ts_subtree_visible(*child);
	bool extra = ts_subtree_extra(*child);
	if (!extra)
	{
		if (self->alias_sequence)
		{
			*visible |= self->alias_sequence[self->structural_child_index];
		}
		self->structural_child_index++;
	}

	self->descendant_index += ts_subtree_visible_descendant_count(*child);
	if (*visible)
	{
		self->descendant_index += 1;
	}

	self->position = length_add(self->position, ts_subtree_size(*child));
	self->child_index++;

	if (self->child_index < self->parent.ptr->child_count)
	{
		t_subtree next_child =
			ts_subtree_children(self->parent)[self->child_index];
		self->position =
			length_add(self->position, ts_subtree_padding(next_child));
	}

	return true;
}

// Return a position that, when `b` is added to it, yields `a`. This
// can only be computed if `b` has zero rows. Otherwise, this function
// returns `LENGTH_UNDEFINED`, and the caller needs to recompute
// the position some other way.
static inline t_length length_backtrack(t_length a, t_length b)
{
	if (length_is_undefined(a) || b.extent.row != 0)
	{
		return LENGTH_UNDEFINED;
	}

	t_length result;
	result.bytes = a.bytes - b.bytes;
	result.extent.row = a.extent.row;
	result.extent.column = a.extent.column - b.extent.column;
	return result;
}

static inline bool ts_tree_cursor_child_iterator_previous(
	t_cursor_child_iterator *self, t_tree_cursor_entry *result, bool *visible)
{
	// this is mostly a reverse `ts_tree_cursor_child_iterator_next` taking into
	// account unsigned underflow
	if (!self->parent.ptr || (int8_t)self->child_index == -1)
		return false;
	const t_subtree *child =
		&ts_subtree_children(self->parent)[self->child_index];
	*result = (t_tree_cursor_entry){
		.subtree = child,
		.position = self->position,
		.child_index = self->child_index,
		.structural_child_index = self->structural_child_index,
	};
	*visible = ts_subtree_visible(*child);
	bool extra = ts_subtree_extra(*child);
	if (!extra && self->alias_sequence)
	{
		*visible |= self->alias_sequence[self->structural_child_index];
		self->structural_child_index--;
	}

	self->position =
		length_backtrack(self->position, ts_subtree_padding(*child));
	self->child_index--;

	// unsigned can underflow so compare it to child_count
	if (self->child_index < self->parent.ptr->child_count)
	{
		t_subtree previous_child =
			ts_subtree_children(self->parent)[self->child_index];
		t_length size = ts_subtree_size(previous_child);
		self->position = length_backtrack(self->position, size);
	}

	return true;
}

// t_tree_cursor - lifecycle

t_tree_cursor ts_tree_cursor_new(t_parse_node node)
{
	t_tree_cursor self = {NULL, {0, 0, 0}, 0};
	ts_tree_cursor_init((t_tree_cursor *)&self, node);
	return self;
}

void ts_tree_cursor_reset(t_tree_cursor *_self, t_parse_node node)
{
	ts_tree_cursor_init((t_tree_cursor *)_self, node);
}

void ts_tree_cursor_init(t_tree_cursor *self, t_parse_node node)
{
	self->tree = node.tree;
	self->root_alias_symbol = node.context[3];
	array_clear(&self->stack);
	array_push(&self->stack, ((t_tree_cursor_entry){
								 .subtree = (const t_subtree *)node.id,
								 .position = {ts_node_start_byte(node),
											  ts_node_start_point(node)},
								 .child_index = 0,
								 .structural_child_index = 0,
								 .descendant_index = 0,
							 }));
}

void ts_tree_cursor_delete(t_tree_cursor *_self)
{
	t_tree_cursor *self = (t_tree_cursor *)_self;
	array_delete(&self->stack);
}

// t_tree_cursor - walking the tree

t_tree_cursor_step ts_tree_cursor_goto_first_child_internal(
	t_tree_cursor *_self)
{
	t_tree_cursor		   *self = (t_tree_cursor *)_self;
	bool					visible;
	t_tree_cursor_entry		entry;
	t_cursor_child_iterator iterator = ts_tree_cursor_iterate_children(self);
	while (ts_tree_cursor_child_iterator_next(&iterator, &entry, &visible))
	{
		if (visible)
		{
			array_push(&self->stack, entry);
			return TreeCursorStepVisible;
		}
		if (ts_subtree_visible_child_count(*entry.subtree) > 0)
		{
			array_push(&self->stack, entry);
			return TreeCursorStepHidden;
		}
	}
	return TreeCursorStepNone;
}

bool ts_tree_cursor_goto_first_child(t_tree_cursor *self)
{
	for (;;)
	{
		switch (ts_tree_cursor_goto_first_child_internal(self))
		{
		case TreeCursorStepHidden:
			continue;
		case TreeCursorStepVisible:
			return true;
		default:
			return false;
		}
	}
	return false;
}

t_tree_cursor_step ts_tree_cursor_goto_last_child_internal(t_tree_cursor *_self)
{
	t_tree_cursor		   *self = (t_tree_cursor *)_self;
	bool					visible;
	t_tree_cursor_entry		entry;
	t_cursor_child_iterator iterator = ts_tree_cursor_iterate_children(self);
	if (!iterator.parent.ptr || iterator.parent.ptr->child_count == 0)
		return TreeCursorStepNone;

	t_tree_cursor_entry last_entry = {0};
	t_tree_cursor_step	last_step = TreeCursorStepNone;
	while (ts_tree_cursor_child_iterator_next(&iterator, &entry, &visible))
	{
		if (visible)
		{
			last_entry = entry;
			last_step = TreeCursorStepVisible;
		}
		else if (ts_subtree_visible_child_count(*entry.subtree) > 0)
		{
			last_entry = entry;
			last_step = TreeCursorStepHidden;
		}
	}
	if (last_entry.subtree)
	{
		array_push(&self->stack, last_entry);
		return last_step;
	}

	return TreeCursorStepNone;
}

bool ts_tree_cursor_goto_last_child(t_tree_cursor *self)
{
	for (;;)
	{
		switch (ts_tree_cursor_goto_last_child_internal(self))
		{
		case TreeCursorStepHidden:
			continue;
		case TreeCursorStepVisible:
			return true;
		default:
			return false;
		}
	}
	return false;
}

static inline int64_t ts_tree_cursor_goto_first_child_for_byte_and_point(
	t_tree_cursor *_self, uint32_t goal_byte, t_point goal_point)
{
	t_tree_cursor *self = (t_tree_cursor *)_self;
	uint32_t	   initial_size = self->stack.size;
	uint32_t	   visible_child_index = 0;

	bool did_descend;
	do
	{
		did_descend = false;

		bool					visible;
		t_tree_cursor_entry		entry;
		t_cursor_child_iterator iterator =
			ts_tree_cursor_iterate_children(self);
		while (ts_tree_cursor_child_iterator_next(&iterator, &entry, &visible))
		{
			t_length entry_end =
				length_add(entry.position, ts_subtree_size(*entry.subtree));
			bool at_goal = entry_end.bytes >= goal_byte &&
						   point_gte(entry_end.extent, goal_point);
			uint32_t visible_child_count =
				ts_subtree_visible_child_count(*entry.subtree);
			if (at_goal)
			{
				if (visible)
				{
					array_push(&self->stack, entry);
					return visible_child_index;
				}
				if (visible_child_count > 0)
				{
					array_push(&self->stack, entry);
					did_descend = true;
					break;
				}
			}
			else if (visible)
			{
				visible_child_index++;
			}
			else
			{
				visible_child_index += visible_child_count;
			}
		}
	} while (did_descend);

	self->stack.size = initial_size;
	return -1;
}

int64_t ts_tree_cursor_goto_first_child_for_byte(t_tree_cursor *self,
												 uint32_t		goal_byte)
{
	return ts_tree_cursor_goto_first_child_for_byte_and_point(self, goal_byte,
															  POINT_ZERO);
}

int64_t ts_tree_cursor_goto_first_child_for_point(t_tree_cursor *self,
												  t_point		 goal_point)
{
	return ts_tree_cursor_goto_first_child_for_byte_and_point(self, 0,
															  goal_point);
}

t_tree_cursor_step ts_tree_cursor_goto_sibling_internal(
	t_tree_cursor *_self,
	bool (*advance)(t_cursor_child_iterator *, t_tree_cursor_entry *, bool *))
{
	t_tree_cursor *self = (t_tree_cursor *)_self;
	uint32_t	   initial_size = self->stack.size;

	while (self->stack.size > 1)
	{
		t_tree_cursor_entry		entry = array_pop(&self->stack);
		t_cursor_child_iterator iterator =
			ts_tree_cursor_iterate_children(self);
		iterator.child_index = entry.child_index;
		iterator.structural_child_index = entry.structural_child_index;
		iterator.position = entry.position;
		iterator.descendant_index = entry.descendant_index;

		bool visible = false;
		advance(&iterator, &entry, &visible);
		if (visible && self->stack.size + 1 < initial_size)
			break;

		while (advance(&iterator, &entry, &visible))
		{
			if (visible)
			{
				array_push(&self->stack, entry);
				return TreeCursorStepVisible;
			}

			if (ts_subtree_visible_child_count(*entry.subtree))
			{
				array_push(&self->stack, entry);
				return TreeCursorStepHidden;
			}
		}
	}

	self->stack.size = initial_size;
	return TreeCursorStepNone;
}

t_tree_cursor_step ts_tree_cursor_goto_next_sibling_internal(
	t_tree_cursor *_self)
{
	return ts_tree_cursor_goto_sibling_internal(
		_self, ts_tree_cursor_child_iterator_next);
}

bool ts_tree_cursor_goto_next_sibling(t_tree_cursor *self)
{
	switch (ts_tree_cursor_goto_next_sibling_internal(self))
	{
	case TreeCursorStepHidden:
		ts_tree_cursor_goto_first_child(self);
		return true;
	case TreeCursorStepVisible:
		return true;
	default:
		return false;
	}
}

t_tree_cursor_step ts_tree_cursor_goto_previous_sibling_internal(
	t_tree_cursor *_self)
{
	// since subtracting across row loses column information, we may have to
	// restore it
	t_tree_cursor *self = (t_tree_cursor *)_self;

	// for that, save current position before traversing
	t_tree_cursor_step step = ts_tree_cursor_goto_sibling_internal(
		_self, ts_tree_cursor_child_iterator_previous);
	if (step == TreeCursorStepNone)
		return step;

	// if length is already valid, there's no need to recompute it
	if (!length_is_undefined(array_back(&self->stack)->position))
		return step;

	// restore position from the parent node
	const t_tree_cursor_entry *parent =
		&self->stack.contents[self->stack.size - 2];
	t_length		 position = parent->position;
	uint32_t		 child_index = array_back(&self->stack)->child_index;
	const t_subtree *children = ts_subtree_children((*(parent->subtree)));

	if (child_index > 0)
	{
		// skip first child padding since its position should match the position
		// of the parent
		position = length_add(position, ts_subtree_size(children[0]));
		for (uint32_t i = 1; i < child_index; ++i)
		{
			position = length_add(position, ts_subtree_total_size(children[i]));
		}
		position =
			length_add(position, ts_subtree_padding(children[child_index]));
	}

	array_back(&self->stack)->position = position;

	return step;
}

bool ts_tree_cursor_goto_previous_sibling(t_tree_cursor *self)
{
	switch (ts_tree_cursor_goto_previous_sibling_internal(self))
	{
	case TreeCursorStepHidden:
		ts_tree_cursor_goto_last_child(self);
		return true;
	case TreeCursorStepVisible:
		return true;
	default:
		return false;
	}
}

bool ts_tree_cursor_goto_parent(t_tree_cursor *_self)
{
	t_tree_cursor *self = (t_tree_cursor *)_self;
	for (unsigned i = self->stack.size - 2; i + 1 > 0; i--)
	{
		if (ts_tree_cursor_is_entry_visible(self, i))
		{
			self->stack.size = i + 1;
			return true;
		}
	}
	return false;
}

void ts_tree_cursor_goto_descendant(t_tree_cursor *_self,
									uint32_t	   goal_descendant_index)
{
	t_tree_cursor *self = (t_tree_cursor *)_self;

	// Ascend to the lowest ancestor that contains the goal node.
	for (;;)
	{
		uint32_t			 i = self->stack.size - 1;
		t_tree_cursor_entry *entry = &self->stack.contents[i];
		uint32_t			 next_descendant_index =
			entry->descendant_index +
			(ts_tree_cursor_is_entry_visible(self, i) ? 1 : 0) +
			ts_subtree_visible_descendant_count(*entry->subtree);
		if ((entry->descendant_index <= goal_descendant_index) &&
			(next_descendant_index > goal_descendant_index))
		{
			break;
		}
		else if (self->stack.size <= 1)
		{
			return;
		}
		else
		{
			self->stack.size--;
		}
	}

	// Descend to the goal node.
	bool did_descend = true;
	do
	{
		did_descend = false;
		bool					visible;
		t_tree_cursor_entry		entry;
		t_cursor_child_iterator iterator =
			ts_tree_cursor_iterate_children(self);
		if (iterator.descendant_index > goal_descendant_index)
		{
			return;
		}

		while (ts_tree_cursor_child_iterator_next(&iterator, &entry, &visible))
		{
			if (iterator.descendant_index > goal_descendant_index)
			{
				array_push(&self->stack, entry);
				if (visible && entry.descendant_index == goal_descendant_index)
				{
					return;
				}
				else
				{
					did_descend = true;
					break;
				}
			}
		}
	} while (did_descend);
}

uint32_t ts_tree_cursor_current_descendant_index(const t_tree_cursor *_self)
{
	const t_tree_cursor *self = (const t_tree_cursor *)_self;
	t_tree_cursor_entry *last_entry = array_back(&self->stack);
	return last_entry->descendant_index;
}

t_parse_node ts_tree_cursor_current_node(const t_tree_cursor *_self)
{
	const t_tree_cursor *self = (const t_tree_cursor *)_self;
	t_tree_cursor_entry *last_entry = array_back(&self->stack);
	t_symbol			 alias_symbol = self->root_alias_symbol;
	if (self->stack.size > 1 && !ts_subtree_extra(*last_entry->subtree))
	{
		t_tree_cursor_entry *parent_entry =
			&self->stack.contents[self->stack.size - 2];
		alias_symbol = ts_language_alias_at(
			self->tree->language, parent_entry->subtree->ptr->production_id,
			last_entry->structural_child_index);
	}
	return ts_node_new(self->tree, last_entry->subtree, last_entry->position,
					   alias_symbol);
}

// Private - Get various facts about the current node that are needed
// when executing tree queries.
void ts_tree_cursor_current_status(
	const t_tree_cursor *_self, t_field_id *field_id, bool *has_later_siblings,
	bool *has_later_named_siblings,
	bool *can_have_later_siblings_with_this_field, t_symbol *supertypes,
	unsigned *supertype_count)
{
	const t_tree_cursor *self = (const t_tree_cursor *)_self;
	unsigned			 max_supertypes = *supertype_count;
	*field_id = 0;
	*supertype_count = 0;
	*has_later_siblings = false;
	*has_later_named_siblings = false;
	*can_have_later_siblings_with_this_field = false;

	// Walk up the tree, visiting the current node and its invisible ancestors,
	// because fields can refer to nodes through invisible *wrapper* nodes,
	for (unsigned i = self->stack.size - 1; i > 0; i--)
	{
		t_tree_cursor_entry *entry = &self->stack.contents[i];
		t_tree_cursor_entry *parent_entry = &self->stack.contents[i - 1];

		const t_symbol *alias_sequence = ts_language_alias_sequence(
			self->tree->language, parent_entry->subtree->ptr->production_id);

#define subtree_symbol(subtree, structural_child_index)                        \
	((!ts_subtree_extra(subtree) && alias_sequence &&                          \
	  alias_sequence[structural_child_index])                                  \
		 ? alias_sequence[structural_child_index]                              \
		 : ts_subtree_symbol(subtree))

		// Stop walking up when a visible ancestor is found.
		t_symbol entry_symbol =
			subtree_symbol(*entry->subtree, entry->structural_child_index);
		t_symbol_metadata entry_metadata =
			ts_language_symbol_metadata(self->tree->language, entry_symbol);
		if (i != self->stack.size - 1 && entry_metadata.visible)
			break;

		// Record any supertypes
		if (entry_metadata.supertype && *supertype_count < max_supertypes)
		{
			supertypes[*supertype_count] = entry_symbol;
			(*supertype_count)++;
		}

		// Determine if the current node has later siblings.
		if (!*has_later_siblings)
		{
			unsigned sibling_count = parent_entry->subtree->ptr->child_count;
			unsigned structural_child_index = entry->structural_child_index;
			if (!ts_subtree_extra(*entry->subtree))
				structural_child_index++;
			for (unsigned j = entry->child_index + 1; j < sibling_count; j++)
			{
				t_subtree sibling =
					ts_subtree_children(*parent_entry->subtree)[j];
				t_symbol_metadata sibling_metadata =
					ts_language_symbol_metadata(
						self->tree->language,
						subtree_symbol(sibling, structural_child_index));
				if (sibling_metadata.visible)
				{
					*has_later_siblings = true;
					if (*has_later_named_siblings)
						break;
					if (sibling_metadata.named)
					{
						*has_later_named_siblings = true;
						break;
					}
				}
				else if (ts_subtree_visible_child_count(sibling) > 0)
				{
					*has_later_siblings = true;
					if (*has_later_named_siblings)
						break;
					if (sibling.ptr->named_child_count > 0)
					{
						*has_later_named_siblings = true;
						break;
					}
				}
				if (!ts_subtree_extra(sibling))
					structural_child_index++;
			}
		}

#undef subtree_symbol

		if (!ts_subtree_extra(*entry->subtree))
		{
			const t_field_map_entry *field_map, *field_map_end;
			ts_language_field_map(self->tree->language,
								  parent_entry->subtree->ptr->production_id,
								  &field_map, &field_map_end);

			// Look for a field name associated with the current node.
			if (!*field_id)
			{
				for (const t_field_map_entry *map = field_map;
					 map < field_map_end; map++)
				{
					if (!map->inherited &&
						map->child_index == entry->structural_child_index)
					{
						*field_id = map->field_id;
						break;
					}
				}
			}

			// Determine if the current node can have later siblings with the
			// same field name.
			if (*field_id)
			{
				for (const t_field_map_entry *map = field_map;
					 map < field_map_end; map++)
				{
					if (map->field_id == *field_id &&
						map->child_index > entry->structural_child_index)
					{
						*can_have_later_siblings_with_this_field = true;
						break;
					}
				}
			}
		}
	}
}

uint32_t ts_tree_cursor_current_depth(const t_tree_cursor *_self)
{
	const t_tree_cursor *self = (const t_tree_cursor *)_self;
	uint32_t			 depth = 0;
	for (unsigned i = 1; i < self->stack.size; i++)
	{
		if (ts_tree_cursor_is_entry_visible(self, i))
		{
			depth++;
		}
	}
	return depth;
}

t_parse_node ts_tree_cursor_parent_node(const t_tree_cursor *_self)
{
	const t_tree_cursor *self = (const t_tree_cursor *)_self;
	for (int i = (int)self->stack.size - 2; i >= 0; i--)
	{
		t_tree_cursor_entry *entry = &self->stack.contents[i];
		bool				 is_visible = true;
		t_symbol			 alias_symbol = 0;
		if (i > 0)
		{
			t_tree_cursor_entry *parent_entry = &self->stack.contents[i - 1];
			alias_symbol = ts_language_alias_at(
				self->tree->language, parent_entry->subtree->ptr->production_id,
				entry->structural_child_index);
			is_visible =
				(alias_symbol != 0) || ts_subtree_visible(*entry->subtree);
		}
		if (is_visible)
		{
			return ts_node_new(self->tree, entry->subtree, entry->position,
							   alias_symbol);
		}
	}
	return ts_node_new(NULL, NULL, length_zero(), 0);
}

t_field_id ts_tree_cursor_current_field_id(const t_tree_cursor *_self)
{
	const t_tree_cursor *self = (const t_tree_cursor *)_self;

	// Walk up the tree, visiting the current node and its invisible ancestors.
	for (unsigned i = self->stack.size - 1; i > 0; i--)
	{
		t_tree_cursor_entry *entry = &self->stack.contents[i];
		t_tree_cursor_entry *parent_entry = &self->stack.contents[i - 1];

		// Stop walking up when another visible node is found.
		if (i != self->stack.size - 1 &&
			ts_tree_cursor_is_entry_visible(self, i))
			break;

		if (ts_subtree_extra(*entry->subtree))
			break;

		const t_field_map_entry *field_map, *field_map_end;
		ts_language_field_map(self->tree->language,
							  parent_entry->subtree->ptr->production_id,
							  &field_map, &field_map_end);
		for (const t_field_map_entry *map = field_map; map < field_map_end;
			 map++)
		{
			if (!map->inherited &&
				map->child_index == entry->structural_child_index)
			{
				return map->field_id;
			}
		}
	}
	return 0;
}

const char *ts_tree_cursor_current_field_name(const t_tree_cursor *_self)
{
	t_field_id id = ts_tree_cursor_current_field_id(_self);
	if (id)
	{
		const t_tree_cursor *self = (const t_tree_cursor *)_self;
		return self->tree->language->field_names[id];
	}
	else
	{
		return NULL;
	}
}

t_tree_cursor ts_tree_cursor_copy(const t_tree_cursor *_cursor)
{
	const t_tree_cursor *cursor = (const t_tree_cursor *)_cursor;
	t_tree_cursor		 res = {NULL, {0, 0, 0}, 0};
	t_tree_cursor		*copy = (t_tree_cursor *)&res;
	copy->tree = cursor->tree;
	copy->root_alias_symbol = cursor->root_alias_symbol;
	array_init(&copy->stack);
	array_push_all(&copy->stack, &cursor->stack);
	return res;
}

void ts_tree_cursor_reset_to(t_tree_cursor *_dst, const t_tree_cursor *_src)
{
	const t_tree_cursor *cursor = (const t_tree_cursor *)_src;
	t_tree_cursor		*copy = (t_tree_cursor *)_dst;
	copy->tree = cursor->tree;
	copy->root_alias_symbol = cursor->root_alias_symbol;
	array_clear(&copy->stack);
	array_push_all(&copy->stack, &cursor->stack);
}
