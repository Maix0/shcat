/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_iter.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:26:00 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:08:09 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_ITER_H
# define STR_ITER_H

# include "me/types.h"

void	str_iter(t_str s, void (*f)(t_usize, char *));

#endif