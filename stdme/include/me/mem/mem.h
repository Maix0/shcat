/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:32:57 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/14 18:39:13 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
#define MEM_H

#include "me/types.h"

void *mem_alloc(t_usize size);
void *mem_alloc_array(t_usize size, t_usize count);
void *mem_realloc(void *ptr, t_usize size);
void *mem_realloc_array(void *ptr, t_usize size, t_usize count);
void mem_free(void *ptr);

#endif /* MEM_H */
