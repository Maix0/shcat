/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl8.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL8_H
# define INLINE_IMPL8_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map183(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 265, '#', 383, '$', 365, \
	'*', 341, '-', 338, '0', 448, '?', 350, '@', 444};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map184(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 265, '#', 383, '$', 365, \
	'*', 341, '-', 338, '0', 448, '?', 350, '@', 444, '\\', \
	86, '_', 451};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map185(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 368, '#', 408, '$', 366, \
	'&', 199, '\'', 200, '(', 251, '<', 272, '>', 275, '\\', \
	144, '`', 403, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map186(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 368, '#', 408, '$', 366, \
	'&', 199, '\'', 200, '(', 251, '<', 272, '>', 275, '\\', \
	150, '`', 404, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map187(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 368, '#', 408, '$', 366, \
	'\'', 200, '(', 251, '<', 270, '>', 275, '\\', 135, '`', \
	403, '{', 260};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL8_H
