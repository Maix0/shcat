/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parentheses.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:25:22 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/30 12:28:26 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/vec/vec_token.h"
#include "parser/token.h"
#include "me/string/string.h"
#include "me/types.h"
#include <stdio.h>

char	is_parentheses(char c, char next)
{
	if (c == '(')
	{
		if (next == '(')
			return (2);
		else
			return (1);
	}
	return (0);
}
