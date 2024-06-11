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
	v->a[200] = fmap_entry(field_cases, 5, true);
	v->a[201] = fmap_entry(field_cases, 6, false);
	v->a[202] = fmap_entry(field_value, 1, false);
	v->a[203] = fmap_entry(field_value, 6, true);
	v->a[204] = fmap_entry(field_fd, 0, false);
	v->a[205] = fmap_entry(field_op, 1, false);
	v->a[206] = fmap_entry(field_op, 4, true);
	v->a[207] = fmap_entry(field_redirect, 3, false);
	v->a[208] = fmap_entry(field_right, 4, true);
	v->a[209] = fmap_entry(field_body, 5, false);
	v->a[210] = fmap_entry(field_stmt, 5, true);
	v->a[211] = fmap_entry(field_terminator, 5, true);
	v->a[212] = fmap_entry(field_value, 1, false);
	v->a[213] = fmap_entry(field_value, 2, true);
}

/* EOF field_map_entries_2.c */
