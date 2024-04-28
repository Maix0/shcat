/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u8.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:10:03 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/11 14:17:24 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef U8_H
# define U8_H

# include "me/types.h"

t_u8	u8_rotate_left(t_u8 n, t_usize by);
t_u8	u8_rotate_right(t_u8 n, t_usize by);

#endif
