/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_symbols_names.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_symbols_names.h"
#include "../symbols_names/symbols_names.h"

t_symbols_names_array	*create_symbols_names(void)
{
	static t_symbols_names_array	table = {};
	static bool						init = false;

	if (!init)
	{
		symbols_names_0(&table);
		init = true;
	}
	return (&table);
}

/* create_symbols_names.c */
