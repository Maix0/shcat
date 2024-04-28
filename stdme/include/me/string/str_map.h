/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_map.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:26:00 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:11:40 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_MAP_H
# define STR_MAP_H

# include "me/types.h"

t_str	str_map(t_const_str s, char (*f)(t_usize, char));

#endif