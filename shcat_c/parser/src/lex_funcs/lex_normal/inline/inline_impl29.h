/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl29.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL29_H
# define INLINE_IMPL29_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map472(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'\'', 491, '(', 654, '-', 950, '0', 803, '<', 495, '>', \
	496, '\\', 366, '`', 855, 'e', 956, '[', 786, ']', 786, \
	'{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map473(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, \
	'\'', 491, '(', 654, '-', 950, '0', 803, '<', 495, '>', \
	496, '\\', 373, '`', 855, '}', 818, '[', 786, ']', 786, \
	'{', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map474(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 785, \
	'&', 489, '(', 653, ')', 499, '+', 501, '-', 502, '0', \
	809, '<', 613, '=', 559, '>', 618};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map475(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 782, \
	'\'', 491, '(', 653, ')', 655, ';', 553, '<', 495, '>', \
	496, '\\', 389, '`', 855, '{', 666, '|', 590, '}', 818};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map476(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 497, \
	'%', 646, '*', 637, '+', 629, '-', 632, '/', 641, ':', \
	762};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL29_H
