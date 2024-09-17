/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _read_dir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:43:33 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/17 22:39:54 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include "app/env.h"
#include "exec/_run_ast.h"
#include "me/fs/fs.h"
#include "me/os/os.h"
#include "me/str/str.h"
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include "line/line.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_str.h"
#include "exec/builtins.h"
#include "me/printf/printf.h"
#include "me/string/string.h"
#include "me/types.h"

/**
 * @brief the pushing files on vector
 *
 * @param path path to parse
 * @param out the return value
 * @return ERROR (1) / NO_ERROR (0)
 */
t_error	listing_files(t_string path, t_vec_str *out)
{
	DIR				*tmp;
	struct dirent	*entry;

	tmp = opendir(path.buf);
	if (tmp == NULL)
		return (ERROR);
	while ((entry = readdir(tmp)) != NULL)
		vec_str_push(out, entry->d_name);
	return (NO_ERROR);
}

/**
 * @brief list all files in the current directory
 *
 * @param out the return value
 * @return ERROR (1) / NO_ERROR (0)
 */
t_error	list_files_in_current_directory(t_vec_str *out)
{
	t_vec_str	*tmp;
	t_string	path;

	(void)out;
	tmp = NULL;
	while (getcwd(path.buf, path.capacity - 1) == NULL)
		if (errno == ERANGE)
			string_reserve(&path, path.capacity * 3);
	if (!listing_files(path, tmp))
		return (NO_ERROR);
	return (out = tmp, NO_ERROR);
}
