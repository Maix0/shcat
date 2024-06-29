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

static inline bool	lex_normal_map110(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 319, '"', 395, '#', 435, \
	'$', 393, '&', 218, '\'', 219, '<', 290, '>', 295, '\\', \
	151, '`', 430, '|', 274};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map111(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 320, '"', 395, '#', 435, \
	'$', 393, '&', 359, '\'', 219, '(', 271, ';', 530, '<', \
	292, '>', 295, '\\', 157, '`', 431, 'e', 527, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map112(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 321, '!', 285, '#', 410, \
	'$', 392, '&', 359, '*', 368, '-', 365, '0', 475, ';', \
	530, '<', 292, '>', 295, '?', 377, '@', 471, '\\', 55, \
	'_', 478, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map113(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 322, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 359, '\'', 219, ')', 277, '*', \
	371, '-', 367, '0', 474, ';', 530, '<', 292, '>', 295, \
	'?', 378, '@', 472, '\\', 28, '_', 477, '`', 430, '|', \
	276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map114(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 323, '"', 395, '#', 435, \
	'$', 393, '&', 359, '\'', 219, '(', 271, ')', 277, ';', \
	530, '<', 292, '>', 295, '\\', 153, '`', 431, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL2_H
