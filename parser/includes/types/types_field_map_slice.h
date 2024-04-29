/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_field_map_slice.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:54:41 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 15:08:21 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_FIELD_MAP_SLICE_H
# define TYPES_FIELD_MAP_SLICE_H

# include "me/types.h"

typedef struct s_field_map_slice
{
	t_u16	index;
	t_u16	length;
}			t_field_map_slice;

#endif /* TYPES_FIELD_MAP_SLICE_H */
