/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl7.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL7_H
# define INLINE_IMPL7_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map176(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 260, '"', 360, '#', 400, \
	'$', 359, '&', 196, '(', 248, ')', 199, '+', 352, '-', \
	350, '<', 266, '=', 262, '>', 270};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map177(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 260, '#', 375, '$', 357, \
	'&', 196, '*', 333, '-', 330, '0', 439, '<', 266, '>', \
	270, '?', 342, '@', 435, '\\', 65, '_', 442, '|', 251};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map178(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 260, '#', 375, '$', 357, \
	')', 252, '*', 333, '-', 330, '0', 439, '?', 342, '@', \
	435, '\\', 81, '_', 442, '|', 249};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map179(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 260, '#', 375, '$', 357, \
	'*', 333, '-', 330, '0', 439, '?', 342, '@', 435, '\\', \
	83, '_', 442};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map180(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 260, '#', 375, '$', 357, \
	'*', 333, '-', 330, '0', 439, '?', 342, '@', 435};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL7_H
