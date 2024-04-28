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
	v->a[0] = fmap_entry(field_name, 0, false);
	v->a[1] = fmap_entry(field_redirect, 0, false);
	v->a[2] = fmap_entry(field_descriptor, 0, false);
	v->a[3] = fmap_entry(field_left, 0, true);
	v->a[4] = fmap_entry(field_operator, 0, true);
	v->a[5] = fmap_entry(field_right, 0, true);
	v->a[6] = fmap_entry(field_alternative, 0, true);
	v->a[7] = fmap_entry(field_condition, 0, true);
	v->a[8] = fmap_entry(field_consequence, 0, true);
	v->a[9] = fmap_entry(field_operator, 0, true);
	v->a[10] = fmap_entry(field_destination, 1, false);
	v->a[11] = fmap_entry(field_operator, 0, false);
	v->a[12] = fmap_entry(field_body, 0, false);
	v->a[13] = fmap_entry(field_redirect, 1, false);
	v->a[14] = fmap_entry(field_body, 0, false);
	v->a[15] = fmap_entry(field_argument, 0, false);
	v->a[16] = fmap_entry(field_argument, 1, true);
	v->a[17] = fmap_entry(field_name, 0, false);
	v->a[18] = fmap_entry(field_redirect, 1, true);
	v->a[19] = fmap_entry(field_name, 1, false);
	field_map_entries_1(v);
}

void	field_map_entries_1(t_field_map_entries_array *v)
{
	v->a[20] = fmap_entry(field_redirect, 0, true);
	v->a[21] = fmap_entry(field_redirect, 0, true);
	v->a[22] = fmap_entry(field_redirect, 1, true);
	v->a[23] = fmap_entry(field_descriptor, 0, false);
	v->a[24] = fmap_entry(field_destination, 2, false);
	v->a[25] = fmap_entry(field_name, 0, false);
	v->a[26] = fmap_entry(field_value, 2, false);
	v->a[27] = fmap_entry(field_name, 0, true);
	v->a[28] = fmap_entry(field_value, 0, true);
	v->a[29] = fmap_entry(field_operator, 1, false);
	v->a[30] = fmap_entry(field_body, 2, false);
	v->a[31] = fmap_entry(field_condition, 1, false);
	v->a[32] = fmap_entry(field_body, 2, false);
	v->a[33] = fmap_entry(field_name, 1, false);
	v->a[34] = fmap_entry(field_left, 1, true);
	v->a[35] = fmap_entry(field_operator, 1, true);
	v->a[36] = fmap_entry(field_right, 1, true);
	v->a[37] = fmap_entry(field_operator, 1, true);
	v->a[38] = fmap_entry(field_operator, 0, true);
	v->a[39] = fmap_entry(field_operator, 1, true);
	field_map_entries_2(v);
}

void	field_map_entries_2(t_field_map_entries_array *v)
{
	v->a[40] = fmap_entry(field_redirect, 1, false);
	v->a[41] = fmap_entry(field_argument, 0, false);
	v->a[42] = fmap_entry(field_argument, 1, false);
	v->a[43] = fmap_entry(field_argument, 0, true);
	v->a[44] = fmap_entry(field_argument, 1, true);
	v->a[45] = fmap_entry(field_redirect, 0, true);
	v->a[46] = fmap_entry(field_redirect, 1, true);
	v->a[47] = fmap_entry(field_argument, 2, true);
	v->a[48] = fmap_entry(field_name, 1, false);
	v->a[49] = fmap_entry(field_redirect, 0, true);
	v->a[50] = fmap_entry(field_redirect, 2, true);
	v->a[51] = fmap_entry(field_index, 2, false);
	v->a[52] = fmap_entry(field_name, 0, false);
	v->a[53] = fmap_entry(field_body, 3, false);
	v->a[54] = fmap_entry(field_variable, 1, false);
	v->a[55] = fmap_entry(field_left, 0, false);
	v->a[56] = fmap_entry(field_operator, 1, false);
	v->a[57] = fmap_entry(field_right, 2, false);
	v->a[58] = fmap_entry(field_condition, 1, false);
	v->a[59] = fmap_entry(field_value, 1, false);
	field_map_entries_3(v);
}

void	field_map_entries_3(t_field_map_entries_array *v)
{
	v->a[60] = fmap_entry(field_body, 2, false);
	v->a[61] = fmap_entry(field_name, 1, false);
	v->a[62] = fmap_entry(field_redirect, 3, false);
	v->a[63] = fmap_entry(field_operator, 0, false);
	v->a[64] = fmap_entry(field_operator, 1, false);
	v->a[65] = fmap_entry(field_operator, 0, false);
	v->a[66] = fmap_entry(field_operator, 1, true);
	v->a[67] = fmap_entry(field_operator, 0, false);
	v->a[68] = fmap_entry(field_operator, 2, false);
	v->a[69] = fmap_entry(field_operator, 0, false);
	v->a[70] = fmap_entry(field_operator, 2, true);
	v->a[71] = fmap_entry(field_body, 3, false);
	v->a[72] = fmap_entry(field_name, 0, false);
	v->a[73] = fmap_entry(field_body, 4, false);
	v->a[74] = fmap_entry(field_condition, 2, true);
	v->a[75] = fmap_entry(field_initializer, 2, true);
	v->a[76] = fmap_entry(field_update, 2, true);
	v->a[77] = fmap_entry(field_initializer, 0, false);
	v->a[78] = fmap_entry(field_update, 2, false);
	v->a[79] = fmap_entry(field_value, 0, false);
	field_map_entries_4(v);
}

void	field_map_entries_4(t_field_map_entries_array *v)
{
	v->a[80] = fmap_entry(field_body, 4, false);
	v->a[81] = fmap_entry(field_name, 1, false);
	v->a[82] = fmap_entry(field_operator, 0, false);
	v->a[83] = fmap_entry(field_operator, 1, false);
	v->a[84] = fmap_entry(field_operator, 2, true);
	v->a[85] = fmap_entry(field_operator, 0, false);
	v->a[86] = fmap_entry(field_operator, 1, true);
	v->a[87] = fmap_entry(field_operator, 2, false);
	v->a[88] = fmap_entry(field_body, 3, false);
	v->a[89] = fmap_entry(field_name, 0, false);
	v->a[90] = fmap_entry(field_redirect, 4, false);
	v->a[91] = fmap_entry(field_operator, 0, false);
	v->a[92] = fmap_entry(field_right, 1, false);
	v->a[93] = fmap_entry(field_argument, 0, true);
	v->a[94] = fmap_entry(field_argument, 1, true);
	v->a[95] = fmap_entry(field_body, 5, false);
	v->a[96] = fmap_entry(field_condition, 2, true);
	v->a[97] = fmap_entry(field_initializer, 2, true);
	v->a[98] = fmap_entry(field_update, 2, true);
	v->a[99] = fmap_entry(field_condition, 2, false);
	field_map_entries_5(v);
}

/* EOF field_map_entries_0.c */
