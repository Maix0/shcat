/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:51:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/30 14:28:34 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_H
#define LEXER_H

#include "me/types.h"
#include "./api.h"
#include "parser/parser_length.h"
#include "parser/types/types_lexer.h"

#define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024

typedef struct s_liblexer
{
	t_lexer		   data;
	t_parse_length current_position;
	t_parse_length token_start_position;
	t_parse_length token_end_position;

	t_parser_range *included_ranges;
	const char	   *chunk;
	t_parse_input	input;
	t_parse_logger	logger;

	t_u32 included_range_count;
	t_u32 current_included_range_index;
	t_u32 chunk_start;
	t_u32 chunk_size;
	t_u32 lookahead_size;
	bool  did_get_column;

	char debug_buffer[TREE_SITTER_SERIALIZATION_BUFFER_SIZE];
} t_liblexer;

void			ts_lexer_init(t_liblexer *self);
void			ts_lexer_delete(t_liblexer *self);
void			ts_lexer_set_input(t_liblexer *self, t_parse_input input);
void			ts_lexer_reset(t_liblexer *self, t_parse_length range);
void			ts_lexer_start(t_liblexer *self);
void			ts_lexer_finish(t_liblexer *self, t_i32 *data);
void			ts_lexer_advance_to_end(t_liblexer *self);
void			ts_lexer_mark_end(t_liblexer *self);
bool			ts_lexer_set_included_ranges(t_liblexer			  *self,
											 const t_parser_range *ranges, t_u32 count);
t_parser_range *ts_lexer_included_ranges(const t_liblexer *self, t_u32 *count);

#endif /* LEXER_H */
