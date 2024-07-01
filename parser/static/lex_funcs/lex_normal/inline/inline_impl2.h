/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl2.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL2_H
# define INLINE_IMPL2_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map102(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 291, '"', 360, '#', 400, \
	'$', 358, '&', 323, '\'', 197, '(', 248, ')', 252, ';', \
	490, '<', 266, '>', 270, '\\', 139, '`', 396, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map103(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 292, '"', 360, '#', 400, \
	'$', 358, '&', 323, '\'', 197, '(', 248, ';', 490, '<', \
	266, '>', 270, '\\', 141, '`', 396, 'e', 487, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map104(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 293, '!', 260, '#', 375, \
	'$', 357, '&', 323, '*', 333, '-', 330, '0', 439, ';', \
	490, '<', 266, '>', 270, '?', 342, '@', 435, '\\', 54, \
	'_', 442, '`', 395, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map105(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 294, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 323, '\'', 197, '*', 336, '-', \
	332, '0', 438, ';', 490, '<', 266, '>', 270, '?', 343, \
	'@', 436, '\\', 28, '_', 441, '`', 395, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map106(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 295, '!', 260, '#', 375, \
	'$', 357, '&', 323, '*', 333, '-', 330, '0', 439, ';', \
	490, '<', 266, '>', 270, '?', 342, '@', 435, '\\', 56, \
	'_', 442, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL2_H
