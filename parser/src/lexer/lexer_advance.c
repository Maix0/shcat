/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_advance.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:06:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:06:39 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/lexer.h"

bool	ts_lexer__eof(const TSLexer *_self);
t_u32	ts_lexer__get_column(TSLexer *_self);
void	ts_lexer__advance(TSLexer *_self, bool skip);
void	ts_lexer__clear_chunk(Lexer *self);
void	ts_lexer__get_chunk(Lexer *self);
void	ts_lexer__get_lookahead(Lexer *self);
void	ts_lexer__mark_end(TSLexer *_self);
void	ts_lexer_advance_to_end(Lexer *self);
void	ts_lexer_goto(Lexer *self, Length position);

// Intended to be called only from functions that control logging.
void ts_lexer__do_advance(Lexer *self, bool skip)
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

	const TSRange *current_range = &self->included_ranges[self->current_included_range_index];
	while (self->current_position.bytes >= current_range->end_byte || current_range->end_byte == current_range->start_byte)
	{
		if (self->current_included_range_index < self->included_range_count)
		{
			self->current_included_range_index++;
		}
		if (self->current_included_range_index < self->included_range_count)
		{
			current_range++;
			self->current_position = (Length){
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
		if (self->current_position.bytes < self->chunk_start || self->current_position.bytes >= self->chunk_start + self->chunk_size)
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
void ts_lexer__advance(TSLexer *_self, bool skip)
{
	Lexer *self = (Lexer *)_self;
	if (!self->chunk)
		return;
	ts_lexer__do_advance(self, skip);
}
