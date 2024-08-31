/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_lifetime.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:58:01 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:25:16 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/lexer.h"

#define BYTE_ORDER_MARK 0xFEFF

bool	ts_lexer__eof(const TSLexer *_self);
t_u32	ts_lexer__get_column(TSLexer *_self);
void	ts_lexer__advance(TSLexer *_self, bool skip);
void	ts_lexer__clear_chunk(Lexer *self);
void	ts_lexer__get_chunk(Lexer *self);
void	ts_lexer__get_lookahead(Lexer *self);
void	ts_lexer__mark_end(TSLexer *_self);
void	ts_lexer_advance_to_end(Lexer *self);
void	ts_lexer_goto(Lexer *self, Length position);

void	ts_lexer_init(Lexer *self)
{
	static TSRange	default_range = {.start_point = {\
	.row = 0, .column = 0, }, .end_point = {.row = UINT32_MAX, \
	.column = UINT32_MAX, }, .start_byte = 0, .end_byte = UINT32_MAX};

	*self = (Lexer){
		.data = {
		.advance = ts_lexer__advance,
		.mark_end = ts_lexer__mark_end,
		.get_column = ts_lexer__get_column,
		.eof = ts_lexer__eof,
		.lookahead = 0,
		.result_symbol = 0, },
		.chunk = NULL,
		.chunk_size = 0,
		.chunk_start = 0,
		.current_position = {0, {0, 0}},
		.included_ranges = (void *)&default_range,
		.included_range_count = 1,
		.current_included_range_index = 0,
	};
}

void	ts_lexer_set_input(Lexer *self, TSInput input)
{
	self->input = input;
	ts_lexer__clear_chunk(self);
	ts_lexer_goto(self, self->current_position);
}

void	ts_lexer_reset(Lexer *self, Length position)
{
	if (position.bytes != self->current_position.bytes)
		ts_lexer_goto(self, position);
}

void	ts_lexer_start(Lexer *self)
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
		if (self->current_position.bytes == 0
			&& self->data.lookahead == BYTE_ORDER_MARK)
			ts_lexer__advance(&self->data, true);
	}
}

void	ts_lexer_finish(Lexer *self, t_u32 *lookahead_end_byte)
{
	if (length_is_undefined(self->token_end_position))
		ts_lexer__mark_end(&self->data);
	(void)(lookahead_end_byte);
	if (self->token_end_position.bytes < self->token_start_position.bytes)
		self->token_start_position = self->token_end_position;
}
