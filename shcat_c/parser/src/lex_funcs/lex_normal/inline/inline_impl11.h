/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl11.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL11_H
# define INLINE_IMPL11_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map282(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 740, '!', 672, '"', 788, \
	'#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', \
	640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, \
	'?', 761, '@', 942, '\\', 168, '_', 947, '`', 855, '|', \
	593, '[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map283(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 741, '"', 788, '#', 862, \
	'$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', \
	804, ';', 554, '<', 610, '>', 617, '\\', 341, '`', 856, \
	'e', 866, '|', 593, '[', 786, ']', 786, '{', 786, '}', \
	786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map284(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 742, '!', 672, '"', 788, \
	'#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', \
	640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761, \
	'@', 942, '\\', 58, '_', 947, '`', 855, '|', 593, '[', \
	786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map285(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 743, '"', 788, '#', 862, \
	'$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', \
	803, ';', 554, '<', 609, '>', 617, '\\', 343, '`', 856, \
	'e', 956, '|', 593, '[', 786, ']', 786, '{', 786, '}', \
	786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map286(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 744, '!', 672, '"', 788, \
	'#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', \
	640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761, \
	'@', 942, '\\', 233, '_', 947, '`', 855, '|', 593, '[', \
	786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL11_H
