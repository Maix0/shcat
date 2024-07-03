#ifndef TREE_SITTER_LANGUAGE_H_
#define TREE_SITTER_LANGUAGE_H_

#include "./parser.h"
#include "me/types.h"

#define ts_builtin_sym_error_repeat (ts_builtin_sym_error - 1)

#define LANGUAGE_VERSION_WITH_PRIMARY_STATES 14
#define LANGUAGE_VERSION_USABLE_VIA_WASM 13

typedef struct TableEntry
{
	const TSParseAction *actions;
	t_u32				 action_count;
	bool				 is_reusable;
} TableEntry;

void ts_language_table_entry(const TSLanguage *, TSStateId, TSSymbol, TableEntry *);

TSSymbolMetadata ts_language_symbol_metadata(const TSLanguage *, TSSymbol);

TSSymbol ts_language_public_symbol(const TSLanguage *, TSSymbol);

TSStateId ts_language_next_state(const TSLanguage *self, TSStateId state, TSSymbol symbol);

static inline bool ts_language_is_symbol_external(const TSLanguage *self, TSSymbol symbol)
{
	return 0 < symbol && symbol < self->external_token_count + 1;
}

static inline const TSParseAction *ts_language_actions(const TSLanguage *self, TSStateId state, TSSymbol symbol, t_u32 *count)
{
	TableEntry entry;
	ts_language_table_entry(self, state, symbol, &entry);
	*count = entry.action_count;
	return entry.actions;
}

static inline bool ts_language_has_reduce_action(const TSLanguage *self, TSStateId state, TSSymbol symbol)
{
	TableEntry entry;
	ts_language_table_entry(self, state, symbol, &entry);
	return entry.action_count > 0 && entry.actions[0].type == TSParseActionTypeReduce;
}

// Lookup the table value for a given symbol and state.
//
// For non-terminal symbols, the table value represents a successor state.
// For terminal symbols, it represents an index in the actions table.
// For 'large' parse states, this is a direct lookup. For 'small' parse
// states, this requires searching through the symbol groups to find
// the given symbol.
static inline t_u16 ts_language_lookup(const TSLanguage *self, TSStateId state, TSSymbol symbol)
{
	if (state >= self->large_state_count)
	{
		t_u32		 index = self->small_parse_table_map[state - self->large_state_count];
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

static inline bool ts_language_has_actions(const TSLanguage *self, TSStateId state, TSSymbol symbol)
{
	return ts_language_lookup(self, state, symbol) != 0;
}

static inline const bool *ts_language_enabled_external_tokens(const TSLanguage *self, unsigned external_scanner_state)
{
	if (external_scanner_state == 0)
	{
		return NULL;
	}
	else
	{
		return self->external_scanner.states + self->external_token_count * external_scanner_state;
	}
}

static inline const TSSymbol *ts_language_alias_sequence(const TSLanguage *self, t_u32 production_id)
{
	return production_id ? &self->alias_sequences[production_id * self->max_alias_sequence_length] : NULL;
}

static inline TSSymbol ts_language_alias_at(const TSLanguage *self, t_u32 production_id, t_u32 child_index)
{
	return production_id ? self->alias_sequences[production_id * self->max_alias_sequence_length + child_index] : 0;
}

static inline void ts_language_field_map(const TSLanguage *self, t_u32 production_id, const TSFieldMapEntry **start,
										 const TSFieldMapEntry **end)
{
	if (self->field_count == 0)
	{
		*start = NULL;
		*end = NULL;
		return;
	}

	TSFieldMapSlice slice = self->field_map_slices[production_id];
	*start = &self->field_map_entries[slice.index];
	*end = &self->field_map_entries[slice.index] + slice.length;
}

static inline void ts_language_aliases_for_symbol(const TSLanguage *self, TSSymbol original_symbol, const TSSymbol **start,
												  const TSSymbol **end)
{
	*start = &self->public_symbol_map[original_symbol];
	*end = *start + 1;

	unsigned idx = 0;
	for (;;)
	{
		TSSymbol symbol = self->alias_map[idx++];
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

#endif // TREE_SITTER_LANGUAGE_H_
