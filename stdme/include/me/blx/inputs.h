/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:38:22 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/21 20:15:54 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUTS_H
# define INPUTS_H

# include "me/types.h"
# include "me/vec/vec_u8.h"

# ifndef BLX_H

typedef struct s_blx	t_blx;

# endif

typedef struct s_blx_input
{
	t_vec_u8			keysyms_pressed;
	t_vec_u8			keysyms_held;
	t_vec_u8			keysyms_released;
	t_u8				mouse;

}						t_blx_input;

t_blx_input				create_inputs_manager(t_blx *ctx);

#endif
