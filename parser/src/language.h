#ifndef TREE_SITTER_LANGUAGE_H_
#define TREE_SITTER_LANGUAGE_H_

#include "./subtree.h"
#include "parser/types/types_parse_action_type.h"
#include "parser/types/types_state_id.h"
#include "parser/types/types_symbol.h"

#define ts_builtin_sym_error_repeat (ts_builtin_sym_error - 1)

#define LANGUAGE_VERSION_WITH_PRIMARY_STATES 14
#define LANGUAGE_VERSION_USABLE_VIA_WASM 13

typedef struct s_table_entry
{
	const t_parse_actions *actions;
	t_u32				   action_count;
	bool				   is_reusable;
} t_table_entry;

typedef struct s_lookahead_iterator
{
	const t_language *language;
	const t_u16		 *data;
	const t_u16		 *group_end;
	t_state_id		  state;
	t_u16			  table_value;
	t_u16			  section_index;
	t_u16			  group_count;
	bool			  is_small_state;

	const t_parse_actions *actions;
	t_symbol			   symbol;
	t_state_id			   next_state;
	t_u16				   action_count;
} t_lookahead_iterator;

void ts_language_table_entry(const t_language *, t_state_id, t_symbol,
							 t_table_entry *);

t_symbol_metadata ts_language_symbol_metadata(const t_language *, t_symbol);

t_symbol ts_language_public_symbol(const t_language *, t_symbol);

t_state_id ts_language_next_state(const t_language *self, t_state_id state,
								  t_symbol symbol);

static inline bool ts_language_is_symbol_external(const t_language *self,
												  t_symbol			symbol)
{
	return 0 < symbol && symbol < self->external_token_count + 1;
}

static inline const t_parse_actions *ts_language_actions(const t_language *self,
														 t_state_id state,
														 t_symbol	symbol,
														 t_u32	   *count)
{
	t_table_entry entry;
	ts_language_table_entry(self, state, symbol, &entry);
	*count = entry.action_count;
	return entry.actions;
}

static inline bool ts_language_has_reduce_action(const t_language *self,
												 t_state_id		   state,
												 t_symbol		   symbol)
{
	t_table_entry entry;
	ts_language_table_entry(self, state, symbol, &entry);
	return entry.action_count > 0 && entry.actions[0].type == ActionTypeReduce;
}

// Lookup the table value for a given symbol and state.
//
// For non-terminal symbols, the table value represents a successor state.
// For terminal symbols, it represents an index in the actions table.
// For 'large' parse states, this is a direct lookup. For 'small' parse
// states, this requires searching through the symbol groups to find
// the given symbol.
static inline t_u16 ts_language_lookup(const t_language *self, t_state_id state,
									   t_symbol symbol)
{
	if (state >= self->large_state_count)
	{
		t_u32 index =
			self->small_parse_table_map[state - self->large_state_count];
		const t_u16 *data = &self->small_parse_table[index];
		t_u16		 group_count = *(data++);
		for (unsigned i = 0; i < group_count; i++)
		{
			t_u16 section_value = *(data++);
			t_u16 symbol_count = *(data++);
			for (unsigned j = 0; j < symbol_count; j++)
			{
				if (*(data++) == symbol)
					return section_value;
			}
		}
		return 0;
	}
	else
	{
		return self->parse_table[state * self->symbol_count + symbol];
	}
}

static inline bool ts_language_has_actions(const t_language *self,
										   t_state_id state, t_symbol symbol)
{
	return ts_language_lookup(self, state, symbol) != 0;
}

// Iterate over all of the symbols that are valid in the given state.
//
// For 'large' parse states, this just requires iterating through
// all possible symbols and checking the parse table for each one.
// For 'small' parse states, this exploits the structure of the
// table to only visit the valid symbols.
static inline t_lookahead_iterator ts_language_lookaheads(
	const t_language *self, t_state_id state)
{
	bool		 is_small_state = state >= self->large_state_count;
	const t_u16 *data;
	const t_u16 *group_end = NULL;
	t_u16		 group_count = 0;
	if (is_small_state)
	{
		t_u32 index =
			self->small_parse_table_map[state - self->large_state_count];
		data = &self->small_parse_table[index];
		group_end = data + 1;
		group_count = *data;
	}
	else
	{
		data = &self->parse_table[state * self->symbol_count] - 1;
	}
	return (t_lookahead_iterator){
		.language = self,
		.data = data,
		.group_end = group_end,
		.group_count = group_count,
		.is_small_state = is_small_state,
		.symbol = UINT16_MAX,
		.next_state = 0,
	};
}

static inline bool ts_lookahead_iterator__next(t_lookahead_iterator *self)
{
	// For small parse states, valid symbols are listed explicitly,
	// grouped by their value. There's no need to look up the actions
	// again until moving to the next group.
	if (self->is_small_state)
	{
		self->data++;
		if (self->data == self->group_end)
		{
			if (self->group_count == 0)
				return false;
			self->group_count--;
			self->table_value = *(self->data++);
			unsigned symbol_count = *(self->data++);
			self->group_end = self->data + symbol_count;
			self->symbol = *self->data;
		}
		else
		{
			self->symbol = *self->data;
			return true;
		}
	}

	// For large parse states, iterate through every symbol until one
	// is found that has valid actions.
	else
	{
		do
		{
			self->data++;
			self->symbol++;
			if (self->symbol >= self->language->symbol_count)
				return false;
			self->table_value = *self->data;
		} while (!self->table_value);
	}

	// Depending on if the symbols is terminal or non-terminal, the table
	// value either represents a list of actions or a successor state.
	if (self->symbol < self->language->token_count)
	{
		const t_parse_action_entry *entry =
			&self->language->parse_actions[self->table_value];
		self->action_count = entry->entry.count;
		self->actions = (const t_parse_actions *)(entry + 1);
		self->next_state = 0;
	}
	else
	{
		self->action_count = 0;
		self->next_state = self->table_value;
	}
	return true;
}

// Whether the state is a "primary state". If this returns false, it
// indicates that there exists another state that behaves identically to
// this one with respect to query analysis.
static inline bool ts_language_state_is_primary(const t_language *self,
												t_state_id		  state)
{
	if (self->version >= LANGUAGE_VERSION_WITH_PRIMARY_STATES)
	{
		return state == self->primary_state_ids[state];
	}
	else
	{
		return true;
	}
}

static inline const bool *ts_language_enabled_external_tokens(
	const t_language *self, unsigned external_scanner_state)
{
	if (external_scanner_state == 0)
	{
		return NULL;
	}
	else
	{
		return self->external_scanner.states +
			   self->external_token_count * external_scanner_state;
	}
}

static inline const t_symbol *ts_language_alias_sequence(const t_language *self,
														 t_u32 production_id)
{
	return production_id
			   ? &self->alias_sequences[production_id *
										self->max_alias_sequence_length]
			   : NULL;
}

static inline t_symbol ts_language_alias_at(const t_language *self,
											t_u32			  production_id,
											t_u32			  child_index)
{
	return production_id
			   ? self->alias_sequences[production_id *
										   self->max_alias_sequence_length +
									   child_index]
			   : 0;
}

static inline void ts_language_field_map(const t_language *self,
										 t_u32			   production_id,
										 const t_field_map_entry **start,
										 const t_field_map_entry **end)
{
	if (self->field_count == 0)
	{
		*start = NULL;
		*end = NULL;
		return;
	}

	t_field_map_slice slice = self->field_map_slices[production_id];
	*start = &self->field_map_entries[slice.index];
	*end = &self->field_map_entries[slice.index] + slice.length;
}

static inline void ts_language_aliases_for_symbol(const t_language *self,
												  t_symbol original_symbol,
												  const t_symbol **start,
												  const t_symbol **end)
{
	*start = &self->public_symbol_map[original_symbol];
	*end = *start + 1;

	unsigned idx = 0;
	for (;;)
	{
		t_symbol symbol = self->alias_map[idx++];
		if (symbol == 0 || symbol > original_symbol)
			break;
		t_u16 count = self->alias_map[idx++];
		if (symbol == original_symbol)
		{
			*start = &self->alias_map[idx];
			*end = &self->alias_map[idx + count];
			break;
		}
		idx += count;
	}
}

static inline void ts_language_write_symbol_as_dot_string(
	const t_language *self, FILE *f, t_symbol symbol)
{
	const char *name = ts_language_symbol_name(self, symbol);
	for (const char *chr = name; *chr; chr++)
	{
		switch (*chr)
		{
		case '"':
		case '\\':
			fputc('\\', f);
			fputc(*chr, f);
			break;
		case '\n':
			fputs("\\n", f);
			break;
		case '\t':
			fputs("\\t", f);
			break;
		default:
			fputc(*chr, f);
			break;
		}
	}
}

#endif // TREE_SITTER_LANGUAGE_H_
