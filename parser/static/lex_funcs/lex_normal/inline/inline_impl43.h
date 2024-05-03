/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl43.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL43_H
# define INLINE_IMPL43_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map921(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, \
	'@', 942, '\\', 171, '_', 947, '`', 855, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map922(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, \
	'\\', 55, ']', 675, '_', 947, '`', 855, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map923(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, \
	'\\', 62, '_', 947, '`', 855, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map924(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, \
	'\\', 231, ']', 675, '_', 947, '`', 855, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map925(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, \
	'\\', 235, '_', 947, '`', 855, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
