/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usize.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:10:03 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/11 14:17:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USIZE_H
# define USIZE_H

# include "me/types.h"

t_usize	usize_rotate_left(t_usize n, t_usize by);
t_usize	usize_rotate_right(t_usize n, t_usize by);

#endif
