/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl45.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL45_H
# define INLINE_IMPL45_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map931(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 671, '"', 788, '#', 816, \
	'$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', \
	634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, \
	'?', 760, '@', 941, '\\', 178, ']', 509, '^', 597, '_', \
	948, '|', 594};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map932(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 671, '"', 788, '#', 816, \
	'$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', \
	634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, \
	'?', 760, '@', 941, '\\', 69, '^', 597, '_', 948, '|', \
	594};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map933(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', \
	612, '>', 618, '?', 760, '@', 941, '\\', 108, ']', 675, \
	'_', 948, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map934(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', \
	612, '>', 618, '?', 760, '@', 941, '\\', 114, '_', 948, \
	'|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map935(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', \
	613, '>', 618, '?', 760, '@', 941, '\\', 195, ']', 675, \
	'_', 948, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL45_H
