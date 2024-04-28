/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_types.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 23:01:45 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/26 18:05:40 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSETYPES_H
#define PARSETYPES_H

#include <stdbool.h>
#include <stdint.h>

typedef uint16_t t_state_id;
typedef uint16_t t_symbol;
typedef uint16_t t_field_id;

typedef struct s_lexer t_lexer;

#define ts_builtin_sym_end 0
#define ts_builtin_sym_error -1

struct s_lexer
{
	int32_t	 lookahead;
	t_symbol result_symbol;
	void (*advance)(t_lexer *, bool);
	void (*mark_end)(t_lexer *);
	uint32_t (*get_column)(t_lexer *);
	bool (*is_at_included_range_start)(const t_lexer *);
	bool (*eof)(const t_lexer *);
};

typedef struct s_lexer_state
{
	int32_t	   lookahead;
	t_state_id state;
	bool	   result;
	bool	   skip;
	bool	   eof;
} t_lexer_state;

static inline bool lex_skip(t_state_id state_value, t_lexer *lexer,
							t_lexer_state *s)
{
	(void)(lexer);
	s->skip = true;
	s->state = state_value;
	return (true);
};

static inline bool lex_advance(t_state_id state_value, t_lexer *lexer,
							   t_lexer_state *s)
{
	(void)(lexer);
	s->state = state_value;
	return (true);
};

static inline bool lex_accept_token(t_symbol symbol_value, t_lexer *lexer,
									t_lexer_state *s)
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

typedef struct
{
	t_field_id field_id;
	uint8_t	   child_index;
	bool	   inherited;
} t_field_map_entry;

static inline t_field_map_entry fmap_entry(t_field_id field_id,
										   uint8_t child_index, bool inherited)
{
	return ((t_field_map_entry){
		.field_id = field_id,
		.child_index = child_index,
		.inherited = inherited,
	});
};

typedef struct
{
	uint16_t index;
	uint16_t length;
} t_field_map_slice;

static inline t_field_map_slice fmap_slice(uint16_t index, uint16_t length)
{
	return ((t_field_map_slice){
		.index = index,
		.length = length,
	});
};

typedef struct
{
	bool visible;
	bool named;
	bool supertype;
} t_symbol_metadata;

static inline t_symbol_metadata sym_metadata(bool visible, bool named,
												bool supertype)
{
	return ((t_symbol_metadata){
		.visible = visible,
		.named = named,
		.supertype = supertype,
	});
};

typedef enum
{
	ActionTypeShift,
	ActionTypeReduce,
	ActionTypeAccept,
	ActionTypeRecover,
} t_parse_action_type;

typedef union {
	struct
	{
		uint8_t	   type;
		t_state_id state;
		bool	   extra;
		bool	   repetition;
	} shift;
	struct
	{
		uint8_t	 type;
		uint8_t	 child_count;
		t_symbol symbol;
		int16_t	 dynamic_precedence;
		uint16_t production_id;
	} reduce;
	uint8_t type;
} t_parse_actions;

typedef struct
{
	uint16_t lex_state;
	uint16_t external_lex_state;
} t_lex_modes;

typedef union {
	t_parse_actions action;
	struct
	{
		uint8_t count;
		bool	reusable;
	} entry;
} t_parse_action_entry;

static inline t_parse_action_entry entry(uint8_t count, bool reusable)
{
	return ((t_parse_action_entry){
		.entry = {.count = count, .reusable = reusable}});
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
	return ((t_parse_action_entry){{.shift = {.type = ActionTypeShift,
											  .state = (state_value),
											  .repetition = true}}});
};

static inline t_parse_action_entry shift_extra(void)
{
	return ((t_parse_action_entry){
		{.shift = {.type = ActionTypeShift, .extra = true}}});
};

static inline t_parse_action_entry reduce(

	t_symbol symbol, uint8_t child_count, int16_t dynamic_precedence,
	uint16_t production_id)
{
	return (
		(t_parse_action_entry){{.reduce = {
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

typedef struct s_char_range
{
	int32_t start;
	int32_t end;
} t_char_range;

static inline bool set_contains(t_char_range *ranges, uint32_t len,
								int32_t lookahead)
{
	uint32_t index = 0;
	uint32_t size = len - index;
	while (size > 1)
	{
		uint32_t	  half_size = size / 2;
		uint32_t	  mid_index = index + half_size;
		t_char_range *range = &ranges[mid_index];
		if (lookahead >= range->start && lookahead <= range->end)
		{
			return true;
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

static inline bool advance_map_inner(uint32_t *map, uint32_t elems, t_lexer *l,
									 t_lexer_state *s)
{
	uint32_t i;
	
	(void)(l);
	i = 0;
	while (i < elems)
	{
		if (map[i] == (uint32_t)s->lookahead)
		{
			s->state = map[i + 1];
			return true;
		}
		i += 2;
	}
	return (false);
};

static inline t_lex_modes lex_mode_external(uint16_t lex_state,
											uint16_t ext_lex_state)
{
	return ((t_lex_modes){
		.lex_state = lex_state,
		.external_lex_state = ext_lex_state,
	});
};

static inline t_lex_modes lex_mode_normal(uint16_t lex_state)
{
	return ((t_lex_modes){
		.lex_state = lex_state,
	});
};

static inline uint16_t actions(uint16_t val)
{
	return (val);
};

static inline uint16_t state(uint16_t val)
{
	return (val);
};

#endif /* PARSETYPES_H */
