/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:08:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/22 15:05:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/mem/_allocator.h"
#include "me/types.h"
#include <stdlib.h>

void me_exit(t_i32 exit_code)
{
	close_all_slots();
	uninit_global_allocator();
	exit(exit_code);
}
