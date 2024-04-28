/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_set_zero.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:58:11 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:24:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_SET_ZERO_H
# define MEM_SET_ZERO_H

# include "me/types.h"

void	mem_set_zero(void *buf, t_usize count);

#endif