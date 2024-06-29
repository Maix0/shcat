/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl10.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL10_H
# define INLINE_IMPL10_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map244(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 313, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 359, '\'', 219, '(', 271, '*', \
	371, '-', 367, '0', 474, ';', 530, '<', 292, '>', 295, \
	'?', 378, '@', 472, '\\', 19, '_', 477, '`', 430, '|', \
	276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map245(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 314, '"', 395, '#', 435, \
	'$', 393, '&', 359, '\'', 219, '(', 271, ')', 277, ';', \
	530, '<', 292, '>', 295, '\\', 147, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map246(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 321, '!', 285, '#', 410, \
	'$', 392, '&', 359, '*', 368, '-', 365, '0', 475, ';', \
	530, '<', 292, '>', 295, '?', 377, '@', 471, '\\', 55, \
	'_', 478, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map247(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 323, '"', 395, '#', 435, \
	'$', 393, '&', 359, '\'', 219, '(', 271, ')', 277, ';', \
	530, '<', 292, '>', 295, '\\', 153, '`', 431, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map248(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 326, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 359, '\'', 219, '*', 371, '-', \
	367, '0', 474, ';', 530, '<', 292, '>', 295, '?', 378, \
	'@', 472, '\\', 31, '_', 477, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL10_H
