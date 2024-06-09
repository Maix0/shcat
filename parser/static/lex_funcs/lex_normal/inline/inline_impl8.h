/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl8.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL8_H
# define INLINE_IMPL8_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map195(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 281, '"', 391, '#', 437, \
	'$', 390, '&', 214, '(', 267, ')', 217, '+', 383, '-', \
	381, '0', 406, '<', 288, '=', 283, '>', 291};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map196(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 281, '#', 412, '$', 388, \
	'&', 214, '*', 364, '-', 361, '0', 479, '<', 288, '>', \
	291, '?', 373, '@', 475, '\\', 66, '_', 482, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map197(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 281, '#', 412, '$', 388, \
	')', 273, '*', 364, '-', 361, '0', 479, '?', 373, '@', \
	475, '\\', 85, '_', 482, '|', 268};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map198(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 281, '#', 412, '$', 388, \
	'*', 364, '-', 361, '0', 479, '?', 373, '@', 475, '\\', \
	88, '_', 482};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map199(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 281, '#', 412, '$', 388, \
	'*', 364, '-', 361, '0', 479, '?', 373, '@', 475};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL8_H
