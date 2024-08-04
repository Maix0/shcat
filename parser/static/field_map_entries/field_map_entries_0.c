/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_map_entries_0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./field_map_entries.h"

void	field_map_entries_0(t_field_map_entries_array *v)
{
	v->a[0] = fmap_entry(field_stmt, 0, true);
	v->a[1] = fmap_entry(field_term, 0, true);
	v->a[2] = fmap_entry(field_stmt, 0, false);
	v->a[3] = fmap_entry(field_name, 0, false);
	v->a[4] = fmap_entry(field_redr, 0, false);
	v->a[5] = fmap_entry(field_dest, 1, false);
	v->a[6] = fmap_entry(field_op, 0, false);
	v->a[7] = fmap_entry(field_stmt, 0, false);
	v->a[8] = fmap_entry(field_term, 1, false);
	v->a[9] = fmap_entry(field_body, 0, false);
	v->a[10] = fmap_entry(field_redr, 1, false);
	v->a[11] = fmap_entry(field_arg, 0, false);
	v->a[12] = fmap_entry(field_arg, 1, true);
	v->a[13] = fmap_entry(field_name, 0, false);
	v->a[14] = fmap_entry(field_stmt, 0, true);
	v->a[15] = fmap_entry(field_stmt, 1, false);
	v->a[16] = fmap_entry(field_term, 0, true);
	v->a[17] = fmap_entry(field_stmt, 0, true);
	v->a[18] = fmap_entry(field_stmt, 1, true);
	v->a[19] = fmap_entry(field_term, 0, true);
	return (field_map_entries_1(v));
}

void	field_map_entries_1(t_field_map_entries_array *v)
{
	v->a[20] = fmap_entry(field_term, 1, true);
	v->a[21] = fmap_entry(field_name, 1, false);
	v->a[22] = fmap_entry(field_redr, 0, true);
	v->a[23] = fmap_entry(field_redr, 0, true);
	v->a[24] = fmap_entry(field_redr, 1, true);
	v->a[25] = fmap_entry(field_name, 0, false);
	v->a[26] = fmap_entry(field_value, 2, false);
	v->a[27] = fmap_entry(field_body, 2, false);
	v->a[28] = fmap_entry(field_cond, 1, false);
	v->a[29] = fmap_entry(field_stmt, 1, true);
	v->a[30] = fmap_entry(field_term, 1, true);
	v->a[31] = fmap_entry(field_stmt, 1, true);
	v->a[32] = fmap_entry(field_term, 1, true);
	v->a[33] = fmap_entry(field_op, 0, false);
	v->a[34] = fmap_entry(field_op, 1, false);
	v->a[35] = fmap_entry(field_args, 1, true);
	v->a[36] = fmap_entry(field_name, 0, false);
	v->a[37] = fmap_entry(field_op, 1, true);
	v->a[38] = fmap_entry(field_len, 0, false);
	v->a[39] = fmap_entry(field_name, 1, false);
	return (field_map_entries_2(v));
}

void	field_map_entries_2(t_field_map_entries_array *v)
{
	v->a[40] = fmap_entry(field_args, 1, true);
	v->a[41] = fmap_entry(field_len, 1, true);
	v->a[42] = fmap_entry(field_name, 1, true);
	v->a[43] = fmap_entry(field_op, 1, true);
	v->a[44] = fmap_entry(field_redr, 1, false);
	v->a[45] = fmap_entry(field_cmd, 0, false);
	v->a[46] = fmap_entry(field_cmd, 2, false);
	v->a[47] = fmap_entry(field_op, 1, false);
	v->a[48] = fmap_entry(field_arg, 0, true);
	v->a[49] = fmap_entry(field_arg, 1, true);
	v->a[50] = fmap_entry(field_stmt, 0, true);
	v->a[51] = fmap_entry(field_stmt, 1, false);
	v->a[52] = fmap_entry(field_term, 0, true);
	v->a[53] = fmap_entry(field_term, 2, false);
	v->a[54] = fmap_entry(field_arg, 2, true);
	v->a[55] = fmap_entry(field_name, 1, false);
	v->a[56] = fmap_entry(field_redr, 0, true);
	v->a[57] = fmap_entry(field_body, 3, false);
	v->a[58] = fmap_entry(field_var, 1, false);
	v->a[59] = fmap_entry(field_cond, 1, false);
	return (field_map_entries_3(v));
}

void	field_map_entries_3(t_field_map_entries_array *v)
{
	v->a[60] = fmap_entry(field_stmt, 1, true);
	v->a[61] = fmap_entry(field_term, 1, true);
	v->a[62] = fmap_entry(field_value, 1, false);
	v->a[63] = fmap_entry(field_cases, 0, false);
	v->a[64] = fmap_entry(field_lhs, 0, false);
	v->a[65] = fmap_entry(field_op, 1, false);
	v->a[66] = fmap_entry(field_rhs, 2, false);
	v->a[67] = fmap_entry(field_args, 1, false);
	v->a[68] = fmap_entry(field_op, 0, false);
	v->a[69] = fmap_entry(field_args, 2, true);
	v->a[70] = fmap_entry(field_len, 0, false);
	v->a[71] = fmap_entry(field_name, 1, false);
	v->a[72] = fmap_entry(field_op, 2, true);
	v->a[73] = fmap_entry(field_body, 3, false);
	v->a[74] = fmap_entry(field_name, 0, false);
	v->a[75] = fmap_entry(field_body, 1, false);
	v->a[76] = fmap_entry(field_stmt, 1, true);
	v->a[77] = fmap_entry(field_term, 1, true);
	v->a[78] = fmap_entry(field_body, 3, false);
	v->a[79] = fmap_entry(field_cond, 1, false);
	return (field_map_entries_4(v));
}

void	field_map_entries_4(t_field_map_entries_array *v)
{
	v->a[80] = fmap_entry(field_stmt, 1, true);
	v->a[81] = fmap_entry(field_stmt, 3, true);
	v->a[82] = fmap_entry(field_term, 1, true);
	v->a[83] = fmap_entry(field_term, 3, true);
	v->a[84] = fmap_entry(field_cond, 1, false);
	v->a[85] = fmap_entry(field_else, 3, false);
	v->a[86] = fmap_entry(field_stmt, 1, true);
	v->a[87] = fmap_entry(field_term, 1, true);
	v->a[88] = fmap_entry(field_cond, 1, false);
	v->a[89] = fmap_entry(field_elif, 3, false);
	v->a[90] = fmap_entry(field_stmt, 1, true);
	v->a[91] = fmap_entry(field_term, 1, true);
	v->a[92] = fmap_entry(field_body, 3, true);
	v->a[93] = fmap_entry(field_cases, 3, false);
	v->a[94] = fmap_entry(field_stmt, 3, true);
	v->a[95] = fmap_entry(field_term, 3, true);
	v->a[96] = fmap_entry(field_value, 1, false);
	v->a[97] = fmap_entry(field_value, 3, true);
	v->a[98] = fmap_entry(field_cases, 0, true);
	v->a[99] = fmap_entry(field_cases, 1, true);
	return (field_map_entries_5(v));
}

/* EOF field_map_entries_0.c */
