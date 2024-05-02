/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl18.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL18_H
# define INLINE_IMPL18_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map417(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 862, \
	'$', 781, '&', 508, '\'', 491, '(', 654, ')', 655, '-', \
	950, '0', 803, ';', 490, '<', 608, '>', 617, '[', 674, \
	'\\', 304, '`', 855, '{', 666, '|', 590, ']', 786, '}', \
	786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map418(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 862, \
	'$', 781, '&', 508, '\'', 491, '(', 654, ')', 499, '+', \
	771, '-', 769, '0', 803, '<', 608, '>', 617, '[', 674, \
	'\\', 305, '`', 855, '{', 666, '|', 591, '~', 772, ']', \
	786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map419(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 862, \
	'$', 781, '&', 508, '\'', 491, '(', 654, '+', 771, '-', \
	769, '0', 803, '<', 608, '>', 617, '[', 674, '\\', 306, \
	']', 675, '`', 855, '{', 666, '}', 786, '~', 772};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map420(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 862, \
	'$', 781, '&', 508, '\'', 491, '(', 654, '+', 771, '-', \
	769, '0', 803, '<', 608, '>', 617, '[', 674, '\\', 320, \
	'`', 855, '~', 772, ']', 786, '{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map421(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 862, \
	'$', 781, '&', 508, '\'', 491, '(', 654, '-', 950, '0', \
	803, ';', 490, '<', 608, '>', 617, '[', 674, '\\', 309, \
	'`', 855, 'e', 956, '{', 666, ']', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
