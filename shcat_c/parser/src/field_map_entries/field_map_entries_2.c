/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_map_entries_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./field_map_entries.h"

void	field_map_entries_10(t_field_map_entries_array *v)
{
	v->a[200] = fmap_entry(field_argument, 3, true);
	v->a[201] = fmap_entry(field_descriptor, 0, false);
	v->a[202] = fmap_entry(field_descriptor, 0, false);
	v->a[203] = fmap_entry(field_redirect, 3, false);
	v->a[204] = fmap_entry(field_operator, 3, true);
	v->a[205] = fmap_entry(field_redirect, 2, false);
	v->a[206] = fmap_entry(field_right, 3, true);
	v->a[207] = fmap_entry(field_condition, 2, false);
	v->a[208] = fmap_entry(field_initializer, 0, false);
	v->a[209] = fmap_entry(field_update, 4, false);
	v->a[210] = fmap_entry(field_update, 5, false);
	v->a[211] = fmap_entry(field_condition, 2, false);
	v->a[212] = fmap_entry(field_condition, 3, false);
	v->a[213] = fmap_entry(field_initializer, 0, false);
	v->a[214] = fmap_entry(field_update, 5, false);
	v->a[215] = fmap_entry(field_condition, 3, false);
	v->a[216] = fmap_entry(field_initializer, 0, false);
	v->a[217] = fmap_entry(field_initializer, 1, false);
	v->a[218] = fmap_entry(field_update, 5, false);
	v->a[219] = fmap_entry(field_condition, 3, false);
	field_map_entries_11(v);
}

void	field_map_entries_11(t_field_map_entries_array *v)
{
	v->a[220] = fmap_entry(field_condition, 4, false);
	v->a[221] = fmap_entry(field_initializer, 0, false);
	v->a[222] = fmap_entry(field_initializer, 1, false);
	v->a[223] = fmap_entry(field_initializer, 0, false);
	v->a[224] = fmap_entry(field_initializer, 1, false);
	v->a[225] = fmap_entry(field_update, 4, false);
	v->a[226] = fmap_entry(field_update, 5, false);
	v->a[227] = fmap_entry(field_condition, 1, false);
	v->a[228] = fmap_entry(field_condition, 2, false);
	v->a[229] = fmap_entry(field_update, 4, false);
	v->a[230] = fmap_entry(field_update, 5, false);
	v->a[231] = fmap_entry(field_termination, 4, false);
	v->a[232] = fmap_entry(field_value, 0, false);
	v->a[233] = fmap_entry(field_value, 1, true);
	v->a[234] = fmap_entry(field_fallthrough, 4, false);
	v->a[235] = fmap_entry(field_value, 0, false);
	v->a[236] = fmap_entry(field_value, 1, true);
	v->a[237] = fmap_entry(field_termination, 4, false);
	v->a[238] = fmap_entry(field_value, 1, false);
	v->a[239] = fmap_entry(field_fallthrough, 4, false);
	field_map_entries_12(v);
}

void	field_map_entries_12(t_field_map_entries_array *v)
{
	v->a[240] = fmap_entry(field_value, 1, false);
	v->a[241] = fmap_entry(field_termination, 4, false);
	v->a[242] = fmap_entry(field_value, 1, false);
	v->a[243] = fmap_entry(field_value, 2, true);
	v->a[244] = fmap_entry(field_fallthrough, 4, false);
	v->a[245] = fmap_entry(field_value, 1, false);
	v->a[246] = fmap_entry(field_value, 2, true);
	v->a[247] = fmap_entry(field_operator, 0, false);
	v->a[248] = fmap_entry(field_operator, 2, false);
	v->a[249] = fmap_entry(field_operator, 5, false);
	v->a[250] = fmap_entry(field_operator, 0, false);
	v->a[251] = fmap_entry(field_operator, 3, false);
	v->a[252] = fmap_entry(field_operator, 5, false);
	v->a[253] = fmap_entry(field_descriptor, 0, false);
	v->a[254] = fmap_entry(field_operator, 4, true);
	v->a[255] = fmap_entry(field_redirect, 3, false);
	v->a[256] = fmap_entry(field_right, 4, true);
	v->a[257] = fmap_entry(field_condition, 2, false);
	v->a[258] = fmap_entry(field_condition, 3, false);
	v->a[259] = fmap_entry(field_initializer, 0, false);
	field_map_entries_13(v);
}

void	field_map_entries_13(t_field_map_entries_array *v)
{
	v->a[260] = fmap_entry(field_update, 5, false);
	v->a[261] = fmap_entry(field_update, 6, false);
	v->a[262] = fmap_entry(field_condition, 3, false);
	v->a[263] = fmap_entry(field_initializer, 0, false);
	v->a[264] = fmap_entry(field_initializer, 1, false);
	v->a[265] = fmap_entry(field_update, 5, false);
	v->a[266] = fmap_entry(field_update, 6, false);
	v->a[267] = fmap_entry(field_condition, 3, false);
	v->a[268] = fmap_entry(field_condition, 4, false);
	v->a[269] = fmap_entry(field_initializer, 0, false);
	v->a[270] = fmap_entry(field_initializer, 1, false);
	v->a[271] = fmap_entry(field_update, 6, false);
	v->a[272] = fmap_entry(field_termination, 5, false);
	v->a[273] = fmap_entry(field_value, 1, false);
	v->a[274] = fmap_entry(field_value, 2, true);
	v->a[275] = fmap_entry(field_fallthrough, 5, false);
	v->a[276] = fmap_entry(field_value, 1, false);
	v->a[277] = fmap_entry(field_value, 2, true);
	v->a[278] = fmap_entry(field_operator, 0, false);
	v->a[279] = fmap_entry(field_operator, 3, false);
	field_map_entries_14(v);
}

void	field_map_entries_14(t_field_map_entries_array *v)
{
	v->a[280] = fmap_entry(field_operator, 6, false);
	v->a[281] = fmap_entry(field_condition, 3, false);
	v->a[282] = fmap_entry(field_condition, 4, false);
	v->a[283] = fmap_entry(field_initializer, 0, false);
	v->a[284] = fmap_entry(field_initializer, 1, false);
	v->a[285] = fmap_entry(field_update, 6, false);
	v->a[286] = fmap_entry(field_update, 7, false);
}

/* EOF field_map_entries_2.c */
