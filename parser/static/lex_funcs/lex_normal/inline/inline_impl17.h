/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl17.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL17_H
# define INLINE_IMPL17_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map455(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 300, '!', 261, '#', 376, \
	'*', 336, '-', 332, '0', 438, '?', 343, '@', 436, '\\', \
	38, '_', 441};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map456(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 301, '!', 261, '#', 376, \
	'*', 336, '-', 332, '0', 438, '?', 343, '@', 436, '\\', \
	93, '_', 441};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map457(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 302, '!', 261, '#', 376, \
	'*', 336, '-', 332, '0', 438, '?', 343, '@', 436, '\\', \
	67, '_', 441};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map458(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 303, '!', 261, '#', 376, \
	'*', 336, '-', 332, '0', 438, '?', 343, '@', 436, '\\', \
	71, '_', 441};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map459(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '#', 376, '%', 339, \
	'*', 334, '+', 351, '-', 349, '/', 337, '0', 437, ':', \
	346, '=', 264, '?', 343, '@', 436, '\\', 115, '^', 320, \
	'_', 440, 'd', 486, 'e', 483, 'f', 481, 'i', 485, '{', \
	255, '}', 257, '~', 353};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL17_H
