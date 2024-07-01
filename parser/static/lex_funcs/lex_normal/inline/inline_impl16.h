/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl16.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL16_H
# define INLINE_IMPL16_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map448(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 288, '!', 261, '#', 376, \
	'*', 336, '-', 332, '0', 438, '?', 343, '@', 436, '\\', \
	24, '_', 441, 'e', 404};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map449(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 290, '!', 261, '#', 376, \
	'*', 336, '-', 332, '0', 438, '?', 343, '@', 436, '\\', \
	21, '_', 441};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map452(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 294, '!', 261, '#', 376, \
	'*', 336, '-', 332, '0', 438, '?', 343, '@', 436, '\\', \
	27, '_', 441};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map453(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 296, '!', 261, '#', 376, \
	'*', 336, '-', 332, '0', 438, '?', 343, '@', 436, '\\', \
	30, '_', 441};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map454(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 298, '!', 261, '#', 376, \
	'*', 336, '-', 332, '0', 438, '?', 343, '@', 436, '\\', \
	35, '_', 441};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL16_H
