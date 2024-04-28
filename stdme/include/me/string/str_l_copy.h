/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_l_copy.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:01:09 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:09:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_L_COPY_H
# define STR_L_COPY_H

# include "me/types.h"

t_usize	str_l_copy(t_str dest, t_const_str src, t_usize buffer_size);

#endif