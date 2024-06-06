/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl12.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL12_H
# define INLINE_IMPL12_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map194(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 373, '#', 422, '$', 370, \
	'\'', 201, '-', 476, '0', 385, '\\', 162, '`', 416, '[', \
	372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map214(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 278, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, '(', 232, '*', \
	348, '-', 344, '0', 469, ';', 484, '<', 254, '>', 257, \
	'?', 355, '@', 468, '\\', 83, '_', 473, '`', 416, '|', \
	235, '[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map215(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 281, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, '*', 348, '-', \
	344, '0', 469, ';', 484, '<', 254, '>', 257, '?', 355, \
	'@', 468, '\\', 89, '_', 473, '`', 416, '|', 235, '[', \
	372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map216(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 288, '!', 247, '#', 396, \
	'$', 369, '&', 336, '*', 345, '-', 342, '0', 471, ';', \
	484, '<', 254, '>', 257, '?', 354, '@', 467, '\\', 95, \
	'_', 474, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map217(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 298, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, ')', 237, '-', 476, '0', \
	386, ';', 484, '<', 254, '>', 257, '\\', 143, '`', 416, \
	'|', 235, '[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL12_H
