/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl0.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL0_H
# define INLINE_IMPL0_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map0(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 248, '"', 373, '#', 396, \
	'$', 370, '%', 351, '&', 335, '\'', 201, '(', 232, ')', \
	237, '*', 346, '+', 363, ',', 311, '-', 361, '.', 475, \
	'/', 349, '0', 470, ':', 357, ';', 483, '<', 253, '=', \
	404, '>', 256, '?', 408, '@', 468, '[', 372, '\\', 133, \
	']', 485, '^', 331, '_', 472, '`', 417, 'e', 480, 'i', \
	479, '{', 242, '|', 234, '}', 316, '~', 365};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map6(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 272, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, '(', 232, '-', 476, '0', \
	385, ';', 483, '<', 254, '>', 257, '\\', 139, '`', 416, \
	'e', 480, '|', 235, '[', 372, ']', 372, '{', 372, '}', \
	372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map80(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 274, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, '(', 232, '*', \
	348, '-', 344, '0', 469, ';', 483, '<', 254, '>', 257, \
	'?', 355, '@', 468, '\\', 9, '_', 473, '`', 416, 'e', 430, \
	'|', 235, '[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map99(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 275, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, '(', 232, '*', \
	348, '-', 344, '0', 469, ';', 483, '<', 254, '>', 257, \
	'?', 355, '@', 468, '\\', 14, '_', 473, '`', 416, '|', \
	235, '[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map100(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 276, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, '*', 348, '-', \
	344, '0', 469, ';', 483, '<', 254, '>', 257, '?', 355, \
	'@', 468, '\\', 16, '_', 473, '`', 416, 'e', 430, '|', \
	235, '[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL0_H
