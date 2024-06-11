/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_map_entries_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./field_map_entries.h"

void	field_map_entries_5(t_field_map_entries_array *v)
{
	v->a[100] = fmap_entry(field_stmt, 1, true);
	v->a[101] = fmap_entry(field_stmt, 3, true);
	v->a[102] = fmap_entry(field_terminator, 1, true);
	v->a[103] = fmap_entry(field_terminator, 3, true);
	v->a[104] = fmap_entry(field_body, 3, false);
	v->a[105] = fmap_entry(field_condition, 1, false);
	v->a[106] = fmap_entry(field_elif, 4, false);
	v->a[107] = fmap_entry(field_stmt, 1, true);
	v->a[108] = fmap_entry(field_stmt, 3, true);
	v->a[109] = fmap_entry(field_terminator, 1, true);
	v->a[110] = fmap_entry(field_terminator, 3, true);
	v->a[111] = fmap_entry(field_condition, 1, false);
	v->a[112] = fmap_entry(field_elif, 3, false);
	v->a[113] = fmap_entry(field_else, 4, false);
	v->a[114] = fmap_entry(field_stmt, 1, true);
	v->a[115] = fmap_entry(field_terminator, 1, true);
	v->a[116] = fmap_entry(field_body, 4, true);
	v->a[117] = fmap_entry(field_cases, 4, false);
	v->a[118] = fmap_entry(field_value, 1, false);
	v->a[119] = fmap_entry(field_value, 4, true);
	field_map_entries_6(v);
}

void	field_map_entries_6(t_field_map_entries_array *v)
{
	v->a[120] = fmap_entry(field_body, 2, false);
	v->a[121] = fmap_entry(field_stmt, 2, true);
	v->a[122] = fmap_entry(field_terminator, 2, true);
	v->a[123] = fmap_entry(field_value, 0, false);
	v->a[124] = fmap_entry(field_value, 0, true);
	v->a[125] = fmap_entry(field_value, 1, true);
	v->a[126] = fmap_entry(field_body, 4, true);
	v->a[127] = fmap_entry(field_cases, 3, true);
	v->a[128] = fmap_entry(field_cases, 4, false);
	v->a[129] = fmap_entry(field_value, 1, false);
	v->a[130] = fmap_entry(field_value, 4, true);
	v->a[131] = fmap_entry(field_alternative, 4, false);
	v->a[132] = fmap_entry(field_condition, 0, false);
	v->a[133] = fmap_entry(field_consequence, 2, false);
	v->a[134] = fmap_entry(field_op, 0, false);
	v->a[135] = fmap_entry(field_op, 2, true);
	v->a[136] = fmap_entry(field_right, 2, true);
	v->a[137] = fmap_entry(field_arg, 2, true);
	v->a[138] = fmap_entry(field_op, 0, false);
	v->a[139] = fmap_entry(field_op, 0, false);
	field_map_entries_7(v);
}

void	field_map_entries_7(t_field_map_entries_array *v)
{
	v->a[140] = fmap_entry(field_redirect, 2, false);
	v->a[141] = fmap_entry(field_body, 3, false);
	v->a[142] = fmap_entry(field_condition, 1, false);
	v->a[143] = fmap_entry(field_elif, 4, false);
	v->a[144] = fmap_entry(field_else, 5, false);
	v->a[145] = fmap_entry(field_stmt, 1, true);
	v->a[146] = fmap_entry(field_stmt, 3, true);
	v->a[147] = fmap_entry(field_terminator, 1, true);
	v->a[148] = fmap_entry(field_terminator, 3, true);
	v->a[149] = fmap_entry(field_body, 3, false);
	v->a[150] = fmap_entry(field_stmt, 3, true);
	v->a[151] = fmap_entry(field_terminator, 3, true);
	v->a[152] = fmap_entry(field_value, 1, false);
	v->a[153] = fmap_entry(field_body, 5, true);
	v->a[154] = fmap_entry(field_cases, 4, true);
	v->a[155] = fmap_entry(field_cases, 5, false);
	v->a[156] = fmap_entry(field_value, 1, false);
	v->a[157] = fmap_entry(field_value, 5, true);
	v->a[158] = fmap_entry(field_body, 3, false);
	v->a[159] = fmap_entry(field_stmt, 3, true);
	field_map_entries_8(v);
}

void	field_map_entries_8(t_field_map_entries_array *v)
{
	v->a[160] = fmap_entry(field_terminator, 3, true);
	v->a[161] = fmap_entry(field_value, 0, false);
	v->a[162] = fmap_entry(field_body, 3, false);
	v->a[163] = fmap_entry(field_stmt, 3, true);
	v->a[164] = fmap_entry(field_terminator, 3, true);
	v->a[165] = fmap_entry(field_value, 0, false);
	v->a[166] = fmap_entry(field_value, 1, true);
	v->a[167] = fmap_entry(field_body, 5, true);
	v->a[168] = fmap_entry(field_cases, 5, false);
	v->a[169] = fmap_entry(field_value, 1, false);
	v->a[170] = fmap_entry(field_value, 5, true);
	v->a[171] = fmap_entry(field_fd, 0, false);
	v->a[172] = fmap_entry(field_op, 1, false);
	v->a[173] = fmap_entry(field_op, 3, true);
	v->a[174] = fmap_entry(field_right, 3, true);
	v->a[175] = fmap_entry(field_arg, 3, true);
	v->a[176] = fmap_entry(field_fd, 0, false);
	v->a[177] = fmap_entry(field_op, 1, false);
	v->a[178] = fmap_entry(field_fd, 0, false);
	v->a[179] = fmap_entry(field_op, 1, false);
	field_map_entries_9(v);
}

void	field_map_entries_9(t_field_map_entries_array *v)
{
	v->a[180] = fmap_entry(field_redirect, 3, false);
	v->a[181] = fmap_entry(field_op, 0, false);
	v->a[182] = fmap_entry(field_op, 3, true);
	v->a[183] = fmap_entry(field_redirect, 2, false);
	v->a[184] = fmap_entry(field_right, 3, true);
	v->a[185] = fmap_entry(field_body, 4, false);
	v->a[186] = fmap_entry(field_stmt, 4, true);
	v->a[187] = fmap_entry(field_terminator, 4, true);
	v->a[188] = fmap_entry(field_value, 1, false);
	v->a[189] = fmap_entry(field_body, 4, false);
	v->a[190] = fmap_entry(field_stmt, 4, true);
	v->a[191] = fmap_entry(field_terminator, 4, true);
	v->a[192] = fmap_entry(field_value, 1, false);
	v->a[193] = fmap_entry(field_value, 2, true);
	v->a[194] = fmap_entry(field_body, 4, false);
	v->a[195] = fmap_entry(field_stmt, 4, true);
	v->a[196] = fmap_entry(field_terminator, 4, true);
	v->a[197] = fmap_entry(field_value, 0, false);
	v->a[198] = fmap_entry(field_value, 1, true);
	v->a[199] = fmap_entry(field_body, 6, true);
	field_map_entries_10(v);
}

/* EOF field_map_entries_1.c */
