/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:08:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/08 15:22:04 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include <execinfo.h>
#include <stdio.h>
#include <stdlib.h>

#define PRINT_BACKTRACE

#if defined(PRINT_BACKTRACE) || defined(BACKTRACE_DEEP)

# ifndef BACKTRACE_DEEP
#  define BACKTRACE_DEEP 256
# endif

static void	print_trace_inner(void **trace, t_str *messages, t_usize i)
{
	char	syscom[1024];
	t_i32	p;

	p = 0;
	printf("[bt] #%zu\t", i);
	while (messages[i][p] != '(' && messages[i][p] != ' '
		&& messages[i][p] != 0)
		++p;
	fflush(stdout);
	snprintf(syscom, 1024, "addr2line %p -e %.*s -sipf", trace[i], p,
		messages[i]);
	(void)system(syscom);
}

void	print_trace(void)
{
	void	*trace[BACKTRACE_DEEP];
	t_str	*messages;
	t_i32	size;
	t_i32	i;

	size = backtrace(trace, BACKTRACE_DEEP);
	messages = backtrace_symbols(trace, size);
	i = 1;
	printf("[bt] Execution path:\n");
	if (size >= 3)
		size -= 3;
	while (i < size)
		print_trace_inner(trace, messages, i++);
}
#else

static void	print_trace(void)
{
}

#endif

void	me_abort(void)
{
	print_trace();
	me_exit(1);
}
