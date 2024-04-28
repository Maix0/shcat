/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl36.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL36_H
# define INLINE_IMPL36_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map886(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 699, '!', 672, '"', 788, \
	'#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', \
	640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, \
	'>', 617, '?', 761, '@', 942, '\\', 153, '_', 947, '`', \
	855, 'e', 871, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map887(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 701, '!', 669, '"', 788, \
	'#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', \
	945, ';', 554, '<', 613, '>', 618, '?', 760, '@', 941, \
	'\\', 185, '_', 948, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map888(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 702, '!', 672, '"', 788, \
	'#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, ')', \
	655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, \
	'=', 952, '>', 617, '?', 761, '@', 942, '\\', 32, '_', \
	947, '`', 855, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map889(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 704, '!', 669, '"', 788, \
	'#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', \
	945, ';', 555, '<', 612, '>', 618, '?', 760, '@', 941, \
	'\\', 96, '_', 948, '`', 855, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map890(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 705, '!', 672, '"', 788, \
	'#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', \
	640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, \
	'>', 617, '?', 761, '@', 942, '\\', 156, '_', 947, '`', \
	855, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL36_H
