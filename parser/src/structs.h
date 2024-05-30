#ifndef STRUCTS_H
#define STRUCTS_H

#include "./api.h"

typedef unsigned t_stack_action;

typedef struct s_analysis_state			 t_analysis_state;
typedef struct s_analysis_state_entry	 t_analysis_state_entry;
typedef struct s_analysis_subgraph		 t_analysis_subgraph;
typedef struct s_analysis_subgraph_node	 t_analysis_subgraph_node;
typedef struct s_capture_list_pool		 t_capture_list_pool;
typedef struct s_cursor_child_iterator	 t_cursor_child_iterator;
typedef struct s_edit					 t_edit;
typedef struct s_edit_entry				 t_edit_entry;
typedef struct s_error_status			 t_error_status;
typedef struct s_first_parser			 t_first_parser;
typedef struct s_iterator				 t_iterator;
typedef struct s_node_child_iterator	 t_node_child_iterator;
typedef struct s_parse_query			 t_parse_query;
typedef struct s_pattern_entry			 t_pattern_entry;
typedef struct s_query_analysis			 t_query_analysis;
typedef struct s_query_cursor			 t_query_cursor;
typedef struct s_query_pattern			 t_query_pattern;
typedef struct s_query_state			 t_query_state;
typedef struct s_query_step				 t_query_step;
typedef struct s_slice					 t_slice;
typedef struct s_stack					 t_stack;
typedef struct s_stack_head				 t_stack_head;
typedef struct s_stack_iterator			 t_stack_iterator;
typedef struct s_stack_link				 t_stack_link;
typedef struct s_stack_node				 t_stack_node;
typedef struct s_state_predecessor_map	 t_state_predecessor_map;
typedef struct s_step_offset			 t_step_offset;
typedef struct s_stream					 t_stream;
typedef struct s_string_input			 t_string_input;
typedef struct s_summarize_stack_session t_summarize_stack_session;
typedef struct s_symbol_table			 t_symbol_table;
typedef struct s_token_cache			 t_token_cache;

typedef t_stack_action (*t_stack_callback)(void *, const t_stack_iterator *);
typedef uint32_t (*t_unicode_decode_function)(const uint8_t *chunk,
											  uint32_t		 size,
											  int32_t		*codepoint);

typedef Array(t_analysis_state *) t_analysis_state_set;
typedef Array(t_analysis_subgraph) t_analysis_subgraph_array;
typedef Array(t_query_capture) t_capture_list;
typedef Array(t_stack_node *) t_stack_node_array;
typedef Array(uint8_t) t_capture_quantifiers;

typedef enum e_stack_status		   t_stack_status;
typedef enum e_error_comparaison   t_error_comparaison;
typedef enum e_iterator_comparison t_iterator_comparison;

struct s_iterator
{
	t_tree_cursor	  cursor;
	const t_language *language;
	unsigned		  visible_depth;
	bool			  in_padding;
};

enum e_iterator_comparison
{
	IteratorDiffers,
	IteratorMayDiffer,
	IteratorMatches,
};

struct s_node_child_iterator
{
	t_subtree			parent;
	const t_first_tree *tree;
	t_length			position;
	uint32_t			child_index;
	uint32_t			structural_child_index;
	const t_symbol	   *alias_sequence;
};
struct s_token_cache
{
	t_subtree token;
	t_subtree last_external_token;
	uint32_t  byte_index;
};

struct s_first_parser
{
	t_lexer				   lexer;
	t_stack				  *stack;
	t_subtree_pool		   tree_pool;
	const t_language	  *language;
	t_reduce_action_set	   reduce_actions;
	t_subtree			   finished_tree;
	t_subtree_array		   trailing_extras;
	t_subtree_array		   trailing_extras2;
	t_subtree_array		   scratch_trees;
	t_token_cache		   token_cache;
	t_reusable_node		   reusable_node;
	void				  *external_scanner_payload;
	t_parser_clock		   end_clock;
	t_parser_duration	   timeout_duration;
	unsigned			   accept_count;
	unsigned			   operation_count;
	const volatile size_t *cancellation_flag;
	t_subtree			   old_tree;
	t_range_array		   included_range_differences;
	unsigned			   included_range_difference_index;
	bool				   has_scanner_error;
};

struct s_error_status
{
	unsigned cost;
	unsigned node_count;
	int		 dynamic_precedence;
	bool	 is_in_error;
};

enum e_error_comparaison
{
	ErrorComparisonTakeLeft,
	ErrorComparisonPreferLeft,
	ErrorComparisonNone,
	ErrorComparisonPreferRight,
	ErrorComparisonTakeRight,
};

struct s_string_input
{
	const char *string;
	uint32_t	length;
};

/*
 * t_stream - A sequence of unicode characters derived from a UTF8 string.
 * This struct is used in parsing queries from S-expressions.
 */
struct s_stream
{
	const char *input;
	const char *start;
	const char *end;
	int32_t		next;
	uint8_t		next_size;
};

/*
 * t_query_step - A step in the process of matching a query. Each node within
 * a query S-expression corresponds to one of these steps. An entire pattern
 * is represented as a sequence of these steps. The basic properties of a
 * node are represented by these fields:
 * - `symbol` - The grammar symbol to match. A zero value represents the
 *    wildcard symbol, '_'.
 * - `field` - The field name to match. A zero value means that a field name
 *    was not specified.
 * - `capture_ids` - An array of integers representing the names of captures
 *    associated with this node in the pattern, terminated by a `NONE` value.
 * - `depth` - The depth where this node occurs in the pattern. The root node
 *    of the pattern has depth zero.
 * - `negated_field_list_id` - An id representing a set of fields that must
 *    not be present on a node matching this step.
 *
 * Steps have some additional fields in order to handle the `.` (or "anchor")
 * operator, which forbids additional child nodes:
 * - `is_immediate` - Indicates that the node matching this step cannot be
 * preceded by other sibling nodes that weren't specified in the pattern.
 * - `is_last_child` - Indicates that the node matching this step cannot have
 * any subsequent named siblings.
 *
 * For simple patterns, steps are matched in sequential order. But in order to
 * handle alternative/repeated/optional sub-patterns, query steps are not always
 * structured as a linear sequence; they sometimes need to split and merge. This
 * is done using the following fields:
 *  - `alternative_index` - The index of a different query step that serves as
 *    an alternative to this step. A `NONE` value represents no alternative.
 *    When a query state reaches a step with an alternative index, the state
 *    is duplicated, with one copy remaining at the original step, and one copy
 *    moving to the alternative step. The alternative may have its own
 * alternative step, so this splitting is an iterative process.
 * - `is_dead_end` - Indicates that this state cannot be passed directly, and
 *    exists only in order to redirect to an alternative index, with no
 * splitting.
 * - `is_pass_through` - Indicates that state has no matching logic of its own,
 *    and exists only to split a state. One copy of the state advances
 * immediately to the next step, and one moves to the alternative step.
 * - `alternative_is_immediate` - Indicates that this step's alternative step
 *    should be treated as if `is_immediate` is true.
 *
 * Steps also store some derived state that summarizes how they relate to other
 * steps within the same pattern. This is used to optimize the matching process:
 *  - `contains_captures` - Indicates that this step or one of its child steps
 *     has a non-empty `capture_ids` list.
 *  - `parent_pattern_guaranteed` - Indicates that if this step is reached, then
 *     it and all of its subsequent sibling steps within the same parent pattern
 *     are guaranteed to match.
 *  - `root_pattern_guaranteed` - Similar to `parent_pattern_guaranteed`, but
 *     for the entire top-level pattern. When iterating through a query's
 *     captures using `ts_query_cursor_next_capture`, this field is used to
 *     detect that a capture can safely be returned from a match that has not
 *     even completed  yet.
 */
struct s_query_step
{
	t_symbol   symbol;
	t_symbol   supertype_symbol;
	t_field_id field;
	uint16_t   capture_ids[MAX_STEP_CAPTURE_COUNT];
	uint16_t   depth;
	uint16_t   alternative_index;
	uint16_t   negated_field_list_id;
	bool	   is_named : 1;
	bool	   is_immediate : 1;
	bool	   is_last_child : 1;
	bool	   is_pass_through : 1;
	bool	   is_dead_end : 1;
	bool	   alternative_is_immediate : 1;
	bool	   contains_captures : 1;
	bool	   root_pattern_guaranteed : 1;
	bool	   parent_pattern_guaranteed : 1;
};

/*
 * t_slice - A slice of an external array. Within a query, capture names,
 * literal string values, and predicate step information are stored in three
 * contiguous arrays. Individual captures, string values, and predicates are
 * represented as slices of these three arrays.
 */
struct s_slice
{
	uint32_t offset;
	uint32_t length;
};

/*
 * t_symbol_table - a two-way mapping of strings to ids.
 */
struct s_symbol_table
{
	Array(char) characters;
	Array(t_slice) slices;
};

/**
 * CaptureQuantififers - a data structure holding the quantifiers of pattern
 * captures.
 */

/*
 * t_pattern_entry - Information about the starting point for matching a
 * particular pattern. These entries are stored in a 'pattern map' - a sorted
 * array that makes it possible to efficiently lookup patterns based on the
 * symbol for their first step. The entry consists of the following fields:
 * - `pattern_index` - the index of the pattern within the query
 * - `step_index` - the index of the pattern's first step in the shared `steps`
 * array
 * - `is_rooted` - whether or not the pattern has a single root node. This
 * property affects decisions about whether or not to start the pattern for
 * nodes outside of a QueryCursor's range restriction.
 */
struct s_pattern_entry
{
	uint16_t step_index;
	uint16_t pattern_index;
	bool	 is_rooted;
};

struct s_query_pattern
{
	t_slice	 steps;
	t_slice	 predicate_steps;
	uint32_t start_byte;
	bool	 is_non_local;
};

struct s_step_offset
{
	uint32_t byte_offset;
	uint16_t step_index;
};

/*
 * t_query_state - The state of an in-progress match of a particular pattern
 * in a query. While executing, a `t_query_cursor` must keep track of a number
 * of possible in-progress matches. Each of those possible matches is
 * represented as one of these states. Fields:
 * - `id` - A numeric id that is exposed to the public API. This allows the
 *    caller to remove a given match, preventing any more of its captures
 *    from being returned.
 * - `start_depth` - The depth in the tree where the first step of the state's
 *    pattern was matched.
 * - `pattern_index` - The pattern that the state is matching.
 * - `consumed_capture_count` - The number of captures from this match that
 *    have already been returned.
 * - `capture_list_id` - A numeric id that can be used to retrieve the state's
 *    list of captures from the `t_capture_list_pool`.
 * - `seeking_immediate_match` - A flag that indicates that the state's next
 *    step must be matched by the very next sibling. This is used when
 *    processing repetitions.
 * - `has_in_progress_alternatives` - A flag that indicates that there is are
 *    other states that have the same captures as this state, but are at
 *    different steps in their pattern. This means that in order to obey the
 *    'longest-match' rule, this state should not be returned as a match until
 *    it is clear that there can be no other alternative match with more
 * captures.
 */
struct s_query_state
{
	uint32_t id;
	uint32_t capture_list_id;
	uint16_t start_depth;
	uint16_t step_index;
	uint16_t pattern_index;
	uint16_t consumed_capture_count : 12;
	bool	 seeking_immediate_match : 1;
	bool	 has_in_progress_alternatives : 1;
	bool	 dead : 1;
	bool	 needs_parent : 1;
};

/*
 * t_capture_list_pool - A collection of *lists* of captures. Each query state
 * needs to maintain its own list of captures. To avoid repeated allocations,
 * this struct maintains a fixed set of capture lists, and keeps track of which
 * ones are currently in use by a query state.
 */
struct s_capture_list_pool
{
	Array(t_capture_list) list;
	t_capture_list empty_list;
	// The maximum number of capture lists that we are allowed to allocate. We
	// never allow `list` to allocate more entries than this, dropping pending
	// matches if needed to stay under the limit.
	uint32_t max_capture_list_count;
	// The number of capture lists allocated in `list` that are not currently in
	// use. We reuse those existing-but-unused capture lists before trying to
	// allocate any new ones. We use an invalid value (UINT32_MAX) for a capture
	// list's length to indicate that it's not in use.
	uint32_t free_capture_list_count;
};

/*
 * t_analysis_state - The state needed for walking the parse table when
 * analyzing a query pattern, to determine at which steps the pattern might fail
 * to match.
 */
struct s_analysis_state_entry
{
	t_state_id parse_state;
	t_symbol   parent_symbol;
	uint16_t   child_index;
	t_field_id field_id : 15;
	bool	   done : 1;
};

struct s_analysis_state
{
	t_analysis_state_entry stack[MAX_ANALYSIS_STATE_DEPTH];
	uint16_t			   depth;
	uint16_t			   step_index;
	t_symbol			   root_symbol;
};

struct s_query_analysis
{
	t_analysis_state_set states;
	t_analysis_state_set next_states;
	t_analysis_state_set deeper_states;
	t_analysis_state_set state_pool;
	Array(uint16_t) final_step_indices;
	Array(t_symbol) finished_parent_symbols;
	bool did_abort;
};

/*
 * t_analysis_subgraph - A subset of the states in the parse table that are used
 * in constructing nodes with a certain symbol. Each state is accompanied by
 * some information about the possible node that could be produced in
 * downstream states.
 */
struct s_analysis_subgraph_node
{
	t_state_id state;
	uint16_t   production_id;
	uint8_t	   child_index : 7;
	bool	   done : 1;
};

struct s_analysis_subgraph
{
	t_symbol symbol;
	Array(t_state_id) start_states;
	Array(t_analysis_subgraph_node) nodes;
};

/*
 * t_state_predecessor_map - A map that stores the predecessors of each parse
 * state. This is used during query analysis to determine which parse states can
 * lead to which reduce actions.
 */

struct s_state_predecessor_map
{
	t_state_id *contents;
};

/*
 * t_parse_query - A tree query, compiled from a string of S-expressions. The
 * query itself is immutable. The mutable state used in the process of executing
 * the query is stored in a `t_query_cursor`.
 */
struct s_parse_query
{
	t_symbol_table captures;
	t_symbol_table predicate_values;
	Array(t_capture_quantifiers) capture_quantifiers;
	Array(t_query_step) steps;
	Array(t_pattern_entry) pattern_map;
	Array(t_query_predicate_step) predicate_steps;
	Array(t_query_pattern) patterns;
	Array(t_step_offset) step_offsets;
	Array(t_field_id) negated_fields;
	Array(char) string_buffer;
	Array(t_symbol) repeat_symbols_with_rootless_patterns;
	const t_language *language;
	uint16_t		  wildcard_root_pattern_count;
};

/*
 * t_query_cursor - A stateful struct used to execute a query on a tree.
 */
struct s_query_cursor
{
	const t_parse_query *query;
	t_tree_cursor		 cursor;
	Array(t_query_state) states;
	Array(t_query_state) finished_states;
	t_capture_list_pool capture_list_pool;
	uint32_t			depth;
	uint32_t			max_start_depth;
	uint32_t			start_byte;
	uint32_t			end_byte;
	t_point				start_point;
	t_point				end_point;
	uint32_t			next_state_id;
	bool				on_visible_node;
	bool				ascending;
	bool				halted;
	bool				did_exceed_match_limit;
};

struct s_stack_link
{
	t_stack_node *node;
	t_subtree	  subtree;
	bool		  is_pending;
};

struct s_stack_node
{
	t_state_id		   state;
	t_length		   position;
	t_stack_link	   links[MAX_LINK_COUNT];
	short unsigned int link_count;
	uint32_t		   ref_count;
	unsigned		   error_cost;
	unsigned		   node_count;
	int				   dynamic_precedence;
};

struct s_stack_iterator
{
	t_stack_node   *node;
	t_subtree_array subtrees;
	uint32_t		subtree_count;
	bool			is_pending;
};

enum e_stack_status
{
	StackStatusActive,
	StackStatusPaused,
	StackStatusHalted,
};

struct s_stack_head
{
	t_stack_node	*node;
	t_stack_summary *summary;
	unsigned		 node_count_at_last_error;
	t_subtree		 last_external_token;
	t_subtree		 lookahead_when_paused;
	t_stack_status	 status;
};

struct s_stack
{
	Array(t_stack_head) heads;
	t_stack_slice_array slices;
	Array(t_stack_iterator) iterators;
	t_stack_node_array node_pool;
	t_stack_node	  *base_node;
	t_subtree_pool	  *subtree_pool;
};

enum e_stack_action
{
	StackActionNone,
	StackActionStop = 1,
	StackActionPop = 2,
};

struct s_summarize_stack_session
{
	t_stack_summary *summary;
	unsigned		 max_depth;
};

struct s_edit
{
	t_length start;
	t_length old_end;
	t_length new_end;
};

struct s_edit_entry
{
	t_subtree *tree;
	t_edit	   edit;
};

struct s_cursor_child_iterator
{
	t_subtree			parent;
	const t_first_tree *tree;
	t_length			position;
	uint32_t			child_index;
	uint32_t			structural_child_index;
	uint32_t			descendant_index;
	const t_symbol	   *alias_sequence;
};

#endif // STRUCTS_H
