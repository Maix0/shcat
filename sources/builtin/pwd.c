/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:58:37 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/07 14:07:39 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/env.h"
#include "me/string/string.h"
#include "me/hash/hasher.h"
#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_str.h"
#include <stdlib.h>

void	pwd(void)
{
	t_str	str;
	t_usize	size;

	size = 1024;
	str = (t_str)mem_alloc((size + 1) * sizeof(t_i8));
	if (str == NULL)
		me_abort("Error allocating for pwd builtin");
	while (getcwd(str, size) == NULL)
	{
		if (str)
			free(str);
		size *= 2;
		str = (t_str)mem_alloc(sizeof(t_i8) * size);
		if (str == NULL)
			me_abort("Error allocating for pwd builtin");
	}
	printf("%s\n", str);
	free(str);
}
