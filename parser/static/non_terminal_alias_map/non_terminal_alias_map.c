/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   non_terminal_alias_map.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_non_terminal_alias_map.h"
#include "../headers/symbols.h"
#include "../headers/external_scanner_symbol_identifiers.h"
#include "../headers/field_identifiers.h"

#include "../headers/constants.h"

static const \
t_non_terminal_alias_map_array	g_t_non_terminal_alias_map_array = {.a = {
[0] = sym__word_no_brace,
[1] = 2,
[2] = sym__word_no_brace,
[3] = sym_word,
[4] = 0,
}};

const t_non_terminal_alias_map_array	*create_non_terminal_alias_map(void)
{
	return (&g_t_non_terminal_alias_map_array);
}
