/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl12.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL12_H
# define INLINE_IMPL12_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map446(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 310, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 359, '\'', 219, '(', 271, '*', \
	371, '-', 367, '0', 474, ';', 530, '<', 292, '>', 295, \
	'?', 378, '@', 472, '\\', 13, '_', 477, '`', 430, 'e', \
	439, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map447(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 311, '!', 285, '#', 410, \
	'$', 392, '&', 359, ')', 277, '*', 368, '-', 365, '0', \
	475, ';', 530, '<', 292, '>', 295, '?', 377, '@', 471, \
	'\\', 50, '_', 478, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map448(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 313, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 359, '\'', 219, '(', 271, '*', \
	371, '-', 367, '0', 474, ';', 530, '<', 292, '>', 295, \
	'?', 378, '@', 472, '\\', 19, '_', 477, '`', 430, '|', \
	276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map449(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 316, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 359, '\'', 219, '*', 371, '-', \
	367, '0', 474, ';', 530, '<', 292, '>', 295, '?', 378, \
	'@', 472, '\\', 25, '_', 477, '`', 430, 'e', 439, '|', \
	276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map450(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 317, '!', 285, '#', 410, \
	'$', 392, '&', 359, '*', 368, '-', 365, '0', 475, ';', \
	530, '<', 292, '>', 295, '?', 377, '@', 471, '\\', 53, \
	'_', 478, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL12_H
