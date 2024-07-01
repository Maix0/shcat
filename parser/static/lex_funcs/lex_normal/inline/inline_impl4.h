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

static inline bool	lex_normal_map114(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 307, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 199, '\'', 200, '*', 344, '-', \
	340, '0', 447, '<', 270, '>', 275, '?', 351, '@', 445, \
	'\\', 94, '_', 450, '`', 403, '|', 217};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map115(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 308, '!', 265, '#', 383, \
	'$', 365, '&', 330, '*', 341, '-', 338, '0', 448, ';', \
	499, '?', 350, '@', 444, '\\', 76, '_', 451, 'i', 416};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map116(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 309, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 330, '\'', 200, '*', 344, '-', \
	340, '0', 447, ';', 499, '?', 351, '@', 445, '\\', 68, \
	'_', 450, '`', 403};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map117(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 310, '!', 266, '"', 368, \
	'#', 383, '$', 366, '\'', 200, '*', 344, '-', 340, '0', \
	447, '?', 351, '@', 445, '\\', 72, '_', 450, '`', 403};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map167(t_lexer *lexer, \
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
#endif // INLINE_IMPL4_H
