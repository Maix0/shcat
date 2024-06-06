/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl2.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL2_H
# define INLINE_IMPL2_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map106(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 282, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 199, '\'', 201, '(', 232, '*', \
	348, '-', 344, '0', 469, '<', 254, '>', 257, '?', 355, \
	'@', 468, '\\', 28, '_', 473, '`', 416, '|', 235, '[', \
	372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map107(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 283, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 199, '\'', 201, '*', 348, '-', \
	344, '0', 469, '<', 254, '>', 257, '?', 355, '@', 468, \
	'\\', 34, '_', 473, '`', 416, '|', 235, '[', 372, ']', \
	372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map108(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 284, '!', 247, '#', 396, \
	'$', 369, '&', 336, '*', 345, '-', 342, '0', 471, ';', \
	483, '<', 254, '>', 257, '?', 354, '@', 467, '\\', 40, \
	'_', 474, 'e', 436, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map109(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 285, '!', 247, '#', 396, \
	'$', 369, '&', 336, '*', 345, '-', 342, '0', 471, ';', \
	483, '<', 254, '>', 257, '?', 354, '@', 467, '\\', 43, \
	'_', 474, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map110(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 286, '!', 247, '#', 396, \
	'$', 369, '&', 336, '*', 345, '-', 342, '0', 471, ';', \
	484, '<', 254, '>', 257, '?', 354, '@', 467, '\\', 45, \
	'_', 474, '`', 416, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL2_H
