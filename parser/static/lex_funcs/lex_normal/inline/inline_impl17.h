/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl17.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL17_H
# define INLINE_IMPL17_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map452(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 287, '!', 247, '#', 396, \
	'$', 369, '&', 336, ')', 237, '*', 345, '-', 342, '0', \
	471, ';', 484, '<', 254, '>', 257, '?', 354, '@', 467, \
	'\\', 48, '_', 474, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map453(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 288, '!', 247, '#', 396, \
	'$', 369, '&', 336, '*', 345, '-', 342, '0', 471, ';', \
	484, '<', 254, '>', 257, '?', 354, '@', 467, '\\', 95, \
	'_', 474, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map454(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 289, '!', 247, '#', 396, \
	'$', 369, '&', 199, '*', 345, '-', 342, '0', 471, '<', \
	254, '>', 257, '?', 354, '@', 467, '\\', 51, '_', 474, \
	'|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map455(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 290, '!', 247, '#', 396, \
	'$', 369, '&', 199, '*', 345, '-', 342, '0', 471, '<', \
	252, '>', 257, '?', 354, '@', 467, '\\', 97, '_', 474, \
	'|', 212};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map456(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 291, '!', 247, '#', 396, \
	'$', 369, '&', 333, '*', 345, '-', 342, '0', 471, ';', \
	484, '?', 354, '@', 467, '\\', 66, '_', 474, 'i', 435};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL17_H
