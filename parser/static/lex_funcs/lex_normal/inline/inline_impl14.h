/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl14.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL14_H
# define INLINE_IMPL14_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map297(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 755, '"', 788, '#', 862, \
	'$', 781, '&', 599, '\'', 491, '(', 654, '-', 950, '0', \
	803, ';', 555, '<', 495, '>', 496, '\\', 357, '`', 855, \
	'e', 956, '[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map298(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 756, '"', 788, '#', 862, \
	'$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', \
	803, '<', 608, '>', 617, '\\', 370, '`', 856, '|', 516, \
	'[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map299(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 757, '"', 788, '#', 862, \
	'$', 781, '&', 599, '\'', 491, '(', 494, '-', 950, '0', \
	803, ';', 555, '<', 495, '>', 496, '\\', 372, '`', 855, \
	'[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map300(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 758, '"', 788, '#', 862, \
	'$', 781, '&', 599, '\'', 491, '(', 494, '-', 950, '0', \
	803, ';', 555, '<', 495, '>', 496, '\\', 381, '`', 856, \
	'[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map401(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 670, '"', 788, '#', 816, \
	'$', 781, '%', 647, '&', 601, '\'', 491, '(', 654, ')', \
	655, '*', 638, '+', 770, ',', 557, '-', 768, '/', 642, \
	'0', 944, ':', 765, ';', 554, '<', 607, '=', 563, '>', \
	616, '?', 761, '@', 942, '[', 674, '\\', 301, ']', 675, \
	'^', 595, '_', 946, '`', 856, 'e', 956, 'i', 955, '{', \
	666, '|', 592, '}', 818, '~', 772};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL14_H
