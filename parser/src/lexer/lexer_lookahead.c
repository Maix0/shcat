/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_lookahead.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:09:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:09:03 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/input.h"
#include "parser/lexer.h"

bool	ts_lexer__eof(const TSLexer *_self);
t_u32	ts_lexer__get_column(TSLexer *_self);
void	ts_lexer__advance(TSLexer *_self, bool skip);
void	ts_lexer__do_advance(t_lexer *self, bool skip);
void	ts_lexer__clear_chunk(t_lexer *self);
void	ts_lexer__get_chunk(t_lexer *self);
void	ts_lexer__get_lookahead(t_lexer *self);
void	ts_lexer__mark_end(TSLexer *_self);
void	ts_lexer_advance_to_end(t_lexer *self);
void	ts_lexer_goto(t_lexer *self, Length position);

void	ts_lexer__get_lookahead(t_lexer *self)
{
	t_u32		position_in_chunk;
	t_u32		size;
	const t_u8	*chunk;

	position_in_chunk = self->current_position.bytes - self->chunk_start;
	size = self->chunk_size - position_in_chunk;
	if (size == 0)
	{
		self->lookahead_size = 1;
		self->data.lookahead = '\0';
		return ;
	}
	chunk = (const t_u8 *)self->chunk + position_in_chunk;
	self->lookahead_size = ts_decode_ascii(chunk, size, &self->data.lookahead);
	if (self->data.lookahead == TS_DECODE_ERROR)
		self->lookahead_size = 1;
}
