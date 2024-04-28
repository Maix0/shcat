/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_alloc_array.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:53:21 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:19:45 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_ALLOC_ARRAY_H
# define MEM_ALLOC_ARRAY_H

# include "me/types.h"

void	*mem_alloc_array(t_usize item_count, t_usize item_size);

#endif
