/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl3.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL3_H
# define INLINE_IMPL3_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map107(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 296, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 323, '\'', 197, ')', 252, '*', \
	336, '-', 332, '0', 438, ';', 490, '<', 266, '>', 270, \
	'?', 343, '@', 436, '\\', 31, '_', 441, '`', 395, '|', \
	251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map108(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 297, '!', 260, '#', 375, \
	'$', 357, '&', 196, '*', 333, '-', 330, '0', 439, '<', \
	266, '>', 270, '?', 342, '@', 435, '\\', 63, '_', 442, \
	'|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map109(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 298, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 196, '\'', 197, '(', 248, '*', \
	336, '-', 332, '0', 438, '<', 266, '>', 270, '?', 343, \
	'@', 436, '\\', 36, '_', 441, '`', 395, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map110(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 299, '!', 260, '#', 375, \
	'$', 357, '&', 322, '*', 333, '-', 330, '0', 439, ';', \
	490, '?', 342, '@', 435, '\\', 76, '_', 442, 'i', 408};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map111(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 300, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 196, '\'', 197, '*', 336, '-', \
	332, '0', 438, '<', 266, '>', 270, '?', 343, '@', 436, \
	'\\', 39, '_', 441, '`', 395, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL3_H
