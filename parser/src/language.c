#include "./language.h"
#include "parser/api.h"
#include <string.h>

const t_language *ts_language_copy(const t_language *self) {
  return self;
}

void ts_language_delete(const t_language *self) {
	(void)(self);
}

t_u32 ts_language_symbol_count(const t_language *self) {
  return self->symbol_count + self->alias_count;
}

t_u32 ts_language_state_count(const t_language *self) {
  return self->state_count;
}

t_u32 ts_language_version(const t_language *self) {
  return self->version;
}

t_u32 ts_language_field_count(const t_language *self) {
  return self->field_count;
}

void ts_language_table_entry(
  const t_language *self,
  t_state_id state,
  t_symbol symbol,
  TableEntry *result
) {
  if (symbol == ts_builtin_sym_error || symbol == ts_builtin_sym_error_repeat) {
    result->action_count = 0;
    result->is_reusable = false;
    result->actions = NULL;
  } else {
    assert(symbol < self->token_count);
    t_u32 action_index = ts_language_lookup(self, state, symbol);
    const t_parse_action_entry *entry = &self->parse_actions[action_index];
    result->action_count = entry->entry.count;
    result->is_reusable = entry->entry.reusable;
    result->actions = (const t_parse_actions *)(entry + 1);
  }
}

t_symbol_metadata ts_language_symbol_metadata(
  const t_language *self,
  t_symbol symbol
) {
  if (symbol == ts_builtin_sym_error)  {
    return (t_symbol_metadata) {.visible = true, .named = true};
  } else if (symbol == ts_builtin_sym_error_repeat) {
    return (t_symbol_metadata) {.visible = false, .named = false};
  } else {
    return self->symbol_metadata[symbol];
  }
}

t_symbol ts_language_public_symbol(
  const t_language *self,
  t_symbol symbol
) {
  if (symbol == ts_builtin_sym_error) return symbol;
  return self->public_symbol_map[symbol];
}

t_state_id ts_language_next_state(
  const t_language *self,
  t_state_id state,
  t_symbol symbol
) {
  if (symbol == ts_builtin_sym_error || symbol == ts_builtin_sym_error_repeat) {
    return 0;
  } else if (symbol < self->token_count) {
    t_u32 count;
    const t_parse_actions *actions = ts_language_actions(self, state, symbol, &count);
    if (count > 0) {
      t_parse_actions action = actions[count - 1];
      if (action.type == ActionTypeShift) {
        return action.shift.extra ? state : action.shift.state;
      }
    }
    return 0;
  } else {
    return ts_language_lookup(self, state, symbol);
  }
}

const char *ts_language_symbol_name(
  const t_language *self,
  t_symbol symbol
) {
  if (symbol == ts_builtin_sym_error) {
    return "ERROR";
  } else if (symbol == ts_builtin_sym_error_repeat) {
    return "_ERROR";
  } else if (symbol < ts_language_symbol_count(self)) {
    return self->symbol_names[symbol];
  } else {
    return NULL;
  }
}

t_symbol ts_language_symbol_for_name(
  const t_language *self,
  const char *string,
  t_u32 length,
  bool is_named
) {
  if (!strncmp(string, "ERROR", length)) return ts_builtin_sym_error;
  t_u16 count = (t_u16)ts_language_symbol_count(self);
  for (t_symbol i = 0; i < count; i++) {
    t_symbol_metadata metadata = ts_language_symbol_metadata(self, i);
    if ((!metadata.visible && !metadata.supertype) || metadata.named != is_named) continue;
    const char *symbol_name = self->symbol_names[i];
    if (!strncmp(symbol_name, string, length) && !symbol_name[length]) {
      return self->public_symbol_map[i];
    }
  }
  return 0;
}

t_symbol_type ts_language_symbol_type(
  const t_language *self,
  t_symbol symbol
) {
  t_symbol_metadata metadata = ts_language_symbol_metadata(self, symbol);
  if (metadata.named && metadata.visible) {
    return SymbolTypeRegular;
  } else if (metadata.visible) {
    return SymbolTypeAnonymous;
  } else {
    return SymbolTypeAuxiliary;
  }
}

const char *ts_language_field_name_for_id(
  const t_language *self,
  t_field_id id
) {
  t_u32 count = ts_language_field_count(self);
  if (count && id <= count) {
    return self->field_names[id];
  } else {
    return NULL;
  }
}

t_field_id ts_language_field_id_for_name(
  const t_language *self,
  const char *name,
  t_u32 name_length
) {
  t_u16 count = (t_u16)ts_language_field_count(self);
  for (t_symbol i = 1; i < count + 1; i++) {
    switch (strncmp(name, self->field_names[i], name_length)) {
      case 0:
        if (self->field_names[i][name_length] == 0) return i;
        break;
      case -1:
        return 0;
      default:
        break;
    }
  }
  return 0;
}

t_lookahead_iterator *ts_lookahead_iterator_new(const t_language *self, t_state_id state) {
  if (state >= self->state_count) return NULL;
  LookaheadIterator *iterator = malloc(sizeof(LookaheadIterator));
  *iterator = ts_language_lookaheads(self, state);
  return (t_lookahead_iterator *)iterator;
}

void ts_lookahead_iterator_delete(t_lookahead_iterator *self) {
  free(self);
}

bool ts_lookahead_iterator_reset_state(t_lookahead_iterator * self, t_state_id state) {
  LookaheadIterator *iterator = (LookaheadIterator *)self;
  if (state >= iterator->language->state_count) return false;
  *iterator = ts_language_lookaheads(iterator->language, state);
  return true;
}

const t_language *ts_lookahead_iterator_language(const t_lookahead_iterator *self) {
  const LookaheadIterator *iterator = (const LookaheadIterator *)self;
  return iterator->language;
}

bool ts_lookahead_iterator_reset(t_lookahead_iterator *self, const t_language *language, t_state_id state) {
  if (state >= language->state_count) return false;
  LookaheadIterator *iterator = (LookaheadIterator *)self;
  *iterator = ts_language_lookaheads(language, state);
  return true;
}

bool ts_lookahead_iterator_next(t_lookahead_iterator *self) {
  LookaheadIterator *iterator = (LookaheadIterator *)self;
  return ts_lookahead_iterator__next(iterator);
}

t_symbol ts_lookahead_iterator_current_symbol(const t_lookahead_iterator *self) {
  const LookaheadIterator *iterator = (const LookaheadIterator *)self;
  return iterator->symbol;
}

const char *ts_lookahead_iterator_current_symbol_name(const t_lookahead_iterator *self) {
  const LookaheadIterator *iterator = (const LookaheadIterator *)self;
  return ts_language_symbol_name(iterator->language, iterator->symbol);
}
