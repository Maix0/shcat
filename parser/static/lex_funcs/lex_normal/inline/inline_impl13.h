/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl13.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL13_H
# define INLINE_IMPL13_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map454(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 313, '!', 281, '#', 412, \
	'$', 388, '&', 355, '*', 364, '-', 361, '0', 479, ';', \
	535, '<', 288, '>', 291, '?', 373, '@', 475, '\\', 53, \
	'_', 482, '`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map455(t_lexer *lexer, \
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

static inline bool	lex_normal_map456(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 317, '!', 281, '#', 412, \
	'$', 388, '&', 355, ')', 273, '*', 364, '-', 361, '0', \
	479, ';', 535, '<', 288, '>', 291, '?', 373, '@', 475, \
	'\\', 55, '_', 482, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map457(t_lexer *lexer, \
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

static inline bool	lex_normal_map458(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 321, '!', 281, '#', 412, \
	'$', 388, '&', 355, '*', 364, '-', 361, '0', 479, ';', \
	535, '<', 288, '>', 291, '?', 373, '@', 475, '\\', 57, \
	'_', 482, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL13_H
