/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl2.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL2_H
# define INLINE_IMPL2_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map109(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 315, '"', 391, '#', 437, \
	'$', 389, '&', 355, '\'', 215, '(', 267, '-', 520, '0', \
	403, ';', 535, '<', 288, '>', 291, '\\', 154, '`', 433, \
	'e', 531, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map110(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 316, '"', 391, '#', 437, \
	'$', 389, '&', 214, '\'', 215, '-', 520, '0', 403, '<', \
	286, '>', 291, '\\', 150, '`', 432, '|', 270};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map111(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 317, '!', 281, '#', 412, \
	'$', 388, '&', 355, ')', 273, '*', 364, '-', 361, '0', \
	479, ';', 535, '<', 288, '>', 291, '?', 373, '@', 475, \
	'\\', 55, '_', 482, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map112(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 318, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 355, '\'', 215, ')', 273, '*', \
	367, '-', 363, '0', 477, ';', 535, '<', 288, '>', 291, \
	'?', 374, '@', 476, '\\', 25, '_', 481, '`', 432, '|', \
	272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map113(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 319, '"', 391, '#', 437, \
	'$', 389, '&', 352, '\'', 215, '(', 267, '-', 520, '0', \
	403, ';', 535, '\\', 164, '`', 432, 'e', 531};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL2_H
