/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yarn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:04:13 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/07 18:14:22 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/printf/printf.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

t_error yarn(t_vec_token *list, enum e_token type, t_vec_token *output)
{
	size_t i;

	i = 0;
	if (!list[0].buffer || !output->buffer)
		return (ERROR);
	while (list[i].buffer == NULL)
	{
		i++;
	}
	return (NO_ERROR);
}
