/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_alias_sequences.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/28 18:14:24 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_alias_sequences.h"
#include "../alias_sequences/alias_sequences.h"

t_alias_sequences_array	*create_alias_sequences(void)
{
	static t_alias_sequences_array	table = {};
	static bool						init = false;

	if (!init)
	{
		alias_sequences_0(&table);
		init = true;
	}
	return (&table);
}

/* create_alias_sequences.c */
