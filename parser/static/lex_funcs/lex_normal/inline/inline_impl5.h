/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl5.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL5_H
# define INLINE_IMPL5_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map125(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 334, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 218, '\'', 219, '*', 371, '-', \
	367, '0', 474, '<', 290, '>', 295, '?', 378, '@', 472, \
	'\\', 99, '_', 477, '`', 430, '|', 237};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map126(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 335, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 356, '\'', 219, '*', 371, '-', \
	367, '0', 474, ';', 530, '?', 378, '@', 472, '\\', 71, \
	'_', 477, '`', 430};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map127(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 336, '!', 286, '"', 395, \
	'#', 410, '$', 393, '\'', 219, '*', 371, '-', 367, '0', \
	474, '?', 378, '@', 472, '\\', 76, '_', 477, '`', 430};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map186(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 410, \
	'$', 393, '%', 374, '&', 358, '\'', 219, '(', 271, ')', \
	277, '*', 369, '+', 386, '-', 384, '/', 372, '0', 473, \
	':', 381, ';', 530, '<', 291, '=', 289, '>', 294, '?', \
	378, '@', 472, '\\', 129, '^', 354, '_', 476, '`', 431, \
	'd', 526, 'e', 523, 'f', 521, 'i', 525, '{', 280, '|', \
	273, '}', 282, '~', 388};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map187(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 410, \
	'$', 393, '&', 225, '\'', 219, '*', 371, '-', 367, '0', \
	474, '<', 290, '>', 295, '?', 378, '@', 472, '\\', 61, \
	'_', 477, '`', 430};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL5_H
