/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl44.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL44_H
# define INLINE_IMPL44_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map926(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '\'', 491, '(', 494, ')', 655, '*', 640, '-', \
	636, '0', 943, '<', 495, '>', 496, '?', 761, '@', 942, \
	'\\', 110, '_', 947, '`', 855};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map927(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 671, '"', 788, '#', 816, \
	'$', 780, '%', 650, '&', 600, ')', 655, '*', 639, '+', \
	631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, \
	'>', 620, '?', 760, '@', 941, '\\', 67, '^', 597, '_', \
	948, '|', 594};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map928(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 671, '"', 788, '#', 816, \
	'$', 780, '%', 650, '&', 600, ')', 499, '*', 639, '+', \
	631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, \
	'>', 620, '?', 760, '@', 941, '\\', 181, '^', 597, '_', \
	948, '|', 594};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map929(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 671, '"', 788, '#', 816, \
	'$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', \
	634, '/', 645, '0', 945, ':', 762, '<', 615, '=', 562, \
	'>', 620, '?', 760, '@', 941, '\\', 64, '^', 597, '_', \
	948, '|', 594};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map930(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 671, '"', 788, '#', 816, \
	'$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', \
	634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, \
	'?', 760, '@', 941, '\\', 60, ']', 675, '^', 597, '_', \
	948, '|', 594};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL44_H
