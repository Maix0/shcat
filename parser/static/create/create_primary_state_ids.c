/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_primary_state_ids.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/28 18:18:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_primary_state_ids.h"
#include "../primary_state_ids/primary_state_ids.h"

t_primary_state_ids_array	*create_primary_state_ids(void)
{
	static t_primary_state_ids_array	table = {};
	static bool							init = false;

	if (!init)
	{
		primary_state_ids_0(&table);
		init = true;
	}
	return (&table);
}

/* create_primary_state_ids.c */
