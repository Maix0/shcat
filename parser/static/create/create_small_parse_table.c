/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_small_parse_table.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/28 18:18:48 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_small_parse_table.h"
#include "../small_parse_table/small_parse_table.h"

t_small_parse_table_array	*create_small_parse_table(void)
{
	static t_small_parse_table_array	table = {};
	static bool							init = false;

	if (!init)
	{
		small_parse_table_0(&table);
		init = true;
	}
	return (&table);
}

/* create_small_parse_table.c */
