/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl13.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL13_H
# define INLINE_IMPL13_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map218(t_lexer *lexer, \
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

static inline bool	lex_normal_map219(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 304, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, ')', 237, '-', 476, '0', \
	386, ';', 484, '<', 254, '>', 257, '\\', 151, '`', 417, \
	'|', 235, '[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map220(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 305, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, '(', 232, ')', 237, '-', \
	476, '0', 385, ';', 484, '<', 254, '>', 257, '\\', 152, \
	'`', 417, '|', 235, '[', 372, ']', 372, '{', 372, '}', \
	372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map221(t_lexer *lexer, \
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

static inline bool	lex_normal_map222(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 248, '"', 373, '#', 421, \
	'$', 370, '&', 199, '\'', 201, '(', 232, ')', 237, '-', \
	476, '0', 385, ';', 200, '<', 254, '>', 257, '\\', 135, \
	'`', 416, '{', 242, '|', 235, '[', 372, ']', 372, '}', \
	372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL13_H
