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

static inline bool	lex_normal_map469(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 412, \
	'$', 389, '&', 214, '\'', 215, '(', 267, '*', 367, '-', \
	363, '0', 477, '<', 288, '>', 291, '?', 374, '@', 476, \
	'\\', 42, '_', 481, '`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map470(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 412, \
	'$', 389, '&', 214, '\'', 215, '*', 367, '-', 363, '0', \
	477, '<', 288, '>', 291, '?', 374, '@', 476, '\\', 46, \
	'_', 481, '`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map471(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 281, '#', 412, '$', 388, \
	'&', 214, '*', 364, '-', 361, '0', 479, '<', 288, '>', \
	291, '?', 373, '@', 475, '\\', 66, '_', 482, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map472(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 281, '#', 412, '$', 388, \
	')', 273, '*', 364, '-', 361, '0', 479, '?', 373, '@', \
	475, '\\', 85, '_', 482, '|', 268};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map473(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 281, '#', 412, '$', 388, \
	'*', 364, '-', 361, '0', 479, '?', 373, '@', 475, '\\', \
	90, '_', 482};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL16_H
