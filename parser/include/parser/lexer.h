#ifndef LEXER_H
#define LEXER_H

#include "parser/api.h"
#include "parser/length.h"
#include "parser/parser.h"
#include "me/types.h"

struct Lexer
{
	TSLexer		data;
	Length		current_position;
	Length		token_start_position;
	Length		token_end_position;
	TSRange	   *included_ranges;
	const t_u8 *chunk;
	TSInput		input;
	TSLogger	logger;
	t_u32		included_range_count;
	t_u32		current_included_range_index;
	t_u32		chunk_start;
	t_u32		chunk_size;
	t_u32		lookahead_size;
	bool		did_get_column;
	t_u8		debug_buffer[TREE_SITTER_SERIALIZATION_BUFFER_SIZE];
};

typedef struct Lexer Lexer;

void	 ts_lexer_init(Lexer *self);
void	 ts_lexer_delete(Lexer *self);
void	 ts_lexer_set_input(Lexer *self, TSInput input);
void	 ts_lexer_reset(Lexer *self, Length length);
void	 ts_lexer_start(Lexer *self);
void	 ts_lexer_finish(Lexer *self, t_u32 *lookahead);
void	 ts_lexer_advance_to_end(Lexer *self);
void	 ts_lexer_mark_end(Lexer *self);
bool	 ts_lexer_set_included_ranges(Lexer *self, const TSRange *ranges, t_u32 count);
TSRange *ts_lexer_included_ranges(const Lexer *self, t_u32 *count);

#endif // LEXER_H
