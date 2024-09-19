/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:13 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 16:57:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
#define PARSER_H

#include "me/types.h"

#define ts_builtin_sym_error ((t_symbol)-1)
#define ts_builtin_sym_end 0
#define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024

typedef t_u16				t_state_id;
typedef t_u16				t_symbol;
typedef t_u16				t_field_id;
typedef struct s_language	t_language;
typedef struct s_lexer		t_lexer;

typedef struct s_field_map_entry
{
	t_field_id field_id;
	t_u8	  child_index;
	bool	  inherited;
} TSFieldMapEntry;

typedef struct s_field_map_slice
{
	t_u16 index;
	t_u16 length;
} TSFieldMapSlice;

typedef struct s_symbol_metadata
{
	bool visible;
	bool named;
	bool supertype;
} t_symbol_metadata;

struct s_lexer_functions
{
	t_i32	 lookahead;
	t_symbol result_symbol;
	void (*advance)(t_lexer *, bool);
	void (*mark_end)(t_lexer *);
	t_u32 (*get_column)(t_lexer *);
	bool (*eof)(const t_lexer *);
};

typedef enum e_parse_action_type
{
	TSParseActionTypeShift,
	TSParseActionTypeReduce,
	TSParseActionTypeAccept,
	TSParseActionTypeRecover,
} TSParseActionType;

typedef union u_parse_action {
	struct s_parse_action_shift
	{
		t_u8	  type;
		t_state_id state;
		bool	  extra;
		bool	  repetition;
	} shift;
	struct s_parse_action_reduce
	{
		t_u8	 type;
		t_u8	 child_count;
		t_symbol symbol;
		t_i16	 dynamic_precedence;
		t_u16	 production_id;
	} reduce;
	t_u8 type;
} TSParseAction;

typedef struct s_lex_mode
{
	t_u16 lex_state;
	t_u16 external_lex_state;
} TSLexMode;

typedef union u_parse_action_entry {
	TSParseAction action;
	struct s_parse_action_entry_inner
	{
		t_u8 count;
		bool reusable;
	} entry;
} TSParseActionEntry;

typedef struct s_character_range
{
	t_i32 start;
	t_i32 end;
} TSCharacterRange;

struct s_language
{
	t_u32					  version;
	t_u32					  symbol_count;
	t_u32					  alias_count;
	t_u32					  token_count;
	t_u32					  external_token_count;
	t_u32					  state_count;
	t_u32					  large_state_count;
	t_u32					  production_id_count;
	t_u32					  field_count;
	t_u16					  max_alias_sequence_length;
	const t_u16				 *parse_table;
	const t_u16				 *small_parse_table;
	const t_u32				 *small_parse_table_map;
	const TSParseActionEntry *parse_actions;
	t_const_str const		 *symbol_names;
	t_const_str const		 *field_names;
	const TSFieldMapSlice	 *field_map_slices;
	const TSFieldMapEntry	 *field_map_entries;
	const t_symbol_metadata	 *symbol_metadata;
	const t_symbol			 *public_symbol_map;
	const t_u16				 *alias_map;
	const t_symbol			 *alias_sequences;
	const TSLexMode			 *lex_modes;
	bool (*lex_fn)(t_lexer *, t_state_id);
	bool (*keyword_lex_fn)(t_lexer *, t_state_id);
	t_symbol keyword_capture_token;
	struct ExternalScannerDefinition
	{
		const bool	   *states;
		const t_symbol *symbol_map;
		void *(*create)(void);
		void (*destroy)(void *);
		bool (*scan)(void *, t_lexer *, const bool *symbol_whitelist);
		t_u32 (*serialize)(void *, t_u8 *);
		void (*deserialize)(void *, const t_u8 *, t_u32);
	} external_scanner;
	const t_state_id *primary_state_ids;
};

static inline bool set_contains(TSCharacterRange *ranges, t_u32 len, t_i32 lookahead)
{
	t_u32 index = 0;
	t_u32 size = len - index;
	while (size > 1)
	{
		t_u32			  half_size = size / 2;
		t_u32			  mid_index = index + half_size;
		TSCharacterRange *range = &ranges[mid_index];
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
	TSCharacterRange *range = &ranges[index];
	return (lookahead >= range->start && lookahead <= range->end);
}

/*
 *  Lexer Macros
 */

#define UNUSED __attribute__((unused))

#define START_LEXER()                                                                                                                      \
	bool result = false;                                                                                                                   \
	bool skip = false;                                                                                                                     \
	UNUSED                                                                                                                                 \
	bool  eof = false;                                                                                                                     \
	t_i32 lookahead;                                                                                                                       \
	goto start;                                                                                                                            \
next_state:                                                                                                                                \
	lexer->funcs.advance((void *)lexer, skip);                                                                                                           \
start:                                                                                                                                     \
	skip = false;                                                                                                                          \
	lookahead = lexer->funcs.lookahead;

#define ADVANCE(state_value)                                                                                                               \
	{                                                                                                                                      \
		state = state_value;                                                                                                               \
		goto next_state;                                                                                                                   \
	}

#define ADVANCE_MAP(...)                                                                                                                   \
	{                                                                                                                                      \
		static const t_u16 map[] = {__VA_ARGS__};                                                                                          \
		for (t_u32 i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)                                                                        \
		{                                                                                                                                  \
			if (map[i] == lookahead)                                                                                                       \
			{                                                                                                                              \
				state = map[i + 1];                                                                                                        \
				goto next_state;                                                                                                           \
			}                                                                                                                              \
		}                                                                                                                                  \
	}

#define SKIP(state_value)                                                                                                                  \
	{                                                                                                                                      \
		skip = true;                                                                                                                       \
		state = state_value;                                                                                                               \
		goto next_state;                                                                                                                   \
	}

#define ACCEPT_TOKEN(symbol_value)                                                                                                         \
	result = true;                                                                                                                         \
	lexer->funcs.result_symbol = symbol_value;                                                                                                   \
	lexer->funcs.mark_end((void *)lexer);

#define END_STATE() return result;

/*
 *  Parse Table Macros
 */

#define SMALL_STATE(id) ((id)-LARGE_STATE_COUNT)

#define STATE(id) id

#define ACTIONS(id) id

#define SHIFT(state_value)                                                                                                                 \
	{                                                                                                                                      \
		{                                                                                                                                  \
			.shift = {.type = TSParseActionTypeShift, .state = (state_value) }                                                             \
		}                                                                                                                                  \
	}

#define SHIFT_REPEAT(state_value)                                                                                                          \
	{                                                                                                                                      \
		{                                                                                                                                  \
			.shift = {.type = TSParseActionTypeShift, .state = (state_value), .repetition = true }                                         \
		}                                                                                                                                  \
	}

#define SHIFT_EXTRA()                                                                                                                      \
	{                                                                                                                                      \
		{                                                                                                                                  \
			.shift = {.type = TSParseActionTypeShift, .extra = true }                                                                      \
		}                                                                                                                                  \
	}

#define REDUCE(symbol_name, children, precedence, prod_id)                                                                                 \
	{                                                                                                                                      \
		{                                                                                                                                  \
			.reduce = {.type = TSParseActionTypeReduce,                                                                                    \
					   .symbol = symbol_name,                                                                                              \
					   .child_count = children,                                                                                            \
					   .dynamic_precedence = precedence,                                                                                   \
					   .production_id = prod_id},                                                                                          \
		}                                                                                                                                  \
	}

#define RECOVER()                                                                                                                          \
	{                                                                                                                                      \
		{                                                                                                                                  \
			.type = TSParseActionTypeRecover                                                                                               \
		}                                                                                                                                  \
	}

#define ACCEPT_INPUT()                                                                                                                     \
	{                                                                                                                                      \
		{                                                                                                                                  \
			.type = TSParseActionTypeAccept                                                                                                \
		}                                                                                                                                  \
	}

#endif // PARSER_H
