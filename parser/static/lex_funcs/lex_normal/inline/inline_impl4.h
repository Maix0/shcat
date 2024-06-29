/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl4.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL4_H
# define INLINE_IMPL4_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map120(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 329, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 218, '\'', 219, '(', 271, '*', \
	371, '-', 367, '0', 474, '<', 292, '>', 295, '?', 378, \
	'@', 472, '\\', 36, '_', 477, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map121(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 330, '"', 395, '#', 435, \
	'$', 393, '&', 356, '\'', 219, ';', 530, '\\', 176, '`', \
	431};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map122(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 331, '!', 285, '#', 410, \
	'$', 392, '&', 218, '*', 368, '-', 365, '0', 475, '<', \
	290, '>', 295, '?', 377, '@', 471, '\\', 102, '_', 478, \
	'|', 237};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map123(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 332, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 218, '\'', 219, '*', 371, '-', \
	367, '0', 474, '<', 292, '>', 295, '?', 378, '@', 472, \
	'\\', 39, '_', 477, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map124(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 333, '!', 285, '#', 410, \
	'$', 392, '&', 356, '*', 368, '-', 365, '0', 475, ';', \
	530, '?', 377, '@', 471, '\\', 80, '_', 478, 'i', 443};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL4_H
