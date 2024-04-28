/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lex_modes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/28 18:16:46 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_lex_modes.h"
#include "../lex_modes/lex_modes.h"

t_lex_modes_array	*create_lex_modes(void)
{
	static t_lex_modes_array	table = {};
	static bool					init = false;

	if (!init)
	{
		lex_modes_0(&table);
		init = true;
	}
	return (&table);
}

/* create_lex_modes.c */
