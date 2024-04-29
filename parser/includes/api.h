#ifndef TREE_SITTER_API_H_
#define TREE_SITTER_API_H_

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#include "me/vec/vec_parser_range.h"
#include "parser/types/types_language.h"
#include "parser/types/types_state_id.h"

/****************************/
/* Section - ABI Versioning */
/****************************/

/**
 * The latest ABI version that is supported by the current version of the
 * library. When Languages are generated by the Tree-sitter CLI, they are
 * assigned an ABI version number that corresponds to the current CLI version.
 * The Tree-sitter library is generally backwards-compatible with languages
 * generated using older CLI versions, but is not forwards-compatible.
 */
#define TREE_SITTER_LANGUAGE_VERSION 14

/**
 * The earliest ABI version that is supported by the current version of the
 * library.
 */
#define TREE_SITTER_MIN_COMPATIBLE_LANGUAGE_VERSION 13

/*******************/
/* Section - Types */
/*******************/

typedef struct s_parser			   t_parser;
typedef struct t_parse_tree		   t_parse_tree;
typedef struct t_query			   t_query;
typedef struct t_query_cursor	   t_query_cursor;
typedef struct TSLookaheadIterator TSLookaheadIterator;

typedef enum TSInputEncoding
{
	TSInputEncodingUTF8,
	TSInputEncodingUTF16,
} TSInputEncoding;

typedef enum t_symbol_type
{
	SymbolTypeRegular,
	SymbolTypeAnonymous,
	SymbolTypeAuxiliary,
} t_symbol_type;

typedef struct TSInput
{
	void *payload;
	const char *(*read)(void *payload, t_u32 byte_index, t_point position,
						t_u32 *bytes_read);
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

typedef struct t_input_edit
{
	t_u32	start_byte;
	t_u32	old_end_byte;
	t_u32	new_end_byte;
	t_point start_point;
	t_point old_end_point;
	t_point new_end_point;
} t_input_edit;

typedef struct t_parse_node
{
	t_u32				context[4];
	const void		   *id;
	const t_parse_tree *tree;
} t_parse_node;

typedef struct t_parse_tree_cursor
{
	const void *tree;
	const void *id;
	t_u32		context[3];
} t_parse_tree_cursor;

typedef struct t_queryCapture
{
	t_parse_node node;
	t_u32		 index;
} t_queryCapture;

typedef enum TSQuantifier
{
	TSQuantifierZero = 0, // must match the array initialization value
	TSQuantifierZeroOrOne,
	TSQuantifierZeroOrMore,
	TSQuantifierOne,
	TSQuantifierOneOrMore,
} TSQuantifier;

typedef struct t_query_match
{
	t_u32				  id;
	t_u16				  pattern_index;
	t_u16				  capture_count;
	const t_queryCapture *captures;
} t_query_match;

typedef enum t_queryPredicateStepType
{
	t_queryPredicateStepTypeDone,
	t_queryPredicateStepTypeCapture,
	t_queryPredicateStepTypeString,
} t_queryPredicateStepType;

typedef struct t_queryPredicateStep
{
	t_queryPredicateStepType type;
	t_u32					 value_id;
} t_queryPredicateStep;

typedef enum t_queryError
{
	t_queryErrorNone = 0,
	t_queryErrorSyntax,
	t_queryErrorNodeType,
	t_queryErrorField,
	t_queryErrorCapture,
	t_queryErrorStructure,
	t_queryErrorLanguage,
} t_queryError;

/********************/
/* Section - Parser */
/********************/

/**
 * Create a new parser.
 */
t_parser *ts_parser_new(void);

/**
 * Delete the parser, freeing all of the memory that it used.
 */
void ts_parser_delete(t_parser *self);

/**
 * Get the parser's current language.
 */
const t_language *ts_parser_language(const t_parser *self);

/**
 * Set the language that the parser should use for parsing.
 *
 * Returns a boolean indicating whether or not the language was successfully
 * assigned. True means assignment succeeded. False means there was a
 * version mismatch: the language was generated with an incompatible version
 * of the Tree-sitter CLI. Check the language's version using
 * [`ts_language_version`] and compare it to this library's
 * [`TREE_SITTER_LANGUAGE_VERSION`] and
 * [`TREE_SITTER_MIN_COMPATIBLE_LANGUAGE_VERSION`] constants.
 */
bool ts_parser_set_language(t_parser *self, const t_language *language);

/**
 * Set the ranges of text that the parser should include when parsing.
 *
 * By default, the parser will always include entire documents. This
 * function allows you to parse only a *portion* of a document but still
 * return a syntax tree whose ranges match up with the document as a whole.
 * You can also pass multiple disjoint ranges.
 *
 * The second and third parameters specify the location and length of an
 * array of ranges. The parser does *not* take ownership of these ranges; it
 * copies the data, so it doesn't matter how these ranges are allocated.
 *
 * If `count` is zero, then the entire document will be parsed. Otherwise,
 * the given ranges must be ordered from earliest to latest in the document,
 * and they must not overlap. That is, the following must hold for all:
 *
 * `i < count - 1`: `ranges[i].end_byte <= ranges[i + 1].start_byte`
 *
 * If this requirement is not satisfied, the operation will fail, the ranges
 * will not be assigned, and this function will return `false`. On success,
 * this function returns `true`
 */
bool ts_parser_set_included_ranges(t_parser *self, const t_parser_range *ranges,
								   t_u32 count);

/**
 * Get the ranges of text that the parser will include when parsing.
 *
 * The returned pointer is owned by the parser. The caller should not free
 * it or write to it. The length of the array will be written to the given
 * `count` pointer.
 */
const t_parser_range *ts_parser_included_ranges(const t_parser *self,
												t_u32		   *count);

/**
 * Use the parser to parse some source code and create a syntax tree.
 *
 * If you are parsing this document for the first time, pass `NULL` for the
 * `old_tree` parameter. Otherwise, if you have already parsed an earlier
 * version of this document and the document has since been edited, pass the
 * previous syntax tree so that the unchanged parts of it can be reused.
 * This will save time and memory. For this to work correctly, you must have
 * already edited the old syntax tree using the [`ts_tree_edit`] function in
 a
 * way that exactly matches the source code changes.
 *
 * The [`TSInput`] parameter lets you specify how to read the text. It has
 the
 * following three fields:
 * 1. [`read`]: A function to retrieve a chunk of text at a given byte
 offset
 *    and (row, column) position. The function should return a pointer to
 the
 *    text and write its length to the [`bytes_read`] pointer. The parser
 does
 *    not take ownership of this buffer; it just borrows it until it has
 *    finished reading it. The function should write a zero value to the
 *    [`bytes_read`] pointer to indicate the end of the document.
 * 2. [`payload`]: An arbitrary pointer that will be passed to each
 invocation
 *    of the [`read`] function.
 * 3. [`encoding`]: An indication of how the text is encoded. Either
 *    `TSInputEncodingUTF8` or `TSInputEncodingUTF16`.
 *
 * This function returns a syntax tree on success, and `NULL` on failure.
 There
 * are three possible reasons for failure:
 * 1. The parser does not have a language assigned. Check for this using the
	  [`ts_parser_language`] function.
 * 2. Parsing was cancelled due to a timeout that was set by an earlier call
 to
 *    the [`ts_parser_set_timeot_micros`] function. You can resume parsing
 from
 *    where the parser left out by calling [`ts_parser_parse`] again with
 the
 *    same arguments. Or you can start parsing from scratch by first calling
 *    [`ts_parser_reset`].
 * 3. Parsing was cancelled using a cancellation flag that was set by an
 *    earlier call to [`ts_parser_set_cancellation_flag`]. You can resume
 parsing
 *    from where the parser left out by calling [`ts_parser_parse`] again
 with
 *    the same arguments.
 *
 * [`read`]: TSInput::read
 * [`payload`]: TSInput::payload
 * [`encoding`]: TSInput::encoding
 * [`bytes_read`]: TSInput::read
 */
t_parse_tree *ts_parser_parse(t_parser *self, const t_parse_tree *old_tree,
							  TSInput input);

/**
 * Use the parser to parse some source code stored in one contiguous buffer.
 * The first two parameters are the same as in the [`ts_parser_parse`]
 * function above. The second two parameters indicate the location of the
 * buffer and its length in bytes.
 */
t_parse_tree *ts_parser_parse_string(t_parser			*self,
									 const t_parse_tree *old_tree,
									 const char *string, t_u32 length);

/**
 * Use the parser to parse some source code stored in one contiguous buffer
 * with a given encoding. The first four parameters work the same as in the
 * [`ts_parser_parse_string`] method above. The final parameter indicates
 * whether the text is encoded as UTF8 or UTF16.
 */
t_parse_tree *ts_parser_parse_string_encoding(t_parser			 *self,
											  const t_parse_tree *old_tree,
											  const char *string, t_u32 length,
											  TSInputEncoding encoding);

/**
 * Instruct the parser to start the next parse from the beginning.
 *
 * If the parser previously failed because of a timeout or a cancellation,
 * then by default, it will resume where it left off on the next call to
 * [`ts_parser_parse`] or other parsing functions. If you don't want to
 * resume, and instead intend to use this parser to parse some other
 * document, you must call [`ts_parser_reset`] first.
 */
void ts_parser_reset(t_parser *self);

/**
 * Set the maximum duration in microseconds that parsing should be allowed
 * to take before halting.
 *
 * If parsing takes longer than this, it will halt early, returning NULL.
 * See [`ts_parser_parse`] for more information.
 */
void ts_parser_set_timeot_micros(t_parser *self, t_u64 timeot_micros);

/**
 * Get the duration in microseconds that parsing is allowed to take.
 */
t_u64 ts_parser_timeot_micros(const t_parser *self);

/**
 * Set the parser's current cancellation flag pointer.
 *
 * If a non-null pointer is assigned, then the parser will periodically read
 * from this pointer during parsing. If it reads a non-zero value, it will
 * halt early, returning NULL. See [`ts_parser_parse`] for more information.
 */
void ts_parser_set_cancellation_flag(t_parser *self, const size_t *flag);

/**
 * Get the parser's current cancellation flag pointer.
 */
const size_t *ts_parser_cancellation_flag(const t_parser *self);

/**
 * Set the logger that a parser should use during parsing.
 *
 * The parser does not take ownership over the logger payload. If a logger
 * was previously assigned, the caller is responsible for releasing any
 * memory owned by the previous logger.
 */
void ts_parser_set_logger(t_parser *self, TSLogger logger);

/**
 * Get the parser's current logger.
 */
TSLogger ts_parser_logger(const t_parser *self);

/**
 * Set the file descriptor to which the parser should write debugging graphs
 * during parsing. The graphs are formatted in the DOT language. You may
 * want to pipe these graphs directly to a `dot(1)` process in order to
 * generate SVG output. You can turn off this logging by passing a negative
 * number.
 */
void ts_parser_print_dot_graphs(t_parser *self, int fd);

/******************/
/* Section - Tree */
/******************/

/**
 * Create a shallow copy of the syntax tree. This is very fast.
 *
 * You need to copy a syntax tree in order to use it on more than one thread
 * at a time, as syntax trees are not thread safe.
 */
t_parse_tree *ts_tree_copy(const t_parse_tree *self);

/**
 * Delete the syntax tree, freeing all of the memory that it used.
 */
void ts_tree_delete(t_parse_tree *self);

/**
 * Get the root node of the syntax tree.
 */
t_parse_node ts_tree_root_node(const t_parse_tree *self);

/**
 * Get the root node of the syntax tree, but with its position
 * shifted forward by the given offset.
 */
t_parse_node ts_tree_root_node_with_offset(const t_parse_tree *self,
										   t_u32			   offset_bytes,
										   t_point			   offset_extent);

/**
 * Get the language that was used to parse the syntax tree.
 */
const t_language *ts_tree_language(const t_parse_tree *self);

/**
 * Get the array of included ranges that was used to parse the syntax tree.
 *
 * The returned pointer must be freed by the caller.
 */
t_parser_range *ts_tree_included_ranges(const t_parse_tree *self,
										t_u32			   *length);

/**
 * Edit the syntax tree to keep it in sync with source code that has been
 * edited.
 *
 * You must describe the edit both in terms of byte offsets and in terms of
 * (row, column) coordinates.
 */
void ts_tree_edit(t_parse_tree *self, const t_input_edit *edit);

/**
 * Compare an old edited syntax tree to a new syntax tree representing the
 * same document, returning an array of ranges whose syntactic structure has
 * changed.
 *
 * For this to work correctly, the old syntax tree must have been edited
 * such that its ranges match up to the new tree. Generally, you'll want to
 * call this function right after calling one of the [`ts_parser_parse`]
 * functions. You need to pass the old tree that was passed to parse, as
 * well as the new tree that was returned from that function.
 *
 * The returned array is allocated using `malloc` and the caller is
 * responsible for freeing it using `free`. The length of the array will be
 * written to the given `length` pointer.
 */
t_parser_range *ts_tree_get_changed_ranges(const t_parse_tree *old_tree,
										   const t_parse_tree *new_tree,
										   t_u32			  *length);

/**
 * Write a DOT graph describing the syntax tree to the given file.
 */
void ts_tree_print_dot_graph(const t_parse_tree *self, int file_descriptor);

/******************/
/* Section - Node */
/******************/

/**
 * Get the node's type as a null-terminated string.
 */
const char *ts_node_type(t_parse_node self);

/**
 * Get the node's type as a numerical id.
 */
t_symbol ts_node_symbol(t_parse_node self);

/**
 * Get the node's language.
 */
const t_language *ts_node_language(t_parse_node self);

/**
 * Get the node's type as it appears in the grammar ignoring aliases as a
 * null-terminated string.
 */
const char *ts_node_grammar_type(t_parse_node self);

/**
 * Get the node's type as a numerical id as it appears in the grammar
 * ignoring aliases. This should be used in [`ts_language_next_state`]
 * instead of
 * [`ts_node_symbol`].
 */
t_symbol ts_node_grammar_symbol(t_parse_node self);

/**
 * Get the node's start byte.
 */
t_u32 ts_node_start_byte(t_parse_node self);

/**
 * Get the node's start position in terms of rows and columns.
 */
t_point ts_node_start_point(t_parse_node self);

/**
 * Get the node's end byte.
 */
t_u32 ts_node_end_byte(t_parse_node self);

/**
 * Get the node's end position in terms of rows and columns.
 */
t_point ts_node_end_point(t_parse_node self);

/**
 * Get an S-expression representing the node as a string.
 *
 * This string is allocated with `malloc` and the caller is responsible for
 * freeing it using `free`.
 */
char *ts_node_string(t_parse_node self);

/**
 * Check if the node is null. Functions like [`ts_node_child`] and
 * [`ts_node_next_sibling`] will return a null node to indicate that no such
 * node was found.
 */
bool ts_node_is_null(t_parse_node self);

/**
 * Check if the node is *named*. Named nodes correspond to named rules in
 * the grammar, whereas *anonymous* nodes correspond to string literals in
 * the grammar.
 */
bool ts_node_is_named(t_parse_node self);

/**
 * Check if the node is *missing*. Missing nodes are inserted by the parser
 * in order to recover from certain kinds of syntax errors.
 */
bool ts_node_is_missing(t_parse_node self);

/**
 * Check if the node is *extra*. Extra nodes represent things like comments,
 * which are not required the grammar, but can appear anywhere.
 */
bool ts_node_is_extra(t_parse_node self);

/**
 * Check if a syntax node has been edited.
 */
bool ts_node_has_changes(t_parse_node self);

/**
 * Check if the node is a syntax error or contains any syntax errors.
 */
bool ts_node_has_error(t_parse_node self);

/**
 * Check if the node is a syntax error.
 */
bool ts_node_is_error(t_parse_node self);

/**
 * Get this node's parse state.
 */
t_state_id ts_node_parse_state(t_parse_node self);

/**
 * Get the parse state after this node.
 */
t_state_id ts_node_next_parse_state(t_parse_node self);

/**
 * Get the node's immediate parent.
 */
t_parse_node ts_node_parent(t_parse_node self);

/**
 * Get the node's child at the given index, where zero represents the first
 * child.
 */
t_parse_node ts_node_child(t_parse_node self, t_u32 child_index);

/**
 * Get the field name for node's child at the given index, where zero
 * represents the first child. Returns NULL, if no field is found.
 */
const char *ts_node_field_name_for_child(t_parse_node self, t_u32 child_index);

/**
 * Get the node's number of children.
 */
t_u32 ts_node_child_count(t_parse_node self);

/**
 * Get the node's *named* child at the given index.
 *
 * See also [`ts_node_is_named`].
 */
t_parse_node ts_node_named_child(t_parse_node self, t_u32 child_index);

/**
 * Get the node's number of *named* children.
 *
 * See also [`ts_node_is_named`].
 */
t_u32 ts_node_named_child_count(t_parse_node self);

/**
 * Get the node's child with the given field name.
 */
t_parse_node ts_node_child_by_field_name(t_parse_node self, const char *name,
										 t_u32 name_length);

/**
 * Get the node's child with the given numerical field id.
 *
 * You can convert a field name to an id using the
 * [`ts_language_field_id_for_name`] function.
 */
t_parse_node ts_node_child_by_field_id(t_parse_node self, t_field_id field_id);

/**
 * Get the node's next / previous sibling.
 */
t_parse_node ts_node_next_sibling(t_parse_node self);
t_parse_node ts_node_prev_sibling(t_parse_node self);

/**
 * Get the node's next / previous *named* sibling.
 */
t_parse_node ts_node_next_named_sibling(t_parse_node self);
t_parse_node ts_node_prev_named_sibling(t_parse_node self);

/**
 * Get the node's first child that extends beyond the given byte offset.
 */
t_parse_node ts_node_first_child_for_byte(t_parse_node self, t_u32 byte);

/**
 * Get the node's first named child that extends beyond the given byte
 * offset.
 */
t_parse_node ts_node_first_named_child_for_byte(t_parse_node self, t_u32 byte);

/**
 * Get the node's number of descendants, including one for the node itself.
 */
t_u32 ts_node_descendant_count(t_parse_node self);

/**
 * Get the smallest node within this node that spans the given range of
 * bytes or (row, column) positions.
 */
t_parse_node ts_node_descendant_for_byte_range(t_parse_node self, t_u32 start,
											   t_u32 end);
t_parse_node ts_node_descendant_for_point_range(t_parse_node self,
												t_point start, t_point end);

/**
 * Get the smallest named node within this node that spans the given range
 * of bytes or (row, column) positions.
 */
t_parse_node ts_node_named_descendant_for_byte_range(t_parse_node self,
													 t_u32 start, t_u32 end);
t_parse_node ts_node_named_descendant_for_point_range(t_parse_node self,
													  t_point	   start,
													  t_point	   end);

/**
 * Edit the node to keep it in-sync with source code that has been edited.
 *
 * This function is only rarely needed. When you edit a syntax tree with the
 * [`ts_tree_edit`] function, all of the nodes that you retrieve from the
 * tree afterward will already reflect the edit. You only need to use
 * [`ts_node_edit`] when you have a [`t_parse_node`] instance that you want to
 * keep and continue to use after an edit.
 */
void ts_node_edit(t_parse_node *self, const t_input_edit *edit);

/**
 * Check if two nodes are identical.
 */
bool ts_node_eq(t_parse_node self, t_parse_node other);

/************************/
/* Section - TreeCursor */
/************************/

/**
 * Create a new tree cursor starting from the given node.
 *
 * A tree cursor allows you to walk a syntax tree more efficiently than is
 * possible using the [`t_parse_node`] functions. It is a mutable object that is
 * always on a certain syntax node, and can be moved imperatively to
 * different nodes.
 */
t_parse_tree_cursor ts_tree_cursor_new(t_parse_node node);

/**
 * Delete a tree cursor, freeing all of the memory that it used.
 */
void ts_tree_cursor_delete(t_parse_tree_cursor *self);

/**
 * Re-initialize a tree cursor to start at a different node.
 */
void ts_tree_cursor_reset(t_parse_tree_cursor *self, t_parse_node node);

/**
 * Re-initialize a tree cursor to the same position as another cursor.
 *
 * Unlike [`ts_tree_cursor_reset`], this will not lose parent information
 * and allows reusing already created cursors.
 */
void ts_tree_cursor_reset_to(t_parse_tree_cursor	   *dst,
							 const t_parse_tree_cursor *src);

/**
 * Get the tree cursor's current node.
 */
t_parse_node ts_tree_cursor_current_node(const t_parse_tree_cursor *self);

/**
 * Get the field name of the tree cursor's current node.
 *
 * This returns `NULL` if the current node doesn't have a field.
 * See also [`ts_node_child_by_field_name`].
 */
const char *ts_tree_cursor_current_field_name(const t_parse_tree_cursor *self);

/**
 * Get the field id of the tree cursor's current node.
 *
 * This returns zero if the current node doesn't have a field.
 * See also [`ts_node_child_by_field_id`],
 * [`ts_language_field_id_for_name`].
 */
t_field_id ts_tree_cursor_current_field_id(const t_parse_tree_cursor *self);

/**
 * Move the cursor to the parent of its current node.
 *
 * This returns `true` if the cursor successfully moved, and returns `false`
 * if there was no parent node (the cursor was already on the root node).
 */
bool ts_tree_cursor_goto_parent(t_parse_tree_cursor *self);

/**
 * Move the cursor to the next sibling of its current node.
 *
 * This returns `true` if the cursor successfully moved, and returns `false`
 * if there was no next sibling node.
 */
bool ts_tree_cursor_goto_next_sibling(t_parse_tree_cursor *self);

/**
 * Move the cursor to the previous sibling of its current node.
 *
 * This returns `true` if the cursor successfully moved, and returns `false`
 * if there was no previous sibling node.
 *
 * Note, that this function may be slower than
 * [`ts_tree_cursor_goto_next_sibling`] due to how node positions are
 * stored. In the worst case, this will need to iterate through all the
 * children upto the previous sibling node to recalculate its position.
 */
bool ts_tree_cursor_goto_previous_sibling(t_parse_tree_cursor *self);

/**
 * Move the cursor to the first child of its current node.
 *
 * This returns `true` if the cursor successfully moved, and returns `false`
 * if there were no children.
 */
bool ts_tree_cursor_goto_first_child(t_parse_tree_cursor *self);

/**
 * Move the cursor to the last child of its current node.
 *
 * This returns `true` if the cursor successfully moved, and returns `false`
 * if there were no children.
 *
 * Note that this function may be slower than
 * [`ts_tree_cursor_goto_first_child`] because it needs to iterate through
 * all the children to compute the child's position.
 */
bool ts_tree_cursor_goto_last_child(t_parse_tree_cursor *self);

/**
 * Move the cursor to the node that is the nth descendant of
 * the original node that the cursor was constructed with, where
 * zero represents the original node itself.
 */
void ts_tree_cursor_goto_descendant(t_parse_tree_cursor *self,
									t_u32				 goal_descendant_index);

/**
 * Get the index of the cursor's current node out of all of the
 * descendants of the original node that the cursor was constructed with.
 */
t_u32 ts_tree_cursor_current_descendant_index(const t_parse_tree_cursor *self);

/**
 * Get the depth of the cursor's current node relative to the original
 * node that the cursor was constructed with.
 */
t_u32 ts_tree_cursor_current_depth(const t_parse_tree_cursor *self);

/**
 * Move the cursor to the first child of its current node that extends
 * beyond the given byte offset or point.
 *
 * This returns the index of the child node if one was found, and returns -1
 * if no such child was found.
 */
t_i64 ts_tree_cursor_goto_first_child_for_byte(t_parse_tree_cursor *self,
											   t_u32				goal_byte);
t_i64 ts_tree_cursor_goto_first_child_for_point(t_parse_tree_cursor *self,
												t_point goal_point);

t_parse_tree_cursor ts_tree_cursor_copy(const t_parse_tree_cursor *cursor);

/*******************/
/* Section - Query */
/*******************/

/**
 * Create a new query from a string containing one or more S-expression
 * patterns. The query is associated with a particular language, and can
 * only be run on syntax nodes parsed with that language.
 *
 * If all of the given patterns are valid, this returns a [`t_query`].
 * If a pattern is invalid, this returns `NULL`, and provides two pieces
 * of information about the problem:
 * 1. The byte offset of the error is written to the `error_offset`
 * parameter.
 * 2. The type of error is written to the `error_type` parameter.
 */
t_query *ts_query_new(const t_language *language, const char *source,
					  t_u32 source_len, t_u32 *error_offset,
					  t_queryError *error_type);

/**
 * Delete a query, freeing all of the memory that it used.
 */
void ts_query_delete(t_query *self);

/**
 * Get the number of patterns, captures, or string literals in the query.
 */
t_u32 ts_query_pattern_count(const t_query *self);
t_u32 ts_query_capture_count(const t_query *self);
t_u32 ts_query_string_count(const t_query *self);

/**
 * Get the byte offset where the given pattern starts in the query's source.
 *
 * This can be useful when combining queries by concatenating their source
 * code strings.
 */
t_u32 ts_query_start_byte_for_pattern(const t_query *self, t_u32 pattern_index);

/**
 * Get all of the predicates for the given pattern in the query.
 *
 * The predicates are represented as a single array of steps. There are
 * three types of steps in this array, which correspond to the three legal
 * values for the `type` field:
 * - `t_queryPredicateStepTypeCapture` - Steps with this type represent
 * names of captures. Their `value_id` can be used with the
 *   [`ts_query_capture_name_for_id`] function to obtain the name of the
 * capture.
 * - `t_queryPredicateStepTypeString` - Steps with this type represent
 * literal strings. Their `value_id` can be used with the
 *    [`ts_query_string_value_for_id`] function to obtain their string
 * value.
 * - `t_queryPredicateStepTypeDone` - Steps with this type are *sentinels*
 *    that represent the end of an individual predicate. If a pattern has
 * two predicates, then there will be two steps with this `type` in the
 * array.
 */
const t_queryPredicateStep *ts_query_predicates_for_pattern(const t_query *self,
															t_u32 pattern_index,
															t_u32 *step_count);

/*
 * Check if the given pattern in the query has a single root node.
 */
bool ts_query_is_pattern_rooted(const t_query *self, t_u32 pattern_index);

/*
 * Check if the given pattern in the query is 'non local'.
 *
 * A non-local pattern has multiple root nodes and can match within a
 * repeating sequence of nodes, as specified by the grammar. Non-local
 * patterns disable certain optimizations that would otherwise be possible
 * when executing a query on a specific range of a syntax tree.
 */
bool ts_query_is_pattern_non_local(const t_query *self, t_u32 pattern_index);

/*
 * Check if a given pattern is guaranteed to match once a given step is
 * reached. The step is specified by its byte offset in the query's source
 * code.
 */
bool ts_query_is_pattern_guaranteed_at_step(const t_query *self,
											t_u32		   byte_offset);

/**
 * Get the name and length of one of the query's captures, or one of the
 * query's string literals. Each capture and string is associated with a
 * numeric id based on the order that it appeared in the query's source.
 */
const char *ts_query_capture_name_for_id(const t_query *self, t_u32 index,
										 t_u32 *length);

/**
 * Get the quantifier of the query's captures. Each capture is * associated
 * with a numeric id based on the order that it appeared in the query's
 * source.
 */
TSQuantifier ts_query_capture_quantifier_for_id(const t_query *self,
												t_u32		   pattern_index,
												t_u32		   capture_index);

const char *ts_query_string_value_for_id(const t_query *self, t_u32 index,
										 t_u32 *length);

/**
 * Disable a certain capture within a query.
 *
 * This prevents the capture from being returned in matches, and also avoids
 * any resource usage associated with recording the capture. Currently,
 * there is no way to undo this.
 */
void ts_query_disable_capture(t_query *self, const char *name, t_u32 length);

/**
 * Disable a certain pattern within a query.
 *
 * This prevents the pattern from matching and removes most of the overhead
 * associated with the pattern. Currently, there is no way to undo this.
 */
void ts_query_disable_pattern(t_query *self, t_u32 pattern_index);

/**
 * Create a new cursor for executing a given query.
 *
 * The cursor stores the state that is needed to iteratively search
 * for matches. To use the query cursor, first call [`ts_query_cursor_exec`]
 * to start running a given query on a given syntax node. Then, there are
 * two options for consuming the results of the query:
 * 1. Repeatedly call [`ts_query_cursor_next_match`] to iterate over all of
 * the *matches* in the order that they were found. Each match contains the
 *    index of the pattern that matched, and an array of captures. Because
 *    multiple patterns can match the same set of nodes, one match may
 * contain captures that appear *before* some of the captures from a
 * previous match.
 * 2. Repeatedly call [`ts_query_cursor_next_capture`] to iterate over all
 * of the individual *captures* in the order that they appear. This is
 * useful if don't care about which pattern matched, and just want a single
 * ordered sequence of captures.
 *
 * If you don't care about consuming all of the results, you can stop
 * calling
 * [`ts_query_cursor_next_match`] or [`ts_query_cursor_next_capture`] at any
 * point. You can then start executing another query on another node by
 * calling
 *  [`ts_query_cursor_exec`] again.
 */
t_query_cursor *ts_query_cursor_new(void);

/**
 * Delete a query cursor, freeing all of the memory that it used.
 */
void ts_query_cursor_delete(t_query_cursor *self);

/**
 * Start running a given query on a given node.
 */
void ts_query_cursor_exec(t_query_cursor *self, const t_query *query,
						  t_parse_node node);

/**
 * Manage the maximum number of in-progress matches allowed by this query
 * cursor.
 *
 * Query cursors have an optional maximum capacity for storing lists of
 * in-progress captures. If this capacity is exceeded, then the
 * earliest-starting match will silently be dropped to make room for further
 * matches. This maximum capacity is optional — by default, query cursors
 * allow any number of pending matches, dynamically allocating new space for
 * them as needed as the query is executed.
 */
bool  ts_query_cursor_did_exceed_match_limit(const t_query_cursor *self);
t_u32 ts_query_cursor_match_limit(const t_query_cursor *self);
void  ts_query_cursor_set_match_limit(t_query_cursor *self, t_u32 limit);

/**
 * Set the range of bytes or (row, column) positions in which the query
 * will be executed.
 */
void ts_query_cursor_set_byte_range(t_query_cursor *self, t_u32 start_byte,
									t_u32 end_byte);
void ts_query_cursor_set_point_range(t_query_cursor *self, t_point start_point,
									 t_point end_point);

/**
 * Advance to the next match of the currently running query.
 *
 * If there is a match, write it to `*match` and return `true`.
 * Otherwise, return `false`.
 */
bool ts_query_cursor_next_match(t_query_cursor *self, t_query_match *match);
void ts_query_cursor_remove_match(t_query_cursor *self, t_u32 match_id);

/**
 * Advance to the next capture of the currently running query.
 *
 * If there is a capture, write its match to `*match` and its index within
 * the matche's capture list to `*capture_index`. Otherwise, return `false`.
 */
bool ts_query_cursor_next_capture(t_query_cursor *self, t_query_match *match,
								  t_u32 *capture_index);

/**
 * Set the maximum start depth for a query cursor.
 *
 * This prevents cursors from exploring children nodes at a certain depth.
 * Note if a pattern includes many children, then they will still be
 * checked.
 *
 * The zero max start depth value can be used as a special behavior and
 * it helps to destructure a subtree by staying on a node and using captures
 * for interested parts. Note that the zero max start depth only limit a
 * search depth for a pattern's root node but other nodes that are parts of
 * the pattern may be searched at any depth what defined by the pattern
 * structure.
 *
 * Set to `UINT32_MAX` to remove the maximum start depth.
 */
void ts_query_cursor_set_max_start_depth(t_query_cursor *self,
										 t_u32			 max_start_depth);

/**********************/
/* Section - Language */
/**********************/

/**
 * Get another reference to the given language.
 */
const t_language *ts_language_copy(const t_language *self);

/**
 * Free any dynamically-allocated resources for this language, if
 * this is the last reference.
 */
void ts_language_delete(const t_language *self);

/**
 * Get the number of distinct node types in the language.
 */
t_u32 ts_language_symbol_count(const t_language *self);

/**
 * Get the number of valid states in this language.
 */
t_u32 ts_language_state_count(const t_language *self);

/**
 * Get a node type string for the given numerical id.
 */
const char *ts_language_symbol_name(const t_language *self, t_symbol symbol);

/**
 * Get the numerical id for the given node type string.
 */
t_symbol ts_language_symbol_for_name(const t_language *self, const char *string,
									 t_u32 length, bool is_named);

/**
 * Get the number of distinct field names in the language.
 */
t_u32 ts_language_field_count(const t_language *self);

/**
 * Get the field name string for the given numerical id.
 */
const char *ts_language_field_name_for_id(const t_language *self,
										  t_field_id		id);

/**
 * Get the numerical id for the given field name string.
 */
t_field_id ts_language_field_id_for_name(const t_language *self,
										 const char *name, t_u32 name_length);

/**
 * Check whether the given node type id belongs to named nodes, anonymous
 * nodes, or a hidden nodes.
 *
 * See also [`ts_node_is_named`]. Hidden nodes are never returned from the
 * API.
 */
t_symbol_type ts_language_symbol_type(const t_language *self, t_symbol symbol);

/**
 * Get the ABI version number for this language. This version number is used
 * to ensure that languages were generated by a compatible version of
 * Tree-sitter.
 *
 * See also [`ts_parser_set_language`].
 */
t_u32 ts_language_version(const t_language *self);

/**
 * Get the next parse state. Combine this with lookahead iterators to
 * generate completion suggestions or valid symbols in error nodes. Use
 * [`ts_node_grammar_symbol`] for valid symbols.
 */
t_state_id ts_language_next_state(const t_language *self, t_state_id state,
								  t_symbol symbol);

/********************************/
/* Section - Lookahead Iterator */
/********************************/

/**
 * Create a new lookahead iterator for the given language and parse state.
 *
 * This returns `NULL` if state is invalid for the language.
 *
 * Repeatedly using [`ts_lookahead_iterator_next`] and
 * [`ts_lookahead_iterator_current_symbol`] will generate valid symbols in
 * the given parse state. Newly created lookahead iterators will contain the
 * `ERROR` symbol.
 *
 * Lookahead iterators can be useful to generate suggestions and improve
 * syntax error diagnostics. To get symbols valid in an ERROR node, use the
 * lookahead iterator on its first leaf node state. For `MISSING` nodes, a
 * lookahead iterator created on the previous non-extra leaf node may be
 * appropriate.
 */
TSLookaheadIterator *ts_lookahead_iterator_new(const t_language *self,
											   t_state_id		 state);

/**
 * Delete a lookahead iterator freeing all the memory used.
 */
void ts_lookahead_iterator_delete(TSLookaheadIterator *self);

/**
 * Reset the lookahead iterator to another state.
 *
 * This returns `true` if the iterator was reset to the given state and
 * `false` otherwise.
 */
bool ts_lookahead_iterator_reset_state(TSLookaheadIterator *self,
									   t_state_id			state);

/**
 * Reset the lookahead iterator.
 *
 * This returns `true` if the language was set successfully and `false`
 * otherwise.
 */
bool ts_lookahead_iterator_reset(TSLookaheadIterator *self,
								 const t_language *language, t_state_id state);

/**
 * Get the current language of the lookahead iterator.
 */
const t_language *ts_lookahead_iterator_language(
	const TSLookaheadIterator *self);

/**
 * Advance the lookahead iterator to the next symbol.
 *
 * This returns `true` if there is a new symbol and `false` otherwise.
 */
bool ts_lookahead_iterator_next(TSLookaheadIterator *self);

/**
 * Get the current symbol of the lookahead iterator;
 */
t_symbol ts_lookahead_iterator_current_symbol(const TSLookaheadIterator *self);

/**
 * Get the current symbol type of the lookahead iterator as a null
 * terminated string.
 */
const char *ts_lookahead_iterator_current_symbol_name(
	const TSLookaheadIterator *self);

/**********************************/
/* Section - Global Configuration */
/**********************************/

/**
 * Set the allocation functions used by the library.
 *
 * By default, Tree-sitter uses the standard libc allocation functions,
 * but aborts the process when an allocation fails. This function lets
 * you supply alternative allocation functions at runtime.
 *
 * If you pass `NULL` for any parameter, Tree-sitter will switch back to
 * its default implementation of that function.
 *
 * If you call this function after the library has already been used, then
 * you must ensure that either:
 *  1. All the existing objects have been freed.
 *  2. The new allocator shares its state with the old one, so it is capable
 *     of freeing memory that was allocated by the old allocator.
 */
void ts_set_allocator(void *(*new_malloc)(size_t),
					  void *(*new_calloc)(size_t, size_t),
					  void *(*new_realloc)(void *, size_t),
					  void (*new_free)(void *));

#endif // TREE_SITTER_API_H_
