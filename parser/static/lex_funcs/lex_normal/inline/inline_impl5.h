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

static inline bool	lex_normal_map166(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 375, \
	'$', 358, '&', 196, '\'', 197, '*', 336, '-', 332, '0', \
	438, '<', 266, '>', 270, '?', 343, '@', 436, '\\', 45, \
	'_', 441, '`', 395, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map167(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 375, \
	'$', 358, '\'', 197, '*', 336, '-', 332, '0', 438, '<', \
	267, '>', 270, '?', 343, '@', 436, '\\', 60, '_', 441, \
	'`', 395};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map168(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 400, \
	'$', 358, '\'', 197, '(', 248, ')', 252, ';', 201, '<', \
	267, '>', 270, '\\', 119, '`', 395, '{', 255};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map169(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 400, \
	'$', 358, '\'', 197, '(', 248, ';', 201, '<', 267, '>', \
	270, '\\', 145, '`', 395, 'e', 487, '{', 255};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map170(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 400, \
	'$', 358, '\'', 197, '(', 248, '<', 267, '>', 270, '\\', \
	121, '`', 395, 'e', 484, 'f', 481, '{', 255};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL5_H
