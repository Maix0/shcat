/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:22:50 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/07 14:23:14 by rparodi          ###   ########.fr       */
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
#include <cstddef>
#include <stdlib.h>

void	env(t_str *envp)
{
	size_t	i;

	i = 0;
	while (envp[i] != NULL)
	{
		printf("%s\n", envp[i]);
		i++;
	}
}
