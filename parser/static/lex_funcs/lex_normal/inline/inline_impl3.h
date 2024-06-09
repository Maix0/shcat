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

static inline bool	lex_normal_map114(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 320, '"', 391, '#', 437, \
	'$', 389, '&', 355, '\'', 215, '(', 267, ')', 273, '-', \
	520, '0', 403, ';', 535, '<', 288, '>', 291, '\\', 156, \
	'`', 433, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map115(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 321, '!', 281, '#', 412, \
	'$', 388, '&', 355, '*', 364, '-', 361, '0', 479, ';', \
	535, '<', 288, '>', 291, '?', 373, '@', 475, '\\', 57, \
	'_', 482, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map116(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 322, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 355, '\'', 215, '*', 367, '-', \
	363, '0', 477, ';', 535, '<', 288, '>', 291, '?', 374, \
	'@', 476, '\\', 28, '_', 481, '`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map117(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 323, '"', 391, '#', 437, \
	'$', 389, '&', 352, '\'', 215, '-', 520, '0', 403, ';', \
	535, '\\', 168, '`', 432};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map118(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 324, '!', 281, '#', 412, \
	'$', 388, '&', 214, '*', 364, '-', 361, '0', 479, '<', \
	288, '>', 291, '?', 373, '@', 475, '\\', 64, '_', 482, \
	'|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL3_H
