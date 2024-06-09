/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl9.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL9_H
# define INLINE_IMPL9_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map200(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 281, '#', 412, '$', 388, \
	'*', 364, '-', 361, '0', 479, '?', 373, '@', 475, '\\', \
	90, '_', 482};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map201(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 391, '#', 437, '$', 389, \
	'&', 221, '\'', 215, '(', 267, '-', 520, '0', 403, '<', \
	286, '>', 291, '\\', 144, '`', 432, '{', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map202(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 391, '#', 437, '$', 389, \
	'&', 214, '\'', 215, '(', 267, '-', 520, '0', 403, '<', \
	288, '>', 291, '\\', 152, '`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map203(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 391, '#', 437, '$', 389, \
	'&', 214, '\'', 215, '(', 267, '-', 520, '0', 403, '<', \
	288, '>', 291, '\\', 161, '`', 433, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map204(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 391, '#', 437, '$', 389, \
	'\'', 215, '(', 267, '-', 520, '0', 403, '\\', 166, '`', \
	432, 'e', 531};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL9_H
