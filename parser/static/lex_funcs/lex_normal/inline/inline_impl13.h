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

static inline bool	lex_normal_map421(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 297, '!', 260, '#', 375, \
	'$', 357, '&', 196, '*', 333, '-', 330, '0', 439, '<', \
	266, '>', 270, '?', 342, '@', 435, '\\', 63, '_', 442, \
	'|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map422(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 298, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 196, '\'', 197, '(', 248, '*', \
	336, '-', 332, '0', 438, '<', 266, '>', 270, '?', 343, \
	'@', 436, '\\', 36, '_', 441, '`', 395, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map423(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 299, '!', 260, '#', 375, \
	'$', 357, '&', 322, '*', 333, '-', 330, '0', 439, ';', \
	490, '?', 342, '@', 435, '\\', 76, '_', 442, 'i', 408};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map424(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 300, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 196, '\'', 197, '*', 336, '-', \
	332, '0', 438, '<', 266, '>', 270, '?', 343, '@', 436, \
	'\\', 39, '_', 441, '`', 395, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map425(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 301, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 196, '\'', 197, '*', 336, '-', \
	332, '0', 438, '<', 267, '>', 270, '?', 343, '@', 436, \
	'\\', 94, '_', 441, '`', 395, '|', 214};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL13_H
