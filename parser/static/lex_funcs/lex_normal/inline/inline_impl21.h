/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl21.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL21_H
# define INLINE_IMPL21_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map432(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 671, '"', 788, '#', 816, \
	'$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', \
	634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, \
	'?', 760, '@', 941, '\\', 69, '^', 597, '_', 948, '|', \
	594};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map433(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 506, '"', 788, '#', 862, \
	'$', 785, '%', 650, '&', 600, ')', 499, '*', 639, '+', \
	631, ',', 556, '-', 634, '.', 503, '/', 645, ':', 762, \
	';', 490, '<', 615, '=', 562, '>', 620, '?', 760, '[', \
	673};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map434(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 506, '"', 788, '#', 862, \
	'$', 785, '%', 650, '&', 600, ')', 499, '*', 639, '+', \
	631, ',', 556, '-', 634, '/', 645, ':', 762, ';', 490, \
	'<', 615, '=', 562, '>', 620, '?', 760, '[', 673};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map435(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 506, '"', 788, '#', 862, \
	'$', 498, '%', 650, '&', 600, '(', 494, ')', 655, '*', \
	639, '+', 631, ',', 556, '-', 634, '/', 645, '<', 615, \
	'=', 562, '>', 620, '?', 760};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map436(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 506, '#', 862, '%', 650, \
	'&', 600, ')', 655, '*', 639, '+', 631, ',', 556, '-', \
	635, '/', 645, '<', 615, '=', 561, '>', 620};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
