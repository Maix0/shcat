/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl9.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL9_H
# define INLINE_IMPL9_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map221(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 285, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 323, '\'', 197, '(', 248, '*', \
	336, '-', 332, '0', 438, ';', 490, '<', 266, '>', 270, \
	'?', 343, '@', 436, '\\', 19, '_', 441, '`', 395, '|', \
	251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map222(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 286, '"', 360, '#', 400, \
	'$', 358, '&', 323, '\'', 197, '(', 248, ')', 252, ';', \
	490, '<', 266, '>', 270, '\\', 134, '`', 395, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map223(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 291, '"', 360, '#', 400, \
	'$', 358, '&', 323, '\'', 197, '(', 248, ')', 252, ';', \
	490, '<', 266, '>', 270, '\\', 139, '`', 396, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map224(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 294, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 323, '\'', 197, '*', 336, '-', \
	332, '0', 438, ';', 490, '<', 266, '>', 270, '?', 343, \
	'@', 436, '\\', 28, '_', 441, '`', 395, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map225(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 295, '!', 260, '#', 375, \
	'$', 357, '&', 323, '*', 333, '-', 330, '0', 439, ';', \
	490, '<', 266, '>', 270, '?', 342, '@', 435, '\\', 56, \
	'_', 442, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL9_H
