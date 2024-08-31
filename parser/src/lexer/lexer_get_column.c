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

t_u32	ts_lexer__get_column(TSLexer *_self)
{
	Lexer	*self;
	t_u32	goal_byte;
	t_u32	result;

	self = (Lexer *)_self;
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
