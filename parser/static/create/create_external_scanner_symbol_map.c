/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_external_scanner_symbol_map.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/28 18:15:37 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_external_scanner_symbol_map.h"
#include "../external_scanner_symbol_map/external_scanner_symbol_map.h"

t_external_scanner_symbol_map_array	*create_external_scanner_symbol_map(void)
{
	static t_external_scanner_symbol_map_array	table = {};
	static bool									init = false;

	if (!init)
	{
		external_scanner_symbol_map_0(&table);
		init = true;
	}
	return (&table);
}

/* create_external_scanner_symbol_map.c */
