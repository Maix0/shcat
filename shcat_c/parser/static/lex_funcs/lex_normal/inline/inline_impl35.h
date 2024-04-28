/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl35.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL35_H
# define INLINE_IMPL35_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map881(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 692, '!', 669, '"', 788, \
	'#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', \
	945, ';', 554, '<', 612, '>', 618, '?', 760, '@', 941, \
	'\\', 81, '_', 948, 'e', 877, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map882(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 693, '!', 672, '"', 788, \
	'#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', \
	640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, \
	'>', 617, '?', 761, '@', 942, '\\', 27, '_', 947, '`', \
	855, 'e', 871, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map883(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 695, '!', 669, '"', 788, \
	'#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', \
	945, ';', 554, '<', 612, '>', 618, '?', 760, '@', 941, \
	'\\', 91, '_', 948, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map884(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 696, '!', 672, '"', 788, \
	'#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', \
	640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, \
	'>', 617, '?', 761, '@', 942, '\\', 30, '_', 947, '`', \
	855, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map885(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 698, '!', 669, '"', 788, \
	'#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', \
	945, ';', 554, '<', 613, '>', 618, '?', 760, '@', 941, \
	'\\', 183, '_', 948, 'e', 877, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL35_H
