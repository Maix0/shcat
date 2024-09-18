/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _read_dir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:43:33 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/18 21:05:40 by maiboyer         ###   ########.fr       */
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
	struct dirent	*entry;
	t_dir			*tmp;
	t_vec_str		ret;

	if (out == NULL)
		return (string_free(path), ERROR);
	if (open_dir(path.buf, &tmp))
		return (string_free(path), ERROR);
	string_free(path);
	ret = vec_str_new(16, str_free);
	while (!read_dir(tmp, &entry))
	{
		if (entry == NULL)
			break ;
		if (entry->d_name[0] == '.')
			continue ;
		vec_str_push(&ret, str_clone(entry->d_name));
	}
	return (*out = ret, NO_ERROR);
}

/**
 * @brief list all files in the current directory
 *
 * @param out[out] the return value, it'll be populated on success;
 * @return ERROR (1) / NO_ERROR (0)
 */
t_error	list_files_in_current_directory(t_vec_str *out)
{
	t_string	path;

	if (out == NULL)
		return (ERROR);
	path = string_new(1024);
	while (getcwd(path.buf, path.capacity - 1) == NULL)
	{
		printf("lololol\n");
		if (errno == ERANGE)
			string_reserve(&path, path.capacity * 3);
		else
			return (string_free(path), ERROR);
	}
	return (listing_files(path, out));
}
