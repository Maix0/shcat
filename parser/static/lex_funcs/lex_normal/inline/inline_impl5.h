/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl5.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL5_H
# define INLINE_IMPL5_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map121(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 297, '!', 248, '"', 373, \
	'#', 396, '$', 370, '\'', 201, '*', 348, '-', 344, '0', \
	469, '?', 355, '@', 468, '\\', 63, '_', 473, '`', 416, \
	'[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map122(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 298, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, ')', 237, '-', 476, '0', \
	386, ';', 484, '<', 254, '>', 257, '\\', 143, '`', 416, \
	'|', 235, '[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map123(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 299, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, '(', 232, ')', 237, '-', \
	476, '0', 385, ';', 484, '<', 254, '>', 257, '\\', 144, \
	'`', 416, '|', 235, '[', 372, ']', 372, '{', 372, '}', \
	372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map124(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 300, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, '-', 476, '0', 386, ';', \
	483, '<', 254, '>', 257, '\\', 147, '`', 417, 'e', 425, \
	'|', 235, '[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map125(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 301, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, '(', 232, '-', 476, '0', \
	385, ';', 483, '<', 254, '>', 257, '\\', 148, '`', 417, \
	'e', 480, '|', 235, '[', 372, ']', 372, '{', 372, '}', \
	372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL5_H
