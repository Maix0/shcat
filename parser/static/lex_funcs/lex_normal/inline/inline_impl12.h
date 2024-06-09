/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl12.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL12_H
# define INLINE_IMPL12_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map397(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 281, '#', 412, '$', 388, \
	'*', 364, '-', 361, '0', 479, '?', 373, '@', 475, '\\', \
	88, '_', 482};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map450(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 306, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 355, '\'', 215, '(', 267, '*', \
	367, '-', 363, '0', 477, ';', 535, '<', 288, '>', 291, \
	'?', 374, '@', 476, '\\', 13, '_', 481, '`', 432, 'e', \
	441, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map451(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 307, '!', 281, '#', 412, \
	'$', 388, '&', 355, '*', 364, '-', 361, '0', 479, ';', \
	535, '<', 288, '>', 291, '?', 373, '@', 475, '\\', 51, \
	'_', 482, 'e', 447, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map452(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 309, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 355, '\'', 215, '(', 267, ')', \
	273, '*', 367, '-', 363, '0', 477, ';', 535, '<', 288, \
	'>', 291, '?', 374, '@', 476, '\\', 19, '_', 481, '`', \
	432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map453(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 312, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 355, '\'', 215, '*', 367, '-', \
	363, '0', 477, ';', 535, '<', 288, '>', 291, '?', 374, \
	'@', 476, '\\', 31, '_', 481, '`', 432, 'e', 441, '|', \
	272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL12_H
