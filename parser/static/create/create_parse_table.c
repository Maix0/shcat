/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_parse_table.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/22 16:25:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_parse_table.h"
#include "../parse_table/parse_table.h"


#ifdef static
# undef static
#endif

t_parse_table_array	*create_parse_table(void)
{
	static t_parse_table_array	table = {};
	static bool	init = false;

	if (!init)
	{
		parse_table_0(&table);
		init = true;
	}
	return (&table);
}

/* create_parse_table.c */
