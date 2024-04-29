/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:17:29 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 16:55:37 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_SITTER_LEXER_H_
#define TREE_SITTER_LEXER_H_

#include "./length.h"
#include "./parser.h"
#include "./subtree.h"
#include "parser/api.h"

#include "me/types.h"
#include "parser/types/types_lexer.h"

#define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024

typedef struct s_liblexer
{
	t_lexer data;
	Length	current_position;
	Length	token_start_position;
	Length	token_end_position;

	t_parser_range *included_ranges;
	const char	   *chunk;
	TSInput			input;
	TSLogger		logger;

	t_u32 included_range_count;
	t_u32 current_included_range_index;
	t_u32 chunk_start;
	t_u32 chunk_size;
	t_u32 lookahead_size;
	bool  did_get_column;

	char debug_buffer[TREE_SITTER_SERIALIZATION_BUFFER_SIZE];
} t_liblexer;

void			ts_lexer_init(t_liblexer *);
void			ts_lexer_delete(t_liblexer *);
void			ts_lexer_set_input(t_liblexer *, TSInput);
void			ts_lexer_reset(t_liblexer *, Length);
void			ts_lexer_start(t_liblexer *);
void			ts_lexer_finish(t_liblexer *, t_i32 *);
void			ts_lexer_advance_to_end(t_liblexer *);
void			ts_lexer_mark_end(t_liblexer *);
bool			ts_lexer_set_included_ranges(t_liblexer			  *self,
											 const t_parser_range *ranges, t_u32 count);
t_parser_range *ts_lexer_included_ranges(const t_liblexer *self, t_u32 *count);

#endif // TREE_SITTER_LEXER_H_
