/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_field_names.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_field_names.h"
#include "../field_names/field_names.h"

t_field_names_array	*create_field_names(void)
{
	static t_field_names_array	table = {};
	static bool	init = false;

	if (!init)
	{
		field_names_0(&table);
		init = true;
	}
	return (&table);
}

/* create_field_names.c */
