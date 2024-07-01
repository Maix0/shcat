/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl15.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL15_H
# define INLINE_IMPL15_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map438(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 383, \
	'$', 366, '&', 199, '\'', 200, '*', 344, '-', 340, '0', \
	447, '<', 272, '>', 275, '?', 351, '@', 445, '\\', 45, \
	'_', 450, '`', 403, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map439(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 383, \
	'$', 366, '\'', 200, '*', 344, '-', 340, '0', 447, '<', \
	270, '>', 275, '?', 351, '@', 445, '\\', 60, '_', 450, \
	'`', 403};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map440(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 265, '#', 383, '$', 365, \
	'&', 199, '*', 341, '-', 338, '0', 448, '<', 272, '>', \
	275, '?', 350, '@', 444, '\\', 65, '_', 451, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map441(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 265, '#', 383, '$', 365, \
	')', 257, '*', 341, '-', 338, '0', 448, '?', 350, '@', \
	444, '\\', 80, '_', 451, '|', 252};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map442(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 265, '#', 383, '$', 365, \
	'*', 341, '-', 338, '0', 448, '?', 350, '@', 444, '\\', \
	86, '_', 451};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL15_H
