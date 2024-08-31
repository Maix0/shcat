/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_goto.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:08:11 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:25:58 by maiboyer         ###   ########.fr       */
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

void	ts_lexer_goto_inside_loop(Lexer *self, bool *found_included_range,
			TSRange *included_range, t_usize i);
void	ts_lexer_goto_after_loop(Lexer *self, bool found_included_range);

void	ts_lexer_goto(Lexer *self, Length position)
{
	bool	found_included_range;
	TSRange	*included_range;
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

void	ts_lexer_goto_inside_loop(Lexer *self, bool *found_included_range,
		TSRange *included_range, t_usize i)
{
	if (included_range->start_byte >= self->current_position.bytes)
	{
		self->current_position = (Length){
			.bytes = included_range->start_byte,
			.extent = included_range->start_point,
		};
	}
	self->current_included_range_index = i;
	*found_included_range = true;
}

void	ts_lexer_goto_after_loop(Lexer *self, bool found_included_range)
{
	TSRange	*last_included_range;

	if (found_included_range)
	{
		if (self->chunk && (self->current_position.bytes < self->chunk_start
				|| self->current_position.bytes >= self->chunk_start
				+ self->chunk_size))
			ts_lexer__clear_chunk(self);
		self->lookahead_size = 0;
		self->data.lookahead = '\0';
	}
	else
	{
		self->current_included_range_index = self->included_range_count;
		last_included_range = &self->included_ranges[self->included_range_count
			- 1];
		self->current_position = (Length){
			.bytes = last_included_range->end_byte,
			.extent = last_included_range->end_point,
		};
		ts_lexer__clear_chunk(self);
		self->lookahead_size = 1;
		self->data.lookahead = '\0';
	}
}
