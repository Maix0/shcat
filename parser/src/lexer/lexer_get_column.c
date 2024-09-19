/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_get_column.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:04:55 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:18:31 by maiboyer         ###   ########.fr       */
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

t_u32	ts_lexer__get_column(t_lexer *_self)
{
	t_lexer	*self;
	t_u32	goal_byte;
	t_u32	result;

	self = (t_lexer *)_self;
	goal_byte = self->current_position.bytes;
	self->did_get_column = true;
	self->current_position.bytes -= self->current_position.extent.column;
	self->current_position.extent.column = 0;
	if (self->current_position.bytes < self->chunk_start)
		ts_lexer__get_chunk(self);
	result = 0;
	if (!ts_lexer__eof(_self))
	{
		ts_lexer__get_lookahead(self);
		while (self->current_position.bytes < goal_byte && self->chunk)
		{
			result++;
			ts_lexer__do_advance(self, false);
			if (ts_lexer__eof(_self))
				break ;
		}
	}
	return (result);
}
