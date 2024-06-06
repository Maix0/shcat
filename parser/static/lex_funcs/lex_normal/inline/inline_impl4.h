/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl4.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL4_H
# define INLINE_IMPL4_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map116(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 292, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, '-', 476, '0', 386, ';', \
	483, '<', 254, '>', 257, '\\', 140, '`', 416, 'e', 425, \
	'|', 235, '[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map117(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 293, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 199, '\'', 201, '*', 348, '-', \
	344, '0', 469, '<', 252, '>', 257, '?', 355, '@', 468, \
	'\\', 93, '_', 473, '`', 416, '|', 212, '[', 372, ']', \
	372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map118(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 294, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, '-', 476, '0', 386, ';', \
	483, '<', 254, '>', 257, '\\', 141, '`', 416, '|', 235, \
	'[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map119(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 295, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 333, '\'', 201, '*', 348, '-', \
	344, '0', 469, ';', 484, '?', 355, '@', 468, '\\', 57, \
	'_', 473, '`', 416, '[', 372, ']', 372, '{', 372, '}', \
	372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map120(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 296, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, '(', 232, '-', 476, '0', \
	385, ';', 483, '<', 254, '>', 257, '\\', 142, '`', 416, \
	'|', 235, '[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL4_H
