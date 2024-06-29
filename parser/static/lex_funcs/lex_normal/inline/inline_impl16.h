/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl16.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL16_H
# define INLINE_IMPL16_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map466(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 410, \
	'$', 393, '&', 218, '\'', 219, '*', 371, '-', 367, '0', \
	474, '<', 292, '>', 295, '?', 378, '@', 472, '\\', 45, \
	'_', 477, '`', 430, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map467(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 285, '#', 410, '$', 392, \
	'&', 218, '*', 368, '-', 365, '0', 475, '<', 292, '>', \
	295, '?', 377, '@', 471, '\\', 65, '_', 478, '|', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map468(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 285, '#', 410, '$', 392, \
	')', 277, '*', 368, '-', 365, '0', 475, '?', 377, '@', \
	471, '\\', 85, '_', 478, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map469(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 285, '#', 410, '$', 392, \
	'*', 368, '-', 365, '0', 475, '?', 377, '@', 471, '\\', \
	90, '_', 478};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map480(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 310, '!', 286, '#', 411, \
	'*', 371, '-', 367, '0', 474, '?', 378, '@', 472, '\\', \
	12, '_', 477, 'e', 439};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL16_H
