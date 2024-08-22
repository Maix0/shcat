/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_symbols_metadata.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/22 16:25:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_symbols_metadata.h"
#include "../symbols_metadata/symbols_metadata.h"


#ifdef static
# undef static
#endif

t_symbols_metadata_array	*create_symbols_metadata(void)
{
	static t_symbols_metadata_array	table = {};
	static bool	init = false;

	if (!init)
	{
		symbols_metadata_0(&table);
		init = true;
	}
	return (&table);
}

/* create_symbols_metadata.c */
