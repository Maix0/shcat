/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_map_entries.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_field_map_entries.h"
#include "../headers/symbols.h"
#include "../headers/external_scanner_symbol_identifiers.h"
#include "../headers/field_identifiers.h"

#include "../headers/constants.h"

static const \
t_field_map_entries_array	g_t_field_map_entries_array = {.a = {
[0] = {.field_id = field_stmt, .child_index = 0, .inherited = true},
[1] = {.field_id = field_term, .child_index = 0, .inherited = true},
[2] = {.field_id = field_stmt, .child_index = 0, .inherited = false},
[3] = {.field_id = field_name, .child_index = 0, .inherited = false},
[4] = {.field_id = field_redr, .child_index = 0, .inherited = false},
[5] = {.field_id = field_dest, .child_index = 1, .inherited = false},
[6] = {.field_id = field_op, .child_index = 0, .inherited = false},
[7] = {.field_id = field_stmt, .child_index = 0, .inherited = false},
[8] = {.field_id = field_term, .child_index = 1, .inherited = false},
[9] = {.field_id = field_body, .child_index = 0, .inherited = false},
[10] = {.field_id = field_redr, .child_index = 1, .inherited = false},
[11] = {.field_id = field_arg, .child_index = 0, .inherited = false},
[12] = {.field_id = field_arg, .child_index = 1, .inherited = true},
[13] = {.field_id = field_name, .child_index = 0, .inherited = false},
[14] = {.field_id = field_stmt, .child_index = 0, .inherited = true},
[15] = {.field_id = field_stmt, .child_index = 1, .inherited = false},
[16] = {.field_id = field_term, .child_index = 0, .inherited = true},
[17] = {.field_id = field_stmt, .child_index = 0, .inherited = true},
[18] = {.field_id = field_stmt, .child_index = 1, .inherited = true},
[19] = {.field_id = field_term, .child_index = 0, .inherited = true},
[20] = {.field_id = field_term, .child_index = 1, .inherited = true},
[21] = {.field_id = field_name, .child_index = 1, .inherited = false},
[22] = {.field_id = field_redr, .child_index = 0, .inherited = true},
[23] = {.field_id = field_redr, .child_index = 0, .inherited = true},
[24] = {.field_id = field_redr, .child_index = 1, .inherited = true},
[25] = {.field_id = field_name, .child_index = 0, .inherited = false},
[26] = {.field_id = field_value, .child_index = 2, .inherited = false},
[27] = {.field_id = field_stmt, .child_index = 1, .inherited = true},
[28] = {.field_id = field_term, .child_index = 1, .inherited = true},
[29] = {.field_id = field_op, .child_index = 0, .inherited = false},
[30] = {.field_id = field_op, .child_index = 1, .inherited = false},
[31] = {.field_id = field_args, .child_index = 1, .inherited = true},
[32] = {.field_id = field_name, .child_index = 0, .inherited = false},
[33] = {.field_id = field_op, .child_index = 1, .inherited = true},
[34] = {.field_id = field_len, .child_index = 0, .inherited = false},
[35] = {.field_id = field_name, .child_index = 1, .inherited = false},
[36] = {.field_id = field_args, .child_index = 1, .inherited = true},
[37] = {.field_id = field_len, .child_index = 1, .inherited = true},
[38] = {.field_id = field_name, .child_index = 1, .inherited = true},
[39] = {.field_id = field_op, .child_index = 1, .inherited = true},
[40] = {.field_id = field_redr, .child_index = 1, .inherited = false},
[41] = {.field_id = field_cmd, .child_index = 0, .inherited = false},
[42] = {.field_id = field_cmd, .child_index = 2, .inherited = false},
[43] = {.field_id = field_op, .child_index = 1, .inherited = false},
[44] = {.field_id = field_del, .child_index = 1, .inherited = false},
[45] = {.field_id = field_op, .child_index = 0, .inherited = false},
[46] = {.field_id = field_arg, .child_index = 0, .inherited = true},
[47] = {.field_id = field_arg, .child_index = 1, .inherited = true},
[48] = {.field_id = field_stmt, .child_index = 0, .inherited = true},
[49] = {.field_id = field_stmt, .child_index = 1, .inherited = false},
[50] = {.field_id = field_term, .child_index = 0, .inherited = true},
[51] = {.field_id = field_term, .child_index = 2, .inherited = false},
[52] = {.field_id = field_arg, .child_index = 2, .inherited = true},
[53] = {.field_id = field_name, .child_index = 1, .inherited = false},
[54] = {.field_id = field_redr, .child_index = 0, .inherited = true},
[55] = {.field_id = field_lhs, .child_index = 0, .inherited = false},
[56] = {.field_id = field_op, .child_index = 1, .inherited = false},
[57] = {.field_id = field_rhs, .child_index = 2, .inherited = false},
[58] = {.field_id = field_args, .child_index = 1, .inherited = false},
[59] = {.field_id = field_op, .child_index = 0, .inherited = false},
[60] = {.field_id = field_args, .child_index = 2, .inherited = true},
[61] = {.field_id = field_len, .child_index = 0, .inherited = false},
[62] = {.field_id = field_name, .child_index = 1, .inherited = false},
[63] = {.field_id = field_op, .child_index = 2, .inherited = true},
[64] = {.field_id = field_cond, .child_index = 0, .inherited = false},
[65] = {.field_id = field_else, .child_index = 4, .inherited = false},
[66] = {.field_id = field_then, .child_index = 2, .inherited = false},
}};

const t_field_map_entries_array	*create_field_map_entries(void)
{
	return (&g_t_field_map_entries_array);
}
