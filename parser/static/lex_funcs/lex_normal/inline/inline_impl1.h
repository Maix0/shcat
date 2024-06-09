/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl1.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL1_H
# define INLINE_IMPL1_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map104(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 310, '"', 391, '#', 437, \
	'$', 389, '&', 355, '\'', 215, '(', 267, '-', 520, '0', \
	403, ';', 535, '<', 288, '>', 291, '\\', 146, '`', 432, \
	'e', 531, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map105(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 311, '"', 391, '#', 437, \
	'$', 389, '&', 355, '\'', 215, '(', 267, ')', 273, '-', \
	520, '0', 403, ';', 535, '<', 288, '>', 291, '\\', 148, \
	'`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map106(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 312, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 355, '\'', 215, '*', 367, '-', \
	363, '0', 477, ';', 535, '<', 288, '>', 291, '?', 374, \
	'@', 476, '\\', 31, '_', 481, '`', 432, 'e', 441, '|', \
	272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map107(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 313, '!', 281, '#', 412, \
	'$', 388, '&', 355, '*', 364, '-', 361, '0', 479, ';', \
	535, '<', 288, '>', 291, '?', 373, '@', 475, '\\', 53, \
	'_', 482, '`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map108(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 314, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 355, '\'', 215, '(', 267, '*', \
	367, '-', 363, '0', 477, ';', 535, '<', 288, '>', 291, \
	'?', 374, '@', 476, '\\', 22, '_', 481, '`', 432, '|', \
	272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL1_H
