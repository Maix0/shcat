#ifndef API_STRUCTS_H
#define API_STRUCTS_H

#define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024

#include "./array.h"
#include "me/types.h"
#include <stdint.h>

typedef uint16_t t_state_id;
typedef uint16_t t_symbol;
typedef uint16_t t_field_id;
typedef unsigned t_stack_version;
typedef uint64_t t_parser_clock;
typedef uint64_t t_parser_duration;

typedef union u_parse_action_entry t_parse_action_entry;
typedef union u_subtree			   t_subtree;
typedef union u_mutable_subtree	   t_mutable_subtree;
typedef union u_parse_action	   t_parse_action;

typedef struct s_language				t_language;
typedef struct s_first_parser			t_first_parser;
typedef struct s_first_tree				t_first_tree;
typedef struct s_parse_query			t_parse_query;
typedef struct s_query_cursor			t_query_cursor;
typedef struct s_lookahead_iterator		t_lookahead_iterator;
typedef struct s_point					t_point;
typedef struct s_length					t_length;
typedef struct s_parse_range			t_parse_range;
typedef struct s_parse_input			t_parse_input;
typedef struct s_parse_logger			t_parse_logger;
typedef struct s_input_edit				t_input_edit;
typedef struct s_parse_node				t_parse_node;
typedef struct s_tree_cursor			t_tree_cursor;
typedef struct s_query_capture			t_query_capture;
typedef struct s_query_match			t_query_match;
typedef struct s_query_predicate_step	t_query_predicate_step;
typedef struct s_subtree_inline_data	t_subtree_inline_data;
typedef struct s_subtree_heap_data		t_subtree_heap_data;
typedef struct s_subtree_pool			t_subtree_pool;
typedef struct s_table_entry			t_table_entry;
typedef struct s_symbol_metadata		t_symbol_metadata;
typedef struct s_field_map_entry		t_field_map_entry;
typedef struct s_field_map_slice		t_field_map_slice;
typedef struct s_lexer_data				t_lexer_data;
typedef struct s_lex_mode				t_lex_mode;
typedef struct s_char_range				t_char_range;
typedef struct s_tree_cursor_entry		t_tree_cursor_entry;
typedef struct s_external_scanner_state t_external_scanner_state;
typedef struct s_parse_query_cursor		t_parse_query_cursor;
typedef struct s_parse_query_error		t_parse_query_error;
typedef struct s_parse_query_error_cost t_parse_query_error_cost;
typedef struct s_lexer_data				t_lexer_data;
typedef struct s_subtree_inline_data	t_subtree_inline_data;
typedef struct s_subtree_heap_data		t_subtree_heap_data;
typedef struct s_subtree_pool			t_subtree_pool;
typedef struct s_table_entry			t_table_entry;
typedef struct s_symbol_metadata		t_symbol_metadata;
typedef struct s_field_map_entry		t_field_map_entry;
typedef struct s_field_map_slice		t_field_map_slice;
typedef struct s_lexer_data				t_lexer_data;
typedef struct s_lex_mode				t_lex_mode;
typedef struct s_lexer					t_lexer;
typedef struct s_parse_state			t_parse_state;
typedef struct s_reduce_action			t_reduce_action;
typedef struct s_stack_entry			t_stack_entry;
typedef struct s_reusable_node			t_reusable_node;
typedef struct s_stack_summary_entry	t_stack_summary_entry;
typedef struct s_stack					t_stack;
typedef struct s_stack_slice			t_stack_slice;

typedef enum e_input_encoding			 t_input_encoding;
typedef enum e_symbol_type				 t_symbol_type;
typedef enum e_log_type					 t_log_type;
typedef enum e_quantifier				 t_quantifier;
typedef enum e_query_error				 t_query_error;
typedef enum e_query_predicate_step_type t_query_predicate_step_type;
typedef enum e_parse_action_type		 t_parse_action_type;

typedef Array(t_parse_range) t_range_array;
typedef Array(t_subtree) t_subtree_array;
typedef Array(t_mutable_subtree) t_mutable_subtree_array;
typedef Array(t_reduce_action) t_reduce_action_set;
typedef Array(void) Array;
typedef Array(t_stack_slice) t_stack_slice_array;
typedef Array(t_stack_summary_entry) t_stack_summary;
typedef void (*StackIterateCallback)(void *, t_state_id, uint32_t);

struct s_point
{
	uint32_t row;
	uint32_t column;
};

struct s_length
{
	uint32_t bytes;
	t_point	 extent;
};

struct s_stack_slice
{
	t_subtree_array subtrees;
	t_stack_version version;
};

struct s_stack_summary_entry
{
	t_length   position;
	unsigned   depth;
	t_state_id state;
};

enum e_input_encoding
{
	TSInputEncodingUTF8,
	TSInputEncodingUTF16,
};

enum e_symbol_type
{
	TSSymbolTypeRegular,
	TSSymbolTypeAnonymous,
	TSSymbolTypeAuxiliary,
};

struct s_parse_range
{
	t_point	 start_point;
	t_point	 end_point;
	uint32_t start_byte;
	uint32_t end_byte;
};

struct s_parse_input
{
	void *payload;
	const char *(*read)(void *payload, uint32_t byte_index, t_point position,
						uint32_t *bytes_read);
	t_input_encoding encoding;
};

enum e_log_type
{
	TSLogTypeParse,
	TSLogTypeLex,
};

struct s_parse_logger
{
	void *payload;
	void (*log)(void *payload, t_log_type log_type, const char *buffer);
};

struct s_input_edit
{
	uint32_t start_byte;
	uint32_t old_end_byte;
	uint32_t new_end_byte;
	t_point	 start_point;
	t_point	 old_end_point;
	t_point	 new_end_point;
};

struct s_parse_node
{
	uint32_t			context[4];
	const void		   *id;
	const t_first_tree *tree;
};

struct s_tree_cursor_entry
{
	const t_subtree *subtree;
	t_length		 position;
	uint32_t		 child_index;
	uint32_t		 structural_child_index;
	uint32_t		 descendant_index;
};

struct s_tree_cursor
{
	const t_first_tree *tree;
	Array(t_tree_cursor_entry) stack;
	t_symbol root_alias_symbol;
};

struct s_query_capture
{
	t_parse_node node;
	uint32_t	 index;
};

enum e_quantifier
{
	TSQuantifierZero = 0, // must match the array initialization value
	TSQuantifierZeroOrOne,
	TSQuantifierZeroOrMore,
	TSQuantifierOne,
	TSQuantifierOneOrMore,
};

struct s_query_match
{
	uint32_t			   id;
	uint16_t			   pattern_index;
	uint16_t			   capture_count;
	const t_query_capture *captures;
};

enum e_query_predicate_step_type
{
	TSQueryPredicateStepTypeDone,
	TSQueryPredicateStepTypeCapture,
	TSQueryPredicateStepTypeString,
};

struct s_query_predicate_step
{
	t_query_predicate_step_type type;
	uint32_t					value_id;
};

enum e_query_error
{
	TSQueryErrorNone = 0,
	TSQueryErrorSyntax,
	TSQueryErrorNodeType,
	TSQueryErrorField,
	TSQueryErrorCapture,
	TSQueryErrorStructure,
	TSQueryErrorLanguage,
};

struct s_parent_cache_entry
{
	const t_subtree *child;
	const t_subtree *parent;
	t_length		 position;
	t_symbol		 alias_symbol;
};

typedef enum e_tree_cursor_step
{
	TreeCursorStepNone,
	TreeCursorStepHidden,
	TreeCursorStepVisible,
} t_tree_cursor_step;

// The serialized state of an external scanner.
//
// Every time an external token subtree is created after a call to an
// external scanner, the scanner's `serialize` function is called to
// retrieve a serialized copy of its state. The bytes are then copied
// onto the subtree itself so that the scanner's state can later be
// restored using its `deserialize` function.
//
// Small byte arrays are stored inline, and long ones are allocated
// separately on the heap.
struct s_external_scanner_state
{
	union {
		char *long_data;
		char  short_data[24];
	};
	uint32_t length;
};

#define SUBTREE_BITS                                                           \
	bool visible : 1;                                                          \
	bool named : 1;                                                            \
	bool extra : 1;                                                            \
	bool has_changes : 1;                                                      \
	bool is_missing : 1;                                                       \
	bool is_keyword : 1;

#define SUBTREE_SIZE                                                           \
	uint8_t padding_columns;                                                   \
	uint8_t padding_rows : 4;                                                  \
	uint8_t lookahead_bytes : 4;                                               \
	uint8_t padding_bytes;                                                     \
	uint8_t size_bytes;

#if TS_BIG_ENDIAN
# if TS_PTR_SIZE == 32

struct s_subtree_inline_data
{
	uint16_t parse_state;
	uint8_t	 symbol;
	SUBTREE_BITS
	bool unused : 1;
	bool is_inline : 1;
	SUBTREE_SIZE
};

# else

struct s_subtree_inline_data
{
	SUBTREE_SIZE
	uint16_t parse_state;
	uint8_t	 symbol;
	SUBTREE_BITS
	bool unused : 1;
	bool is_inline : 1;
};

# endif
#else

struct s_subtree_inline_data
{
	bool is_inline : 1;
	SUBTREE_BITS
	uint8_t	 symbol;
	uint16_t parse_state;
	SUBTREE_SIZE
};

#endif

#undef SUBTREE_BITS
#undef SUBTREE_SIZE

struct s_subtree_heap_data
{
	volatile uint32_t ref_count;
	t_length		  padding;
	t_length		  size;
	uint32_t		  lookahead_bytes;
	uint32_t		  error_cost;
	uint32_t		  child_count;
	t_symbol		  symbol;
	t_state_id		  parse_state;

	bool visible : 1;
	bool named : 1;
	bool extra : 1;
	bool fragile_left : 1;
	bool fragile_right : 1;
	bool has_changes : 1;
	bool has_external_tokens : 1;
	bool has_external_scanner_state_change : 1;
	bool depends_on_column : 1;
	bool is_missing : 1;
	bool is_keyword : 1;

	union {
		// Non-terminal subtrees (`child_count > 0`)
		struct
		{
			uint32_t visible_child_count;
			uint32_t named_child_count;
			uint32_t visible_descendant_count;
			int32_t	 dynamic_precedence;
			uint16_t repeat_depth;
			uint16_t production_id;
			struct
			{
				t_symbol   symbol;
				t_state_id parse_state;
			} first_leaf;
		};

		// External terminal subtrees (`child_count == 0 &&
		// has_external_tokens`)
		t_external_scanner_state external_scanner_state;

		// Error terminal subtrees (`child_count == 0 && symbol ==
		// ts_builtin_sym_error`)
		int32_t lookahead_char;
	};
};

// The fundamental building block of a syntax tree.
union u_subtree {
	t_subtree_inline_data	   data;
	const t_subtree_heap_data *ptr;
};

// Like t_subtree, but mutable.
union u_mutable_subtree {
	t_subtree_inline_data data;
	t_subtree_heap_data	 *ptr;
};

struct s_subtree_pool
{
	t_mutable_subtree_array free_trees;
	t_mutable_subtree_array tree_stack;
};

union u_parse_action {
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
};

struct s_table_entry
{
	const t_parse_action *actions;
	uint32_t			  action_count;
	bool				  is_reusable;
};

struct s_lookahead_iterator
{
	const t_language *language;
	const uint16_t	 *data;
	const uint16_t	 *group_end;
	t_state_id		  state;
	uint16_t		  table_value;
	uint16_t		  section_index;
	uint16_t		  group_count;
	bool			  is_small_state;

	const t_parse_action *actions;
	t_symbol			  symbol;
	t_state_id			  next_state;
	uint16_t			  action_count;
};

struct s_symbol_metadata
{
	bool visible;
	bool named;
	bool supertype;
};

enum e_parse_action_type
{
	TSParseActionTypeShift,
	TSParseActionTypeReduce,
	TSParseActionTypeAccept,
	TSParseActionTypeRecover,
};

union u_parse_action_entry {
	t_parse_action action;
	struct
	{
		uint8_t count;
		bool	reusable;
	} entry;
};

struct s_field_map_entry
{
	t_field_id field_id;
	uint8_t	   child_index;
	bool	   inherited;
};

struct s_field_map_slice
{
	uint16_t index;
	uint16_t length;
};

struct s_lexer_data
{
	int32_t	 lookahead;
	t_symbol result_symbol;
	void (*advance)(t_lexer_data *, bool);
	void (*mark_end)(t_lexer_data *);
	uint32_t (*get_column)(t_lexer_data *);
	bool (*is_at_included_range_start)(const t_lexer_data *);
	bool (*eof)(const t_lexer_data *);
};

struct s_lex_mode
{
	uint16_t lex_state;
	uint16_t external_lex_state;
};

struct s_char_range
{
	int32_t start;
	int32_t end;
};

struct s_language
{
	uint32_t					version;
	uint32_t					symbol_count;
	uint32_t					alias_count;
	uint32_t					token_count;
	uint32_t					external_token_count;
	uint32_t					state_count;
	uint32_t					large_state_count;
	uint32_t					production_id_count;
	uint32_t					field_count;
	uint16_t					max_alias_sequence_length;
	const uint16_t			   *parse_table;
	const uint16_t			   *small_parse_table;
	const uint32_t			   *small_parse_table_map;
	const t_parse_action_entry *parse_actions;
	const char *const		   *symbol_names;
	const char *const		   *field_names;
	const t_field_map_slice	   *field_map_slices;
	const t_field_map_entry	   *field_map_entries;
	const t_symbol_metadata	   *symbol_metadata;
	const t_symbol			   *public_symbol_map;
	const uint16_t			   *alias_map;
	const t_symbol			   *alias_sequences;
	const t_lex_mode		   *lex_modes;
	bool (*lex_fn)(t_lexer_data *, t_state_id);
	bool (*keyword_lex_fn)(t_lexer_data *, t_state_id);
	t_symbol keyword_capture_token;
	struct
	{
		const bool	   *states;
		const t_symbol *symbol_map;
		void *(*create)(void);
		void (*destroy)(void *);
		bool (*scan)(void *, t_lexer_data *, const bool *symbol_whitelist);
		unsigned (*serialize)(void *, char *);
		void (*deserialize)(void *, const char *, unsigned);
	} external_scanner;
	const t_state_id *primary_state_ids;
};

struct s_lexer
{
	t_lexer_data data;
	t_length	 current_position;
	t_length	 token_start_position;
	t_length	 token_end_position;

	t_parse_range *included_ranges;
	const char	  *chunk;
	t_parse_input  input;
	t_parse_logger logger;

	uint32_t included_range_count;
	uint32_t current_included_range_index;
	uint32_t chunk_start;
	uint32_t chunk_size;
	uint32_t lookahead_size;
	bool	 did_get_column;

	char debug_buffer[TREE_SITTER_SERIALIZATION_BUFFER_SIZE];
};

struct s_reduce_action
{
	uint32_t	   count;
	t_symbol	   symbol;
	int			   dynamic_precedence;
	unsigned short production_id;
};

struct s_stack_entry
{
	t_subtree tree;
	uint32_t  child_index;
	uint32_t  byte_offset;
};

struct s_reusable_node
{
	Array(t_stack_entry) stack;
	t_subtree last_external_token;
};

struct s_first_tree
{
	t_subtree		  root;
	const t_language *language;
	t_parse_range	 *included_ranges;
	unsigned		  included_range_count;
};

#endif // API_STRUCTS_H