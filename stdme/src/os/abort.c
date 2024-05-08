/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:08:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/08 19:39:37 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/putstr_fd.h"
#include "me/fs/putendl_fd.h"
#include "me/types.h"
#include <execinfo.h>
#include <stdio.h>
#include <stdlib.h>
#include "me/alloc/alloc_internal.h"

#ifndef BASE_PATH
# define BASE_PATH "/no_base_path_defined/"
#endif

#if defined(PRINT_BACKTRACE) || defined(BACKTRACE_DEEP)

# ifndef BACKTRACE_DEEP
#  define BACKTRACE_DEEP 256
# endif

static void	print_trace_inner(void **trace, t_str *messages, t_usize i)
{
	char	syscom[1024];
	t_i32	p;

	p = 0;
	fprintf(stderr, "[bt] #%-4zu\t", i);
	while (messages[i][p] != '(' && messages[i][p] != ' '
		&& messages[i][p] != 0)
		++p;
	fflush(stderr);
	snprintf(syscom, \
				1024, \
				"addr2line %p -e %.*s -ipf | 1>&2 rg \"^(.*) at %s(.*)\"'$' " \
				"--replace '$1 at $2' --color never", \
				trace[i], \
				p, \
				messages[i], \
				BASE_PATH);
	if (system(syscom))
		fprintf(stderr, "%s\n", messages[i]);
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
	fprintf(stderr, "[bt] Execution path:\n");
	if (size >= 3)
		size -= 3;
	while (i < size)
		print_trace_inner(trace, messages, i++);
	free(messages);
}
#else

void	print_trace(void)
{
}

#endif

void	me_abort(t_str msg)
{
	if (msg == NULL)
		msg = "No message (msg was NULL)";
	me_putendl_fd("Memory information:", 2);
	print_pages_info();
	me_putstr_fd("Abort: ", 2);
	me_putendl_fd(msg, 2);
	print_trace();
	me_exit(1);
}
