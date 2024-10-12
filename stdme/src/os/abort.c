/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:08:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:37 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./gnu_source.h"
#include "me/fs/fs.h"
#include "me/types.h"

#ifndef BASE_PATH
# define BASE_PATH "/no_base_path_defined/"
#endif

#ifdef PRINT_BACKTRACE
# ifndef _PRINT_BACKTRACE
#  define _PRINT_BACKTRACE 
# endif
#endif
#ifdef BACKTRACE_DEEP
# ifndef _PRINT_BACKTRACE
#  define _PRINT_BACKTRACE 
# endif
#endif

#ifdef _PRINT_BACKTRACE
# ifndef BACKTRACE_DEEP
#  define BACKTRACE_DEEP 256
# endif

static size_t	convert_to_vma(t_usize addr)
{
	Dl_info			info;
	struct link_map	*link_map;

	dladdr1((void *)addr, &info, (void **)&link_map, RTLD_DL_LINKMAP);
	return (addr - link_map->l_addr);
}

static void	print_trace_inner(void **trace, t_str *messages, t_usize i)
{
	char	syscom[1024];
	t_i32	p;

	p = 0;
	fprintf(stderr, "[bt] #%-4zu\t", i);
	while (messages[i][p] != '(' && messages[i][p] != ' ' &&
			messages[i][p] != 0)
		++p;
	fflush(stderr);
	snprintf(
		syscom, sizeof(syscom) / sizeof(syscom[0]),
		"addr2line %#x -e %.*s -ipf"
		"| 1>&2 rg \"^(.*) at %s(.*)\"'$' --replace '$1 at $2' --color never",
		(t_u32)(convert_to_vma((t_usize)trace[i])), p, messages[i], BASE_PATH);
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
		msg = "No message provided";
	put_string_fd(get_stderr(), "Abort: ");
	put_string_fd(get_stderr(), msg);
	put_char_fd(get_stderr(), '\n');
	print_trace();
	me_exit(134);
}
