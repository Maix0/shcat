/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:08:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/12 23:04:14 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc.h"
#include "me/types.h"
#include <stdlib.h>

void me_exit(t_i32 exit_code)
{
	uninit_allocator();
	exit(exit_code);
}
