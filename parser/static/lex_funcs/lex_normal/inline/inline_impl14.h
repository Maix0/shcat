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

static inline bool	lex_normal_map459(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 322, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 355, '\'', 215, '*', 367, '-', \
	363, '0', 477, ';', 535, '<', 288, '>', 291, '?', 374, \
	'@', 476, '\\', 28, '_', 481, '`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map460(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 324, '!', 281, '#', 412, \
	'$', 388, '&', 214, '*', 364, '-', 361, '0', 479, '<', \
	288, '>', 291, '?', 373, '@', 475, '\\', 64, '_', 482, \
	'|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map461(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 325, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 214, '\'', 215, '(', 267, '*', \
	367, '-', 363, '0', 477, '<', 288, '>', 291, '?', 374, \
	'@', 476, '\\', 36, '_', 481, '`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map462(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 327, '!', 281, '#', 412, \
	'$', 388, '&', 214, '*', 364, '-', 361, '0', 479, '<', \
	286, '>', 291, '?', 373, '@', 475, '\\', 102, '_', 482, \
	'|', 233};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map463(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 328, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 214, '\'', 215, '*', 367, '-', \
	363, '0', 477, '<', 288, '>', 291, '?', 374, '@', 476, \
	'\\', 39, '_', 481, '`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL14_H
