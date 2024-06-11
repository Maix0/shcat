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

static inline bool	lex_normal_map499(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '#', 411, '%', 374, \
	'*', 369, '+', 386, '-', 384, '/', 372, '0', 473, ':', \
	381, '=', 289, '?', 378, '@', 472, '\\', 128, '^', 354, \
	'_', 476, 'd', 526, 'e', 523, 'f', 521, 'i', 525, '{', \
	280, '}', 282, '~', 388};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map500(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '#', 411, '*', 371, \
	'-', 367, '0', 474, '?', 378, '@', 472, '\\', 38, '_', \
	477};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map501(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '#', 411, '*', 371, \
	'-', 367, '0', 474, '?', 378, '@', 472, '\\', 44, '_', \
	477};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map502(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '#', 411, '*', 371, \
	'-', 367, '0', 474, '?', 378, '@', 472, '\\', 60, '_', \
	477};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL19_H
