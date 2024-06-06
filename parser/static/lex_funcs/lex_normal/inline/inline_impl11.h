/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl11.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL11_H
# define INLINE_IMPL11_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map188(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 373, '#', 421, '$', 370, \
	'&', 199, '\'', 201, '(', 232, '-', 476, '0', 385, '<', \
	254, '>', 257, '\\', 153, '`', 417, '|', 235, '[', 372, \
	']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map189(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 373, '#', 421, '$', 370, \
	'&', 199, '\'', 201, '-', 476, '0', 386, '<', 254, '>', \
	257, '\\', 146, '`', 416, '|', 235, '[', 372, ']', 372, \
	'{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map190(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 373, '#', 421, '$', 370, \
	'&', 199, '\'', 201, '-', 476, '0', 386, '<', 254, '>', \
	257, '\\', 154, '`', 417, '|', 235, '[', 372, ']', 372, \
	'{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map191(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 373, '#', 421, '$', 370, \
	'\'', 201, '(', 232, ')', 237, '-', 476, '0', 385, '\\', \
	158, '`', 416, 'e', 480, '|', 233, '[', 372, ']', 372, \
	'{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map192(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 373, '#', 421, '$', 371, \
	'\'', 201, '(', 232, '\\', 164, '`', 416, '{', 242, '}', \
	398};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL11_H
