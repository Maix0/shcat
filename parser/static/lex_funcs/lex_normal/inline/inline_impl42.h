/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl42.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL42_H
# define INLINE_IMPL42_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map916(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 748, '!', 672, '"', 788, \
	'#', 816, '$', 781, '&', 599, '\'', 491, '(', 494, '*', \
	640, '-', 636, '0', 943, ';', 555, '<', 495, '>', 496, \
	'?', 761, '@', 942, '\\', 100, '_', 947, '`', 855};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map917(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 750, '!', 672, '"', 788, \
	'#', 816, '$', 781, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 495, '>', 496, '?', 761, '@', 942, \
	'\\', 112, '_', 947, '`', 855};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map918(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 670, '"', 788, '#', 816, \
	'$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, '*', \
	638, '+', 630, '-', 633, '/', 644, '0', 943, '<', 607, \
	'=', 560, '>', 616, '?', 761, '@', 942, '\\', 19, ']', \
	675, '^', 596, '_', 947, '`', 855, '|', 592};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map919(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 508, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 608, '>', 617, '?', 761, '@', 942, \
	'\\', 74, '_', 947, '`', 855};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map920(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 489, '\'', 491, '(', 654, '*', 640, '-', \
	636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, \
	'@', 942, '\\', 51, '_', 947, '`', 855, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
