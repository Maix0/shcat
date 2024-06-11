/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl15.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL15_H
# define INLINE_IMPL15_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map461(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 334, '!', 285, '#', 410, \
	'$', 392, '&', 356, '*', 368, '-', 365, '0', 475, ';', \
	530, '?', 377, '@', 471, '\\', 80, '_', 478, 'i', 443};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map462(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 335, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 356, '\'', 219, '*', 371, '-', \
	367, '0', 474, ';', 530, '?', 378, '@', 472, '\\', 71, \
	'_', 477, '`', 430};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map463(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 336, '!', 286, '"', 395, \
	'#', 410, '$', 393, '\'', 219, '*', 371, '-', 367, '0', \
	474, '?', 378, '@', 472, '\\', 75, '_', 477, '`', 430};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map464(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 410, \
	'$', 393, '&', 225, '\'', 219, '*', 371, '-', 367, '0', \
	474, '<', 290, '>', 295, '?', 378, '@', 472, '\\', 61, \
	'_', 477, '`', 430};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map465(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 410, \
	'$', 393, '&', 218, '\'', 219, '(', 271, '*', 371, '-', \
	367, '0', 474, '<', 292, '>', 295, '?', 378, '@', 472, \
	'\\', 39, '_', 477, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL15_H
