/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl1.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL1_H
# define INLINE_IMPL1_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map99(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 292, '"', 368, '#', 408, \
	'$', 366, '&', 331, '\'', 200, '(', 251, ')', 257, ';', \
	499, '<', 272, '>', 275, '\\', 137, '`', 403, '|', 254};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map100(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 293, '"', 368, '#', 408, \
	'$', 366, '&', 331, '\'', 200, '(', 251, ';', 499, '<', \
	272, '>', 275, '\\', 139, '`', 403, 'e', 496, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map101(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 294, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, ')', \
	257, '*', 344, '-', 340, '0', 447, ';', 499, '<', 272, \
	'>', 275, '?', 351, '@', 445, '\\', 19, '_', 450, '`', \
	403, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map102(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 295, '!', 265, '#', 383, \
	'$', 365, '&', 331, '*', 341, '-', 338, '0', 448, ';', \
	499, '<', 272, '>', 275, '?', 350, '@', 444, '\\', 52, \
	'_', 451, 'e', 417, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map103(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 296, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 331, '\'', 200, '*', 344, '-', \
	340, '0', 447, ';', 499, '<', 272, '>', 275, '?', 351, \
	'@', 445, '\\', 28, '_', 450, '`', 403, 'e', 412, '|', \
	256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL1_H
