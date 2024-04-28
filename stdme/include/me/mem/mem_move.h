/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_move.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:16:02 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:24:26 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_MOVE_H
# define MEM_MOVE_H

# include "me/types.h"

void	*mem_move(void *destination, const void *source, t_usize count);

#endif