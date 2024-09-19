/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_advance.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:06:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 16:58:25 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/lexer.h"

bool	ts_lexer__eof(const t_lexer *_self);
t_u32	ts_lexer__get_column(t_lexer *_self);
void	ts_lexer__advance(t_lexer *_self, bool skip);
void	ts_lexer__clear_chunk(t_lexer *self);
void	ts_lexer__get_chunk(t_lexer *self);
void	ts_lexer__get_lookahead(t_lexer *self);
void	ts_lexer__mark_end(t_lexer *_self);
void	ts_lexer_advance_to_end(t_lexer *self);
void	ts_lexer_goto(t_lexer *self, t_length position);

bool	ts_lexer__do_advance_loop(t_lexer *self, const t_range **current_range);
void	ts_lexer__do_advance_after_loop(t_lexer *self, bool skip,
			const t_range *cur);

// Intended to be called only from functions that control logging.
void	ts_lexer__do_advance(t_lexer *self, bool skip)
{
	const t_range	*cur = \
		&self->included_ranges[self->current_included_range_index];

	if (self->lookahead_size)
	{
		self->current_position.bytes += self->lookahead_size;
		if (self->funcs.lookahead == '\n')
		{
			self->current_position.extent.row++;
			self->current_position.extent.column = 0;
		}
		else
			self->current_position.extent.column += self->lookahead_size;
	}
	while (self->current_position.bytes >= cur->end_byte
		|| cur->end_byte == cur->start_byte)
		if (ts_lexer__do_advance_loop(self, &cur))
			break ;
	ts_lexer__do_advance_after_loop(self, skip, cur);
}

// Advance to the next character in the source code, retrieving a new
// chunk of source code if needed.
void	ts_lexer__advance(t_lexer *_self, bool skip)
{
	t_lexer	*self;

	self = (t_lexer *)_self;
	if (!self->chunk)
		return ;
	ts_lexer__do_advance(self, skip);
}

bool	ts_lexer__do_advance_loop(t_lexer *self, const t_range **current_range)
{
	if (self->current_included_range_index < self->included_range_count)
		self->current_included_range_index++;
	if (self->current_included_range_index < self->included_range_count)
	{
		(*current_range)++;
		self->current_position = (t_length){
			(*current_range)->start_byte,
			(*current_range)->start_point,
		};
	}
	else
	{
		(*current_range) = NULL;
		return (true);
	}
	return (false);
}

void	ts_lexer__do_advance_after_loop(t_lexer *self, bool skip,
		const t_range *cur)
{
	if (skip)
		self->token_start_position = self->current_position;
	if (cur)
	{
		if (self->current_position.bytes < self->chunk_start
			|| self->current_position.bytes >= self->chunk_start
			+ self->chunk_size)
			ts_lexer__get_chunk(self);
		ts_lexer__get_lookahead(self);
	}
	else
	{
		ts_lexer__clear_chunk(self);
		self->funcs.lookahead = '\0';
		self->lookahead_size = 1;
	}
}
