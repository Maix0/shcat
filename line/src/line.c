/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:53:27 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line/_line_internal.h"
#include "me/fs/fs.h"
#include "me/mem/mem.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_str.h"
#include <errno.h>
#include <sys/ioctl.h>
#include <termios.h>

/* This just implements a blocking loop for the multiplexed API.
 * In many applications that are not event-drivern, we can just call
 * the blocking linenoise API, wait for the user to complete the editing
 * and return the buffer. */
t_str	line_blocking_edit(t_fd *stdin_fd, t_fd *stdout_fd, t_const_str prompt)
{
	t_line_state	state;
	t_str			res;

	line_edit_start(&state, stdin_fd, stdout_fd, prompt);
	while (!line_edit_feed(&state, &res))
		;
	line_edit_stop(&state);
	return (res);
}

/* The high level function that is the main API of the linenoise library.
 * This function checks if the terminal has basic capabilities, just checking
 * for a blacklist of stupid terminals, and later either calls the line
 * editing function or uses dummy fgets() so that you will be able to type
 * something even in the most desperate of the conditions. */
t_str	linenoise(t_const_str prompt)
{
	t_str	retval;

	if (!isatty(get_stdin()->fd))
		return (line_no_tty_impl(&retval), retval);
	retval = line_blocking_edit(get_stdin(), get_stdout(), prompt);
	return (retval);
}
