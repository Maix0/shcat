/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_parse_actions_entries.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_parse_actions_entries.h"
#include "../types/type_parse_actions_entries.h"
#include "../parse_actions_entries/parse_actions_entries.h"

t_parse_actions_entries_array	*create_parse_actions_entries(void)
{
	static t_parse_actions_entries_array	table = {};
	static bool								init = false;

	if (!init)
	{
		parse_actions_entries_0(&table);
		init = true;
	}
	return (&table);
}

/* create_parse_actions_entries.c */
