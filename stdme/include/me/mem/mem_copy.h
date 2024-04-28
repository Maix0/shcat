/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_copy.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:16:02 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:21:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_COPY_H
# define MEM_COPY_H

# include "me/types.h"

void	*mem_copy(void *destination, const void *source, t_usize count);

#endif