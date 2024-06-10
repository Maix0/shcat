/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_field_map_slices.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_field_map_slices.h"
#include "../field_map_slices/field_map_slices.h"

t_field_map_slices_array	*create_field_map_slices(void)
{
	static t_field_map_slices_array	table = {};
	static bool						init = false;

	if (!init)
	{
		field_map_slices_0(&table);
		init = true;
	}
	return (&table);
}

/* create_field_map_slices.c */
