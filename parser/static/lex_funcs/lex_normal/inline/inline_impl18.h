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

static inline bool	lex_normal_map467(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 310, '!', 266, '#', 384, \
	'*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', \
	71, '_', 450};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map468(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '#', 384, '%', 347, \
	'*', 342, '+', 359, '-', 357, '/', 345, '0', 446, ':', \
	354, '=', 269, '?', 351, '@', 445, '\\', 118, '^', 328, \
	'_', 449, 'd', 495, 'e', 492, 'f', 490, 'i', 494, '{', \
	260, '}', 262, '~', 361};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map469(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '#', 384, '*', 344, \
	'-', 340, '0', 447, '?', 351, '@', 445, '\\', 41, '_', \
	450};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map470(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '#', 384, '*', 344, \
	'-', 340, '0', 447, '?', 351, '@', 445, '\\', 44, '_', \
	450};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map471(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '#', 384, '*', 344, \
	'-', 340, '0', 447, '?', 351, '@', 445, '\\', 59, '_', \
	450};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL18_H
