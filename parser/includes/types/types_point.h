/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_point.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:20:34 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 14:21:16 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_POINT_H
# define TYPES_POINT_H

# include "me/types.h"

typedef struct s_point
{
	t_u32	row;
	t_u32	column;
}			t_point;

#endif /* TYPES_POINT_H */
