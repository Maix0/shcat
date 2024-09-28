/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:27:03 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/28 12:16:45 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/token.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include <stdio.h>
#include <stdbool.h>
#include "me/mem/mem.h"

/**
 * @brief boolean function that's say if it's a space or not
 *
 * @param c character will be checked
 * @return true if it's space, if not return false
 */
bool	is_space(char c)
{
	if (c == ' ')
		return (true);
	return (false);
}

t_error	start_analyse(t_const_str raw, enum e_token list, t_vec_token *output)
{
	t_usize	i;
	t_token	token;

	i = 0;
	mem_alloc(sizeof(t_token));
	while (raw[i] != '\0')
	{
		if (is_space(raw[i]))
			token = 
		i++;
	}
	return (NO_ERROR);
}

t_error	tokeniser(t_const_str raw, enum e_token list)
{
	t_vec_token	output;

	if (!raw)
		return (ERROR);
	output = vec_token_new(16, NULL);
	start_analyse(raw, list, &output);
	return (NO_ERROR);
}
