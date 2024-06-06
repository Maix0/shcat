/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_unique_symbols_map.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_unique_symbols_map.h"
#include "../unique_symbols_map/unique_symbols_map.h"

t_unique_symbols_map_array	*create_unique_symbols_map(void)
{
	static t_unique_symbols_map_array	table = {};
	static bool	init = false;

	if (!init)
	{
		unique_symbols_map_0(&table);
		init = true;
	}
	return (&table);
}

/* create_unique_symbols_map.c */
