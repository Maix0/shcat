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
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 412, \
	'$', 389, '%', 370, '&', 354, '\'', 215, '(', 267, ')', \
	273, '*', 365, '+', 382, '-', 380, '/', 368, '0', 478, \
	':', 376, ';', 535, '<', 287, '=', 420, '>', 290, '?', \
	424, '@', 476, '\\', 128, '^', 350, '_', 480, '`', 433, \
	'd', 530, 'e', 527, 'f', 525, 'i', 529, '{', 276, '|', \
	269, '}', 278, '~', 384};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map5(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 274, '!', 282, '"', 391, \
	'#', 437, '$', 389, '&', 221, '\'', 215, '(', 267, '-', \
	520, '0', 403, '<', 286, '>', 291, '\\', 136, '`', 432, \
	'{', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map10(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 306, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 355, '\'', 215, '(', 267, '*', \
	367, '-', 363, '0', 477, ';', 535, '<', 288, '>', 291, \
	'?', 374, '@', 476, '\\', 13, '_', 481, '`', 432, 'e', \
	441, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map49(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 307, '!', 281, '#', 412, \
	'$', 388, '&', 355, '*', 364, '-', 361, '0', 479, ';', \
	535, '<', 288, '>', 291, '?', 373, '@', 475, '\\', 51, \
	'_', 482, 'e', 447, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map94(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 309, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 355, '\'', 215, '(', 267, ')', \
	273, '*', 367, '-', 363, '0', 477, ';', 535, '<', 288, \
	'>', 291, '?', 374, '@', 476, '\\', 19, '_', 481, '`', \
	432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL0_H
