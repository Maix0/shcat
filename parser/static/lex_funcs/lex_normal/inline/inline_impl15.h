/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl15.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL15_H
# define INLINE_IMPL15_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map402(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 670, '"', 788, '#', 816, \
	'$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, '*', \
	638, '+', 630, '-', 633, '/', 644, '0', 943, '<', 607, \
	'=', 560, '>', 616, '?', 761, '@', 942, '\\', 19, ']', \
	675, '^', 596, '_', 947, '`', 855, '|', 592, '[', 786, \
	'{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map403(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 670, '"', 788, '#', 862, \
	'$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, '*', \
	638, '+', 771, '-', 769, '/', 644, '0', 803, '<', 607, \
	'=', 560, '>', 616, '?', 761, '\\', 308, ']', 675, '^', \
	596, '`', 856, '|', 592, '~', 772, '[', 786, '{', 786, \
	'}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map404(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 670, '"', 788, '#', 862, \
	'$', 781, '%', 649, '&', 600, '\'', 491, '(', 654, ')', \
	655, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803, \
	'<', 614, '=', 560, '>', 619, '?', 761, '\\', 311, '^', \
	596, '`', 856, '|', 594, '~', 772, '[', 786, ']', 786, \
	'{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map405(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 670, '"', 788, '#', 862, \
	'$', 781, '%', 649, '&', 600, '\'', 491, '(', 654, ')', \
	499, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803, \
	'<', 614, '=', 560, '>', 619, '?', 761, '\\', 314, '^', \
	596, '`', 856, '|', 594, '~', 772, '[', 786, ']', 786, \
	'{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map406(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 670, '"', 788, '#', 862, \
	'$', 781, '%', 649, '&', 600, '\'', 491, '(', 654, '*', \
	638, '+', 771, '-', 769, '/', 644, '0', 803, ':', 765, \
	'<', 614, '=', 560, '>', 619, '?', 761, '\\', 313, '^', \
	596, '`', 856, '|', 594, '~', 772, '[', 786, ']', 786, \
	'{', 786, '}', 786};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
