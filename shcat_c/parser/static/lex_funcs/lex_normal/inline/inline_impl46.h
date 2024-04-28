/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl46.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL46_H
# define INLINE_IMPL46_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map936(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', \
	613, '>', 618, '?', 760, '@', 941, '\\', 197, '_', 948, \
	'|', 593};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map937(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, ')', 655, '*', 637, '-', 632, '0', 945, '?', \
	760, '@', 941, '\\', 132, '_', 948, '|', 590};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map938(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, \
	'$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', \
	941, '\\', 134, '_', 948};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map939(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '#', 816, '$', 780, \
	'*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', \
	138, '_', 948};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL46_H
