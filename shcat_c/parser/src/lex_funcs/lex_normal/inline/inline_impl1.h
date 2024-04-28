/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl1.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL1_H
# define INLINE_IMPL1_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map85(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 690, '#', 862, '$', 783, \
	'&', 489, '(', 654, '-', 504, '0', 808, ':', 762, '<', \
	611, '>', 618};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map146(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 691, '!', 951, '"', 788, \
	'#', 862, '$', 781, '%', 649, '&', 601, '\'', 491, '(', \
	654, ')', 655, '*', 638, '+', 630, '-', 633, '/', 644, \
	'0', 803, ';', 555, '<', 607, '=', 560, '>', 616, '?', \
	761, '\\', 316, '^', 596, '`', 856, '|', 592, '[', 786, \
	']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map200(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 692, '!', 669, '"', 788, \
	'#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', \
	945, ';', 554, '<', 612, '>', 618, '?', 760, '@', 941, \
	'\\', 81, '_', 948, 'e', 877, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map219(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 693, '!', 672, '"', 788, \
	'#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', \
	640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, \
	'>', 617, '?', 761, '@', 942, '\\', 27, '_', 947, '`', \
	855, 'e', 871, '|', 593, '[', 786, ']', 786, '{', 786, \
	'}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map236(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 694, '!', 951, '"', 788, \
	'#', 862, '$', 781, '%', 649, '&', 601, '\'', 491, '(', \
	654, ')', 655, '*', 638, '+', 630, '-', 633, '/', 644, \
	'0', 803, ';', 555, '<', 607, '=', 560, '>', 616, '?', \
	761, '\\', 317, '^', 596, '`', 855, '|', 592, '[', 786, \
	']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL1_H
