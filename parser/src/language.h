#ifndef LANGUAGE_H
#define LANGUAGE_H

#include "./parser.h"
#include "me/types.h"

#define ts_builtin_sym_error_repeat (ts_builtin_sym_error - 1)

#define LANGUAGE_VERSION_WITH_PRIMARY_STATES 14
#define LANGUAGE_VERSION_USABLE_VIA_WASM 13

struct TableEntry
{
	const TSParseAction *actions;
	t_u32				 action_count;
	bool				 is_reusable;
};

typedef struct TableEntry TableEntry;

void				 ts_language_table_entry(const TSLanguage *, TSStateId, TSSymbol, TableEntry *);
TSSymbolMetadata	 ts_language_symbol_metadata(const TSLanguage *, TSSymbol);
TSSymbol			 ts_language_public_symbol(const TSLanguage *, TSSymbol);
TSStateId			 ts_language_next_state(const TSLanguage *self, TSStateId state, TSSymbol symbol);
bool				 ts_language_is_symbol_external(const TSLanguage *self, TSSymbol symbol);
const TSParseAction *ts_language_actions(const TSLanguage *self, TSStateId state, TSSymbol symbol, t_u32 *count);
bool				 ts_language_has_reduce_action(const TSLanguage *self, TSStateId state, TSSymbol symbol);
t_u16				 ts_language_lookup(const TSLanguage *self, TSStateId state, TSSymbol symbol);
bool				 ts_language_has_actions(const TSLanguage *self, TSStateId state, TSSymbol symbol);
const bool			*ts_language_enabled_external_tokens(const TSLanguage *self, t_u32 external_scanner_state);
const TSSymbol		*ts_language_alias_sequence(const TSLanguage *self, t_u32 production_id);
TSSymbol			 ts_language_alias_at(const TSLanguage *self, t_u32 production_id, t_u32 child_index);
void ts_language_field_map(const TSLanguage *self, t_u32 production_id, const TSFieldMapEntry **start, const TSFieldMapEntry **end);
void ts_language_aliases_for_symbol(const TSLanguage *self, TSSymbol original_symbol, const TSSymbol **start, const TSSymbol **end);

#endif // LANGUAGE_H
