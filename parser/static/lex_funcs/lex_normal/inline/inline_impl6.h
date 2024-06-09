/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl6.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL6_H
# define INLINE_IMPL6_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map185(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 412, \
	'$', 389, '&', 214, '\'', 215, '(', 267, '*', 367, '-', \
	363, '0', 477, '<', 288, '>', 291, '?', 374, '@', 476, \
	'\\', 42, '_', 481, '`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map186(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 412, \
	'$', 389, '&', 214, '\'', 215, '*', 367, '-', 363, '0', \
	477, '<', 288, '>', 291, '?', 374, '@', 476, '\\', 46, \
	'_', 481, '`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map187(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 437, \
	'$', 389, '&', 221, '\'', 215, '(', 267, ')', 273, '-', \
	520, '0', 403, ';', 219, '<', 286, '>', 291, '\\', 131, \
	'`', 432, '{', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map188(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 437, \
	'$', 389, '&', 221, '\'', 215, '(', 267, '-', 520, '0', \
	403, ';', 219, '<', 286, '>', 291, '\\', 159, '`', 432, \
	'e', 531, '{', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map189(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 437, \
	'$', 389, '&', 221, '\'', 215, '(', 267, '-', 520, '0', \
	403, '<', 286, '>', 291, '\\', 133, '`', 432, 'e', 528, \
	'f', 525, '{', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL6_H
