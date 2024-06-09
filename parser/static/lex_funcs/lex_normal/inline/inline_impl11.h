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

static inline bool	lex_normal_map244(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 322, '!', 282, '"', 391, \
	'#', 412, '$', 389, '&', 355, '\'', 215, '*', 367, '-', \
	363, '0', 477, ';', 535, '<', 288, '>', 291, '?', 374, \
	'@', 476, '\\', 28, '_', 481, '`', 432, '|', 272};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map248(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 412, \
	'$', 389, '%', 370, '&', 354, '\'', 215, '(', 267, ')', \
	273, '*', 365, '+', 382, '-', 380, '/', 368, '0', 478, \
	':', 377, ';', 535, '<', 287, '=', 285, '>', 290, '?', \
	374, '@', 476, '\\', 128, '^', 350, '_', 480, '`', 433, \
	'd', 530, 'e', 527, 'f', 525, 'i', 529, '{', 276, '|', \
	269, '}', 278, '~', 384};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map249(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 282, '"', 391, '#', 437, \
	'$', 389, '&', 221, '\'', 215, '(', 267, ')', 273, '-', \
	520, '0', 403, ';', 219, '<', 286, '>', 291, '\\', 131, \
	'`', 432, '{', 276};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map250(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 220, '#', 437, '$', 390, \
	'%', 372, '&', 353, ')', 217, '*', 366, '+', 360, '-', \
	362, '/', 369, ':', 375, ';', 219, '<', 289, '=', 284, \
	'>', 292, '?', 373};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map396(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 281, '"', 391, '#', 412, \
	'$', 388, '*', 364, '-', 361, '0', 479, '?', 373, '@', \
	475, '\\', 83, '_', 482};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL11_H
