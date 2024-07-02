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
	v->a[200] = fmap_entry(field_body, 4, false);
	v->a[201] = fmap_entry(field_stmt, 4, true);
	v->a[202] = fmap_entry(field_term, 4, true);
	v->a[203] = fmap_entry(field_value, 1, false);
	v->a[204] = fmap_entry(field_value, 2, true);
	v->a[205] = fmap_entry(field_body, 4, false);
	v->a[206] = fmap_entry(field_stmt, 4, true);
	v->a[207] = fmap_entry(field_term, 4, true);
	v->a[208] = fmap_entry(field_value, 0, false);
	v->a[209] = fmap_entry(field_value, 1, true);
	v->a[210] = fmap_entry(field_body, 6, true);
	v->a[211] = fmap_entry(field_cases, 5, true);
	v->a[212] = fmap_entry(field_cases, 6, false);
	v->a[213] = fmap_entry(field_value, 1, false);
	v->a[214] = fmap_entry(field_value, 6, true);
	v->a[215] = fmap_entry(field_fd, 0, false);
	v->a[216] = fmap_entry(field_op, 1, false);
	v->a[217] = fmap_entry(field_op, 4, true);
	v->a[218] = fmap_entry(field_redr, 3, false);
	v->a[219] = fmap_entry(field_rhs, 4, true);
	field_map_entries_11(v);
}

void	field_map_entries_11(t_field_map_entries_array *v)
{
	v->a[220] = fmap_entry(field_body, 5, false);
	v->a[221] = fmap_entry(field_stmt, 5, true);
	v->a[222] = fmap_entry(field_term, 5, true);
	v->a[223] = fmap_entry(field_value, 1, false);
	v->a[224] = fmap_entry(field_value, 2, true);
}

/* EOF field_map_entries_2.c */
