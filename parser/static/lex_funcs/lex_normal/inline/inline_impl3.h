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

static inline bool	lex_normal_map109(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 302, '!', 265, '#', 383, \
	'$', 365, '&', 331, '*', 341, '-', 338, '0', 448, ';', \
	499, '<', 272, '>', 275, '?', 350, '@', 444, '\\', 56, \
	'_', 451, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map110(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 303, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 199, '\'', 200, '(', 251, '*', \
	344, '-', 340, '0', 447, '<', 272, '>', 275, '?', 351, \
	'@', 445, '\\', 36, '_', 450, '`', 403, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map111(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 304, '!', 265, '#', 383, \
	'$', 365, '&', 199, '*', 341, '-', 338, '0', 448, '<', \
	272, '>', 275, '?', 350, '@', 444, '\\', 63, '_', 451, \
	'|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map112(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 305, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 199, '\'', 200, '*', 344, '-', \
	340, '0', 447, '<', 272, '>', 275, '?', 351, '@', 445, \
	'\\', 39, '_', 450, '`', 403, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map113(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 306, '!', 265, '#', 383, \
	'$', 365, '&', 199, '*', 341, '-', 338, '0', 448, '<', \
	270, '>', 275, '?', 350, '@', 444, '\\', 97, '_', 451, \
	'|', 217};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL3_H
