/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_dumb_internal.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:03:59 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/12 16:42:39 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOC_DUMB_INTERNAL_H
#define ALLOC_DUMB_INTERNAL_H

#include "me/types.h"

#define PTR_LENS 255

typedef struct s_ptr
{
	void   *ptr;
	t_usize size;
} t_ptr;

typedef struct s_ptr_table
{
	t_ptr				table[PTR_LENS];
	struct s_ptr_table *next;
} t_ptr_table;

t_ptr_table *get_table(void);

#endif /* ALLOC_DUMB_INTERNAL_H */
