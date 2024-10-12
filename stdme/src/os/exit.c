/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:08:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:37 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/mem/_allocator.h"
#include "me/types.h"
#include <stdlib.h>

// If you are looking at why some stuff aren't closed, they are using the
// __attribute__((dtor)) to be run at exit for example:
// 	- close_all_slots
// 	- uninit global allocator
void	me_exit(t_i32 exit_code)
{
	(get_stdin(), get_stdout(), get_stderr());
	close_all_slots();
	exit(exit_code);
}
