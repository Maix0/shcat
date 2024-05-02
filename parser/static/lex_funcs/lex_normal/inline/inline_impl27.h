/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl27.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL27_H
# define INLINE_IMPL27_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map462(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 489, '\'', 491, '(', 654, '-', 950, '0', 803, '<', \
	609, '=', 952, '>', 617, '\\', 353, '`', 856, '|', 593, \
	'[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map463(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 489, '\'', 491, '(', 494, ')', 655, '-', 950, '0', \
	803, '<', 609, '>', 617, '\\', 358, '`', 856, '|', 593, \
	'[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map464(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', \
	609, '>', 617, '\\', 336, ']', 675, '`', 855, '|', 593, \
	'[', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map465(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', \
	609, '>', 617, '\\', 355, ']', 675, '`', 856, '|', 593, \
	'[', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map466(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', \
	610, '>', 617, '\\', 342, '`', 855, '|', 593, '[', 786, \
	']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
