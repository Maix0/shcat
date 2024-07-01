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

static inline bool	lex_normal_map374(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'!', 265, '#', 383, '$', 365, \
	'*', 341, '-', 338, '0', 448, '?', 350, '@', 444, '\\', \
	83, '_', 451};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map419(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 288, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, '*', \
	344, '-', 340, '0', 447, ';', 499, '<', 272, '>', 275, \
	'?', 351, '@', 445, '\\', 13, '_', 450, '`', 403, '|', \
	256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map420(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 289, '!', 265, '#', 383, \
	'$', 365, '&', 331, ')', 257, '*', 341, '-', 338, '0', \
	448, ';', 499, '<', 272, '>', 275, '?', 350, '@', 444, \
	'\\', 50, '_', 451, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map421(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 291, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, '*', \
	344, '-', 340, '0', 447, ';', 499, '<', 272, '>', 275, \
	'?', 351, '@', 445, '\\', 22, '_', 450, '`', 403, 'e', \
	412, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}

static inline bool	lex_normal_map422(t_lexer *lexer, \
	t_lexer_state *s)
{
	static uint32_t	map[] = {'\n', 294, '!', 266, '"', 368, \
	'#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, ')', \
	257, '*', 344, '-', 340, '0', 447, ';', 499, '<', 272, \
	'>', 275, '?', 351, '@', 445, '\\', 19, '_', 450, '`', \
	403, '|', 256};

	return (advance_map_inner(map, sizeof(map) / sizeof(*map), \
	lexer, s));
}
#endif // INLINE_IMPL11_H
