/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl14.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL14_H
# define INLINE_IMPL14_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map456(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 328, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 218, '\'', 219, '(', 271, '*', \
	371, '-', 367, '0', 474, '<', 292, '>', 295, '?', 378, \
	'@', 472, '\\', 36, '_', 477, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map457(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 329, '!', 285, '#', 410, \
	'$', 392, '&', 218, '*', 368, '-', 365, '0', 475, '<', \
	292, '>', 295, '?', 377, '@', 471, '\\', 63, '_', 478, \
	'|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map458(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 331, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 218, '\'', 219, '*', 371, '-', \
	367, '0', 474, '<', 292, '>', 295, '?', 378, '@', 472, \
	'\\', 42, '_', 477, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map459(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 332, '!', 285, '#', 410, \
	'$', 392, '&', 218, '*', 368, '-', 365, '0', 475, '<', \
	290, '>', 295, '?', 377, '@', 471, '\\', 102, '_', 478, \
	'|', 237};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map460(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 333, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 218, '\'', 219, '*', 371, '-', \
	367, '0', 474, '<', 290, '>', 295, '?', 378, '@', 472, \
	'\\', 99, '_', 477, '`', 430, '|', 237};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL14_H
