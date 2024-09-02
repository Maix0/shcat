/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:15 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 20:21:08 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_H
#define LEXER_H

#include "parser/api.h"
#include "parser/length.h"
#include "parser/parser.h"
#include "me/types.h"

struct s_lexer
{
	TSLexer		data;
	Length		current_position;
	Length		token_start_position;
	Length		token_end_position;
	TSRange	   *included_ranges;
	const t_u8 *chunk;
	TSInput		input;
	t_u32		included_range_count;
	t_u32		current_included_range_index;
	t_u32		chunk_start;
	t_u32		chunk_size;
	t_u32		lookahead_size;
	bool		did_get_column;
	t_u8		debug_buffer[TREE_SITTER_SERIALIZATION_BUFFER_SIZE];
};

typedef struct s_lexer t_lexer;

void	 ts_lexer_init(t_lexer *self);
void	 ts_lexer_delete(t_lexer *self);
void	 ts_lexer_set_input(t_lexer *self, TSInput input);
void	 ts_lexer_reset(t_lexer *self, Length length);
void	 ts_lexer_start(t_lexer *self);
void	 ts_lexer_finish(t_lexer *self, t_u32 *lookahead);
void	 ts_lexer_advance_to_end(t_lexer *self);
void	 ts_lexer_mark_end(t_lexer *self);
bool	 ts_lexer_set_included_ranges(t_lexer *self, const TSRange *ranges, t_u32 count);
TSRange *ts_lexer_included_ranges(const t_lexer *self, t_u32 *count);

#endif // LEXER_H
