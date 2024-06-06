/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl8.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL8_H
# define INLINE_IMPL8_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map173(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 248, '"', 373, '#', 396, \
	'$', 370, '&', 206, '\'', 201, '*', 348, '-', 344, '0', \
	469, '<', 252, '>', 257, '?', 355, '@', 468, '\\', 38, \
	'_', 473, '`', 416, '[', 372, ']', 372, '{', 372, '}', \
	372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map174(t_lexer *lexer, \
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

static inline bool	lex_normal_map175(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 248, '"', 373, '#', 421, \
	'$', 370, '&', 206, '\'', 201, '(', 232, ')', 237, '-', \
	476, '0', 385, ';', 200, '<', 252, '>', 257, '\\', 137, \
	'`', 416, 'e', 480, '{', 242, '|', 233, '[', 372, ']', \
	372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map176(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 248, '"', 373, '#', 421, \
	'$', 370, '&', 206, '\'', 201, '(', 232, '-', 476, '0', \
	385, '<', 252, '>', 257, '\\', 138, '`', 416, '{', 242, \
	'}', 243, '[', 372, ']', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map177(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 247, '"', 373, '#', 396, \
	'$', 369, '*', 345, '-', 342, '0', 471, '?', 354, '@', \
	467, '\\', 69, '_', 474};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL8_H
