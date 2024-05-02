/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl24.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL24_H
# define INLINE_IMPL24_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map447(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', \
	613, '>', 618, '?', 760, '@', 941, '\\', 197, '_', 948, \
	'|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map448(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, ')', 655, '*', 637, '-', 632, '0', 945, '?', \
	760, '@', 941, '\\', 132, '_', 948, '|', 590};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map449(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', \
	941, '\\', 135, '_', 948};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map450(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', \
	941, '\\', 134, '_', 948};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map451(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 862, \
	'$', 785, '&', 489, '(', 653, '+', 771, '-', 769, '0', \
	808, '<', 612, '>', 618};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
