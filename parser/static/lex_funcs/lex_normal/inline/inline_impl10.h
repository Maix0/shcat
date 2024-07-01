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

static inline bool	lex_normal_map228(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 302, '!', 265, '#', 383, \
	'$', 365, '&', 331, '*', 341, '-', 338, '0', 448, ';', \
	499, '<', 272, '>', 275, '?', 350, '@', 444, '\\', 56, \
	'_', 451, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map232(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 383, \
	'$', 366, '%', 347, '&', 332, '\'', 200, '(', 251, ')', \
	257, '*', 342, '+', 359, '-', 357, '/', 345, '0', 446, \
	':', 354, ';', 499, '<', 271, '=', 269, '>', 274, '?', \
	351, '@', 445, '\\', 119, '^', 328, '_', 449, '`', 404, \
	'd', 495, 'e', 492, 'f', 490, 'i', 494, '{', 260, '|', \
	253, '}', 262, '~', 361};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map233(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 408, \
	'$', 366, '\'', 200, '(', 251, ')', 257, ';', 204, '<', \
	270, '>', 275, '\\', 122, '`', 403, '{', 260};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map234(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 205, '#', 408, '$', 367, \
	'%', 349, '&', 332, ')', 202, '*', 343, '+', 337, '-', \
	339, '/', 346, ':', 352, ';', 204, '<', 273, '=', 268, \
	'>', 276, '?', 350};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map373(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 265, '"', 368, '#', 383, \
	'$', 365, '*', 341, '-', 338, '0', 448, '?', 350, '@', \
	444, '\\', 81, '_', 451};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL10_H
