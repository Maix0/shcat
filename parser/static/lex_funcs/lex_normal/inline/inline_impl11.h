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

static inline bool	lex_normal_map252(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 410, \
	'$', 393, '%', 374, '&', 358, '\'', 219, '(', 271, ')', \
	277, '*', 369, '+', 386, '-', 384, '/', 372, '0', 473, \
	':', 381, ';', 530, '<', 291, '=', 289, '>', 294, '?', \
	378, '@', 472, '\\', 129, '^', 354, '_', 476, '`', 431, \
	'd', 526, 'e', 523, 'f', 521, 'i', 525, '{', 280, '|', \
	273, '}', 282, '~', 388};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map253(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 286, '"', 395, '#', 435, \
	'$', 393, '&', 225, '\'', 219, '(', 271, ')', 277, ';', \
	223, '<', 290, '>', 295, '\\', 132, '`', 430, '{', 280};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map254(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 224, '#', 435, '$', 394, \
	'%', 376, '&', 357, ')', 221, '*', 370, '+', 364, '-', \
	366, '/', 373, ':', 379, ';', 223, '<', 293, '=', 288, \
	'>', 296, '?', 377};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map400(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 285, '"', 395, '#', 410, \
	'$', 392, '*', 368, '-', 365, '0', 475, '?', 377, '@', \
	471, '\\', 83, '_', 478};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map401(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 285, '#', 410, '$', 392, \
	'*', 368, '-', 365, '0', 475, '?', 377, '@', 471, '\\', \
	88, '_', 478};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL11_H
