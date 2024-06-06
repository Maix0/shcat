/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl19.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL19_H
# define INLINE_IMPL19_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map462(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 248, '"', 373, '#', 396, \
	'$', 370, '&', 206, '\'', 201, '*', 348, '-', 344, '0', \
	469, '<', 252, '>', 257, '?', 355, '@', 468, '\\', 38, \
	'_', 473, '`', 416};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map463(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 247, '#', 396, '$', 369, \
	'&', 199, '*', 345, '-', 342, '0', 471, '<', 254, '>', \
	257, '?', 354, '@', 467, '\\', 54, '_', 474, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map464(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 247, '#', 396, '$', 369, \
	')', 237, '*', 345, '-', 342, '0', 471, '?', 354, '@', \
	467, '\\', 71, '_', 474, '|', 233};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map465(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 247, '#', 396, '$', 369, \
	'*', 345, '-', 342, '0', 471, '?', 354, '@', 467, '\\', \
	75, '_', 474};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL19_H
