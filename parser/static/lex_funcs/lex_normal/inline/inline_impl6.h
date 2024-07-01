/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl6.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL6_H
# define INLINE_IMPL6_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map171(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 400, \
	'$', 358, '\'', 197, '(', 248, '<', 267, '>', 270, '\\', \
	126, '`', 395, 'd', 486, '{', 255};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map172(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 400, \
	'$', 358, '\'', 197, '(', 248, '<', 267, '>', 270, '\\', \
	128, '`', 395, 'f', 481, '{', 255};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map173(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 400, \
	'$', 358, '\'', 197, '(', 248, '<', 267, '>', 270, '\\', \
	130, '`', 395, '{', 255, '}', 257};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map174(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 202, '#', 400, '%', 341, \
	'&', 324, ')', 252, '*', 335, '+', 329, '-', 331, '/', \
	338, '<', 268, '=', 263, '>', 271, '?', 342};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map175(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 260, '"', 360, '#', 375, \
	'$', 357, '*', 333, '-', 330, '0', 439, '?', 342, '@', \
	435, '\\', 79, '_', 442};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL6_H
