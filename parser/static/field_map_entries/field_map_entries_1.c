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
	v->a[100] = fmap_entry(field_redirect, 3, false);
	v->a[101] = fmap_entry(field_operator, 3, true);
	v->a[102] = fmap_entry(field_redirect, 2, false);
	v->a[103] = fmap_entry(field_right, 3, true);
	v->a[104] = fmap_entry(field_termination, 4, false);
	v->a[105] = fmap_entry(field_value, 0, false);
	v->a[106] = fmap_entry(field_value, 1, true);
	v->a[107] = fmap_entry(field_fallthrough, 4, false);
	v->a[108] = fmap_entry(field_value, 0, false);
	v->a[109] = fmap_entry(field_value, 1, true);
	v->a[110] = fmap_entry(field_termination, 4, false);
	v->a[111] = fmap_entry(field_value, 1, false);
	v->a[112] = fmap_entry(field_fallthrough, 4, false);
	v->a[113] = fmap_entry(field_value, 1, false);
	v->a[114] = fmap_entry(field_termination, 4, false);
	v->a[115] = fmap_entry(field_value, 1, false);
	v->a[116] = fmap_entry(field_value, 2, true);
	v->a[117] = fmap_entry(field_fallthrough, 4, false);
	v->a[118] = fmap_entry(field_value, 1, false);
	v->a[119] = fmap_entry(field_value, 2, true);
	field_map_entries_6(v);
}

void	field_map_entries_6(t_field_map_entries_array *v)
{
	v->a[120] = fmap_entry(field_descriptor, 0, false);
	v->a[121] = fmap_entry(field_operator, 4, true);
	v->a[122] = fmap_entry(field_redirect, 3, false);
	v->a[123] = fmap_entry(field_right, 4, true);
	v->a[124] = fmap_entry(field_termination, 5, false);
	v->a[125] = fmap_entry(field_value, 1, false);
	v->a[126] = fmap_entry(field_value, 2, true);
	v->a[127] = fmap_entry(field_fallthrough, 5, false);
	v->a[128] = fmap_entry(field_value, 1, false);
	v->a[129] = fmap_entry(field_value, 2, true);
}

/* EOF field_map_entries_1.c */
