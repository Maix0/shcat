/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl32.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL32_H
# define INLINE_IMPL32_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map531(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 714, '!', 672, '"', 788, \
	'#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', \
	640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, \
	'>', 617, '?', 761, '@', 942, '\\', 215, '_', 947, '`', \
	855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map532(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 716, '!', 669, '"', 788, \
	'#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', \
	945, ';', 555, '<', 613, '>', 618, '?', 760, '@', 941, \
	'\\', 218, '_', 948, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map533(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 724, '"', 788, '#', 862, \
	'$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', \
	950, '0', 803, ';', 555, '<', 609, '>', 617, '\\', 331, \
	'`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', \
	786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map534(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 730, '"', 788, '#', 862, \
	'$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', \
	950, '0', 803, ';', 555, '<', 610, '>', 617, '\\', 399, \
	'`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', \
	786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map535(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 732, '!', 672, '"', 788, \
	'#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', \
	640, '-', 636, '0', 943, ';', 555, '<', 609, '>', 617, \
	'?', 761, '@', 942, '\\', 166, '_', 947, '`', 855, '|', \
	593, '[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL32_H
