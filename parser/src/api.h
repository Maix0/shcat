#ifndef TREE_SITTER_ARRAY_H_
#define TREE_SITTER_ARRAY_H_

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

#define ts_builtin_sym_error_repeat (ts_builtin_sym_error - 1)
#define LANGUAGE_VERSION_WITH_PRIMARY_STATES 14
#define LANGUAGE_VERSION_USABLE_VIA_WASM 13
#define ERROR_STATE 0
#define ERROR_COST_PER_RECOVERY 500
#define ERROR_COST_PER_MISSING_TREE 110
#define ERROR_COST_PER_SKIPPED_TREE 100
#define ERROR_COST_PER_SKIPPED_LINE 30
#define ERROR_COST_PER_SKIPPED_CHAR 1
#define MAX_STEP_CAPTURE_COUNT 3
#define MAX_NEGATED_FIELD_COUNT 8
#define MAX_STATE_PREDECESSOR_COUNT 256
#define MAX_ANALYSIS_STATE_DEPTH 8
#define MAX_ANALYSIS_ITERATION_COUNT 256
#define MAX_LINK_COUNT 8
#define MAX_NODE_POOL_SIZE 50
#define MAX_ITERATOR_COUNT 64
#define TS_MAX_INLINE_TREE_LENGTH UINT8_MAX
#define TS_MAX_TREE_POOL_SIZE 32
#define ts_builtin_sym_error ((TSSymbol) - 1)
#define ts_builtin_sym_end 0
#define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024
#define POINT_ZERO ((TSPoint){0, 0})
#define POINT_MAX ((TSPoint){UINT32_MAX, UINT32_MAX})
#define TS_TREE_STATE_NONE USHRT_MAX
#define NULL_SUBTREE ((Subtree){.ptr = NULL})
#define STACK_VERSION_NONE ((StackVersion) - 1)
#define TS_DECODE_ERROR (-1) 

// Get a subtree's children, which are allocated immediately before the
// tree's own heap data.
#define ts_subtree_children(self)                                              \
	((self).data.is_inline                                                     \
		 ? NULL                                                                \
		 : (Subtree *)((self).ptr) - (self).ptr->child_count)

typedef uint16_t				   TSStateId;
typedef uint16_t				   TSSymbol;
typedef uint16_t				   TSFieldId;
typedef struct TSLanguage		   TSLanguage;
typedef struct TSParser			   TSParser;
typedef struct TSTree			   TSTree;
typedef struct TSQuery			   TSQuery;
typedef struct TSQueryCursor	   TSQueryCursor;
typedef struct TSLookaheadIterator TSLookaheadIterator;

typedef struct TSPoint
{
	uint32_t row;
	uint32_t column;
} TSPoint;

typedef struct
{
	uint32_t bytes;
	TSPoint	 extent;
} Length;

typedef enum TSInputEncoding
{
	TSInputEncodingUTF8,
	TSInputEncodingUTF16,
} TSInputEncoding;

typedef enum TSSymbolType
{
	TSSymbolTypeRegular,
	TSSymbolTypeAnonymous,
	TSSymbolTypeAuxiliary,
} TSSymbolType;


typedef struct TSRange
{
	TSPoint	 start_point;
	TSPoint	 end_point;
	uint32_t start_byte;
	uint32_t end_byte;
} TSRange;

typedef struct TSInput
{
	void *payload;
	const char *(*read)(void *payload, uint32_t byte_index, TSPoint position,
						uint32_t *bytes_read);
	TSInputEncoding encoding;
} TSInput;

typedef enum TSLogType
{
	TSLogTypeParse,
	TSLogTypeLex,
} TSLogType;

typedef struct TSLogger
{
	void *payload;
	void (*log)(void *payload, TSLogType log_type, const char *buffer);
} TSLogger;

typedef struct TSInputEdit
{
	uint32_t start_byte;
	uint32_t old_end_byte;
	uint32_t new_end_byte;
	TSPoint	 start_point;
	TSPoint	 old_end_point;
	TSPoint	 new_end_point;
} TSInputEdit;

typedef struct TSNode
{
	uint32_t	  context[4];
	const void	 *id;
	const TSTree *tree;
} TSNode;

typedef struct TSTreeCursor
{
	const void *tree;
	const void *id;
	uint32_t	context[3];
} TSTreeCursor;

typedef struct TSQueryCapture
{
	TSNode	 node;
	uint32_t index;
} TSQueryCapture;

typedef enum TSQuantifier
{
	TSQuantifierZero = 0, // must match the array initialization value
	TSQuantifierZeroOrOne,
	TSQuantifierZeroOrMore,
	TSQuantifierOne,
	TSQuantifierOneOrMore,
} TSQuantifier;

typedef struct TSQueryMatch
{
	uint32_t			  id;
	uint16_t			  pattern_index;
	uint16_t			  capture_count;
	const TSQueryCapture *captures;
} TSQueryMatch;

typedef enum TSQueryPredicateStepType
{
	TSQueryPredicateStepTypeDone,
	TSQueryPredicateStepTypeCapture,
	TSQueryPredicateStepTypeString,
} TSQueryPredicateStepType;

typedef struct TSQueryPredicateStep
{
	TSQueryPredicateStepType type;
	uint32_t				 value_id;
} TSQueryPredicateStep;

typedef enum TSQueryError
{
	TSQueryErrorNone = 0,
	TSQueryErrorSyntax,
	TSQueryErrorNodeType,
	TSQueryErrorField,
	TSQueryErrorCapture,
	TSQueryErrorStructure,
	TSQueryErrorLanguage,
} TSQueryError;

#define Array(T)                                                               \
	struct                                                                     \
	{                                                                          \
		T		*contents;                                                     \
		uint32_t size;                                                         \
		uint32_t capacity;                                                     \
	}

/// Initialize an array.
#define array_init(self)                                                       \
	((self)->size = 0, (self)->capacity = 0, (self)->contents = NULL)

/// Create an empty array.
#define array_new()                                                            \
	{                                                                          \
		NULL, 0, 0                                                             \
	}

/// Get a pointer to the element at a given `index` in the array.
#define array_get(self, _index)                                                \
	(assert((uint32_t)(_index) < (self)->size), &(self)->contents[_index])

/// Get a pointer to the first element in the array.
#define array_front(self) array_get(self, 0)

/// Get a pointer to the last element in the array.
#define array_back(self) array_get(self, (self)->size - 1)

/// Clear the array, setting its size to zero. Note that this does not free any
/// memory allocated for the array's contents.
#define array_clear(self) ((self)->size = 0)

/// Reserve `new_capacity` elements of space in the array. If `new_capacity` is
/// less than the array's current capacity, this function has no effect.
#define array_reserve(self, new_capacity)                                      \
	_array__reserve((Array *)(self), array_elem_size(self), new_capacity)

/// Free any memory allocated for this array. Note that this does not free any
/// memory allocated for the array's contents.
#define array_delete(self) _array__delete((Array *)(self))

/// Push a new `element` onto the end of the array.
#define array_push(self, element)                                              \
	(_array__grow((Array *)(self), 1, array_elem_size(self)),                  \
	 (self)->contents[(self)->size++] = (element))

/// Increase the array's size by `count` elements.
/// New elements are zero-initialized.
#define array_grow_by(self, count)                                             \
	do                                                                         \
	{                                                                          \
		if ((count) == 0)                                                      \
			break;                                                             \
		_array__grow((Array *)(self), count, array_elem_size(self));           \
		memset((self)->contents + (self)->size, 0,                             \
			   (count) * array_elem_size(self));                               \
		(self)->size += (count);                                               \
	} while (0)

/// Append all elements from one array to the end of another.
#define array_push_all(self, other)                                            \
	array_extend((self), (other)->size, (other)->contents)

/// Append `count` elements to the end of the array, reading their values from
/// the `contents` pointer.
#define array_extend(self, count, contents)                                    \
	_array__splice((Array *)(self), array_elem_size(self), (self)->size, 0,    \
				   count, contents)

/// Remove `old_count` elements from the array starting at the given `index`. At
/// the same index, insert `new_count` new elements, reading their values from
/// the `new_contents` pointer.
#define array_splice(self, _index, old_count, new_count, new_contents)         \
	_array__splice((Array *)(self), array_elem_size(self), _index, old_count,  \
				   new_count, new_contents)

/// Insert one `element` into the array at the given `index`.
#define array_insert(self, _index, element)                                    \
	_array__splice((Array *)(self), array_elem_size(self), _index, 0, 1,       \
				   &(element))

/// Remove one element from the array at the given `index`.
#define array_erase(self, _index)                                              \
	_array__erase((Array *)(self), array_elem_size(self), _index)

/// Pop the last element off the array, returning the element by value.
#define array_pop(self) ((self)->contents[--(self)->size])

/// Assign the contents of one array to another, reallocating if necessary.
#define array_assign(self, other)                                              \
	_array__assign((Array *)(self), (const Array *)(other),                    \
				   array_elem_size(self))

/// Swap one array with another
#define array_swap(self, other) _array__swap((Array *)(self), (Array *)(other))

/// Get the size of the array contents
#define array_elem_size(self) (sizeof *(self)->contents)

/// Search a sorted array for a given `needle` value, using the given `compare`
/// callback to determine the order.
///
/// If an existing element is found to be equal to `needle`, then the `index`
/// out-parameter is set to the existing value's index, and the `exists`
/// out-parameter is set to true. Otherwise, `index` is set to an index where
/// `needle` should be inserted in order to preserve the sorting, and `exists`
/// is set to false.
#define array_search_sorted_with(self, compare, needle, _index, _exists)       \
	_array__search_sorted(self, 0, compare, , needle, _index, _exists)

/// Search a sorted array for a given `needle` value, using integer comparisons
/// of a given struct field (specified with a leading dot) to determine the
/// order.
///
/// See also `array_search_sorted_with`.
#define array_search_sorted_by(self, field, needle, _index, _exists)           \
	_array__search_sorted(self, 0, _compare_int, field, needle, _index, _exists)

/// Insert a given `value` into a sorted array, using the given `compare`
/// callback to determine the order.
#define array_insert_sorted_with(self, compare, value)                         \
	do                                                                         \
	{                                                                          \
		unsigned _index, _exists;                                              \
		array_search_sorted_with(self, compare, &(value), &_index, &_exists);  \
		if (!_exists)                                                          \
			array_insert(self, _index, value);                                 \
	} while (0)

/// Insert a given `value` into a sorted array, using integer comparisons of
/// a given struct field (specified with a leading dot) to determine the order.
///
/// See also `array_search_sorted_by`.
#define array_insert_sorted_by(self, field, value)                             \
	do                                                                         \
	{                                                                          \
		unsigned _index, _exists;                                              \
		array_search_sorted_by(self, field, (value)field, &_index, &_exists);  \
		if (!_exists)                                                          \
			array_insert(self, _index, value);                                 \
	} while (0)

// Private

typedef Array(void) Array;

/// This is not what you're looking for, see `array_delete`.
static inline void _array__delete(Array *self)
{
	if (self->contents)
	{
		free(self->contents);
		self->contents = NULL;
		self->size = 0;
		self->capacity = 0;
	}
}

/// This is not what you're looking for, see `array_erase`.
static inline void _array__erase(Array *self, size_t element_size,
								 uint32_t index)
{
	assert(index < self->size);
	char *contents = (char *)self->contents;
	memmove(contents + index * element_size,
			contents + (index + 1) * element_size,
			(self->size - index - 1) * element_size);
	self->size--;
}

/// This is not what you're looking for, see `array_reserve`.
static inline void _array__reserve(Array *self, size_t element_size,
								   uint32_t new_capacity)
{
	if (new_capacity > self->capacity)
	{
		if (self->contents)
		{
			self->contents =
				realloc(self->contents, new_capacity * element_size);
		}
		else
		{
			self->contents = malloc(new_capacity * element_size);
		}
		self->capacity = new_capacity;
	}
}

/// This is not what you're looking for, see `array_assign`.
static inline void _array__assign(Array *self, const Array *other,
								  size_t element_size)
{
	_array__reserve(self, element_size, other->size);
	self->size = other->size;
	memcpy(self->contents, other->contents, self->size * element_size);
}

/// This is not what you're looking for, see `array_swap`.
static inline void _array__swap(Array *self, Array *other)
{
	Array swap = *other;
	*other = *self;
	*self = swap;
}

/// This is not what you're looking for, see `array_push` or `array_grow_by`.
static inline void _array__grow(Array *self, uint32_t count,
								size_t element_size)
{
	uint32_t new_size = self->size + count;
	if (new_size > self->capacity)
	{
		uint32_t new_capacity = self->capacity * 2;
		if (new_capacity < 8)
			new_capacity = 8;
		if (new_capacity < new_size)
			new_capacity = new_size;
		_array__reserve(self, element_size, new_capacity);
	}
}

/// This is not what you're looking for, see `array_splice`.
static inline void _array__splice(Array *self, size_t element_size,
								  uint32_t index, uint32_t old_count,
								  uint32_t new_count, const void *elements)
{
	uint32_t new_size = self->size + new_count - old_count;
	uint32_t old_end = index + old_count;
	uint32_t new_end = index + new_count;
	assert(old_end <= self->size);

	_array__reserve(self, element_size, new_size);

	char *contents = (char *)self->contents;
	if (self->size > old_end)
	{
		memmove(contents + new_end * element_size,
				contents + old_end * element_size,
				(self->size - old_end) * element_size);
	}
	if (new_count > 0)
	{
		if (elements)
		{
			memcpy((contents + index * element_size), elements,
				   new_count * element_size);
		}
		else
		{
			memset((contents + index * element_size), 0,
				   new_count * element_size);
		}
	}
	self->size += new_count - old_count;
}

/// A binary search routine, based on Rust's `std::slice::binary_search_by`.
/// This is not what you're looking for, see `array_search_sorted_with` or
/// `array_search_sorted_by`.
#define _array__search_sorted(self, start, compare, suffix, needle, _index,    \
							  _exists)                                         \
	do                                                                         \
	{                                                                          \
		*(_index) = start;                                                     \
		*(_exists) = false;                                                    \
		uint32_t size = (self)->size - *(_index);                              \
		if (size == 0)                                                         \
			break;                                                             \
		int comparison;                                                        \
		while (size > 1)                                                       \
		{                                                                      \
			uint32_t half_size = size / 2;                                     \
			uint32_t mid_index = *(_index) + half_size;                        \
			comparison =                                                       \
				compare(&((self)->contents[mid_index] suffix), (needle));      \
			if (comparison <= 0)                                               \
				*(_index) = mid_index;                                         \
			size -= half_size;                                                 \
		}                                                                      \
		comparison = compare(&((self)->contents[*(_index)] suffix), (needle)); \
		if (comparison == 0)                                                   \
			*(_exists) = true;                                                 \
		else if (comparison < 0)                                               \
			*(_index) += 1;                                                    \
	} while (0)

/// Helper macro for the `_sorted_by` routines below. This takes the left
/// (existing) parameter by reference in order to work with the generic sorting
/// function above.
#define _compare_int(a, b) ((int)*(a) - (int)(b))

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

static inline size_t atomic_load(const volatile size_t *p)
{
#ifdef __ATOMIC_RELAXED
	return __atomic_load_n(p, __ATOMIC_RELAXED);
#else
	return __sync_fetch_and_add((volatile size_t *)p, 0);
#endif
}

static inline uint32_t atomic_inc(volatile uint32_t *p)
{
#ifdef __ATOMIC_RELAXED
	return __atomic_add_fetch(p, 1U, __ATOMIC_SEQ_CST);
#else
	return __sync_add_and_fetch(p, 1U);
#endif
}

static inline uint32_t atomic_dec(volatile uint32_t *p)
{
#ifdef __ATOMIC_RELAXED
	return __atomic_sub_fetch(p, 1U, __ATOMIC_SEQ_CST);
#else
	return __sync_sub_and_fetch(p, 1U);
#endif
}

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
typedef struct
{
	union {
		char *long_data;
		char  short_data[24];
	};
	uint32_t length;
} ExternalScannerState;

// A compact representation of a subtree.
//
// This representation is used for small leaf nodes that are not
// errors, and were not created by an external scanner.
//
// The idea behind the layout of this struct is that the `is_inline`
// bit will fall exactly into the same location as the least significant
// bit of the pointer in `Subtree` or `MutableSubtree`, respectively.
// Because of alignment, for any valid pointer this will be 0, giving
// us the opportunity to make use of this bit to signify whether to use
// the pointer or the inline struct.
typedef struct SubtreeInlineData SubtreeInlineData;

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

struct SubtreeInlineData
{
	uint16_t parse_state;
	uint8_t	 symbol;
	SUBTREE_BITS
	bool unused : 1;
	bool is_inline : 1;
	SUBTREE_SIZE
};

# else

struct SubtreeInlineData
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

struct SubtreeInlineData
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




// A heap-allocated representation of a subtree.
//
// This representation is used for parent nodes, external tokens,
// errors, and other leaf nodes whose data is too large to fit into
// the inline representation.
typedef struct
{
	volatile uint32_t ref_count;
	Length			  padding;
	Length			  size;
	uint32_t		  lookahead_bytes;
	uint32_t		  error_cost;
	uint32_t		  child_count;
	TSSymbol		  symbol;
	TSStateId		  parse_state;

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
				TSSymbol  symbol;
				TSStateId parse_state;
			} first_leaf;
		};

		// External terminal subtrees (`child_count == 0 &&
		// has_external_tokens`)
		ExternalScannerState external_scanner_state;

		// Error terminal subtrees (`child_count == 0 && symbol ==
		// ts_builtin_sym_error`)
		int32_t lookahead_char;
	};
} SubtreeHeapData;

// The fundamental building block of a syntax tree.
typedef union {
	SubtreeInlineData	   data;
	const SubtreeHeapData *ptr;
} Subtree;

// Like Subtree, but mutable.
typedef union {
	SubtreeInlineData data;
	SubtreeHeapData	 *ptr;
} MutableSubtree;

typedef Array(Subtree) SubtreeArray;
typedef Array(MutableSubtree) MutableSubtreeArray;

typedef struct
{
	MutableSubtreeArray free_trees;
	MutableSubtreeArray tree_stack;
} SubtreePool;

typedef Array(TSRange) TSRangeArray;

typedef struct
{
	const Subtree *subtree;
	Length		   position;
	uint32_t	   child_index;
	uint32_t	   structural_child_index;
	uint32_t	   descendant_index;
} TreeCursorEntry;

typedef struct
{
	const TSTree *tree;
	Array(TreeCursorEntry) stack;
	TSSymbol root_alias_symbol;
} TreeCursor;

typedef union {
	struct
	{
		uint8_t	  type;
		TSStateId state;
		bool	  extra;
		bool	  repetition;
	} shift;
	struct
	{
		uint8_t	 type;
		uint8_t	 child_count;
		TSSymbol symbol;
		int16_t	 dynamic_precedence;
		uint16_t production_id;
	} reduce;
	uint8_t type;
} TSParseAction;

void ts_range_array_get_changed_ranges(const TSRange *old_ranges,
									   unsigned		  old_range_count,
									   const TSRange *new_ranges,
									   unsigned		  new_range_count,
									   TSRangeArray	 *differences);

bool ts_range_array_intersects(const TSRangeArray *self, unsigned start_index,
							   uint32_t start_byte, uint32_t end_byte);

unsigned ts_subtree_get_changed_ranges(
	const Subtree *old_tree, const Subtree *new_tree, TreeCursor *cursor1,
	TreeCursor *cursor2, const TSLanguage *language,
	const TSRangeArray *included_range_differences, TSRange **ranges);

typedef struct
{
	const TSParseAction *actions;
	uint32_t			 action_count;
	bool				 is_reusable;
} TableEntry;

typedef struct
{
	const TSLanguage *language;
	const uint16_t	 *data;
	const uint16_t	 *group_end;
	TSStateId		  state;
	uint16_t		  table_value;
	uint16_t		  section_index;
	uint16_t		  group_count;
	bool			  is_small_state;

	const TSParseAction *actions;
	TSSymbol			 symbol;
	TSStateId			 next_state;
	uint16_t			 action_count;
} LookaheadIterator;

typedef struct
{
	bool visible;
	bool named;
	bool supertype;
} TSSymbolMetadata;

typedef enum
{
	TSParseActionTypeShift,
	TSParseActionTypeReduce,
	TSParseActionTypeAccept,
	TSParseActionTypeRecover,
} TSParseActionType;

typedef union {
	TSParseAction action;
	struct
	{
		uint8_t count;
		bool	reusable;
	} entry;
} TSParseActionEntry;

typedef struct
{
	TSFieldId field_id;
	uint8_t	  child_index;
	bool	  inherited;
} TSFieldMapEntry;

typedef struct
{
	uint16_t index;
	uint16_t length;
} TSFieldMapSlice;

typedef struct TSLexer TSLexer;

struct TSLexer
{
	int32_t	 lookahead;
	TSSymbol result_symbol;
	void (*advance)(TSLexer *, bool);
	void (*mark_end)(TSLexer *);
	uint32_t (*get_column)(TSLexer *);
	bool (*is_at_included_range_start)(const TSLexer *);
	bool (*eof)(const TSLexer *);
};

typedef struct
{
	uint16_t lex_state;
	uint16_t external_lex_state;
} TSLexMode;

typedef struct
{
	int32_t start;
	int32_t end;
} TSCharacterRange;

struct TSLanguage
{
	uint32_t				  version;
	uint32_t				  symbol_count;
	uint32_t				  alias_count;
	uint32_t				  token_count;
	uint32_t				  external_token_count;
	uint32_t				  state_count;
	uint32_t				  large_state_count;
	uint32_t				  production_id_count;
	uint32_t				  field_count;
	uint16_t				  max_alias_sequence_length;
	const uint16_t			 *parse_table;
	const uint16_t			 *small_parse_table;
	const uint32_t			 *small_parse_table_map;
	const TSParseActionEntry *parse_actions;
	const char *const		 *symbol_names;
	const char *const		 *field_names;
	const TSFieldMapSlice	 *field_map_slices;
	const TSFieldMapEntry	 *field_map_entries;
	const TSSymbolMetadata	 *symbol_metadata;
	const TSSymbol			 *public_symbol_map;
	const uint16_t			 *alias_map;
	const TSSymbol			 *alias_sequences;
	const TSLexMode			 *lex_modes;
	bool (*lex_fn)(TSLexer *, TSStateId);
	bool (*keyword_lex_fn)(TSLexer *, TSStateId);
	TSSymbol keyword_capture_token;
	struct
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

void ts_language_table_entry(const TSLanguage *, TSStateId, TSSymbol,
							 TableEntry *);

TSSymbolMetadata ts_language_symbol_metadata(const TSLanguage *, TSSymbol);

TSSymbol ts_language_public_symbol(const TSLanguage *, TSSymbol);

TSStateId ts_language_next_state(const TSLanguage *self, TSStateId state,
								 TSSymbol symbol);

static inline bool ts_language_is_symbol_external(const TSLanguage *self,
												  TSSymbol			symbol)
{
	return 0 < symbol && symbol < self->external_token_count + 1;
}

static inline const TSParseAction *ts_language_actions(const TSLanguage *self,
													   TSStateId		 state,
													   TSSymbol			 symbol,
													   uint32_t			*count)
{
	TableEntry entry;
	ts_language_table_entry(self, state, symbol, &entry);
	*count = entry.action_count;
	return entry.actions;
}

static inline bool ts_language_has_reduce_action(const TSLanguage *self,
												 TSStateId		   state,
												 TSSymbol		   symbol)
{
	TableEntry entry;
	ts_language_table_entry(self, state, symbol, &entry);
	return entry.action_count > 0 &&
		   entry.actions[0].type == TSParseActionTypeReduce;
}

// Lookup the table value for a given symbol and state.
//
// For non-terminal symbols, the table value represents a successor state.
// For terminal symbols, it represents an index in the actions table.
// For 'large' parse states, this is a direct lookup. For 'small' parse
// states, this requires searching through the symbol groups to find
// the given symbol.
static inline uint16_t ts_language_lookup(const TSLanguage *self,
										  TSStateId state, TSSymbol symbol)
{
	if (state >= self->large_state_count)
	{
		uint32_t index =
			self->small_parse_table_map[state - self->large_state_count];
		const uint16_t *data = &self->small_parse_table[index];
		uint16_t		group_count = *(data++);
		for (unsigned i = 0; i < group_count; i++)
		{
			uint16_t section_value = *(data++);
			uint16_t symbol_count = *(data++);
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

static inline bool ts_language_has_actions(const TSLanguage *self,
										   TSStateId state, TSSymbol symbol)
{
	return ts_language_lookup(self, state, symbol) != 0;
}

// Iterate over all of the symbols that are valid in the given state.
//
// For 'large' parse states, this just requires iterating through
// all possible symbols and checking the parse table for each one.
// For 'small' parse states, this exploits the structure of the
// table to only visit the valid symbols.
static inline LookaheadIterator ts_language_lookaheads(const TSLanguage *self,
													   TSStateId		 state)
{
	bool			is_small_state = state >= self->large_state_count;
	const uint16_t *data;
	const uint16_t *group_end = NULL;
	uint16_t		group_count = 0;
	if (is_small_state)
	{
		uint32_t index =
			self->small_parse_table_map[state - self->large_state_count];
		data = &self->small_parse_table[index];
		group_end = data + 1;
		group_count = *data;
	}
	else
	{
		data = &self->parse_table[state * self->symbol_count] - 1;
	}
	return (LookaheadIterator){
		.language = self,
		.data = data,
		.group_end = group_end,
		.group_count = group_count,
		.is_small_state = is_small_state,
		.symbol = UINT16_MAX,
		.next_state = 0,
	};
}

static inline bool ts_lookahead_iterator__next(LookaheadIterator *self)
{
	// For small parse states, valid symbols are listed explicitly,
	// grouped by their value. There's no need to look up the actions
	// again until moving to the next group.
	if (self->is_small_state)
	{
		self->data++;
		if (self->data == self->group_end)
		{
			if (self->group_count == 0)
				return false;
			self->group_count--;
			self->table_value = *(self->data++);
			unsigned symbol_count = *(self->data++);
			self->group_end = self->data + symbol_count;
			self->symbol = *self->data;
		}
		else
		{
			self->symbol = *self->data;
			return true;
		}
	}

	// For large parse states, iterate through every symbol until one
	// is found that has valid actions.
	else
	{
		do
		{
			self->data++;
			self->symbol++;
			if (self->symbol >= self->language->symbol_count)
				return false;
			self->table_value = *self->data;
		} while (!self->table_value);
	}

	// Depending on if the symbols is terminal or non-terminal, the table value
	// either represents a list of actions or a successor state.
	if (self->symbol < self->language->token_count)
	{
		const TSParseActionEntry *entry =
			&self->language->parse_actions[self->table_value];
		self->action_count = entry->entry.count;
		self->actions = (const TSParseAction *)(entry + 1);
		self->next_state = 0;
	}
	else
	{
		self->action_count = 0;
		self->next_state = self->table_value;
	}
	return true;
}

// Whether the state is a "primary state". If this returns false, it indicates
// that there exists another state that behaves identically to this one with
// respect to query analysis.
static inline bool ts_language_state_is_primary(const TSLanguage *self,
												TSStateId		  state)
{
	if (self->version >= LANGUAGE_VERSION_WITH_PRIMARY_STATES)
	{
		return state == self->primary_state_ids[state];
	}
	else
	{
		return true;
	}
}

static inline const bool *ts_language_enabled_external_tokens(
	const TSLanguage *self, unsigned external_scanner_state)
{
	if (external_scanner_state == 0)
	{
		return NULL;
	}
	else
	{
		return self->external_scanner.states +
			   self->external_token_count * external_scanner_state;
	}
}

static inline const TSSymbol *ts_language_alias_sequence(const TSLanguage *self,
														 uint32_t production_id)
{
	return production_id
			   ? &self->alias_sequences[production_id *
										self->max_alias_sequence_length]
			   : NULL;
}

static inline TSSymbol ts_language_alias_at(const TSLanguage *self,
											uint32_t		  production_id,
											uint32_t		  child_index)
{
	return production_id
			   ? self->alias_sequences[production_id *
										   self->max_alias_sequence_length +
									   child_index]
			   : 0;
}

static inline void ts_language_field_map(const TSLanguage		*self,
										 uint32_t				 production_id,
										 const TSFieldMapEntry **start,
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

static inline void ts_language_aliases_for_symbol(const TSLanguage *self,
												  TSSymbol original_symbol,
												  const TSSymbol **start,
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
		uint16_t count = self->alias_map[idx++];
		if (symbol == original_symbol)
		{
			*start = &self->alias_map[idx];
			*end = &self->alias_map[idx + count];
			break;
		}
		idx += count;
	}
}

static const Length LENGTH_UNDEFINED = {0, {0, 1}};
static const Length LENGTH_MAX = {UINT32_MAX, {UINT32_MAX, UINT32_MAX}};

static TSPoint point_add(TSPoint a, TSPoint b);
static TSPoint point_sub(TSPoint a, TSPoint b);

static inline bool length_is_undefined(Length length)
{
	return length.bytes == 0 && length.extent.column != 0;
}

static inline Length length_min(Length len1, Length len2)
{
	return (len1.bytes < len2.bytes) ? len1 : len2;
}

static inline Length length_add(Length len1, Length len2)
{
	Length result;
	result.bytes = len1.bytes + len2.bytes;
	result.extent = point_add(len1.extent, len2.extent);
	return result;
}

static inline Length length_sub(Length len1, Length len2)
{
	Length result;
	result.bytes = len1.bytes - len2.bytes;
	result.extent = point_sub(len1.extent, len2.extent);
	return result;
}

static inline Length length_zero(void)
{
	Length result = {0, {0, 0}};
	return result;
}

static inline Length length_saturating_sub(Length len1, Length len2)
{
	if (len1.bytes > len2.bytes)
	{
		return length_sub(len1, len2);
	}
	else
	{
		return length_zero();
	}
}

typedef struct
{
	TSLexer data;
	Length	current_position;
	Length	token_start_position;
	Length	token_end_position;

	TSRange	   *included_ranges;
	const char *chunk;
	TSInput		input;
	TSLogger	logger;

	uint32_t included_range_count;
	uint32_t current_included_range_index;
	uint32_t chunk_start;
	uint32_t chunk_size;
	uint32_t lookahead_size;
	bool	 did_get_column;

	char debug_buffer[TREE_SITTER_SERIALIZATION_BUFFER_SIZE];
} Lexer;

void	 ts_lexer_init(Lexer *);
void	 ts_lexer_delete(Lexer *);
void	 ts_lexer_set_input(Lexer *, TSInput);
void	 ts_lexer_reset(Lexer *, Length);
void	 ts_lexer_start(Lexer *);
void	 ts_lexer_finish(Lexer *, uint32_t *);
void	 ts_lexer_advance_to_end(Lexer *);
void	 ts_lexer_mark_end(Lexer *);
bool	 ts_lexer_set_included_ranges(Lexer *self, const TSRange *ranges,
									  uint32_t count);
TSRange *ts_lexer_included_ranges(const Lexer *self, uint32_t *count);

static inline bool set_contains(TSCharacterRange *ranges, uint32_t len,
								int32_t lookahead)
{
	uint32_t index = 0;
	uint32_t size = len - index;
	while (size > 1)
	{
		uint32_t		  half_size = size / 2;
		uint32_t		  mid_index = index + half_size;
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

static inline TSPoint point__new(unsigned row, unsigned column)
{
	TSPoint result = {row, column};
	return result;
}

static inline TSPoint point_add(TSPoint a, TSPoint b)
{
	if (b.row > 0)
		return point__new(a.row + b.row, b.column);
	else
		return point__new(a.row, a.column + b.column);
}

static inline TSPoint point_sub(TSPoint a, TSPoint b)
{
	if (a.row > b.row)
		return point__new(a.row - b.row, a.column);
	else
		return point__new(0, a.column - b.column);
}

static inline bool point_lte(TSPoint a, TSPoint b)
{
	return (a.row < b.row) || (a.row == b.row && a.column <= b.column);
}

static inline bool point_lt(TSPoint a, TSPoint b)
{
	return (a.row < b.row) || (a.row == b.row && a.column < b.column);
}

static inline bool point_gt(TSPoint a, TSPoint b)
{
	return (a.row > b.row) || (a.row == b.row && a.column > b.column);
}

static inline bool point_gte(TSPoint a, TSPoint b)
{
	return (a.row > b.row) || (a.row == b.row && a.column >= b.column);
}

static inline bool point_eq(TSPoint a, TSPoint b)
{
	return a.row == b.row && a.column == b.column;
}

static inline TSPoint point_min(TSPoint a, TSPoint b)
{
	if (a.row < b.row || (a.row == b.row && a.column < b.column))
		return a;
	else
		return b;
}

static inline TSPoint point_max(TSPoint a, TSPoint b)
{
	if (a.row > b.row || (a.row == b.row && a.column > b.column))
		return a;
	else
		return b;
}

typedef struct
{
	uint32_t	   count;
	TSSymbol	   symbol;
	int			   dynamic_precedence;
	unsigned short production_id;
} ReduceAction;

typedef Array(ReduceAction) ReduceActionSet;

static inline void ts_reduce_action_set_add(ReduceActionSet *self,
											ReduceAction	 new_action)
{
	for (uint32_t i = 0; i < self->size; i++)
	{
		ReduceAction action = self->contents[i];
		if (action.symbol == new_action.symbol &&
			action.count == new_action.count)
			return;
	}
	array_push(self, new_action);
}

typedef struct
{
	Subtree	 tree;
	uint32_t child_index;
	uint32_t byte_offset;
} StackEntry;

typedef struct
{
	Array(StackEntry) stack;
	Subtree last_external_token;
} ReusableNode;

static inline ReusableNode reusable_node_new(void)
{
	return (ReusableNode){array_new(), NULL_SUBTREE};
}

static inline void reusable_node_clear(ReusableNode *self)
{
	array_clear(&self->stack);
	self->last_external_token = NULL_SUBTREE;
}

static inline Subtree reusable_node_tree(ReusableNode *self)
{
	return self->stack.size > 0
			   ? self->stack.contents[self->stack.size - 1].tree
			   : NULL_SUBTREE;
}

static inline uint32_t reusable_node_byte_offset(ReusableNode *self)
{
	return self->stack.size > 0
			   ? self->stack.contents[self->stack.size - 1].byte_offset
			   : UINT32_MAX;
}

static inline void reusable_node_delete(ReusableNode *self)
{
	array_delete(&self->stack);
}


static inline uint32_t ts_subtree_total_bytes(Subtree self);
static inline bool ts_subtree_has_external_tokens(Subtree self);
Subtree ts_subtree_last_external_token(Subtree self);
static inline uint32_t ts_subtree_child_count(Subtree self);

static inline void reusable_node_advance(ReusableNode *self)
{
	StackEntry last_entry = *array_back(&self->stack);
	uint32_t   byte_offset =
		last_entry.byte_offset + ts_subtree_total_bytes(last_entry.tree);
	if (ts_subtree_has_external_tokens(last_entry.tree))
	{
		self->last_external_token =
			ts_subtree_last_external_token(last_entry.tree);
	}

	Subtree	 tree;
	uint32_t next_index;
	do
	{
		StackEntry popped_entry = array_pop(&self->stack);
		next_index = popped_entry.child_index + 1;
		if (self->stack.size == 0)
			return;
		tree = array_back(&self->stack)->tree;
	} while (ts_subtree_child_count(tree) <= next_index);

	array_push(&self->stack, ((StackEntry){
								 .tree = ts_subtree_children(tree)[next_index],
								 .child_index = next_index,
								 .byte_offset = byte_offset,
							 }));
}

static inline bool reusable_node_descend(ReusableNode *self)
{
	StackEntry last_entry = *array_back(&self->stack);
	if (ts_subtree_child_count(last_entry.tree) > 0)
	{
		array_push(&self->stack,
				   ((StackEntry){
					   .tree = ts_subtree_children(last_entry.tree)[0],
					   .child_index = 0,
					   .byte_offset = last_entry.byte_offset,
				   }));
		return true;
	}
	else
	{
		return false;
	}
}

static inline void reusable_node_advance_past_leaf(ReusableNode *self)
{
	while (reusable_node_descend(self))
	{
	}
	reusable_node_advance(self);
}

static inline void reusable_node_reset(ReusableNode *self, Subtree tree)
{
	reusable_node_clear(self);
	array_push(&self->stack, ((StackEntry){
								 .tree = tree,
								 .child_index = 0,
								 .byte_offset = 0,
							 }));

	// Never reuse the root node, because it has a non-standard internal
	// structure due to transformations that are applied when it is accepted:
	// adding the EOF child and any extra children.
	if (!reusable_node_descend(self))
	{
		reusable_node_clear(self);
	}
}

typedef struct Stack Stack;

typedef unsigned StackVersion;

typedef struct
{
	SubtreeArray subtrees;
	StackVersion version;
} StackSlice;
typedef Array(StackSlice) StackSliceArray;

typedef struct
{
	Length	  position;
	unsigned  depth;
	TSStateId state;
} StackSummaryEntry;
typedef Array(StackSummaryEntry) StackSummary;

// Create a stack.
Stack *ts_stack_new(SubtreePool *);

// Release the memory reserved for a given stack.
void ts_stack_delete(Stack *);

// Get the stack's current number of versions.
uint32_t ts_stack_version_count(const Stack *);

// Get the state at the top of the given version of the stack. If the stack is
// empty, this returns the initial state, 0.
TSStateId ts_stack_state(const Stack *, StackVersion);

// Get the last external token associated with a given version of the stack.
Subtree ts_stack_last_external_token(const Stack *, StackVersion);

// Set the last external token associated with a given version of the stack.
void ts_stack_set_last_external_token(Stack *, StackVersion, Subtree);

// Get the position of the given version of the stack within the document.
Length ts_stack_position(const Stack *, StackVersion);

// Push a tree and state onto the given version of the stack.
//
// This transfers ownership of the tree to the Stack. Callers that
// need to retain ownership of the tree for their own purposes should
// first retain the tree.
void ts_stack_push(Stack *, StackVersion, Subtree, bool, TSStateId);

// Pop the given number of entries from the given version of the stack. This
// operation can increase the number of stack versions by revealing multiple
// versions which had previously been merged. It returns an array that
// specifies the index of each revealed version and the trees that were
// removed from that version.
StackSliceArray ts_stack_pop_count(Stack *, StackVersion, uint32_t count);

// Remove an error at the top of the given version of the stack.
SubtreeArray ts_stack_pop_error(Stack *, StackVersion);

// Remove any pending trees from the top of the given version of the stack.
StackSliceArray ts_stack_pop_pending(Stack *, StackVersion);

// Remove any all trees from the given version of the stack.
StackSliceArray ts_stack_pop_all(Stack *, StackVersion);

// Get the maximum number of tree nodes reachable from this version of the stack
// since the last error was detected.
unsigned ts_stack_node_count_since_error(const Stack *, StackVersion);

int ts_stack_dynamic_precedence(Stack *, StackVersion);

bool ts_stack_has_advanced_since_error(const Stack *, StackVersion);

// Compute a summary of all the parse states near the top of the given
// version of the stack and store the summary for later retrieval.
void ts_stack_record_summary(Stack *, StackVersion, unsigned max_depth);

// Retrieve a summary of all the parse states near the top of the
// given version of the stack.
StackSummary *ts_stack_get_summary(Stack *, StackVersion);

// Get the total cost of all errors on the given version of the stack.
unsigned ts_stack_error_cost(const Stack *, StackVersion version);

// Merge the given two stack versions if possible, returning true
// if they were successfully merged and false otherwise.
bool ts_stack_merge(Stack *, StackVersion, StackVersion);

// Determine whether the given two stack versions can be merged.
bool ts_stack_can_merge(Stack *, StackVersion, StackVersion);

Subtree ts_stack_resume(Stack *, StackVersion);

void ts_stack_pause(Stack *, StackVersion, Subtree);

void ts_stack_halt(Stack *, StackVersion);

bool ts_stack_is_active(const Stack *, StackVersion);

bool ts_stack_is_paused(const Stack *, StackVersion);

bool ts_stack_is_halted(const Stack *, StackVersion);

void ts_stack_renumber_version(Stack *, StackVersion, StackVersion);

void ts_stack_swap_versions(Stack *, StackVersion, StackVersion);

StackVersion ts_stack_copy_version(Stack *, StackVersion);

// Remove the given version from the stack.
void ts_stack_remove_version(Stack *, StackVersion);

void ts_stack_clear(Stack *);

typedef void (*StackIterateCallback)(void *, TSStateId, uint32_t);

void		ts_external_scanner_state_init(ExternalScannerState *, const char *,
										   unsigned);
const char *ts_external_scanner_state_data(const ExternalScannerState *);
bool		ts_external_scanner_state_eq(const ExternalScannerState *self,
										 const char *, unsigned);
void		ts_external_scanner_state_delete(ExternalScannerState *self);

void ts_subtree_array_copy(SubtreeArray, SubtreeArray *);
void ts_subtree_array_clear(SubtreePool *, SubtreeArray *);
void ts_subtree_array_delete(SubtreePool *, SubtreeArray *);
void ts_subtree_array_remove_trailing_extras(SubtreeArray *, SubtreeArray *);
void ts_subtree_array_reverse(SubtreeArray *);

SubtreePool ts_subtree_pool_new(uint32_t capacity);
void		ts_subtree_pool_delete(SubtreePool *);

Subtree ts_subtree_new_leaf(SubtreePool *, TSSymbol, Length, Length, uint32_t,
							TSStateId, bool, bool, bool, const TSLanguage *);
Subtree ts_subtree_new_error(SubtreePool *, int32_t, Length, Length, uint32_t,
							 TSStateId, const TSLanguage *);
MutableSubtree ts_subtree_new_node(TSSymbol, SubtreeArray *, unsigned,
								   const TSLanguage *);
Subtree ts_subtree_new_error_node(SubtreeArray *, bool, const TSLanguage *);
Subtree ts_subtree_new_missing_leaf(SubtreePool *, TSSymbol, Length, uint32_t,
									const TSLanguage *);
MutableSubtree ts_subtree_make_mut(SubtreePool *, Subtree);
void		   ts_subtree_retain(Subtree);
void		   ts_subtree_release(SubtreePool *, Subtree);
int			   ts_subtree_compare(Subtree, Subtree, SubtreePool *);
void	ts_subtree_set_symbol(MutableSubtree *, TSSymbol, const TSLanguage *);
void	ts_subtree_summarize(MutableSubtree, const Subtree *, uint32_t,
							 const TSLanguage *);
void	ts_subtree_summarize_children(MutableSubtree, const TSLanguage *);
void	ts_subtree_balance(Subtree, SubtreePool *, const TSLanguage *);
Subtree ts_subtree_edit(Subtree, const TSInputEdit *edit, SubtreePool *);
char   *ts_subtree_string(Subtree, TSSymbol, bool, const TSLanguage *,
						  bool include_all);
Subtree ts_subtree_last_external_token(Subtree);
const ExternalScannerState *ts_subtree_external_scanner_state(Subtree self);
bool ts_subtree_external_scanner_state_eq(Subtree, Subtree);

#define SUBTREE_GET(self, name)                                                \
	((self).data.is_inline ? (self).data.name : (self).ptr->name)

static inline TSSymbol ts_subtree_symbol(Subtree self)
{
	return SUBTREE_GET(self, symbol);
}
static inline bool ts_subtree_visible(Subtree self)
{
	return SUBTREE_GET(self, visible);
}
static inline bool ts_subtree_named(Subtree self)
{
	return SUBTREE_GET(self, named);
}
static inline bool ts_subtree_extra(Subtree self)
{
	return SUBTREE_GET(self, extra);
}
static inline bool ts_subtree_has_changes(Subtree self)
{
	return SUBTREE_GET(self, has_changes);
}
static inline bool ts_subtree_missing(Subtree self)
{
	return SUBTREE_GET(self, is_missing);
}
static inline bool ts_subtree_is_keyword(Subtree self)
{
	return SUBTREE_GET(self, is_keyword);
}
static inline TSStateId ts_subtree_parse_state(Subtree self)
{
	return SUBTREE_GET(self, parse_state);
}
static inline uint32_t ts_subtree_lookahead_bytes(Subtree self)
{
	return SUBTREE_GET(self, lookahead_bytes);
}

#undef SUBTREE_GET

// Get the size needed to store a heap-allocated subtree with the given
// number of children.
static inline size_t ts_subtree_alloc_size(uint32_t child_count)
{
	return child_count * sizeof(Subtree) + sizeof(SubtreeHeapData);
}



static inline void ts_subtree_set_extra(MutableSubtree *self, bool is_extra)
{
	if (self->data.is_inline)
	{
		self->data.extra = is_extra;
	}
	else
	{
		self->ptr->extra = is_extra;
	}
}

static inline TSSymbol ts_subtree_leaf_symbol(Subtree self)
{
	if (self.data.is_inline)
		return self.data.symbol;
	if (self.ptr->child_count == 0)
		return self.ptr->symbol;
	return self.ptr->first_leaf.symbol;
}

static inline TSStateId ts_subtree_leaf_parse_state(Subtree self)
{
	if (self.data.is_inline)
		return self.data.parse_state;
	if (self.ptr->child_count == 0)
		return self.ptr->parse_state;
	return self.ptr->first_leaf.parse_state;
}

static inline Length ts_subtree_padding(Subtree self)
{
	if (self.data.is_inline)
	{
		Length result = {self.data.padding_bytes,
						 {self.data.padding_rows, self.data.padding_columns}};
		return result;
	}
	else
	{
		return self.ptr->padding;
	}
}

static inline Length ts_subtree_size(Subtree self)
{
	if (self.data.is_inline)
	{
		Length result = {self.data.size_bytes, {0, self.data.size_bytes}};
		return result;
	}
	else
	{
		return self.ptr->size;
	}
}

static inline Length ts_subtree_total_size(Subtree self)
{
	return length_add(ts_subtree_padding(self), ts_subtree_size(self));
}

static inline uint32_t ts_subtree_total_bytes(Subtree self)
{
	return ts_subtree_total_size(self).bytes;
}

static inline uint32_t ts_subtree_child_count(Subtree self)
{
	return self.data.is_inline ? 0 : self.ptr->child_count;
}

static inline uint32_t ts_subtree_repeat_depth(Subtree self)
{
	return self.data.is_inline ? 0 : self.ptr->repeat_depth;
}

static inline uint32_t ts_subtree_is_repetition(Subtree self)
{
	return self.data.is_inline ? 0
							   : !self.ptr->named && !self.ptr->visible &&
									 self.ptr->child_count != 0;
}

static inline uint32_t ts_subtree_visible_descendant_count(Subtree self)
{
	return (self.data.is_inline || self.ptr->child_count == 0)
			   ? 0
			   : self.ptr->visible_descendant_count;
}

static inline uint32_t ts_subtree_visible_child_count(Subtree self)
{
	if (ts_subtree_child_count(self) > 0)
	{
		return self.ptr->visible_child_count;
	}
	else
	{
		return 0;
	}
}

static inline uint32_t ts_subtree_error_cost(Subtree self)
{
	if (ts_subtree_missing(self))
	{
		return ERROR_COST_PER_MISSING_TREE + ERROR_COST_PER_RECOVERY;
	}
	else
	{
		return self.data.is_inline ? 0 : self.ptr->error_cost;
	}
}

static inline int32_t ts_subtree_dynamic_precedence(Subtree self)
{
	return (self.data.is_inline || self.ptr->child_count == 0)
			   ? 0
			   : self.ptr->dynamic_precedence;
}

static inline uint16_t ts_subtree_production_id(Subtree self)
{
	if (ts_subtree_child_count(self) > 0)
	{
		return self.ptr->production_id;
	}
	else
	{
		return 0;
	}
}

static inline bool ts_subtree_fragile_left(Subtree self)
{
	return self.data.is_inline ? false : self.ptr->fragile_left;
}

static inline bool ts_subtree_fragile_right(Subtree self)
{
	return self.data.is_inline ? false : self.ptr->fragile_right;
}

static inline bool ts_subtree_has_external_tokens(Subtree self)
{
	return self.data.is_inline ? false : self.ptr->has_external_tokens;
}

static inline bool ts_subtree_has_external_scanner_state_change(Subtree self)
{
	return self.data.is_inline ? false
							   : self.ptr->has_external_scanner_state_change;
}

static inline bool ts_subtree_depends_on_column(Subtree self)
{
	return self.data.is_inline ? false : self.ptr->depends_on_column;
}

static inline bool ts_subtree_is_fragile(Subtree self)
{
	return self.data.is_inline
			   ? false
			   : (self.ptr->fragile_left || self.ptr->fragile_right);
}

static inline bool ts_subtree_is_error(Subtree self)
{
	return ts_subtree_symbol(self) == ts_builtin_sym_error;
}

static inline bool ts_subtree_is_eof(Subtree self)
{
	return ts_subtree_symbol(self) == ts_builtin_sym_end;
}

static inline Subtree ts_subtree_from_mut(MutableSubtree self)
{
	Subtree result;
	result.data = self.data;
	return result;
}

static inline MutableSubtree ts_subtree_to_mut_unsafe(Subtree self)
{
	MutableSubtree result;
	result.data = self.data;
	return result;
}

typedef enum
{
	TreeCursorStepNone,
	TreeCursorStepHidden,
	TreeCursorStepVisible,
} TreeCursorStep;

void ts_tree_cursor_init(TreeCursor *, TSNode);
void ts_tree_cursor_current_status(const TSTreeCursor *, TSFieldId *, bool *,
								   bool *, bool *, TSSymbol *, unsigned *);

TreeCursorStep ts_tree_cursor_goto_first_child_internal(TSTreeCursor *);
TreeCursorStep ts_tree_cursor_goto_next_sibling_internal(TSTreeCursor *);

static inline Subtree ts_tree_cursor_current_subtree(const TSTreeCursor *_self)
{
	const TreeCursor *self = (const TreeCursor *)_self;
	TreeCursorEntry	 *last_entry = array_back(&self->stack);
	return *last_entry->subtree;
}

TSNode ts_tree_cursor_parent_node(const TSTreeCursor *);

typedef struct
{
	const Subtree *child;
	const Subtree *parent;
	Length		   position;
	TSSymbol	   alias_symbol;
} ParentCacheEntry;

struct TSTree
{
	Subtree			  root;
	const TSLanguage *language;
	TSRange			 *included_ranges;
	unsigned		  included_range_count;
};

TSTree *ts_tree_new(Subtree root, const TSLanguage *language, const TSRange *,
					unsigned);
TSNode	ts_node_new(const TSTree *, const Subtree *, Length, TSSymbol);

typedef uint64_t TSClock;
typedef uint64_t TSDuration;

#endif // TREE_SITTER_TREE_H_