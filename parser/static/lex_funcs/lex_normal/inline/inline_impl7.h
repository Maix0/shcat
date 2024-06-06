/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl7.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL7_H
# define INLINE_IMPL7_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map131(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 307, '"', 373, '#', 421, \
	'$', 370, '&', 333, '\'', 201, '-', 476, '0', 385, ';', \
	484, '\\', 161, '`', 416, '[', 372, ']', 372, '{', 372, \
	'}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map132(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 308, '"', 373, '#', 421, \
	'$', 370, '&', 333, '\'', 201, '-', 476, '0', 385, ';', \
	484, '\\', 163, '`', 417, '[', 372, ']', 372, '{', 372, \
	'}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map170(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 248, '"', 373, '#', 396, \
	'$', 370, '%', 351, '&', 335, '\'', 201, '(', 232, ')', \
	237, '*', 346, '+', 363, ',', 311, '-', 361, '/', 349, \
	'0', 470, ':', 358, ';', 483, '<', 253, '=', 251, '>', \
	256, '?', 355, '@', 468, '[', 372, '\\', 133, ']', 485, \
	'^', 331, '_', 472, '`', 417, 'e', 480, 'i', 479, '{', \
	242, '|', 234, '}', 398, '~', 365};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map171(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 248, '"', 373, '#', 396, \
	'$', 370, '&', 199, '\'', 201, '(', 232, '*', 348, '-', \
	344, '0', 469, '<', 254, '>', 257, '?', 355, '@', 468, \
	'\\', 31, '_', 473, '`', 416, '|', 235, '[', 372, ']', \
	372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map172(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 248, '"', 373, '#', 396, \
	'$', 370, '&', 199, '\'', 201, '*', 348, '-', 344, '0', \
	469, '<', 254, '>', 257, '?', 355, '@', 468, '\\', 36, \
	'_', 473, '`', 416, '|', 235, '[', 372, ']', 372, '{', \
	372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL7_H
