/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_chunk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:07:46 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:07:52 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/lexer.h"

bool	ts_lexer__eof(const TSLexer *_self);
t_u32	ts_lexer__get_column(TSLexer *_self);
void	ts_lexer__advance(TSLexer *_self, bool skip);
void	ts_lexer__do_advance(Lexer *self, bool skip);
void	ts_lexer__clear_chunk(Lexer *self);
void	ts_lexer__get_chunk(Lexer *self);
void	ts_lexer__get_lookahead(Lexer *self);
void	ts_lexer__mark_end(TSLexer *_self);
void	ts_lexer_advance_to_end(Lexer *self);
void	ts_lexer_goto(Lexer *self, Length position);

// Clear the currently stored chunk of source code, because the lexer's
// position has changed.
void	ts_lexer__clear_chunk(Lexer *self)
{
	self->chunk = NULL;
	self->chunk_size = 0;
	self->chunk_start = 0;
}

// Call the lexer's input callback to obtain a new chunk of source code
// for the current position.
void	ts_lexer__get_chunk(Lexer *self)
{
	self->chunk_start = self->current_position.bytes;
	self->chunk = self->input.read(self->input.payload,
			self->current_position.bytes, self->current_position.extent,
			&self->chunk_size);
	if (!self->chunk_size)
	{
		self->current_included_range_index = self->included_range_count;
		self->chunk = NULL;
	}
}
