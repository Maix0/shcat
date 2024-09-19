/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   language.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 16:54:21 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LANGUAGE_H
#define LANGUAGE_H

#include "parser/parser.h"
#include "me/types.h"

#define ts_builtin_sym_error_repeat (ts_builtin_sym_error - 1)

#define LANGUAGE_VERSION_WITH_PRIMARY_STATES 14
#define LANGUAGE_VERSION_USABLE_VIA_WASM 13

struct s_table_entry
{
	const TSParseAction *actions;
	t_u32				 action_count;
	bool				 is_reusable;
};

typedef struct s_table_entry TableEntry;

void				 ts_language_table_entry(const t_language *, t_state_id, t_symbol, TableEntry *);
t_symbol_metadata	 ts_language_symbol_metadata(const t_language *, t_symbol);
t_symbol			 ts_language_public_symbol(const t_language *, t_symbol);
t_state_id			 ts_language_next_state(const t_language *self, t_state_id state, t_symbol symbol);
bool				 ts_language_is_symbol_external(const t_language *self, t_symbol symbol);
const TSParseAction *ts_language_actions(const t_language *self, t_state_id state, t_symbol symbol, t_u32 *count);
bool				 ts_language_has_reduce_action(const t_language *self, t_state_id state, t_symbol symbol);
t_u16				 ts_language_lookup(const t_language *self, t_state_id state, t_symbol symbol);
bool				 ts_language_has_actions(const t_language *self, t_state_id state, t_symbol symbol);
const bool			*ts_language_enabled_external_tokens(const t_language *self, t_u32 external_scanner_state);
const t_symbol		*ts_language_alias_sequence(const t_language *self, t_u32 production_id);
t_symbol			 ts_language_alias_at(const t_language *self, t_u32 production_id, t_u32 child_index);
void ts_language_field_map(const t_language *self, t_u32 production_id, const TSFieldMapEntry **start, const TSFieldMapEntry **end);
void ts_language_aliases_for_symbol(const t_language *self, t_symbol original_symbol, const t_symbol **start, const t_symbol **end);

#endif // LANGUAGE_H
