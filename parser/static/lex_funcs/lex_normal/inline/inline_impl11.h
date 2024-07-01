/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl11.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL11_H
# define INLINE_IMPL11_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map411(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 282, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 323, '\'', 197, '(', 248, '*', \
	336, '-', 332, '0', 438, ';', 490, '<', 266, '>', 270, \
	'?', 343, '@', 436, '\\', 13, '_', 441, '`', 395, 'e', \
	404, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map412(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 283, '!', 260, '#', 375, \
	'$', 357, '&', 323, ')', 252, '*', 333, '-', 330, '0', \
	439, ';', 490, '<', 266, '>', 270, '?', 342, '@', 435, \
	'\\', 50, '_', 442, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map413(t_lexer *lexer, \
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

static inline bool	lex_normal_map414(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 288, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 323, '\'', 197, '*', 336, '-', \
	332, '0', 438, ';', 490, '<', 266, '>', 270, '?', 343, \
	'@', 436, '\\', 25, '_', 441, '`', 395, 'e', 404, '|', \
	251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map415(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 289, '!', 260, '#', 375, \
	'$', 357, '&', 323, '*', 333, '-', 330, '0', 439, ';', \
	490, '<', 266, '>', 270, '?', 342, '@', 435, '\\', 52, \
	'_', 442, 'e', 409, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL11_H
