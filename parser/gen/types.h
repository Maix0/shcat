#include <stdint.h>
#include <stdio.h>

typedef uint16_t				   TSStateId;
typedef uint16_t				   TSSymbol;
typedef uint16_t				   TSFieldId;
typedef struct TSLanguage		   TSLanguage;
typedef struct TSParser			   TSParser;
typedef struct TSTree			   TSTree;
typedef struct TSQuery			   TSQuery;
typedef struct TSQueryCursor	   TSQueryCursor;
typedef struct TSLookaheadIterator TSLookaheadIterator;
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
typedef struct TSPoint
{
	uint32_t row;
	uint32_t column;
} TSPoint;
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
	const char *(*read)(void *payload, uint32_t byte_index, TSPoint position, uint32_t *bytes_read);
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
	TSQuantifierZero = 0,
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
typedef struct wasm_engine_t TSWasmEngine;
typedef struct TSWasmStore	 TSWasmStore;
typedef enum
{
	TSWasmErrorKindNone = 0,
	TSWasmErrorKindParse,
	TSWasmErrorKindCompile,
	TSWasmErrorKindInstantiate,
	TSWasmErrorKindAllocate,
} TSWasmErrorKind;
typedef struct
{
	TSWasmErrorKind kind;
	char		   *message;
} TSWasmError;
typedef struct
{
	void	*contents;
	uint32_t size;
	uint32_t capacity;
} Array;
typedef struct
{
	uint32_t bytes;
	TSPoint	 extent;
} Length;
typedef struct
{
	TSFieldId field_id;
	uint8_t	  child_index;
	_Bool	  inherited;
} TSFieldMapEntry;
typedef struct
{
	uint16_t index;
	uint16_t length;
} TSFieldMapSlice;
typedef struct
{
	_Bool visible;
	_Bool named;
	_Bool supertype;
} TSSymbolMetadata;
typedef struct TSLexer TSLexer;
struct TSLexer
{
	int32_t	 lookahead;
	TSSymbol result_symbol;
	void (*advance)(TSLexer *, _Bool);
	void (*mark_end)(TSLexer *);
	uint32_t (*get_column)(TSLexer *);
	_Bool (*is_at_included_range_start)(const TSLexer *);
	_Bool (*eof)(const TSLexer *);
};
typedef enum
{
	TSParseActionTypeShift,
	TSParseActionTypeReduce,
	TSParseActionTypeAccept,
	TSParseActionTypeRecover,
} TSParseActionType;
typedef union {
	struct
	{
		uint8_t	  type;
		TSStateId state;
		_Bool	  extra;
		_Bool	  repetition;
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
typedef struct
{
	uint16_t lex_state;
	uint16_t external_lex_state;
} TSLexMode;
typedef union {
	TSParseAction action;
	struct
	{
		uint8_t count;
		_Bool	reusable;
	} entry;
} TSParseActionEntry;
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
	_Bool (*lex_fn)(TSLexer *, TSStateId);
	_Bool (*keyword_lex_fn)(TSLexer *, TSStateId);
	TSSymbol keyword_capture_token;
	struct
	{
		const _Bool	   *states;
		const TSSymbol *symbol_map;
		void *(*create)(void);
		void (*destroy)(void *);
		_Bool (*scan)(void *, TSLexer *, const _Bool *symbol_whitelist);
		unsigned (*serialize)(void *, char *);
		void (*deserialize)(void *, const char *, unsigned);
	} external_scanner;
	const TSStateId *primary_state_ids;
};
typedef struct
{
	union {
		char *long_data;
		char  short_data[24];
	};
	uint32_t length;
} ExternalScannerState;
typedef struct SubtreeInlineData SubtreeInlineData;
struct SubtreeInlineData
{
	_Bool	 is_inline : 1;
	_Bool	 visible : 1;
	_Bool	 named : 1;
	_Bool	 extra : 1;
	_Bool	 has_changes : 1;
	_Bool	 is_missing : 1;
	_Bool	 is_keyword : 1;
	uint8_t	 symbol;
	uint16_t parse_state;
	uint8_t	 padding_columns;
	uint8_t	 padding_rows : 4;
	uint8_t	 lookahead_bytes : 4;
	uint8_t	 padding_bytes;
	uint8_t	 size_bytes;
};
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
	_Bool			  visible : 1;
	_Bool			  named : 1;
	_Bool			  extra : 1;
	_Bool			  fragile_left : 1;
	_Bool			  fragile_right : 1;
	_Bool			  has_changes : 1;
	_Bool			  has_external_tokens : 1;
	_Bool			  has_external_scanner_state_change : 1;
	_Bool			  depends_on_column : 1;
	_Bool			  is_missing : 1;
	_Bool			  is_keyword : 1;
	union {
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
		ExternalScannerState external_scanner_state;
		int32_t				 lookahead_char;
	};
} SubtreeHeapData;
typedef union {
	SubtreeInlineData	   data;
	const SubtreeHeapData *ptr;
} Subtree;
typedef union {
	SubtreeInlineData data;
	SubtreeHeapData	 *ptr;
} MutableSubtree;
typedef struct
{
	Subtree *contents;
	uint32_t size;
	uint32_t capacity;
} SubtreeArray;
typedef struct
{
	MutableSubtree *contents;
	uint32_t		size;
	uint32_t		capacity;
} MutableSubtreeArray;
typedef struct
{
	MutableSubtreeArray free_trees;
	MutableSubtreeArray tree_stack;
} SubtreePool;
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
	struct
	{
		TreeCursorEntry *contents;
		uint32_t		 size;
		uint32_t		 capacity;
	} stack;
	TSSymbol root_alias_symbol;
} TreeCursor;
typedef enum
{
	TreeCursorStepNone,
	TreeCursorStepHidden,
	TreeCursorStepVisible,
} TreeCursorStep;
typedef struct
{
	TSRange *contents;
	uint32_t size;
	uint32_t capacity;
} TSRangeArray;
typedef struct
{
	const TSParseAction *actions;
	uint32_t			 action_count;
	_Bool				 is_reusable;
} TableEntry;
typedef struct
{
	const TSLanguage	*language;
	const uint16_t		*data;
	const uint16_t		*group_end;
	TSStateId			 state;
	uint16_t			 table_value;
	uint16_t			 section_index;
	uint16_t			 group_count;
	_Bool				 is_small_state;
	const TSParseAction *actions;
	TSSymbol			 symbol;
	TSStateId			 next_state;
	uint16_t			 action_count;
} LookaheadIterator;
typedef struct
{
	TreeCursor		  cursor;
	const TSLanguage *language;
	unsigned		  visible_depth;
	_Bool			  in_padding;
} Iterator;
typedef enum
{
	IteratorDiffers,
	IteratorMayDiffer,
	IteratorMatches,
} IteratorComparison;
typedef struct
{
	TSLexer		data;
	Length		current_position;
	Length		token_start_position;
	Length		token_end_position;
	TSRange	   *included_ranges;
	const char *chunk;
	TSInput		input;
	TSLogger	logger;
	uint32_t	included_range_count;
	uint32_t	current_included_range_index;
	uint32_t	chunk_start;
	uint32_t	chunk_size;
	uint32_t	lookahead_size;
	_Bool		did_get_column;
	char		debug_buffer[1024];
} Lexer;
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
typedef struct
{
	Subtree			parent;
	const TSTree   *tree;
	Length			position;
	uint32_t		child_index;
	uint32_t		structural_child_index;
	const TSSymbol *alias_sequence;
} NodeChildIterator;
typedef uint64_t TSDuration;
typedef uint64_t TSClock;
typedef struct
{
	uint32_t	   count;
	TSSymbol	   symbol;
	int			   dynamic_precedence;
	unsigned short production_id;
} ReduceAction;
typedef struct
{
	ReduceAction *contents;
	uint32_t	  size;
	uint32_t	  capacity;
} ReduceActionSet;
typedef struct
{
	Subtree	 tree;
	uint32_t child_index;
	uint32_t byte_offset;
} StackEntry;
typedef struct
{
	struct
	{
		StackEntry *contents;
		uint32_t	size;
		uint32_t	capacity;
	} stack;
	Subtree last_external_token;
} ReusableNode;
typedef struct Stack Stack;
typedef unsigned	 StackVersion;
typedef struct
{
	SubtreeArray subtrees;
	StackVersion version;
} StackSlice;
typedef struct
{
	StackSlice *contents;
	uint32_t	size;
	uint32_t	capacity;
} StackSliceArray;
typedef struct
{
	Length	  position;
	unsigned  depth;
	TSStateId state;
} StackSummaryEntry;
typedef struct
{
	StackSummaryEntry *contents;
	uint32_t		   size;
	uint32_t		   capacity;
} StackSummary;
typedef void (*StackIterateCallback)(void *, TSStateId, uint32_t);
typedef int __gwchar_t;
typedef struct
{
	long int quot;
	long int rem;
} imaxdiv_t;
struct tm
{
	int			tm_sec;
	int			tm_min;
	int			tm_hour;
	int			tm_mday;
	int			tm_mon;
	int			tm_year;
	int			tm_wday;
	int			tm_yday;
	int			tm_isdst;
	long int	tm_gmtoff;
	const char *tm_zone;
};
typedef struct
{
	Subtree	 token;
	Subtree	 last_external_token;
	uint32_t byte_index;
} TokenCache;
struct TSParser
{
	Lexer				   lexer;
	Stack				  *stack;
	SubtreePool			   tree_pool;
	const TSLanguage	  *language;
	ReduceActionSet		   reduce_actions;
	Subtree				   finished_tree;
	SubtreeArray		   trailing_extras;
	SubtreeArray		   trailing_extras2;
	SubtreeArray		   scratch_trees;
	TokenCache			   token_cache;
	ReusableNode		   reusable_node;
	void				  *external_scanner_payload;
	FILE				  *dot_graph_file;
	TSClock				   end_clock;
	TSDuration			   timeout_duration;
	unsigned			   accept_count;
	unsigned			   operation_count;
	const volatile size_t *cancellation_flag;
	Subtree				   old_tree;
	TSRangeArray		   included_range_differences;
	unsigned			   included_range_difference_index;
	_Bool				   has_scanner_error;
};
typedef struct
{
	unsigned cost;
	unsigned node_count;
	int		 dynamic_precedence;
	_Bool	 is_in_error;
} ErrorStatus;
typedef enum
{
	ErrorComparisonTakeLeft,
	ErrorComparisonPreferLeft,
	ErrorComparisonNone,
	ErrorComparisonPreferRight,
	ErrorComparisonTakeRight,
} ErrorComparison;
typedef struct
{
	const char *string;
	uint32_t	length;
} TSStringInput;
typedef struct
{
	const char *input;
	const char *start;
	const char *end;
	int32_t		next;
	uint8_t		next_size;
} Stream;
typedef struct
{
	TSSymbol  symbol;
	TSSymbol  supertype_symbol;
	TSFieldId field;
	uint16_t  capture_ids[3];
	uint16_t  depth;
	uint16_t  alternative_index;
	uint16_t  negated_field_list_id;
	_Bool	  is_named : 1;
	_Bool	  is_immediate : 1;
	_Bool	  is_last_child : 1;
	_Bool	  is_pass_through : 1;
	_Bool	  is_dead_end : 1;
	_Bool	  alternative_is_immediate : 1;
	_Bool	  contains_captures : 1;
	_Bool	  root_pattern_guaranteed : 1;
	_Bool	  parent_pattern_guaranteed : 1;
} QueryStep;
typedef struct
{
	uint32_t offset;
	uint32_t length;
} Slice;
typedef struct
{
	struct
	{
		char	*contents;
		uint32_t size;
		uint32_t capacity;
	} characters;
	struct
	{
		Slice	*contents;
		uint32_t size;
		uint32_t capacity;
	} slices;
} SymbolTable;
typedef struct
{
	uint8_t *contents;
	uint32_t size;
	uint32_t capacity;
} CaptureQuantifiers;
typedef struct
{
	uint16_t step_index;
	uint16_t pattern_index;
	_Bool	 is_rooted;
} PatternEntry;
typedef struct
{
	Slice	 steps;
	Slice	 predicate_steps;
	uint32_t start_byte;
	_Bool	 is_non_local;
} QueryPattern;
typedef struct
{
	uint32_t byte_offset;
	uint16_t step_index;
} StepOffset;
typedef struct
{
	uint32_t id;
	uint32_t capture_list_id;
	uint16_t start_depth;
	uint16_t step_index;
	uint16_t pattern_index;
	uint16_t consumed_capture_count : 12;
	_Bool	 seeking_immediate_match : 1;
	_Bool	 has_in_progress_alternatives : 1;
	_Bool	 dead : 1;
	_Bool	 needs_parent : 1;
} QueryState;
typedef struct
{
	TSQueryCapture *contents;
	uint32_t		size;
	uint32_t		capacity;
} CaptureList;
typedef struct
{
	struct
	{
		CaptureList *contents;
		uint32_t	 size;
		uint32_t	 capacity;
	} list;
	CaptureList empty_list;
	uint32_t	max_capture_list_count;
	uint32_t	free_capture_list_count;
} CaptureListPool;
typedef struct
{
	TSStateId parse_state;
	TSSymbol  parent_symbol;
	uint16_t  child_index;
	TSFieldId field_id : 15;
	_Bool	  done : 1;
} AnalysisStateEntry;
typedef struct
{
	AnalysisStateEntry stack[8];
	uint16_t		   depth;
	uint16_t		   step_index;
	TSSymbol		   root_symbol;
} AnalysisState;
typedef struct
{
	AnalysisState **contents;
	uint32_t		size;
	uint32_t		capacity;
} AnalysisStateSet;
typedef struct
{
	AnalysisStateSet states;
	AnalysisStateSet next_states;
	AnalysisStateSet deeper_states;
	AnalysisStateSet state_pool;
	struct
	{
		uint16_t *contents;
		uint32_t  size;
		uint32_t  capacity;
	} final_step_indices;
	struct
	{
		TSSymbol *contents;
		uint32_t  size;
		uint32_t  capacity;
	} finished_parent_symbols;
	_Bool did_abort;
} QueryAnalysis;
typedef struct
{
	TSStateId state;
	uint16_t  production_id;
	uint8_t	  child_index : 7;
	_Bool	  done : 1;
} AnalysisSubgraphNode;
typedef struct
{
	TSSymbol symbol;
	struct
	{
		TSStateId *contents;
		uint32_t   size;
		uint32_t   capacity;
	} start_states;
	struct
	{
		AnalysisSubgraphNode *contents;
		uint32_t			  size;
		uint32_t			  capacity;
	} nodes;
} AnalysisSubgraph;
typedef struct
{
	AnalysisSubgraph *contents;
	uint32_t		  size;
	uint32_t		  capacity;
} AnalysisSubgraphArray;
typedef struct
{
	TSStateId *contents;
} StatePredecessorMap;
struct TSQuery
{
	SymbolTable captures;
	SymbolTable predicate_values;
	struct
	{
		CaptureQuantifiers *contents;
		uint32_t			size;
		uint32_t			capacity;
	} capture_quantifiers;
	struct
	{
		QueryStep *contents;
		uint32_t   size;
		uint32_t   capacity;
	} steps;
	struct
	{
		PatternEntry *contents;
		uint32_t	  size;
		uint32_t	  capacity;
	} pattern_map;
	struct
	{
		TSQueryPredicateStep *contents;
		uint32_t			  size;
		uint32_t			  capacity;
	} predicate_steps;
	struct
	{
		QueryPattern *contents;
		uint32_t	  size;
		uint32_t	  capacity;
	} patterns;
	struct
	{
		StepOffset *contents;
		uint32_t	size;
		uint32_t	capacity;
	} step_offsets;
	struct
	{
		TSFieldId *contents;
		uint32_t   size;
		uint32_t   capacity;
	} negated_fields;
	struct
	{
		char	*contents;
		uint32_t size;
		uint32_t capacity;
	} string_buffer;
	struct
	{
		TSSymbol *contents;
		uint32_t  size;
		uint32_t  capacity;
	} repeat_symbols_with_rootless_patterns;
	const TSLanguage *language;
	uint16_t		  wildcard_root_pattern_count;
};
struct TSQueryCursor
{
	const TSQuery *query;
	TSTreeCursor   cursor;
	struct
	{
		QueryState *contents;
		uint32_t	size;
		uint32_t	capacity;
	} states;
	struct
	{
		QueryState *contents;
		uint32_t	size;
		uint32_t	capacity;
	} finished_states;
	CaptureListPool capture_list_pool;
	uint32_t		depth;
	uint32_t		max_start_depth;
	uint32_t		start_byte;
	uint32_t		end_byte;
	TSPoint			start_point;
	TSPoint			end_point;
	uint32_t		next_state_id;
	_Bool			on_visible_node;
	_Bool			ascending;
	_Bool			halted;
	_Bool			did_exceed_match_limit;
};
typedef struct StackNode StackNode;
typedef struct
{
	StackNode *node;
	Subtree	   subtree;
	_Bool	   is_pending;
} StackLink;
struct StackNode
{
	TSStateId		   state;
	Length			   position;
	StackLink		   links[8];
	short unsigned int link_count;
	uint32_t		   ref_count;
	unsigned		   error_cost;
	unsigned		   node_count;
	int				   dynamic_precedence;
};
typedef struct
{
	StackNode	*node;
	SubtreeArray subtrees;
	uint32_t	 subtree_count;
	_Bool		 is_pending;
} StackIterator;
typedef struct
{
	StackNode **contents;
	uint32_t	size;
	uint32_t	capacity;
} StackNodeArray;
typedef enum
{
	StackStatusActive,
	StackStatusPaused,
	StackStatusHalted,
} StackStatus;
typedef struct
{
	StackNode	 *node;
	StackSummary *summary;
	unsigned	  node_count_at_last_error;
	Subtree		  last_external_token;
	Subtree		  lookahead_when_paused;
	StackStatus	  status;
} StackHead;
struct Stack
{
	struct
	{
		StackHead *contents;
		uint32_t   size;
		uint32_t   capacity;
	} heads;
	StackSliceArray slices;
	struct
	{
		StackIterator *contents;
		uint32_t	   size;
		uint32_t	   capacity;
	} iterators;
	StackNodeArray node_pool;
	StackNode	  *base_node;
	SubtreePool	  *subtree_pool;
};
typedef unsigned StackAction;
enum
{
	StackActionNone,
	StackActionStop = 1,
	StackActionPop = 2,
};
typedef StackAction (*StackCallback)(void *, const StackIterator *);
typedef struct
{
	StackSummary *summary;
	unsigned	  max_depth;
} SummarizeStackSession;
typedef struct
{
	Length start;
	Length old_end;
	Length new_end;
} Edit;
typedef struct
{
	Subtree			parent;
	const TSTree   *tree;
	Length			position;
	uint32_t		child_index;
	uint32_t		structural_child_index;
	uint32_t		descendant_index;
	const TSSymbol *alias_sequence;
} CursorChildIterator;
