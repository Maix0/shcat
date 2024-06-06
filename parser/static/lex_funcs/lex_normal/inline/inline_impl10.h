/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_impl10.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INLINE_IMPL10_H
# define INLINE_IMPL10_H

# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../../parse_types.h"

static inline bool	lex_normal_map183(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 247, '#', 396, '$', 369, \
	'*', 345, '-', 342, '0', 471, '?', 354, '@', 467, '\\', \
	75, '_', 474};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map184(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 205, '#', 421, '$', 371, \
	'%', 353, '&', 334, ')', 202, '*', 347, '+', 341, ',', \
	310, '-', 343, '.', 204, '/', 350, ':', 356, ';', 200, \
	'<', 255, '=', 250, '>', 258, '?', 354};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map185(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 205, '#', 421, '$', 371, \
	'%', 353, '&', 334, ')', 202, '*', 347, '+', 341, ',', \
	310, '-', 343, '/', 350, ':', 356, ';', 200, '<', 255, \
	'=', 250, '>', 258, '?', 354};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map186(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 205, '#', 421, '%', 353, \
	'&', 334, ')', 237, '*', 347, '+', 341, '-', 343, '/', \
	350, '<', 255, '=', 250, '>', 258, '?', 354};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map187(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'"', 373, '#', 421, '$', 370, \
	'&', 199, '\'', 201, '(', 232, '-', 476, '0', 385, '<', \
	254, '>', 257, '\\', 145, '`', 416, '|', 235, '[', 372, \
	']', 372, '{', 372, '}', 372};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL10_H
