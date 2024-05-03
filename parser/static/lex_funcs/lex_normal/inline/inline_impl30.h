/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl30.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL30_H
# define INLINE_IMPL30_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map478(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 863, '$', 781, \
	'\'', 491, '(', 654, '-', 950, '0', 803, '<', 495, '>', \
	496, '\\', 374, '`', 855, '[', 786, ']', 786, '{', 786, \
	'}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map479(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 863, '$', 781, \
	'\'', 491, '(', 494, '-', 950, '0', 803, '<', 495, '>', \
	496, '\\', 376, ']', 675, '`', 855, '[', 786, '{', 786, \
	'}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map481(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'#', 816, '%', 648, '*', 823, \
	'+', 833, ',', 558, '-', 830, '/', 643, ':', 764, '=', \
	826, '?', 836, '@', 821, '[', 673};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map484(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'#', 862, '%', 646, '&', 489, \
	'*', 637, '+', 629, '-', 632, '/', 641, '<', 613, '>', \
	618};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map485(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'#', 862, '&', 508, '(', 654, \
	'<', 611, '>', 618, '[', 674, '\\', 392, '{', 666};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
