/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   api.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:54:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 12:10:39 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef API_H
#define API_H

#include "me/types.h"

#define ERROR_STATE 0
#define ERROR_COST_PER_RECOVERY 500
#define ERROR_COST_PER_MISSING_TREE 110
#define ERROR_COST_PER_SKIPPED_TREE 100
#define ERROR_COST_PER_SKIPPED_LINE 30
#define ERROR_COST_PER_SKIPPED_CHAR 1

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

typedef t_u16					   TSStateId;
typedef t_u16					   TSSymbol;
typedef t_u16					   TSFieldId;
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
	t_u32 row;
	t_u32 column;
} TSPoint;

typedef struct TSRange
{
	TSPoint start_point;
	TSPoint end_point;
	t_u32	start_byte;
	t_u32	end_byte;
} TSRange;

typedef struct TSInput
{
	void *payload;
	const t_u8 *(*read)(void *payload, t_u32 byte_index, TSPoint position, t_u32 *bytes_read);
} TSInput;

typedef enum TSLogType
{
	TSLogTypeParse,
	TSLogTypeLex,
} TSLogType;

typedef struct TSLogger
{
	void *payload;
	void (*log)(void *payload, TSLogType log_type, const t_u8 *buffer);
} TSLogger;

typedef struct TSInputEdit
{
	t_u32	start_byte;
	t_u32	old_end_byte;
	t_u32	new_end_byte;
	TSPoint start_point;
	TSPoint old_end_point;
	TSPoint new_end_point;
} TSInputEdit;

typedef struct TSNode
{
	t_u32		  start_byte;
	t_u32		  start_row;
	t_u32		  start_col;
	t_u32		  alias;
	const void	 *id;
	const TSTree *tree;
} TSNode;

typedef TSNode	   t_parse_node;
typedef TSSymbol   t_symbol;
typedef TSParser   t_first_parser;
typedef TSLanguage t_language;
typedef TSTree	   t_first_tree;

typedef struct TSTreeCursor
{
	const void *tree;
	const void *id;
	t_u32		context[3];
} TSTreeCursor;

typedef struct TSQueryCapture
{
	TSNode node;
	t_u32  index;
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
	t_u32				  id;
	t_u16				  pattern_index;
	t_u16				  capture_count;
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
	t_u32					 value_id;
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

/********************/
/* Section - Parser */
/********************/

/**
 * Create a new parser.
 */
TSParser *ts_parser_new(void);

/**
 * Delete the parser, freeing all of the memory that it used.
 */
void ts_parser_delete(TSParser *self);

/**
 * Get the parser's current language.
 */
const TSLanguage *ts_parser_language(const TSParser *self);

/**
 * Set the language that the parser should use for parsing.
 *
 * Returns a boolean indicating whether or not the language was successfully
 * assigned. True means assignment succeeded. False means there was a version
 * mismatch: the language was generated with an incompatible version of the
 * Tree-sitter CLI. Check the language's version using [`ts_language_version`]
 * and compare it to this library's [`TREE_SITTER_LANGUAGE_VERSION`] and
 * [`TREE_SITTER_MIN_COMPATIBLE_LANGUAGE_VERSION`] constants.
 */
bool ts_parser_set_language(TSParser *self, const TSLanguage *language);

/**
 * Set the ranges of text that the parser should include when parsing.
 *
 * By default, the parser will always include entire documents. This function
 * allows you to parse only a *portion* of a document but still return a syntax
 * tree whose ranges match up with the document as a whole. You can also pass
 * multiple disjoint ranges.
 *
 * The second and third parameters specify the location and length of an array
 * of ranges. The parser does *not* take ownership of these ranges; it copies
 * the data, so it doesn't matter how these ranges are allocated.
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
bool ts_parser_set_included_ranges(TSParser *self, const TSRange *ranges, t_u32 count);

/**
 * Get the ranges of text that the parser will include when parsing.
 *
 * The returned pointer is owned by the parser. The caller should not free it
 * or write to it. The length of the array will be written to the given
 * `count` pointer.
 */
const TSRange *ts_parser_included_ranges(const TSParser *self, t_u32 *count);

/**
 * Use the parser to parse some source code and create a syntax tree.
 *
 * If you are parsing this document for the first time, pass `NULL` for the
 * `old_tree` parameter. Otherwise, if you have already parsed an earlier
 * version of this document and the document has since been edited, pass the
 * previous syntax tree so that the unchanged parts of it can be reused.
 * This will save time and memory. For this to work correctly, you must have
 * already edited the old syntax tree using the [`ts_tree_edit`] function in a
 * way that exactly matches the source code changes.
 *
 * The [`TSInput`] parameter lets you specify how to read the text. It has the
 * following three fields:
 * 1. [`read`]: A function to retrieve a chunk of text at a given byte offset
 *    and (row, column) position. The function should return a pointer to the
 *    text and write its length to the [`bytes_read`] pointer. The parser does
 *    not take ownership of this buffer; it just borrows it until it has
 *    finished reading it. The function should write a zero value to the
 *    [`bytes_read`] pointer to indicate the end of the document.
 * 2. [`payload`]: An arbitrary pointer that will be passed to each invocation
 *    of the [`read`] function.
 * 3. [`encoding`]: An indication of how the text is encoded. Either
 *    `TSInputEncodingUTF8` or `TSInputEncodingUTF16`.
 *
 * This function returns a syntax tree on success, and `NULL` on failure. There
 * are three possible reasons for failure:
 * 1. The parser does not have a language assigned. Check for this using the
	  [`ts_parser_language`] function.
 * 2. Parsing was cancelled due to a timeout that was set by an earlier call to
 *    the [`ts_parser_set_timeout_micros`] function. You can resume parsing from
 *    where the parser left out by calling [`ts_parser_parse`] again with the
 *    same arguments. Or you can start parsing from scratch by first calling
 *    [`ts_parser_reset`].
 * 3. Parsing was cancelled using a cancellation flag that was set by an
 *    earlier call to [`ts_parser_set_cancellation_flag`]. You can resume parsing
 *    from where the parser left out by calling [`ts_parser_parse`] again with
 *    the same arguments.
 *
 * [`read`]: TSInput::read
 * [`payload`]: TSInput::payload
 * [`encoding`]: TSInput::encoding
 * [`bytes_read`]: TSInput::read
 */
TSTree *ts_parser_parse(TSParser *self, TSInput input);

/**
 * Use the parser to parse some source code stored in one contiguous buffer.
 * The first two parameters are the same as in the [`ts_parser_parse`] function
 * above. The second two parameters indicate the location of the buffer and its
 * length in bytes.
 */
TSTree *ts_parser_parse_string(TSParser *self, t_const_str string, t_u32 length);

/**
 * Use the parser to parse some source code stored in one contiguous buffer with
 * a given encoding. The first four parameters work the same as in the
 * [`ts_parser_parse_string`] method above. The final parameter indicates whether
 * the text is encoded as UTF8 or UTF16.
 */
TSTree *ts_parser_parse_string_encoding(TSParser *self, t_const_str string, t_u32 length, TSInputEncoding encoding);

/**
 * Instruct the parser to start the next parse from the beginning.
 *
 * If the parser previously failed because of a timeout or a cancellation, then
 * by default, it will resume where it left off on the next call to
 * [`ts_parser_parse`] or other parsing functions. If you don't want to resume,
 * and instead intend to use this parser to parse some other document, you must
 * call [`ts_parser_reset`] first.
 */
void ts_parser_reset(TSParser *self);

/******************/
/* Section - Tree */
/******************/

/**
 * Create a shallow copy of the syntax tree. This is very fast.
 *
 * You need to copy a syntax tree in order to use it on more than one thread at
 * a time, as syntax trees are not thread safe.
 */
TSTree *ts_tree_copy(const TSTree *self);

/**
 * Delete the syntax tree, freeing all of the memory that it used.
 */
void ts_tree_delete(TSTree *self);

/**
 * Get the root node of the syntax tree.
 */
TSNode ts_tree_root_node(const TSTree *self);

/**
 * Get the root node of the syntax tree, but with its position
 * shifted forward by the given offset.
 */
TSNode ts_tree_root_node_with_offset(const TSTree *self, t_u32 offset_bytes, TSPoint offset_extent);

/**
 * Get the language that was used to parse the syntax tree.
 */
const TSLanguage *ts_tree_language(const TSTree *self);

/**
 * Get the array of included ranges that was used to parse the syntax tree.
 *
 * The returned pointer must be freed by the caller.
 */
TSRange *ts_tree_included_ranges(const TSTree *self, t_u32 *length);

/**
 * Edit the syntax tree to keep it in sync with source code that has been
 * edited.
 *
 * You must describe the edit both in terms of byte offsets and in terms of
 * (row, column) coordinates.
 */
void ts_tree_edit(TSTree *self, const TSInputEdit *edit);

/**
 * Compare an old edited syntax tree to a new syntax tree representing the same
 * document, returning an array of ranges whose syntactic structure has changed.
 *
 * For this to work correctly, the old syntax tree must have been edited such
 * that its ranges match up to the new tree. Generally, you'll want to call
 * this function right after calling one of the [`ts_parser_parse`] functions.
 * You need to pass the old tree that was passed to parse, as well as the new
 * tree that was returned from that function.
 *
 * The returned array is allocated using `malloc` and the caller is responsible
 * for freeing it using `free`. The length of the array will be written to the
 * given `length` pointer.
 */
TSRange *ts_tree_get_changed_ranges(const TSTree *old_tree, const TSTree *new_tree, t_u32 *length);

/**
 * Write a DOT graph describing the syntax tree to the given file.
 */
void ts_tree_print_dot_graph(const TSTree *self, int file_descriptor);

/******************/
/* Section - Node */
/******************/

/**
 * Get the node's type as a null-terminated string.
 */
t_const_str ts_node_type(TSNode self);

/**
 * Get the node's type as a numerical id.
 */
TSSymbol ts_node_symbol(TSNode self);

/**
 * Get the node's language.
 */
const TSLanguage *ts_node_language(TSNode self);

/**
 * Get the node's type as it appears in the grammar ignoring aliases as a
 * null-terminated string.
 */
t_const_str ts_node_grammar_type(TSNode self);

/**
 * Get the node's type as a numerical id as it appears in the grammar ignoring
 * aliases. This should be used in [`ts_language_next_state`] instead of
 * [`ts_node_symbol`].
 */
TSSymbol ts_node_grammar_symbol(TSNode self);

/**
 * Get the node's start byte.
 */
t_u32 ts_node_start_byte(TSNode self);

/**
 * Get the node's start position in terms of rows and columns.
 */
TSPoint ts_node_start_point(TSNode self);

/**
 * Get the node's end byte.
 */
t_u32 ts_node_end_byte(TSNode self);

/**
 * Get the node's end position in terms of rows and columns.
 */
TSPoint ts_node_end_point(TSNode self);

/**
 * Get an S-expression representing the node as a string.
 *
 * This string is allocated with `malloc` and the caller is responsible for
 * freeing it using `free`.
 */
char *ts_node_string(TSNode self);

/**
 * Check if the node is null. Functions like [`ts_node_child`] and
 * [`ts_node_next_sibling`] will return a null node to indicate that no such node
 * was found.
 */
bool ts_node_is_null(TSNode self);

/**
 * Check if the node is *named*. Named nodes correspond to named rules in the
 * grammar, whereas *anonymous* nodes correspond to string literals in the
 * grammar.
 */
bool ts_node_is_named(TSNode self);

/**
 * Check if the node is *missing*. Missing nodes are inserted by the parser in
 * order to recover from certain kinds of syntax errors.
 */
bool ts_node_is_missing(TSNode self);

/**
 * Check if the node is *extra*. Extra nodes represent things like comments,
 * which are not required the grammar, but can appear anywhere.
 */
bool ts_node_is_extra(TSNode self);

/**
 * Check if a syntax node has been edited.
 */
bool ts_node_has_changes(TSNode self);

/**
 * Check if the node is a syntax error or contains any syntax errors.
 */
bool ts_node_has_error(TSNode self);

/**
 * Check if the node is a syntax error.
 */
bool ts_node_is_error(TSNode self);

/**
 * Get this node's parse state.
 */
TSStateId ts_node_parse_state(TSNode self);

/**
 * Get the parse state after this node.
 */
TSStateId ts_node_next_parse_state(TSNode self);

/**
 * Get the node's immediate parent.
 * Prefer [`ts_node_child_containing_descendant`] for
 * iterating over the node's ancestors.
 */
TSNode ts_node_parent(TSNode self);

/**
 * Get the node's child that contains `descendant`.
 */
TSNode ts_node_child_containing_descendant(TSNode self, TSNode descendant);

/**
 * Get the node's child at the given index, where zero represents the first
 * child.
 */
TSNode ts_node_child(TSNode self, t_u32 child_index);

/**
 * Get the field name for node's child at the given index, where zero represents
 * the first child. Returns NULL, if no field is found.
 */
t_const_str ts_node_field_name_for_child(TSNode self, t_u32 child_index);

/**
 * Get the field name for node's child at the given index, where zero represents
 * the first child. Returns NULL, if no field is found.
 */
TSFieldId ts_node_field_id_for_child(TSNode self, t_u32 child_index);

/**
 * Get the node's number of children.
 */
t_u32 ts_node_child_count(TSNode self);

/**
 * Get the node's *named* child at the given index.
 *
 * See also [`ts_node_is_named`].
 */
TSNode ts_node_named_child(TSNode self, t_u32 child_index);

/**
 * Get the node's number of *named* children.
 *
 * See also [`ts_node_is_named`].
 */
t_u32 ts_node_named_child_count(TSNode self);

/**
 * Get the node's child with the given field name.
 */
TSNode ts_node_child_by_field_name(TSNode self, t_const_str name, t_u32 name_length);

/**
 * Get the node's child with the given numerical field id.
 *
 * You can convert a field name to an id using the
 * [`ts_language_field_id_for_name`] function.
 */
TSNode ts_node_child_by_field_id(TSNode self, TSFieldId field_id);

/**
 * Get the node's next / previous sibling.
 */
TSNode ts_node_next_sibling(TSNode self);
TSNode ts_node_prev_sibling(TSNode self);

/**
 * Get the node's next / previous *named* sibling.
 */
TSNode ts_node_next_named_sibling(TSNode self);
TSNode ts_node_prev_named_sibling(TSNode self);

/**
 * Get the node's first child that extends beyond the given byte offset.
 */
TSNode ts_node_first_child_for_byte(TSNode self, t_u32 byte);

/**
 * Get the node's first named child that extends beyond the given byte offset.
 */
TSNode ts_node_first_named_child_for_byte(TSNode self, t_u32 byte);

/**
 * Get the node's number of descendants, including one for the node itself.
 */
t_u32 ts_node_descendant_count(TSNode self);

/**
 * Get the smallest node within this node that spans the given range of bytes
 * or (row, column) positions.
 */
TSNode ts_node_descendant_for_byte_range(TSNode self, t_u32 start, t_u32 end);
TSNode ts_node_descendant_for_point_range(TSNode self, TSPoint start, TSPoint end);

/**
 * Get the smallest named node within this node that spans the given range of
 * bytes or (row, column) positions.
 */
TSNode ts_node_named_descendant_for_byte_range(TSNode self, t_u32 start, t_u32 end);
TSNode ts_node_named_descendant_for_point_range(TSNode self, TSPoint start, TSPoint end);

/**
 * Edit the node to keep it in-sync with source code that has been edited.
 *
 * This function is only rarely needed. When you edit a syntax tree with the
 * [`ts_tree_edit`] function, all of the nodes that you retrieve from the tree
 * afterward will already reflect the edit. You only need to use [`ts_node_edit`]
 * when you have a [`TSNode`] instance that you want to keep and continue to use
 * after an edit.
 */
void ts_node_edit(TSNode *self, const TSInputEdit *edit);

/**
 * Check if two nodes are identical.
 */
bool ts_node_eq(TSNode self, TSNode other);

/**********************/
/* Section - Language */
/**********************/

/**
 * Get another reference to the given language.
 */
const TSLanguage *ts_language_copy(const TSLanguage *self);

/**
 * Free any dynamically-allocated resources for this language, if
 * this is the last reference.
 */
void ts_language_delete(const TSLanguage *self);

/**
 * Get the number of distinct node types in the language.
 */
t_u32 ts_language_symbol_count(const TSLanguage *self);

/**
 * Get the number of valid states in this language.
 */
t_u32 ts_language_state_count(const TSLanguage *self);

/**
 * Get a node type string for the given numerical id.
 */
t_const_str ts_language_symbol_name(const TSLanguage *self, TSSymbol symbol);

/**
 * Get the numerical id for the given node type string.
 */
TSSymbol ts_language_symbol_for_name(const TSLanguage *self, t_const_str string, t_u32 length, bool is_named);

/**
 * Get the number of distinct field names in the language.
 */
t_u32 ts_language_field_count(const TSLanguage *self);

/**
 * Get the field name string for the given numerical id.
 */
t_const_str ts_language_field_name_for_id(const TSLanguage *self, TSFieldId id);

/**
 * Get the numerical id for the given field name string.
 */
TSFieldId ts_language_field_id_for_name(const TSLanguage *self, t_const_str name, t_u32 name_length);

/**
 * Check whether the given node type id belongs to named nodes, anonymous nodes,
 * or a hidden nodes.
 *
 * See also [`ts_node_is_named`]. Hidden nodes are never returned from the API.
 */
TSSymbolType ts_language_symbol_type(const TSLanguage *self, TSSymbol symbol);

/**
 * Get the ABI version number for this language. This version number is used
 * to ensure that languages were generated by a compatible version of
 * Tree-sitter.
 *
 * See also [`ts_parser_set_language`].
 */
t_u32 ts_language_version(const TSLanguage *self);

/**
 * Get the next parse state. Combine this with lookahead iterators to generate
 * completion suggestions or valid symbols in error nodes. Use
 * [`ts_node_grammar_symbol`] for valid symbols.
 */
TSStateId ts_language_next_state(const TSLanguage *self, TSStateId state, TSSymbol symbol);

#endif // TREE_SITTER_API_H_
