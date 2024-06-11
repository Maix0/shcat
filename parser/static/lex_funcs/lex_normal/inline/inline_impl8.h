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

static inline bool	lex_normal_map198(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 285, '"', 395, '#', 435, \
	'$', 394, '&', 218, '(', 271, ')', 221, '+', 387, '-', \
	385, '<', 292, '=', 287, '>', 295};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map199(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 285, '#', 410, '$', 392, \
	'&', 218, '*', 368, '-', 365, '0', 475, '<', 292, '>', \
	295, '?', 377, '@', 471, '\\', 65, '_', 478, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map200(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 285, '#', 410, '$', 392, \
	')', 277, '*', 368, '-', 365, '0', 475, '?', 377, '@', \
	471, '\\', 85, '_', 478, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map201(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 285, '#', 410, '$', 392, \
	'*', 368, '-', 365, '0', 475, '?', 377, '@', 471, '\\', \
	88, '_', 478};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map202(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 285, '#', 410, '$', 392, \
	'*', 368, '-', 365, '0', 475, '?', 377, '@', 471};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL8_H
