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

bool	ts_lexer__eof(const t_lexer *_self);
t_u32	ts_lexer__get_column(t_lexer *_self);
void	ts_lexer__advance(t_lexer *_self, bool skip);
void	ts_lexer__do_advance(t_lexer *self, bool skip);
void	ts_lexer__clear_chunk(t_lexer *self);
void	ts_lexer__get_chunk(t_lexer *self);
void	ts_lexer__get_lookahead(t_lexer *self);
void	ts_lexer__mark_end(t_lexer *_self);
void	ts_lexer_advance_to_end(t_lexer *self);
void	ts_lexer_goto(t_lexer *self, t_length position);

// Clear the currently stored chunk of source code, because the lexer's
// position has changed.
void	ts_lexer__clear_chunk(t_lexer *self)
{
	self->chunk = NULL;
	self->chunk_size = 0;
	self->chunk_start = 0;
}

// Call the lexer's input callback to obtain a new chunk of source code
// for the current position.
void	ts_lexer__get_chunk(t_lexer *self)
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
