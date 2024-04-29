/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_language.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:39:37 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 15:36:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_LANGUAGE_H
# define TYPES_LANGUAGE_H

# include "me/types.h"
# include "parser/types/types_field_map_entry.h"
# include "parser/types/types_field_map_slice.h"
# include "parser/types/types_lex_modes.h"
# include "parser/types/types_lexer.h"
# include "parser/types/types_parse_action_entry.h"
# include "parser/types/types_scanner.h"
# include "parser/types/types_state_id.h"
# include "parser/types/types_symbol.h"
# include "parser/types/types_symbol_metadata.h"

typedef bool					(*t_lex_fn)(t_lexer *lex, t_state_id state);

typedef struct s_language
{
	t_u32						version;
	t_u32						symbol_count;
	t_u32						alias_count;
	t_u32						token_count;
	t_u32						external_token_count;
	t_u32						state_count;
	t_u32						large_state_count;
	t_u32						production_id_count;
	t_u32						field_count;
	t_u16						max_alias_sequence_length;
	const t_u16					*parse_table;
	const t_u16					*small_parse_table;
	const t_u32					*small_parse_table_map;
	const t_parse_action_entry	*parse_actions;
	const t_const_str			*symbol_names;
	const t_const_str			*field_names;
	const t_field_map_slice		*field_map_slices;
	const t_field_map_entry		*field_map_entries;
	const t_symbol_metadata		*symbol_metadata;
	const t_symbol				*public_symbol_map;
	const t_u16					*alias_map;
	const t_symbol				*alias_sequences;
	const t_lex_modes			*lex_modes;
	t_lex_fn					lex_fn;
	t_lex_fn					keyword_lex_fn;
	t_symbol					keyword_capture_token;
	t_scanner					external_scanner;
	const t_state_id			*primary_state_ids;
}								t_language;

#endif /* TYPES_LANGUAGE_H */
