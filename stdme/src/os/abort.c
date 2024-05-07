/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:08:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 22:26:15 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include <stdlib.h>

#define PRINT_BACKTRACE

#if defined(PRINT_BACKTRACE) || defined(BACKTRACE_DEEP)

# ifndef BACKTRACE_DEEP
#  define BACKTRACE_DEEP 256
# endif
# include "me/fs/putendl_fd.h"
# include <execinfo.h>

static void print_trace(void)
{
	void  *array[BACKTRACE_DEEP];
	t_i32  size;

	size = backtrace(array, BACKTRACE_DEEP);
	backtrace_symbols_fd(array, size, 2);
}
#else

static void print_trace(void)
{
}
#endif

void me_abort(void)
{
	print_trace();
	me_exit(1);
}
