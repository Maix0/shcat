/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_advance.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:06:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:23:07 by maiboyer         ###   ########.fr       */
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

bool	ts_lexer__do_advance_loop(Lexer *self, const TSRange **current_range);
void	ts_lexer__do_advance_after_loop(Lexer *self, bool skip,
			const TSRange *cur);

// Intended to be called only from functions that control logging.
void	ts_lexer__do_advance(Lexer *self, bool skip)
{
	const TSRange	*cur = \
		&self->included_ranges[self->current_included_range_index];

	if (self->lookahead_size)
	{
		self->current_position.bytes += self->lookahead_size;
		if (self->data.lookahead == '\n')
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
void	ts_lexer__advance(TSLexer *_self, bool skip)
{
	Lexer	*self;

	self = (Lexer *)_self;
	if (!self->chunk)
		return ;
	ts_lexer__do_advance(self, skip);
}

bool	ts_lexer__do_advance_loop(Lexer *self, const TSRange **current_range)
{
	if (self->current_included_range_index < self->included_range_count)
		self->current_included_range_index++;
	if (self->current_included_range_index < self->included_range_count)
	{
		(*current_range)++;
		self->current_position = (Length){
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

void	ts_lexer__do_advance_after_loop(Lexer *self, bool skip,
		const TSRange *cur)
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
		self->data.lookahead = '\0';
		self->lookahead_size = 1;
	}
}
