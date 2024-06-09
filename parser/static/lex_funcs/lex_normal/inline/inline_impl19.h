/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl19.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL19_H
# define INLINE_IMPL19_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map502(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 332, '!', 282, '#', 413, \
	'*', 367, '-', 363, '0', 477, '?', 374, '@', 476, '\\', \
	75, '_', 481};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map503(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '#', 413, '%', 370, \
	'*', 365, '+', 382, '-', 380, '/', 368, '0', 478, ':', \
	377, '=', 285, '?', 374, '@', 476, '\\', 127, '^', 350, \
	'_', 480, 'd', 530, 'e', 527, 'f', 525, 'i', 529, '{', \
	276, '}', 278, '~', 384};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map504(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '#', 413, '*', 367, \
	'-', 363, '0', 477, '?', 374, '@', 476, '\\', 41, '_', \
	481};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map505(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '#', 413, '*', 367, \
	'-', 363, '0', 477, '?', 374, '@', 476, '\\', 45, '_', \
	481};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map506(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '#', 413, '*', 367, \
	'-', 363, '0', 477, '?', 374, '@', 476, '\\', 59, '_', \
	481};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL19_H
