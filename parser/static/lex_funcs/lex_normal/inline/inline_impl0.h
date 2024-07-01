/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl0.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL0_H
# define INLINE_IMPL0_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map0(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 375, \
	'$', 358, '%', 339, '&', 324, '\'', 197, '(', 248, ')', \
	252, '*', 334, '+', 351, '-', 349, '/', 337, '0', 437, \
	':', 345, ';', 490, '<', 265, '=', 383, '>', 269, '?', \
	387, '@', 436, '\\', 116, '^', 320, '_', 440, '`', 396, \
	'd', 486, 'e', 483, 'f', 481, 'i', 485, '{', 255, '|', \
	250, '}', 257, '~', 353};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map5(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 253, '!', 261, '"', 360, \
	'#', 400, '$', 358, '\'', 197, '(', 248, '<', 267, '>', \
	270, '\\', 124, '`', 395, '{', 255};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map10(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 282, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 323, '\'', 197, '(', 248, '*', \
	336, '-', 332, '0', 438, ';', 490, '<', 266, '>', 270, \
	'?', 343, '@', 436, '\\', 13, '_', 441, '`', 395, 'e', \
	404, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map48(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 283, '!', 260, '#', 375, \
	'$', 357, '&', 323, ')', 252, '*', 333, '-', 330, '0', \
	439, ';', 490, '<', 266, '>', 270, '?', 342, '@', 435, \
	'\\', 50, '_', 442, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map89(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 285, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 323, '\'', 197, '(', 248, '*', \
	336, '-', 332, '0', 438, ';', 490, '<', 266, '>', 270, \
	'?', 343, '@', 436, '\\', 19, '_', 441, '`', 395, '|', \
	251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL0_H
