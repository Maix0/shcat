/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl0.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL0_H
# define INLINE_IMPL0_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map0(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 410, \
	'$', 393, '%', 374, '&', 358, '\'', 219, '(', 271, ')', \
	277, '*', 369, '+', 386, '-', 384, '/', 372, '0', 473, \
	':', 380, ';', 530, '<', 291, '=', 418, '>', 294, '?', \
	422, '@', 472, '\\', 129, '^', 354, '_', 476, '`', 431, \
	'd', 526, 'e', 523, 'f', 521, 'i', 525, '{', 280, '|', \
	273, '}', 282, '~', 388};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map5(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 278, '!', 286, '"', 395, \
	'#', 435, '$', 393, '&', 225, '\'', 219, '(', 271, '<', \
	290, '>', 295, '\\', 137, '`', 430, '{', 280};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map10(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 310, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 359, '\'', 219, '(', 271, '*', \
	371, '-', 367, '0', 474, ';', 530, '<', 292, '>', 295, \
	'?', 378, '@', 472, '\\', 13, '_', 477, '`', 430, '|', \
	276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map49(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 311, '!', 285, '#', 410, \
	'$', 392, '&', 359, '*', 368, '-', 365, '0', 475, ';', \
	530, '<', 292, '>', 295, '?', 377, '@', 471, '\\', 51, \
	'_', 478, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map94(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 313, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 359, '\'', 219, '(', 271, '*', \
	371, '-', 367, '0', 474, ';', 530, '<', 292, '>', 295, \
	'?', 378, '@', 472, '\\', 22, '_', 477, '`', 430, 'e', \
	439, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL0_H
