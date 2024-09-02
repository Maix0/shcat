/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_inner.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:03:42 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 20:16:55 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LENGTH_INNER_H
#define LENGTH_INNER_H

#include "me/types.h"
#include "parser/inner/point_inner.h"

typedef struct s_length t_length;
typedef t_length		Length;

struct s_length
{
	t_u32	bytes;
	t_point extent;
};

#endif /* LENGTH_INNER_H */
