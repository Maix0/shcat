/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_types.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 23:01:45 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/30 18:03:54 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_TYPES_H
#define PARSE_TYPES_H

#include <stdbool.h>
#include <stdint.h>

#include "./src/api.h"
#include "./src/lexer.h"
#include "./src/parser.h"
#include "me/types.h"

#include "parser/types/types_lexer_state.h"

typedef TSSymbolMetadata   t_symbol_metadata;
typedef TSSymbol		   t_symbol;
typedef TSStateId		   t_state_id;
typedef TSFieldId		   t_field_id;
typedef TSLexer			   t_lexer;
typedef TSFieldMapSlice	   t_field_map_slice;
typedef TSFieldMapEntry	   t_field_map_entry;
typedef TSParseActionEntry t_parse_action_entry;
typedef TSLexMode		   t_lex_modes;
typedef TSCharacterRange   t_char_range;

#define ActionTypeShift TSParseActionTypeShift
#define ActionTypeReduce TSParseActionTypeReduce
#define ActionTypeRecover TSParseActionTypeRecover
#define ActionTypeAccept TSParseActionTypeAccept

#ifndef inline
# define inline __inline__
#endif

static inline bool lex_skip(t_state_id state_value, t_lexer *lexer, t_lexer_state *s)
{
	(void)(lexer);
	s->skip = true;
	s->state = state_value;
	return (true);
};

static inline bool lex_advance(t_state_id state_value, t_lexer *lexer, t_lexer_state *s)
{
	(void)(lexer);
	s->state = state_value;
	return (true);
};

static inline bool lex_accept_token(t_symbol symbol_value, t_lexer *lexer, t_lexer_state *s)
{
	s->result = true;
	lexer->result_symbol = symbol_value;
	lexer->mark_end(lexer);
	return (true);
};

static inline bool lex_end_state(t_lexer *lexer, t_lexer_state *s)
{
	(void)(lexer);
	(void)(s);
	return (false);
};

static inline t_field_map_entry fmap_entry(t_field_id field_id, uint8_t child_index, bool inherited)
{
	return ((t_field_map_entry){
		.field_id = field_id,
		.child_index = child_index,
		.inherited = inherited,
	});
};

static inline t_field_map_slice fmap_slice(t_u16 index, t_u16 length)
{
	return ((t_field_map_slice){
		.index = index,
		.length = length,
	});
};

static inline t_symbol_metadata sym_metadata(bool visible, bool named, bool supertype)
{
	return ((t_symbol_metadata){
		.visible = visible,
		.named = named,
		.supertype = supertype,
	});
};

static inline t_parse_action_entry entry(uint8_t count, bool reusable)
{
	return ((t_parse_action_entry){.entry = {.count = count, .reusable = reusable}});
};

static inline t_parse_action_entry shift(t_state_id state_value)
{
	return ((t_parse_action_entry){{.shift = {
										.type = ActionTypeShift,
										.state = (state_value),
									}}});
};

static inline t_parse_action_entry shift_repeat(t_state_id state_value)
{
	return ((t_parse_action_entry){{.shift = {.type = ActionTypeShift, .state = (state_value), .repetition = true}}});
};

static inline t_parse_action_entry shift_extra(void)
{
	return ((t_parse_action_entry){{.shift = {.type = ActionTypeShift, .extra = true}}});
};

static inline t_parse_action_entry reduce(

	t_symbol symbol, uint8_t child_count, int16_t dynamic_precedence, t_u16 production_id)
{
	return ((t_parse_action_entry){{.reduce = {
										.type = ActionTypeReduce,
										.child_count = child_count,
										.symbol = symbol,
										.dynamic_precedence = dynamic_precedence,
										.production_id = production_id,
									}}});
};

static inline t_parse_action_entry recover(void)
{
	return ((t_parse_action_entry){{.type = ActionTypeRecover}});
};

static inline t_parse_action_entry accept(void)
{
	return ((t_parse_action_entry){{.type = ActionTypeAccept}});
};

/*
static inline bool set_contains(t_char_range *ranges, t_u32 len, int32_t lookahead)
{
	t_u32 index = 0;
	t_u32 size = len - index;
	while (size > 1)
	{
		t_u32		  half_size = size / 2;
		t_u32		  mid_index = index + half_size;
		t_char_range *range = &ranges[mid_index];
		if (lookahead >= range->start && lookahead <= range->end)
		{
			return (true);
		}
		else if (lookahead > range->end)
		{
			index = mid_index;
		}
		size -= half_size;
	}
	t_char_range *range = &ranges[index];
	return (lookahead >= range->start && lookahead <= range->end);
};
*/

static inline bool advance_map_inner(t_u32 *map, t_u32 elems, t_lexer *l, t_lexer_state *s)
{
	t_u32 i;

	(void)(l);
	i = 0;
	while (i < elems)
	{
		if (map[i] == (t_u32)s->lookahead)
		{
			s->state = map[i + 1];
			return (true);
		}
		i += 2;
	}
	return (false);
};

static inline t_lex_modes lex_mode_external(t_u16 lex_state, t_u16 ext_lex_state)
{
	return ((t_lex_modes){
		.lex_state = lex_state,
		.external_lex_state = ext_lex_state,
	});
};

static inline t_lex_modes lex_mode_normal(t_u16 lex_state)
{
	return ((t_lex_modes){
		.lex_state = lex_state,
	});
};

static inline t_u16 actions(t_u16 val)
{
	return (val);
};

static inline t_u16 state(t_u16 val)
{
	return (val);
};

#endif /* PARSE_TYPES_H */
