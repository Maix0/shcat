/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl9.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL9_H
# define INLINE_IMPL9_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map178(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 247, '"', 373, '#', 421, \
	'$', 371, '(', 232, ')', 237, '+', 364, '-', 362, '0', \
	390, '=', 249};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map179(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 247, '#', 396, '$', 369, \
	'&', 199, '*', 345, '-', 342, '0', 471, '<', 254, '>', \
	257, '?', 354, '@', 467, '\\', 54, '_', 474, '|', 235};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map180(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 247, '#', 396, '$', 369, \
	')', 237, '*', 345, '-', 342, '0', 471, '?', 354, '@', \
	467, '\\', 71, '_', 474, '|', 233};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map181(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 247, '#', 396, '$', 369, \
	'*', 345, '-', 342, '0', 471, '?', 354, '@', 467, '\\', \
	73, '_', 474};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map182(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 247, '#', 396, '$', 369, \
	'*', 345, '-', 342, '0', 471, '?', 354, '@', 467};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL9_H
