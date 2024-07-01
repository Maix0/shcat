/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl14.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL14_H
# define INLINE_IMPL14_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map426(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 302, '!', 261, '"', 360, \
	'#', 375, '$', 358, '&', 322, '\'', 197, '*', 336, '-', \
	332, '0', 438, ';', 490, '?', 343, '@', 436, '\\', 68, \
	'_', 441, '`', 395};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map427(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 303, '!', 261, '"', 360, \
	'#', 375, '$', 358, '\'', 197, '*', 336, '-', 332, '0', \
	438, '?', 343, '@', 436, '\\', 72, '_', 441, '`', 395};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map428(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 375, \
	'$', 358, '&', 196, '\'', 197, '(', 248, '*', 336, '-', \
	332, '0', 438, '<', 266, '>', 270, '?', 343, '@', 436, \
	'\\', 42, '_', 441, '`', 395, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map429(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 375, \
	'$', 358, '&', 196, '\'', 197, '*', 336, '-', 332, '0', \
	438, '<', 266, '>', 270, '?', 343, '@', 436, '\\', 45, \
	'_', 441, '`', 395, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map430(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 261, '"', 360, '#', 375, \
	'$', 358, '\'', 197, '*', 336, '-', 332, '0', 438, '<', \
	267, '>', 270, '?', 343, '@', 436, '\\', 60, '_', 441, \
	'`', 395};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL14_H
