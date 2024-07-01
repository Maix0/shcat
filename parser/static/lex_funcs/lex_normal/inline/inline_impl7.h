/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl7.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL7_H
# define INLINE_IMPL7_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map178(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 265, '"', 368, '#', 383, \
	'$', 365, '*', 341, '-', 338, '0', 448, '?', 350, '@', \
	444, '\\', 81, '_', 451};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map179(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 265, '"', 368, '#', 408, \
	'$', 367, '&', 199, '(', 251, ')', 202, '+', 360, '-', \
	358, '<', 272, '=', 267, '>', 275};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map180(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 265, '#', 383, '$', 365, \
	'&', 199, '*', 341, '-', 338, '0', 448, '<', 272, '>', \
	275, '?', 350, '@', 444, '\\', 65, '_', 451, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map181(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 265, '#', 383, '$', 365, \
	')', 257, '*', 341, '-', 338, '0', 448, '?', 350, '@', \
	444, '\\', 80, '_', 451, '|', 252};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map182(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 265, '#', 383, '$', 365, \
	'*', 341, '-', 338, '0', 448, '?', 350, '@', 444, '\\', \
	83, '_', 451};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL7_H
