/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl14.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL14_H
# define INLINE_IMPL14_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map378(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 247, '"', 373, '#', 396, \
	'$', 369, '*', 345, '-', 342, '0', 471, '?', 354, '@', \
	467, '\\', 69, '_', 474};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map379(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 247, '#', 396, '$', 369, \
	'*', 345, '-', 342, '0', 471, '?', 354, '@', 467, '\\', \
	73, '_', 474};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map439(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 274, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, '(', 232, '*', \
	348, '-', 344, '0', 469, ';', 483, '<', 254, '>', 257, \
	'?', 355, '@', 468, '\\', 9, '_', 473, '`', 416, 'e', 430, \
	'|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map440(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 275, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, '(', 232, '*', \
	348, '-', 344, '0', 469, ';', 483, '<', 254, '>', 257, \
	'?', 355, '@', 468, '\\', 14, '_', 473, '`', 416, '|', \
	235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map441(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 276, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, '*', 348, '-', \
	344, '0', 469, ';', 483, '<', 254, '>', 257, '?', 355, \
	'@', 468, '\\', 16, '_', 473, '`', 416, 'e', 430, '|', \
	235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL14_H
