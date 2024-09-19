/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_inner.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:03:42 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 19:34:50 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LENGTH_INNER_H
# define LENGTH_INNER_H

# include "me/types.h"
# include "parser/inner/point_inner.h"

typedef struct s_length	t_length;

struct s_length
{
	t_u32	bytes;
	t_point	extent;
};

t_length	length_add(t_length len1, t_length len2);
t_length	length_min(t_length len1, t_length len2);
t_length	length_saturating_sub(t_length len1, t_length len2);
t_length	length_sub(t_length len1, t_length len2);
t_length	length_zero(void);
bool		length_is_undefined(t_length length);

#endif /* LENGTH_INNER_H */
