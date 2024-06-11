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

static inline bool	lex_normal_map193(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 435, \
	'$', 393, '&', 225, '\'', 219, '(', 271, '<', 290, '>', \
	295, '\\', 139, '`', 430, 'd', 526, '{', 280};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map194(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 435, \
	'$', 393, '&', 225, '\'', 219, '(', 271, '<', 290, '>', \
	295, '\\', 141, '`', 430, '{', 280, '}', 282};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map195(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 435, \
	'$', 393, '&', 225, '\'', 219, '(', 271, '<', 290, '>', \
	295, '\\', 143, '`', 430, 'f', 521, '{', 280};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map196(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 224, '#', 435, '%', 376, \
	'&', 357, ')', 277, '*', 370, '+', 364, '-', 366, '/', \
	373, '<', 293, '=', 288, '>', 296, '?', 377};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map197(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 285, '"', 395, '#', 410, \
	'$', 392, '*', 368, '-', 365, '0', 475, '?', 377, '@', \
	471, '\\', 83, '_', 478};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL7_H
