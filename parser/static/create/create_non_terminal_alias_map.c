/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_non_terminal_alias_map.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/28 18:17:43 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_non_terminal_alias_map.h"
#include "../non_terminal_alias_map/non_terminal_alias_map.h"

t_non_terminal_alias_map_array	*create_non_terminal_alias_map(void)
{
	static t_non_terminal_alias_map_array	table = {};
	static bool								init = false;

	if (!init)
	{
		non_terminal_alias_map_0(&table);
		init = true;
	}
	return (&table);
}

/* create_non_terminal_alias_map.c */
