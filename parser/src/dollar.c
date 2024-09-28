/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dollar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:18:46 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/28 11:47:09 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/vec/vec_token.h"
#include "parser/token.h"
#include "me/string/string.h"
#include "me/types.h"
#include <stdio.h>

/**
 * @brief boolean function that's say if it's a dollar or not
 *
 * @param c character will be checked
 * @return true if it's dollar, if not return false
 */
bool	is_dollar(char c)
{
	if (c == '$')
		return (true);
	return (false);
}
