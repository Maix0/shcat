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

static inline bool	lex_normal_map188(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 368, '#', 408, '$', 366, \
	'\'', 200, '(', 251, '\\', 153, '`', 403, 'e', 496};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map219(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 288, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, '*', \
	344, '-', 340, '0', 447, ';', 499, '<', 272, '>', 275, \
	'?', 351, '@', 445, '\\', 13, '_', 450, '`', 403, '|', \
	256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map225(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 292, '"', 368, '#', 408, \
	'$', 366, '&', 331, '\'', 200, '(', 251, ')', 257, ';', \
	499, '<', 272, '>', 275, '\\', 137, '`', 403, '|', 254};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map226(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 297, '"', 368, '#', 408, \
	'$', 366, '&', 331, '\'', 200, '(', 251, ')', 257, ';', \
	499, '<', 272, '>', 275, '\\', 142, '`', 404, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map227(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 299, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 331, '\'', 200, '*', 344, '-', \
	340, '0', 447, ';', 499, '<', 272, '>', 275, '?', 351, \
	'@', 445, '\\', 25, '_', 450, '`', 403, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL9_H
