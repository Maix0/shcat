/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_states.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_external_scanner_states.h"
#include "../headers/symbols.h"
#include "../headers/external_scanner_symbol_identifiers.h"
#include "../headers/field_identifiers.h"

#include "../headers/constants.h"

static const \
t_external_scanner_states_array	g_t_external_scanner_states_array = {.a = {
[1] = {
[ts_external_token_file_descriptor] = true,
[ts_external_token__empty_value] = true,
[ts_external_token__concat] = true,
[ts_external_token_variable_name] = true,
[ts_external_token_regex] = true,
[ts_external_token__expansion_word] = true,
[ts_external_token_extglob_pattern] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token__immediate_double_hash] = true,
[ts_external_token_LPAREN] = true,
[ts_external_token___error_recovery] = true,
},
[2] = {
[ts_external_token_variable_name] = true,
[ts_external_token_LPAREN] = true,
},
[3] = {
[ts_external_token_variable_name] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token_terminator_token1] = true,
},
[4] = {
[ts_external_token_variable_name] = true,
[ts_external_token_terminator_token1] = true,
},
[5] = {
[ts_external_token__bare_dollar] = true,
[ts_external_token_terminator_token1] = true,
},
[6] = {
[ts_external_token_terminator_token1] = true,
},
[7] = {
[ts_external_token_variable_name] = true,
[ts_external_token__bare_dollar] = true,
},
[8] = {
[ts_external_token_variable_name] = true,
},
[9] = {
[ts_external_token_variable_name] = true,
[ts_external_token__immediate_double_hash] = true,
},
[10] = {
[ts_external_token__concat] = true,
[ts_external_token_variable_name] = true,
[ts_external_token_terminator_token1] = true,
},
[11] = {
[ts_external_token__concat] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token_terminator_token1] = true,
},
[12] = {
[ts_external_token__bare_dollar] = true,
},
[13] = {
[ts_external_token__concat] = true,
[ts_external_token_terminator_token1] = true,
},
[14] = {
[ts_external_token_regex] = true,
[ts_external_token__immediate_double_hash] = true,
},
[15] = {
[ts_external_token__concat] = true,
[ts_external_token__bare_dollar] = true,
},
[16] = {
[ts_external_token__concat] = true,
[ts_external_token_variable_name] = true,
},
[17] = {
[ts_external_token__concat] = true,
},
[18] = {
[ts_external_token__empty_value] = true,
},
[19] = {
[ts_external_token_variable_name] = true,
[ts_external_token__expansion_word] = true,
},
[20] = {
[ts_external_token__immediate_double_hash] = true,
},
[21] = {
[ts_external_token_regex] = true,
},
}};

const t_external_scanner_states_array	*create_external_scanner_states(void)
{
	return (&g_t_external_scanner_states_array);
}
