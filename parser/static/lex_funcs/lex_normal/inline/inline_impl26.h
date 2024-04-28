/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl26.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL26_H
# define INLINE_IMPL26_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map457(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 508, '\'', 491, '(', 654, '-', 950, '0', 803, '<', \
	608, '>', 617, '[', 674, '\\', 330, '`', 855, ']', 786, \
	'{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map458(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 508, '\'', 491, '(', 494, ')', 655, '-', 950, '0', \
	803, '<', 608, '>', 617, '\\', 340, '`', 855, '|', 590, \
	'[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map459(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 508, '\'', 491, '(', 494, ')', 655, '-', 950, '0', \
	803, '<', 608, '>', 617, '\\', 371, '`', 856, '|', 590, \
	'[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map460(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 489, '\'', 491, '(', 654, ')', 655, '-', 950, '0', \
	803, '<', 609, '>', 617, '\\', 338, '`', 855, '|', 593, \
	'[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map461(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'&', 489, '\'', 491, '(', 654, '-', 950, '0', 803, '<', \
	609, '=', 952, '>', 617, '\\', 329, '`', 855, '|', 593, \
	'[', 786, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL26_H
