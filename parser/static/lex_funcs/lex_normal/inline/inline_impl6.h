/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl6.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL6_H
# define INLINE_IMPL6_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map126(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 302, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, '(', 232, '-', 476, '0', \
	385, ';', 483, '<', 254, '>', 257, '\\', 149, '`', 417, \
	'|', 235, '[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map127(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 303, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, '-', 476, '0', 386, ';', \
	483, '<', 254, '>', 257, '\\', 150, '`', 417, '|', 235, \
	'[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map128(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 304, '"', 373, '#', 421, \
	'$', 370, '&', 336, '\'', 201, ')', 237, '-', 476, '0', \
	386, ';', 484, '<', 254, '>', 257, '\\', 151, '`', 417, \
	'|', 235, '[', 372, ']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map129(t_lexer *lexer, \
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

static inline bool	lex_normal_map130(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 306, '"', 373, '#', 421, \
	'$', 370, '&', 333, '\'', 201, '(', 232, '-', 476, '0', \
	385, ';', 484, '\\', 156, '`', 416, 'e', 480, '[', 372, \
	']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL6_H
