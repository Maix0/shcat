/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_symbol_map.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_external_scanner_symbol_map.h"
#include "../headers/symbols.h"
#include "../headers/external_scanner_symbol_identifiers.h"
#include "../headers/field_identifiers.h"

#include "../headers/constants.h"

static const \
t_external_scanner_symbol_map_array	g_t_external_scanner_symbol_map_array = {.a = {
[ts_external_token_file_descriptor] = sym_file_descriptor,
[ts_external_token__empty_value] = sym__empty_value,
[ts_external_token__concat] = sym__concat,
[ts_external_token_variable_name] = sym_variable_name,
[ts_external_token_regex] = sym_regex,
[ts_external_token__expansion_word] = sym__expansion_word,
[ts_external_token_extglob_pattern] = sym_extglob_pattern,
[ts_external_token__bare_dollar] = sym__bare_dollar,
[ts_external_token__immediate_double_hash] = sym__immediate_double_hash,
[ts_external_token_terminator_token1] = aux_sym_terminator_token1,
[ts_external_token_LPAREN] = anon_sym_LPAREN,
[ts_external_token___error_recovery] = sym___error_recovery,
}};

const t_external_scanner_symbol_map_array	*create_external_scanner_symbol_map(void)
{
	return (&g_t_external_scanner_symbol_map_array);
}
