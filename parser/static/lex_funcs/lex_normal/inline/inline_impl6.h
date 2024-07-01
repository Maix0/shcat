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

static inline bool	lex_normal_map173(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 408, \
	'$', 366, '\'', 200, '(', 251, '<', 270, '>', 275, '\\', \
	124, '`', 403, 'e', 493, 'f', 490, '{', 260};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map174(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 408, \
	'$', 366, '\'', 200, '(', 251, '<', 270, '>', 275, '\\', \
	129, '`', 403, 'd', 495, '{', 260};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map175(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 408, \
	'$', 366, '\'', 200, '(', 251, '<', 270, '>', 275, '\\', \
	131, '`', 403, '{', 260, '}', 262};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map176(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 266, '"', 368, '#', 408, \
	'$', 366, '\'', 200, '(', 251, '<', 270, '>', 275, '\\', \
	133, '`', 403, 'f', 490, '{', 260};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map177(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 205, '#', 408, '%', 349, \
	'&', 332, ')', 257, '*', 343, '+', 337, '-', 339, '/', \
	346, '<', 273, '=', 268, '>', 276, '?', 350};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL6_H
