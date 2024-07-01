/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl5.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL5_H
# define INLINE_IMPL5_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map168(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 383, \
	'$', 366, '&', 199, '\'', 200, '(', 251, '*', 344, '-', \
	340, '0', 447, '<', 272, '>', 275, '?', 351, '@', 445, \
	'\\', 42, '_', 450, '`', 403, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map169(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 383, \
	'$', 366, '&', 199, '\'', 200, '*', 344, '-', 340, '0', \
	447, '<', 272, '>', 275, '?', 351, '@', 445, '\\', 45, \
	'_', 450, '`', 403, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map170(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 383, \
	'$', 366, '\'', 200, '*', 344, '-', 340, '0', 447, '<', \
	270, '>', 275, '?', 351, '@', 445, '\\', 60, '_', 450, \
	'`', 403};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map171(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 408, \
	'$', 366, '\'', 200, '(', 251, ')', 257, ';', 204, '<', \
	270, '>', 275, '\\', 122, '`', 403, '{', 260};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map172(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 408, \
	'$', 366, '\'', 200, '(', 251, ';', 204, '<', 270, '>', \
	275, '\\', 148, '`', 403, 'e', 496, '{', 260};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL5_H
