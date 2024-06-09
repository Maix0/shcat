/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl7.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL7_H
# define INLINE_IMPL7_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map190(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 437, \
	'$', 389, '&', 221, '\'', 215, '(', 267, '-', 520, '0', \
	403, '<', 286, '>', 291, '\\', 138, '`', 432, 'd', 530, \
	'{', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map191(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 437, \
	'$', 389, '&', 221, '\'', 215, '(', 267, '-', 520, '0', \
	403, '<', 286, '>', 291, '\\', 140, '`', 432, '{', 276, \
	'}', 278};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map192(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 437, \
	'$', 389, '&', 221, '\'', 215, '(', 267, '-', 520, '0', \
	403, '<', 286, '>', 291, '\\', 142, '`', 432, 'f', 525, \
	'{', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map193(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 220, '#', 437, '%', 372, \
	'&', 353, ')', 273, '*', 366, '+', 360, '-', 362, '/', \
	369, '<', 289, '=', 284, '>', 292, '?', 373};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map194(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 281, '"', 391, '#', 412, \
	'$', 388, '*', 364, '-', 361, '0', 479, '?', 373, '@', \
	475, '\\', 83, '_', 482};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL7_H
