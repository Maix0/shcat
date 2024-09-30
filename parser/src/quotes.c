/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quotes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:46:45 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/30 12:28:26 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/vec/vec_token.h"
#include "parser/token.h"
#include "me/string/string.h"
#include "me/types.h"
#include <stdio.h>

/**
 * @brief boolean function that's say if it's a quote or not
 *
 * @param c character will be checked
 * @return true if it's quote, if not return false
 */
bool	is_quote(char c)
{
	if (c == '"' || c == '\'')
		return (true);
	return (false);
}

/**
 * @brief token function that's read the string and return the tokens
 *
 * @param raw the input from stdin
 * @param start the index where the first quote was found
 * @param output the token of the string
 * @return Check if there is an error on this function
 */
t_error	find_end_string(t_const_str raw, t_usize *start, t_token *output)
{
	if (!raw || !output)
		return (ERROR);
	if (is_quote(raw[(*start)]))
	{
		string_push_char(&output->string, raw[(*start)]);
		(*start)++;
		if (raw[(*start)] == '\0')
			return (ERROR);
		while (raw[(*start)] != '\0')
		{
			string_push_char(&output->string, raw[(*start)]);
			if (is_quote(raw[(*start)]))
				return (NO_ERROR);
			(*start)++;
		}
	}
	return (ERROR);
}
