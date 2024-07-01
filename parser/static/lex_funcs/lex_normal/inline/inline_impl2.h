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

static inline bool	lex_normal_map104(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 297, '"', 368, '#', 408, \
	'$', 366, '&', 331, '\'', 200, '(', 251, ')', 257, ';', \
	499, '<', 272, '>', 275, '\\', 142, '`', 404, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map105(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 298, '"', 368, '#', 408, \
	'$', 366, '&', 331, '\'', 200, '(', 251, ';', 499, '<', \
	272, '>', 275, '\\', 146, '`', 404, 'e', 496, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map106(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 299, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 331, '\'', 200, '*', 344, '-', \
	340, '0', 447, ';', 499, '<', 272, '>', 275, '?', 351, \
	'@', 445, '\\', 25, '_', 450, '`', 403, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map107(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 300, '!', 265, '#', 383, \
	'$', 365, '&', 331, '*', 341, '-', 338, '0', 448, ';', \
	499, '<', 272, '>', 275, '?', 350, '@', 444, '\\', 54, \
	'_', 451, '`', 403, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map108(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 301, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 331, '\'', 200, ')', 257, '*', \
	344, '-', 340, '0', 447, ';', 499, '<', 272, '>', 275, \
	'?', 351, '@', 445, '\\', 31, '_', 450, '`', 403, '|', \
	256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL2_H
