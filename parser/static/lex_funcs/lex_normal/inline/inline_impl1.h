/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl1.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL1_H
# define INLINE_IMPL1_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map105(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 314, '"', 395, '#', 435, \
	'$', 393, '&', 359, '\'', 219, '(', 271, ')', 277, ';', \
	530, '<', 292, '>', 295, '\\', 147, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map106(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 315, '"', 395, '#', 435, \
	'$', 393, '&', 359, '\'', 219, '(', 271, ';', 530, '<', \
	292, '>', 295, '\\', 149, '`', 430, 'e', 527, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map107(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 316, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 359, '\'', 219, '*', 371, '-', \
	367, '0', 474, ';', 530, '<', 292, '>', 295, '?', 378, \
	'@', 472, '\\', 25, '_', 477, '`', 430, 'e', 439, '|', \
	276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map108(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 317, '!', 285, '#', 410, \
	'$', 392, '&', 359, '*', 368, '-', 365, '0', 475, ';', \
	530, '<', 292, '>', 295, '?', 377, '@', 471, '\\', 53, \
	'_', 478, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map109(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 318, '!', 286, '"', 395, \
	'#', 410, '$', 393, '&', 359, '\'', 219, '(', 271, ')', \
	277, '*', 371, '-', 367, '0', 474, ';', 530, '<', 292, \
	'>', 295, '?', 378, '@', 472, '\\', 22, '_', 477, '`', \
	430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL1_H
