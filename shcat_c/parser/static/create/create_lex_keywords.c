/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lex_keywords.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/28 18:15:20 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_lex_keywords.h"
#include "../lex_funcs/lex_keywords/create_table/lex_keywords_array.h"

t_lex_keywords_array	*create_lex_keywords(void)
{
	static t_lex_keywords_array	table = {};
	static bool					init = false;

	if (!init)
	{
		lex_keywords_array_0(&table);
		init = true;
	}
	return (&table);
}

/* create_lex_keywords.c */
