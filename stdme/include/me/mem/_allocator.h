/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _allocator.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:27:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:07 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ALLOCATOR_H
# define _ALLOCATOR_H

# include "aq/allocator.h"

t_allocator	*global_allocator(void);
void		uninit_global_allocator(void);

#endif /* _ALLOCATOR_H */
