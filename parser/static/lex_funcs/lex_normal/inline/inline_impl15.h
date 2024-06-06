/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl15.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL15_H
# define INLINE_IMPL15_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map442(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 277, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, '(', 232, ')', \
	237, '*', 348, '-', 344, '0', 469, ';', 484, '<', 254, \
	'>', 257, '?', 355, '@', 468, '\\', 22, '_', 473, '`', \
	416, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map443(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 278, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, '(', 232, '*', \
	348, '-', 344, '0', 469, ';', 484, '<', 254, '>', 257, \
	'?', 355, '@', 468, '\\', 83, '_', 473, '`', 416, '|', \
	235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map444(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 279, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, '*', 348, '-', \
	344, '0', 469, ';', 483, '<', 254, '>', 257, '?', 355, \
	'@', 468, '\\', 24, '_', 473, '`', 416, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map445(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 280, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, ')', 237, '*', \
	348, '-', 344, '0', 469, ';', 484, '<', 254, '>', 257, \
	'?', 355, '@', 468, '\\', 26, '_', 473, '`', 416, '|', \
	235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map446(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 281, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 336, '\'', 201, '*', 348, '-', \
	344, '0', 469, ';', 484, '<', 254, '>', 257, '?', 355, \
	'@', 468, '\\', 89, '_', 473, '`', 416, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL15_H
