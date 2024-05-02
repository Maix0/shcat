/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl28.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL28_H
# define INLINE_IMPL28_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map467(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', \
	610, '>', 617, '\\', 363, ']', 675, '`', 856, '|', 593, \
	'[', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map468(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', \
	610, '>', 617, '\\', 364, '`', 856, '|', 593, '[', 786, \
	']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map469(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', \
	610, '>', 617, '\\', 400, ']', 675, '`', 855, '|', 593, \
	'[', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map470(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 489, '\'', 491, '(', 494, '-', 950, '0', 804, '<', \
	610, '>', 617, '\\', 334, '`', 855, '|', 593, '[', 786, \
	']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map471(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 489, '\'', 491, '(', 494, '-', 950, '0', 804, '<', \
	610, '>', 617, '\\', 359, '`', 856, '|', 593, '[', 786, \
	']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
