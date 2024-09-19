/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_goto.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:08:11 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 16:59:09 by maiboyer         ###   ########.fr       */
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

void	ts_lexer_goto_inside_loop(t_lexer *self, bool *found_included_range,
			t_range *included_range, t_usize i);
void	ts_lexer_goto_after_loop(t_lexer *self, bool found_included_range);

void	ts_lexer_goto(t_lexer *self, t_length position)
{
	bool	found_included_range;
	t_range	*included_range;
	t_u32	i;

	included_range = NULL;
	found_included_range = false;
	self->current_position = position;
	i = 0;
	while (i < self->included_range_count)
	{
		included_range = &self->included_ranges[i];
		if (included_range->end_byte > self->current_position.bytes
			&& included_range->end_byte > included_range->start_byte)
		{
			ts_lexer_goto_inside_loop(self, &found_included_range,
				included_range, i);
			break ;
		}
		i++;
	}
	ts_lexer_goto_after_loop(self, found_included_range);
}

void	ts_lexer_goto_inside_loop(t_lexer *self, bool *found_included_range,
		t_range *included_range, t_usize i)
{
	if (included_range->start_byte >= self->current_position.bytes)
	{
		self->current_position = (t_length){
			.bytes = included_range->start_byte,
			.extent = included_range->start_point,
		};
	}
	self->current_included_range_index = i;
	*found_included_range = true;
}

void	ts_lexer_goto_after_loop(t_lexer *self, bool found_included_range)
{
	t_range	*last_included_range;

	if (found_included_range)
	{
		if (self->chunk && (self->current_position.bytes < self->chunk_start
				|| self->current_position.bytes >= self->chunk_start
				+ self->chunk_size))
			ts_lexer__clear_chunk(self);
		self->lookahead_size = 0;
		self->funcs.lookahead = '\0';
	}
	else
	{
		self->current_included_range_index = self->included_range_count;
		last_included_range = &self->included_ranges[self->included_range_count
			- 1];
		self->current_position = (t_length){
			.bytes = last_included_range->end_byte,
			.extent = last_included_range->end_point,
		};
		ts_lexer__clear_chunk(self);
		self->lookahead_size = 1;
		self->funcs.lookahead = '\0';
	}
}
