/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_end.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:07:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:07:21 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/lexer.h"

bool  ts_lexer__eof(const TSLexer *_self);
t_u32 ts_lexer__get_column(TSLexer *_self);
void  ts_lexer__advance(TSLexer *_self, bool skip);
void  ts_lexer__do_advance(Lexer *self, bool skip);
void  ts_lexer__clear_chunk(Lexer *self);
void  ts_lexer__get_chunk(Lexer *self);
void  ts_lexer__get_lookahead(Lexer *self);
void  ts_lexer__mark_end(TSLexer *_self);
void  ts_lexer_advance_to_end(Lexer *self);
void  ts_lexer_goto(Lexer *self, Length position);

// Check if the lexer has reached EOF. This state is stored
// by setting the lexer's `current_included_range_index` such that
// it has consumed all of its available ranges.
bool ts_lexer__eof(const TSLexer *_self)
{
	Lexer *self;

	self = (Lexer *)_self;
	return (self->current_included_range_index == self->included_range_count);
}

// Mark that a token match has completed. This can be called multiple
// times if a longer match is found later.
void ts_lexer__mark_end(TSLexer *_self)
{
	Lexer *self = (Lexer *)_self;
	if (!ts_lexer__eof(&self->data))
	{
		// If the lexer is right at the beginning of included range,
		// then the token should be considered to end at the *end* of the
		// previous included range, rather than here.
		TSRange *current_included_range = &self->included_ranges[self->current_included_range_index];
		if (self->current_included_range_index > 0 && self->current_position.bytes == current_included_range->start_byte)
		{
			TSRange *previous_included_range = current_included_range - 1;
			self->token_end_position = (Length){
				previous_included_range->end_byte,
				previous_included_range->end_point,
			};
			return;
		}
	}
	self->token_end_position = self->current_position;
}

void ts_lexer_advance_to_end(Lexer *self)
{
	while (self->chunk)
		ts_lexer__advance(&self->data, false);
}
