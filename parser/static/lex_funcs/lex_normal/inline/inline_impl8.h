/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl8.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL8_H
# define INLINE_IMPL8_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map181(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 260, '#', 375, '$', 357, \
	'*', 333, '-', 330, '0', 439, '?', 342, '@', 435, '\\', \
	86, '_', 442};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map182(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 360, '#', 400, '$', 358, \
	'&', 196, '\'', 197, '(', 248, '<', 266, '>', 270, '\\', \
	143, '`', 395, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map183(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 360, '#', 400, '$', 358, \
	'&', 196, '\'', 197, '(', 248, '<', 266, '>', 270, '\\', \
	148, '`', 396, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map184(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 360, '#', 400, '$', 358, \
	'\'', 197, '(', 248, '<', 267, '>', 270, '\\', 132, '`', \
	395, '{', 255};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map185(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 360, '#', 400, '$', 358, \
	'\'', 197, '(', 248, '\\', 150, '`', 395, 'e', 487};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL8_H
