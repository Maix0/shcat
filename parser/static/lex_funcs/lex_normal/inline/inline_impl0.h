/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl0.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL0_H
# define INLINE_IMPL0_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map0(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 383, \
	'$', 366, '%', 347, '&', 332, '\'', 200, '(', 251, ')', \
	257, '*', 342, '+', 359, '-', 357, '/', 345, '0', 446, \
	':', 353, ';', 499, '<', 271, '=', 391, '>', 274, '?', \
	395, '@', 445, '\\', 119, '^', 328, '_', 449, '`', 404, \
	'd', 495, 'e', 492, 'f', 490, 'i', 494, '{', 260, '|', \
	253, '}', 262, '~', 361};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map5(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 258, '!', 266, '"', 368, \
	'#', 408, '$', 366, '\'', 200, '(', 251, '<', 270, '>', \
	275, '\\', 127, '`', 403, '{', 260};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map10(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 288, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, '*', \
	344, '-', 340, '0', 447, ';', 499, '<', 272, '>', 275, \
	'?', 351, '@', 445, '\\', 13, '_', 450, '`', 403, '|', \
	256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map48(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 289, '!', 265, '#', 383, \
	'$', 365, '&', 331, ')', 257, '*', 341, '-', 338, '0', \
	448, ';', 499, '<', 272, '>', 275, '?', 350, '@', 444, \
	'\\', 50, '_', 451, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map89(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 291, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, '*', \
	344, '-', 340, '0', 447, ';', 499, '<', 272, '>', 275, \
	'?', 351, '@', 445, '\\', 22, '_', 450, '`', 403, 'e', \
	412, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL0_H
