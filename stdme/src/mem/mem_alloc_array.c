/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_alloc_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:53:21 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 12:46:04 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc.h"
#include "me/mem/mem_alloc_array.h"
#include <stdlib.h>

void	*mem_alloc_array(t_usize item_count, t_usize item_size)
{
	return (me_calloc(item_count, item_size));
}
