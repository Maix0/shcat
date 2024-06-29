/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl3.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL3_H
# define INLINE_IMPL3_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map115(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 324, '"', 395, '#', 435, \
	'$', 393, '&', 356, '\'', 219, '(', 271, ';', 530, '\\', \
	165, '`', 430, 'e', 527};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map116(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 325, '!', 285, '#', 410, \
	'$', 392, '&', 359, '*', 368, '-', 365, '0', 475, ';', \
	530, '<', 292, '>', 295, '?', 377, '@', 471, '\\', 57, \
	'_', 478, 'e', 444, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map117(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 326, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 359, '\'', 219, '*', 371, '-', \
	367, '0', 474, ';', 530, '<', 292, '>', 295, '?', 378, \
	'@', 472, '\\', 31, '_', 477, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map118(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 327, '"', 395, '#', 435, \
	'$', 393, '&', 356, '\'', 219, ';', 530, '\\', 169, '`', \
	430};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map119(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 328, '!', 285, '#', 410, \
	'$', 392, '&', 218, '*', 368, '-', 365, '0', 475, '<', \
	292, '>', 295, '?', 377, '@', 471, '\\', 63, '_', 478, \
	'|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL3_H
