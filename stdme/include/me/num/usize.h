/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usize.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:10:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:09 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USIZE_H
# define USIZE_H

# include "me/types.h"

t_usize	usize_rotate_left(t_usize n, t_usize by);
t_usize	usize_rotate_right(t_usize n, t_usize by);
t_usize	usize_round_up_to(t_usize self, t_usize mul);

#endif
