#ifndef TREE_SITTER_LEXER_H_
#define TREE_SITTER_LEXER_H_

#include "./api.h"
#include "./length.h"
#include "./parser.h"
#include "me/types.h"

typedef struct Lexer
{
	TSLexer data;
	Length	current_position;
	Length	token_start_position;
	Length	token_end_position;

	TSRange	   *included_ranges;
	const char *chunk;
	TSInput		input;
	TSLogger	logger;

	t_u32 included_range_count;
	t_u32 current_included_range_index;
	t_u32 chunk_start;
	t_u32 chunk_size;
	t_u32 lookahead_size;
	bool  did_get_column;

	char debug_buffer[TREE_SITTER_SERIALIZATION_BUFFER_SIZE];
} Lexer;

void	 ts_lexer_init(Lexer *);
void	 ts_lexer_delete(Lexer *);
void	 ts_lexer_set_input(Lexer *, TSInput);
void	 ts_lexer_reset(Lexer *, Length);
void	 ts_lexer_start(Lexer *);
void	 ts_lexer_finish(Lexer *, t_u32 *);
void	 ts_lexer_advance_to_end(Lexer *);
void	 ts_lexer_mark_end(Lexer *);
bool	 ts_lexer_set_included_ranges(Lexer *self, const TSRange *ranges, t_u32 count);
TSRange *ts_lexer_included_ranges(const Lexer *self, t_u32 *count);

#endif // TREE_SITTER_LEXER_H_
