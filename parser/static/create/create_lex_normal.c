/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lex_normal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_lex_normal.h"
#include "../lex_funcs/lex_normal/create_table/lex_normal_array.h"

t_lex_normal_array	*create_lex_normal(void)
{
	static t_lex_normal_array	table = {};
	static bool	init = false;

	if (!init)
	{
		lex_normal_array_0(&table);
		init = true;
	}
	return (&table);
}

/* create_lex_normal.c */
