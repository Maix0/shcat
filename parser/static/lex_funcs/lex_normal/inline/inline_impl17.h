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

static inline bool	lex_normal_map412(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, \
	'\\', 55, ']', 675, '_', 947, '`', 855, '|', 593, '[', \
	786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map413(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, \
	'\\', 62, '_', 947, '`', 855, '|', 593, '[', 786, ']', \
	786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map414(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, \
	'\\', 231, ']', 675, '_', 947, '`', 855, '|', 593, '[', \
	786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map415(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, \
	'\\', 235, '_', 947, '`', 855, '|', 593, '[', 786, ']', \
	786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map416(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '\'', 491, '(', 494, ')', 655, '*', 640, '-', \
	636, '0', 943, '<', 495, '>', 496, '?', 761, '@', 942, \
	'\\', 110, '_', 947, '`', 855, '[', 786, ']', 786, '{', \
	786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
