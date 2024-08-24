#include "parser/language.h"
#include "me/types.h"
#include "parser/api.h"
#include "parser/parser.h"
#include <assert.h>
#include <string.h>

t_u32 ts_language_symbol_count(const TSLanguage *self)
{
	return (self->symbol_count + self->alias_count);
}

t_u32 ts_language_state_count(const TSLanguage *self)
{
	return (self->state_count);
}

t_u32 ts_language_version(const TSLanguage *self)
{
	return (self->version);
}

t_u32 ts_language_field_count(const TSLanguage *self)
{
	return (self->field_count);
}

void ts_language_table_entry(const TSLanguage *self, TSStateId state, TSSymbol symbol, TableEntry *result)
{
	t_u32					  action_index;
	const TSParseActionEntry *entry;

	if (symbol == ts_builtin_sym_error || symbol == ts_builtin_sym_error_repeat)
	{
		result->action_count = 0;
		result->is_reusable = false;
		result->actions = NULL;
	}
	else
	{
		assert(symbol < self->token_count);
		action_index = ts_language_lookup(self, state, symbol);
		entry = &self->parse_actions[action_index];
		result->action_count = entry->entry.count;
		result->is_reusable = entry->entry.reusable;
		result->actions = (const TSParseAction *)(entry + 1);
	}
}

TSSymbolMetadata ts_language_symbol_metadata(const TSLanguage *self, TSSymbol symbol)
{
	if (symbol == ts_builtin_sym_error)
		return ((TSSymbolMetadata){.visible = true, .named = true});
	else if (symbol == ts_builtin_sym_error_repeat)
		return ((TSSymbolMetadata){.visible = false, .named = false});
	else
		return (self->symbol_metadata[symbol]);
}

TSSymbol ts_language_public_symbol(const TSLanguage *self, TSSymbol symbol)
{
	if (symbol == ts_builtin_sym_error)
		return (symbol);
	return (self->public_symbol_map[symbol]);
}

TSStateId ts_language_next_state(const TSLanguage *self, TSStateId state, TSSymbol symbol)
{
	t_u32				 count;
	const TSParseAction *actions;
	TSParseAction		 action;

	if (symbol == ts_builtin_sym_error || symbol == ts_builtin_sym_error_repeat)
	{
		return (0);
	}
	else if (symbol < self->token_count)
	{

		actions = ts_language_actions(self, state, symbol, &count);
		if (count > 0)
		{
			action = actions[count - 1];
			if (action.type == TSParseActionTypeShift)
				return (action.shift.extra ? state : action.shift.state);
		}
		return (0);
	}
	else
		return (ts_language_lookup(self, state, symbol));
}

t_const_str ts_language_symbol_name(const TSLanguage *self, TSSymbol symbol)
{
	if (symbol == ts_builtin_sym_error)
		return ("ERROR");
	else if (symbol == ts_builtin_sym_error_repeat)
		return ("_ERROR");
	else if (symbol < ts_language_symbol_count(self))
		return (self->symbol_names[symbol]);
	else
		return (NULL);
}

TSSymbol ts_language_symbol_for_name(const TSLanguage *self, t_const_str string, t_u32 length, bool is_named)
{
	TSSymbolMetadata metadata;
	t_u16			 count;
	TSSymbol		 i;
	t_const_str		 symbol_name;
	if (!strncmp(string, "ERROR", length))
		return (ts_builtin_sym_error);
	count = (t_u16)ts_language_symbol_count(self);
	i = 0;
	while (i < count)
	{
		metadata = ts_language_symbol_metadata(self, i);
		if ((!metadata.visible && !metadata.supertype) || metadata.named != is_named)
		{
			i++;
			continue;
		}
		symbol_name = self->symbol_names[i];
		if (!strncmp(symbol_name, string, length) && !symbol_name[length])
			return (self->public_symbol_map[i]);
		i++;
	}
	return (0);
}

TSSymbolType ts_language_symbol_type(const TSLanguage *self, TSSymbol symbol)
{
	TSSymbolMetadata metadata;

	metadata = ts_language_symbol_metadata(self, symbol);
	if (metadata.named && metadata.visible)
		return (TSSymbolTypeRegular);
	else if (metadata.visible)
		return (TSSymbolTypeAnonymous);
	else
		return (TSSymbolTypeAuxiliary);
}

t_const_str ts_language_field_name_for_id(const TSLanguage *self, TSFieldId id)
{
	t_u32 count;

	count = ts_language_field_count(self);
	if (count && id <= count)
		return (self->field_names[id]);
	else
		return (NULL);
}

TSFieldId ts_language_field_id_for_name(const TSLanguage *self, t_const_str name, t_u32 name_length)
{
	t_u16	 count;
	TSSymbol i;
	t_i32	 res;

	count = (t_u16)ts_language_field_count(self);
	i = 1;
	while (i < count + 1)
	{
		res = strncmp(name, self->field_names[i], name_length);
		if (res == 0)
		{
			if (self->field_names[i][name_length] == 0)
				return (i);
		}
		else if (res == -1)
			return (0);
		i++;
	}
	return (0);
}

bool ts_language_is_symbol_external(const TSLanguage *self, TSSymbol symbol)
{
	return (0 < symbol && symbol < self->external_token_count + 1);
}

const TSParseAction *ts_language_actions(const TSLanguage *self, TSStateId state, TSSymbol symbol, t_u32 *count)
{
	TableEntry entry;

	ts_language_table_entry(self, state, symbol, &entry);
	*count = entry.action_count;
	return (entry.actions);
}

bool ts_language_has_reduce_action(const TSLanguage *self, TSStateId state, TSSymbol symbol)
{
	TableEntry entry;

	ts_language_table_entry(self, state, symbol, &entry);
	return (entry.action_count > 0 && entry.actions[0].type == TSParseActionTypeReduce);
}

// Lookup the table value for a given symbol and state.
//
// For non-terminal symbols, the table value represents a successor state.
// For terminal symbols, it represents an index in the actions table.
// For 'large' parse states, this is a direct lookup. For 'small' parse
// states, this requires searching through the symbol groups to find
// the given symbol.
t_u16 ts_language_lookup(const TSLanguage *self, TSStateId state, TSSymbol symbol)
{
	if (state >= self->large_state_count)
		return (me_abort("we got a small parse table, which isn't supported"), -1);
	return (self->parse_table[state * self->symbol_count + symbol]);
}

bool ts_language_has_actions(const TSLanguage *self, TSStateId state, TSSymbol symbol)
{
	return (ts_language_lookup(self, state, symbol) != 0);
}

const bool *ts_language_enabled_external_tokens(const TSLanguage *self, t_u32 external_scanner_state)
{
	if (external_scanner_state == 0)
		return (NULL);
	else
		return (self->external_scanner.states + self->external_token_count * external_scanner_state);
}

const TSSymbol *ts_language_alias_sequence(const TSLanguage *self, t_u32 production_id)
{
	return (production_id ? &self->alias_sequences[production_id * self->max_alias_sequence_length] : NULL);
}

TSSymbol ts_language_alias_at(const TSLanguage *self, t_u32 production_id, t_u32 child_index)
{
	return (production_id ? self->alias_sequences[production_id * self->max_alias_sequence_length + child_index] : 0);
}

void ts_language_field_map(const TSLanguage *self, t_u32 production_id, const TSFieldMapEntry **start, const TSFieldMapEntry **end)
{
	TSFieldMapSlice slice;

	if (self->field_count == 0)
	{
		*start = NULL;
		*end = NULL;
		return;
	}

	slice = self->field_map_slices[production_id];
	*start = &self->field_map_entries[slice.index];
	*end = &self->field_map_entries[slice.index] + slice.length;
}

void ts_language_aliases_for_symbol(const TSLanguage *self, TSSymbol original_symbol, const TSSymbol **start, const TSSymbol **end)
{

	t_u32	 idx;
	TSSymbol symbol;
	t_u16	 count;

	*start = &self->public_symbol_map[original_symbol];
	*end = *start + 1;
	idx = 0;
	while (true)
	{
		symbol = self->alias_map[idx++];
		if (symbol == 0 || symbol > original_symbol)
			break;
		count = self->alias_map[idx++];
		if (symbol == original_symbol)
		{
			*start = &self->alias_map[idx];
			*end = &self->alias_map[idx + count];
			break;
		}
		idx += count;
	}
}
