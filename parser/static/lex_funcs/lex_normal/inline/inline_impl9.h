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

static inline bool	lex_normal_map203(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 285, '#', 410, '$', 392, \
	'*', 368, '-', 365, '0', 475, '?', 377, '@', 471, '\\', \
	90, '_', 478};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map204(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 395, '#', 435, '$', 393, \
	'&', 225, '\'', 219, '(', 271, '<', 290, '>', 295, '\\', \
	145, '`', 430, '{', 280};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map205(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 395, '#', 435, '$', 393, \
	'&', 218, '\'', 219, '(', 271, '<', 292, '>', 295, '\\', \
	155, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map206(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 395, '#', 435, '$', 393, \
	'&', 218, '\'', 219, '(', 271, '<', 292, '>', 295, '\\', \
	162, '`', 431, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map207(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 395, '#', 435, '$', 393, \
	'\'', 219, '(', 271, '\\', 167, '`', 430, 'e', 527};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL9_H
