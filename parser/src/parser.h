#ifndef TREE_SITTER_PARSER_H_
#define TREE_SITTER_PARSER_H_

#include "me/types.h"

#define ts_builtin_sym_error ((TSSymbol)-1)
#define ts_builtin_sym_end 0
#define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024

#ifndef TREE_SITTER_API_H_
typedef t_u16			  TSStateId;
typedef t_u16			  TSSymbol;
typedef t_u16			  TSFieldId;
typedef struct TSLanguage TSLanguage;
#endif

typedef struct TSFieldMapEntry
{
	TSFieldId field_id;
	t_u8	  child_index;
	bool	  inherited;
} TSFieldMapEntry;

typedef struct TSFieldMapSlice
{
	t_u16 index;
	t_u16 length;
} TSFieldMapSlice;

typedef struct TSSymbolMetadata
{
	bool visible;
	bool named;
	bool supertype;
} TSSymbolMetadata;

typedef struct TSLexer TSLexer;

struct TSLexer
{
	t_i32	 lookahead;
	TSSymbol result_symbol;
	void (*advance)(TSLexer *, bool);
	void (*mark_end)(TSLexer *);
	t_u32 (*get_column)(TSLexer *);
	bool (*is_at_included_range_start)(const TSLexer *);
	bool (*eof)(const TSLexer *);
};

typedef enum TSParseActionType
{
	TSParseActionTypeShift,
	TSParseActionTypeReduce,
	TSParseActionTypeAccept,
	TSParseActionTypeRecover,
} TSParseActionType;

typedef union TSParseAction {
	struct TSParseActionShift
	{
		t_u8	  type;
		TSStateId state;
		bool	  extra;
		bool	  repetition;
	} shift;
	struct TSParseActionReduce
	{
		t_u8	 type;
		t_u8	 child_count;
		TSSymbol symbol;
		t_i16	 dynamic_precedence;
		t_u16	 production_id;
	} reduce;
	t_u8 type;
} TSParseAction;

typedef struct TSLexMode
{
	t_u16 lex_state;
	t_u16 external_lex_state;
} TSLexMode;

typedef union TSParseActionEntry {
	TSParseAction action;
	struct TSParseActionEntryInner
	{
		t_u8 count;
		bool reusable;
	} entry;
} TSParseActionEntry;

typedef struct TSCharacterRange
{
	t_i32 start;
	t_i32 end;
} TSCharacterRange;

struct TSLanguage
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
	const char *const		 *symbol_names;
	const char *const		 *field_names;
	const TSFieldMapSlice	 *field_map_slices;
	const TSFieldMapEntry	 *field_map_entries;
	const TSSymbolMetadata	 *symbol_metadata;
	const TSSymbol			 *public_symbol_map;
	const t_u16				 *alias_map;
	const TSSymbol			 *alias_sequences;
	const TSLexMode			 *lex_modes;
	bool (*lex_fn)(TSLexer *, TSStateId);
	bool (*keyword_lex_fn)(TSLexer *, TSStateId);
	TSSymbol keyword_capture_token;
	struct ExternalScannerDefinition
	{
		const bool	   *states;
		const TSSymbol *symbol_map;
		void *(*create)(void);
		void (*destroy)(void *);
		bool (*scan)(void *, TSLexer *, const bool *symbol_whitelist);
		unsigned (*serialize)(void *, char *);
		void (*deserialize)(void *, const char *, unsigned);
	} external_scanner;
	const TSStateId *primary_state_ids;
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
	lexer->advance(lexer, skip);                                                                                                           \
start:                                                                                                                                     \
	skip = false;                                                                                                                          \
	lookahead = lexer->lookahead;

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
	lexer->result_symbol = symbol_value;                                                                                                   \
	lexer->mark_end(lexer);

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

#endif // TREE_SITTER_PARSER_H_
