/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_external_scanner_states.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/22 16:25:01 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_external_scanner_states.h"
#include "../external_scanner_states/external_scanner_states.h"

#ifdef static
# undef static
#endif

t_external_scanner_states_array	*create_external_scanner_states(void)
{
	static t_external_scanner_states_array	table = {};
	static bool	init = false;

	if (!init)
	{
		external_scanner_states_0(&table);
		init = true;
	}
	return (&table);
}

/* create_external_scanner_states.c */
