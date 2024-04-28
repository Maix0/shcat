/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_alloc_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:53:21 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 18:14:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem_alloc.h"
#include "me/mem/mem_alloc_array.h"
#include <stdlib.h>

void	*mem_alloc_array(t_usize item_count, t_usize item_size)
{
	t_usize	multiplied;

	multiplied = item_count * item_size;
	if (multiplied == 0 || multiplied / item_count != item_size)
		return (NULL);
	return (mem_alloc(multiplied));
}
