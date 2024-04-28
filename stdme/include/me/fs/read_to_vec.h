/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_to_vec.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 18:50:37 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/24 18:57:36 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_TO_VEC_H
# define READ_TO_VEC_H

# include "me/types.h"
# include "me/vec/vec_u8.h"

# ifndef READ_BUFFER_SIZE
#  define READ_BUFFER_SIZE 4096
# endif

bool	read_to_vec(t_const_str path, t_vec_u8 *out);

#endif
