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

static inline bool	lex_normal_map124(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 330, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 214, '\'', 215, '*', 367, '-', \
	363, '0', 477, '<', 286, '>', 291, '?', 374, '@', 476, \
	'\\', 99, '_', 481, '`', 432, '|', 233};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map125(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 331, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 352, '\'', 215, '*', 367, '-', \
	363, '0', 477, ';', 535, '?', 374, '@', 476, '\\', 71, \
	'_', 481, '`', 432};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map126(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 332, '!', 282, '"', 391, \
	'#', 412, '$', 389, '\'', 215, '*', 367, '-', 363, '0', \
	477, '?', 374, '@', 476, '\\', 76, '_', 481, '`', 432};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map183(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 412, \
	'$', 389, '%', 370, '&', 354, '\'', 215, '(', 267, ')', \
	273, '*', 365, '+', 382, '-', 380, '/', 368, '0', 478, \
	':', 377, ';', 535, '<', 287, '=', 285, '>', 290, '?', \
	374, '@', 476, '\\', 128, '^', 350, '_', 480, '`', 433, \
	'd', 530, 'e', 527, 'f', 525, 'i', 529, '{', 276, '|', \
	269, '}', 278, '~', 384};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map184(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 412, \
	'$', 389, '&', 221, '\'', 215, '*', 367, '-', 363, '0', \
	477, '<', 286, '>', 291, '?', 374, '@', 476, '\\', 60, \
	'_', 481, '`', 432};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL5_H
