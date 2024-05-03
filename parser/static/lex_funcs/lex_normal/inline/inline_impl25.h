/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl25.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL25_H
# define INLINE_IMPL25_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map452(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '#', 816, '$', 780, \
	'*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', \
	136, '_', 948};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map453(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '#', 816, '$', 780, \
	'*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', \
	138, '_', 948};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map454(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '#', 816, '$', 784, \
	'*', 637, '-', 632, '0', 945, '?', 760, '@', 941};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map455(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 669, '#', 816, '$', 784, \
	'*', 637, '-', 632, '0', 945, '?', 760, '@', 941};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map456(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 819, '#', 825, '$', 784, \
	'*', 637, '-', 632, '0', 945, '=', 826, '?', 760, '@', \
	941};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif
