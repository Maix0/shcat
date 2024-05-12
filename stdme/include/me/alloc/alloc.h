/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:42:02 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/12 17:10:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOC_H
#define ALLOC_H

#include "me/types.h"

void *me_malloc(t_usize size);
void *me_calloc(t_usize elem_count, t_usize elem_size);
void *me_realloc(void *ptr, t_usize size);
void *me_realloc_array(void *ptr, t_usize elem_size, t_usize elem_count);

#endif /* ALLOC_H */
