#include "parser/lexer.h"
#include "parser/parser_length.h"
#include "./subtree.h"
#include <stdint.h>
#include <stdio.h>

#define LOG(message, character)                                                \
	if (self->logger.log)                                                      \
	{                                                                          \
		snprintf(self->debug_buffer, TREE_SITTER_SERIALIZATION_BUFFER_SIZE,    \
				 32 <= character && character < 127 ? message                  \
					 " character:'%c'"                                         \
													: message " character:%d", \
				 character);                                                   \
		self->logger.log(self->logger.payload, LogTypeLex,                   \
						 self->debug_buffer);                                  \
	}

static const t_i32 BYTE_ORDER_MARK = 0xFEFF;

static const t_parser_range DEFAULT_RANGE = {.start_point =
												 {
													 .row = 0,
													 .column = 0,
												 },
											 .end_point =
												 {
													 .row = UINT32_MAX,
													 .column = UINT32_MAX,
												 },
											 .start_byte = 0,
											 .end_byte = UINT32_MAX};

// Check if the lexer has reached EOF. This state is stored
// by setting the lexer's `current_included_range_index` such that
// it has consumed all of its available ranges.
static bool ts_lexer__eof(const t_lexer *_self)
{
	t_liblexer *self = (t_liblexer *)_self;
	return self->current_included_range_index == self->included_range_count;
}

// Clear the currently stored chunk of source code, because the lexer's
// position has changed.
static void ts_lexer__clear_chunk(t_liblexer *self)
{
	self->chunk = NULL;
	self->chunk_size = 0;
	self->chunk_start = 0;
}

// Call the lexer's input callback to obtain a new chunk of source code
// for the current position.
static void ts_lexer__get_chunk(t_liblexer *self)
{
	self->chunk_start = self->current_position.bytes;
	self->chunk =
		self->input.read(self->input.payload, self->current_position.bytes,
						 self->current_position.extent, &self->chunk_size);
	if (!self->chunk_size)
	{
		self->current_included_range_index = self->included_range_count;
		self->chunk = NULL;
	}
}

typedef t_i32 (*UnicodeDecodeFunction)(const t_i8 *chunk, t_i32 size,
										  t_i32 *lookahead);

t_i32 my_decode(const t_i8 *chunk, t_i32 size, t_i32 *lookahead)
{
	(void)(size);
	*((t_i32 *)lookahead) = *chunk;
	return (1);
}

#define TS_DECODE_ERROR -1

// Decode the next unicode character in the current chunk of source code.
// This assumes that the lexer has already retrieved a chunk of source
// code that spans the current position.
static void ts_lexer__get_lookahead(t_liblexer *self)
{
	t_i32 position_in_chunk =
		self->current_position.bytes - self->chunk_start;
	t_i32 size = self->chunk_size - position_in_chunk;

	if (size == 0)
	{
		self->lookahead_size = 1;
		self->data.lookahead = '\0';
		return;
	}

	const t_i8 *chunk = (const t_i8 *)self->chunk + position_in_chunk;
	UnicodeDecodeFunction decode = my_decode;

	self->lookahead_size = decode(chunk, size, &self->data.lookahead);

	// If this chunk ended in the middle of a multi-byte character,
	// try again with a fresh chunk.
	if (self->data.lookahead == TS_DECODE_ERROR && size < 4)
	{
		ts_lexer__get_chunk(self);
		chunk = (const t_i8 *)self->chunk;
		size = self->chunk_size;
		self->lookahead_size = decode(chunk, size, &self->data.lookahead);
	}

	if (self->data.lookahead == TS_DECODE_ERROR)
	{
		self->lookahead_size = 1;
	}
}

static void ts_lexer_goto(t_liblexer *self, t_parse_length position)
{
	self->current_position = position;

	// Move to the first valid position at or after the given position.
	bool found_included_range = false;
	for (unsigned i = 0; i < self->included_range_count; i++)
	{
		t_parser_range *included_range = &self->included_ranges[i];
		if (included_range->end_byte > self->current_position.bytes &&
			included_range->end_byte > included_range->start_byte)
		{
			if (included_range->start_byte >= self->current_position.bytes)
			{
				self->current_position = (t_parse_length){
					.bytes = included_range->start_byte,
					.extent = included_range->start_point,
				};
			}

			self->current_included_range_index = i;
			found_included_range = true;
			break;
		}
	}

	if (found_included_range)
	{
		// If the current position is outside of the current chunk of text,
		// then clear out the current chunk of text.
		if (self->chunk && (self->current_position.bytes < self->chunk_start ||
							self->current_position.bytes >=
								self->chunk_start + self->chunk_size))
		{
			ts_lexer__clear_chunk(self);
		}

		self->lookahead_size = 0;
		self->data.lookahead = '\0';
	}

	// If the given position is beyond any of included ranges, move to the EOF
	// state - past the end of the included ranges.
	else
	{
		self->current_included_range_index = self->included_range_count;
		t_parser_range *last_included_range =
			&self->included_ranges[self->included_range_count - 1];
		self->current_position = (t_parse_length){
			.bytes = last_included_range->end_byte,
			.extent = last_included_range->end_point,
		};
		ts_lexer__clear_chunk(self);
		self->lookahead_size = 1;
		self->data.lookahead = '\0';
	}
}

// Intended to be called only from functions that control logging.
static void ts_lexer__do_advance(t_liblexer *self, bool skip)
{
	if (self->lookahead_size)
	{
		self->current_position.bytes += self->lookahead_size;
		if (self->data.lookahead == '\n')
		{
			self->current_position.extent.row++;
			self->current_position.extent.column = 0;
		}
		else
		{
			self->current_position.extent.column += self->lookahead_size;
		}
	}

	const t_parser_range *current_range =
		&self->included_ranges[self->current_included_range_index];
	while (self->current_position.bytes >= current_range->end_byte ||
		   current_range->end_byte == current_range->start_byte)
	{
		if (self->current_included_range_index < self->included_range_count)
		{
			self->current_included_range_index++;
		}
		if (self->current_included_range_index < self->included_range_count)
		{
			current_range++;
			self->current_position = (t_parse_length){
				current_range->start_byte,
				current_range->start_point,
			};
		}
		else
		{
			current_range = NULL;
			break;
		}
	}

	if (skip)
		self->token_start_position = self->current_position;

	if (current_range)
	{
		if (self->current_position.bytes < self->chunk_start ||
			self->current_position.bytes >=
				self->chunk_start + self->chunk_size)
		{
			ts_lexer__get_chunk(self);
		}
		ts_lexer__get_lookahead(self);
	}
	else
	{
		ts_lexer__clear_chunk(self);
		self->data.lookahead = '\0';
		self->lookahead_size = 1;
	}
}

// Advance to the next character in the source code, retrieving a new
// chunk of source code if needed.
static void ts_lexer__advance(t_lexer *_self, bool skip)
{
	t_liblexer *self = (t_liblexer *)_self;
	if (!self->chunk)
		return;
	ts_lexer__do_advance(self, skip);
}

// Mark that a token match has completed. This can be called multiple
// times if a longer match is found later.
static void ts_lexer__mark_end(t_lexer *_self)
{
	t_liblexer *self = (t_liblexer *)_self;
	if (!ts_lexer__eof(&self->data))
	{
		// If the lexer is right at the beginning of included range,
		// then the token should be considered to end at the *end* of the
		// previous included range, rather than here.
		t_parser_range *current_included_range =
			&self->included_ranges[self->current_included_range_index];
		if (self->current_included_range_index > 0 &&
			self->current_position.bytes == current_included_range->start_byte)
		{
			t_parser_range *previous_included_range =
				current_included_range - 1;
			self->token_end_position = (t_parse_length){
				previous_included_range->end_byte,
				previous_included_range->end_point,
			};
			return;
		}
	}
	self->token_end_position = self->current_position;
}

static t_i32 ts_lexer__get_column(t_lexer *_self)
{
	t_liblexer *self = (t_liblexer *)_self;

	t_u32 goal_byte = self->current_position.bytes;

	self->did_get_column = true;
	self->current_position.bytes -= self->current_position.extent.column;
	self->current_position.extent.column = 0;

	if (self->current_position.bytes < self->chunk_start)
	{
		ts_lexer__get_chunk(self);
	}

	t_i32 result = 0;
	if (!ts_lexer__eof(_self))
	{
		ts_lexer__get_lookahead(self);
		while (self->current_position.bytes < goal_byte && self->chunk)
		{
			result++;
			ts_lexer__do_advance(self, false);
			if (ts_lexer__eof(_self))
				break;
		}
	}

	return result;
}

// Is the lexer at a boundary between two disjoint included ranges of
// source code? This is exposed as an API because some languages' external
// scanners need to perform custom actions at these boundaries.
static bool ts_lexer__is_at_included_range_start(const t_lexer *_self)
{
	const t_liblexer *self = (const t_liblexer *)_self;
	if (self->current_included_range_index < self->included_range_count)
	{
		t_parser_range *current_range =
			&self->included_ranges[self->current_included_range_index];
		return self->current_position.bytes == current_range->start_byte;
	}
	else
	{
		return false;
	}
}

void ts_lexer_init(t_liblexer *self)
{
	*self = (t_liblexer){
		.data =
			{
				// The lexer's methods are stored as struct fields so that
				// generated
				// parsers can call them without needing to be linked against
				// this
				// library.
				.advance = ts_lexer__advance,
				.mark_end = ts_lexer__mark_end,
				.get_column = ts_lexer__get_column,
				.is_at_included_range_start =
					ts_lexer__is_at_included_range_start,
				.eof = ts_lexer__eof,
				.lookahead = 0,
				.result_symbol = 0,
			},
		.chunk = NULL,
		.chunk_size = 0,
		.chunk_start = 0,
		.current_position = {0, {0, 0}},
		.logger = {.payload = NULL, .log = NULL},
		.included_ranges = NULL,
		.included_range_count = 0,
		.current_included_range_index = 0,
	};
	ts_lexer_set_included_ranges(self, NULL, 0);
}

void ts_lexer_delete(t_liblexer *self)
{
	free(self->included_ranges);
}

void ts_lexer_set_input(t_liblexer *self, t_parse_input input)
{
	self->input = input;
	ts_lexer__clear_chunk(self);
	ts_lexer_goto(self, self->current_position);
}

// Move the lexer to the given position. This doesn't do any work
// if the parser is already at the given position.
void ts_lexer_reset(t_liblexer *self, t_parse_length position)
{
	if (position.bytes != self->current_position.bytes)
	{
		ts_lexer_goto(self, position);
	}
}

void ts_lexer_start(t_liblexer *self)
{
	self->token_start_position = self->current_position;
	self->token_end_position = LENGTH_UNDEFINED;
	self->data.result_symbol = 0;
	self->did_get_column = false;
	if (!ts_lexer__eof(&self->data))
	{
		if (!self->chunk_size)
			ts_lexer__get_chunk(self);
		if (!self->lookahead_size)
			ts_lexer__get_lookahead(self);
		if (self->current_position.bytes == 0 &&
			self->data.lookahead == BYTE_ORDER_MARK)
			ts_lexer__advance(&self->data, true);
	}
}

void ts_lexer_finish(t_liblexer *self, t_i32 *lookahead_end_byte)
{
	if (length_is_undefined(self->token_end_position))
	{
		ts_lexer__mark_end(&self->data);
	}

	// If the token ended at an included range boundary, then its end position
	// will have been reset to the end of the preceding range. Reset the start
	// position to match.
	if (self->token_end_position.bytes < self->token_start_position.bytes)
	{
		self->token_start_position = self->token_end_position;
	}

	t_i32 current_lookahead_end_byte = self->current_position.bytes + 1;

	// In order to determine that a byte sequence is invalid UTF8 or UTF16,
	// the character decoding algorithm may have looked at the following byte.
	// Therefore, the next byte *after* the current (invalid) character
	// affects the interpretation of the current character.
	if (self->data.lookahead == TS_DECODE_ERROR)
	{
		current_lookahead_end_byte++;
	}

	if (current_lookahead_end_byte > *lookahead_end_byte)
	{
		*lookahead_end_byte = current_lookahead_end_byte;
	}
}

void ts_lexer_advance_to_end(t_liblexer *self)
{
	while (self->chunk)
	{
		ts_lexer__advance(&self->data, false);
	}
}

void ts_lexer_mark_end(t_liblexer *self)
{
	ts_lexer__mark_end(&self->data);
}

bool ts_lexer_set_included_ranges(t_liblexer		   *self,
								  const t_parser_range *ranges, t_u32 count)
{
	ranges = &DEFAULT_RANGE;
	count = 1;
	size_t size = count * sizeof(t_parser_range);
	self->included_ranges = realloc(self->included_ranges, size);
	memcpy(self->included_ranges, ranges, size);
	self->included_range_count = count;
	ts_lexer_goto(self, self->current_position);
	return true;
}

t_parser_range *ts_lexer_included_ranges(const t_liblexer *self,
										 t_u32		  *count)
{
	*count = self->included_range_count;
	return self->included_ranges;
}

#undef LOG
