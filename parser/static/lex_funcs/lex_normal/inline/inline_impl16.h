/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl16.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL16_H
# define INLINE_IMPL16_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map407(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 670, '"', 788, '#', 862, \
	'$', 781, '%', 649, '&', 600, '\'', 491, '(', 654, '*', \
	638, '+', 771, '-', 769, '/', 644, '0', 803, '<', 614, \
	'=', 560, '>', 619, '?', 761, '\\', 312, ']', 675, '^', \
	596, '`', 856, '|', 594, '~', 772, '[', 786, '{', 786, \
	'}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map408(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 670, '"', 788, '#', 862, \
	'$', 781, '%', 649, '&', 600, '\'', 491, '(', 654, '*', \
	638, '+', 771, '-', 769, '/', 644, '0', 803, '<', 614, \
	'=', 560, '>', 619, '?', 761, '\\', 315, ']', 787, '^', \
	596, '`', 856, '|', 594, '~', 772, '[', 786, '{', 786, \
	'}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map409(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 508, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 608, '>', 617, '?', 761, '@', 942, \
	'\\', 74, '_', 947, '`', 855, '[', 786, ']', 786, '{', \
	786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map410(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 489, '\'', 491, '(', 654, '*', 640, '-', \
	636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, \
	'@', 942, '\\', 51, '_', 947, '`', 855, '|', 593, '[', \
	786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map411(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, \
	'$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', \
	636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, \
	'@', 942, '\\', 171, '_', 947, '`', 855, '|', 593, '[', \
	786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
