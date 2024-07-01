/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl15.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL15_H
# define INLINE_IMPL15_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map431(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 260, '#', 375, '$', 357, \
	'&', 196, '*', 333, '-', 330, '0', 439, '<', 266, '>', \
	270, '?', 342, '@', 435, '\\', 65, '_', 442, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map432(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 260, '#', 375, '$', 357, \
	')', 252, '*', 333, '-', 330, '0', 439, '?', 342, '@', \
	435, '\\', 81, '_', 442, '|', 249};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map433(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 260, '#', 375, '$', 357, \
	'*', 333, '-', 330, '0', 439, '?', 342, '@', 435, '\\', \
	86, '_', 442};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map444(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 282, '!', 261, '#', 376, \
	'*', 336, '-', 332, '0', 438, '?', 343, '@', 436, '\\', \
	12, '_', 441, 'e', 404};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map445(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 285, '!', 261, '#', 376, \
	'*', 336, '-', 332, '0', 438, '?', 343, '@', 436, '\\', \
	18, '_', 441};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL15_H
