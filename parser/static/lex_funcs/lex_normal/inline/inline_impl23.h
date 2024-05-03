/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl23.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL23_H
# define INLINE_IMPL23_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map442(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 506, '#', 862, '%', 650, \
	'&', 600, ')', 499, '*', 639, '+', 631, ',', 556, '-', \
	635, '/', 645, '<', 615, '=', 561, '>', 620};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map443(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 506, '#', 862, '%', 650, \
	'&', 600, ')', 499, '*', 639, '+', 631, '-', 634, '/', \
	645, ':', 762, '<', 615, '=', 562, '>', 620, '?', 760};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map444(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', \
	612, '>', 618, '?', 760, '@', 941, '\\', 108, ']', 675, \
	'_', 948, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map445(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', \
	612, '>', 618, '?', 760, '@', 941, '\\', 114, '_', 948, \
	'|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map446(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', \
	613, '>', 618, '?', 760, '@', 941, '\\', 195, ']', 675, \
	'_', 948, '|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
