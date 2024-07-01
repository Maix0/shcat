/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl10.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL10_H
# define INLINE_IMPL10_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map229(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 375, \
	'$', 358, '%', 339, '&', 324, '\'', 197, '(', 248, ')', \
	252, '*', 334, '+', 351, '-', 349, '/', 337, '0', 437, \
	':', 346, ';', 490, '<', 265, '=', 264, '>', 269, '?', \
	343, '@', 436, '\\', 116, '^', 320, '_', 440, '`', 396, \
	'd', 486, 'e', 483, 'f', 481, 'i', 485, '{', 255, '|', \
	250, '}', 257, '~', 353};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map230(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 400, \
	'$', 358, '\'', 197, '(', 248, ')', 252, ';', 201, '<', \
	267, '>', 270, '\\', 119, '`', 395, '{', 255};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map231(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 202, '#', 400, '$', 359, \
	'%', 341, '&', 324, ')', 199, '*', 335, '+', 329, '-', \
	331, '/', 338, ':', 344, ';', 201, '<', 268, '=', 263, \
	'>', 271, '?', 342};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map365(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 260, '"', 360, '#', 375, \
	'$', 357, '*', 333, '-', 330, '0', 439, '?', 342, '@', \
	435, '\\', 79, '_', 442};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map366(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 260, '#', 375, '$', 357, \
	'*', 333, '-', 330, '0', 439, '?', 342, '@', 435, '\\', \
	83, '_', 442};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL10_H
