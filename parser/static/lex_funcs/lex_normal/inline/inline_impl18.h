/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl18.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL18_H
# define INLINE_IMPL18_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map457(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 293, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 199, '\'', 201, '*', 348, '-', \
	344, '0', 469, '<', 252, '>', 257, '?', 355, '@', 468, \
	'\\', 93, '_', 473, '`', 416, '|', 212};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map458(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 295, '!', 248, '"', 373, \
	'#', 396, '$', 370, '&', 333, '\'', 201, '*', 348, '-', \
	344, '0', 469, ';', 484, '?', 355, '@', 468, '\\', 57, \
	'_', 473, '`', 416};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map459(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 297, '!', 248, '"', 373, \
	'#', 396, '$', 370, '\'', 201, '*', 348, '-', 344, '0', \
	469, '?', 355, '@', 468, '\\', 63, '_', 473, '`', 416};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map460(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 248, '"', 373, '#', 396, \
	'$', 370, '&', 199, '\'', 201, '(', 232, '*', 348, '-', \
	344, '0', 469, '<', 254, '>', 257, '?', 355, '@', 468, \
	'\\', 31, '_', 473, '`', 416, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map461(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 248, '"', 373, '#', 396, \
	'$', 370, '&', 199, '\'', 201, '*', 348, '-', 344, '0', \
	469, '<', 254, '>', 257, '?', 355, '@', 468, '\\', 36, \
	'_', 473, '`', 416, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL18_H
