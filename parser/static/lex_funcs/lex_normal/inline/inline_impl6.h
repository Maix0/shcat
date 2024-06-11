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

static inline bool	lex_normal_map188(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 410, \
	'$', 393, '&', 218, '\'', 219, '(', 271, '*', 371, '-', \
	367, '0', 474, '<', 292, '>', 295, '?', 378, '@', 472, \
	'\\', 39, '_', 477, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map189(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 410, \
	'$', 393, '&', 218, '\'', 219, '*', 371, '-', 367, '0', \
	474, '<', 292, '>', 295, '?', 378, '@', 472, '\\', 45, \
	'_', 477, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map190(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 435, \
	'$', 393, '&', 225, '\'', 219, '(', 271, ')', 277, ';', \
	223, '<', 290, '>', 295, '\\', 132, '`', 430, '{', 280};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map191(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 435, \
	'$', 393, '&', 225, '\'', 219, '(', 271, ';', 223, '<', \
	290, '>', 295, '\\', 160, '`', 430, 'e', 527, '{', 280};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map192(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 435, \
	'$', 393, '&', 225, '\'', 219, '(', 271, '<', 290, '>', \
	295, '\\', 134, '`', 430, 'e', 524, 'f', 521, '{', 280};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL6_H
