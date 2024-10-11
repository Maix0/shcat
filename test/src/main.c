/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:56:02 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/11 22:44:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/convert/numbers_to_str.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include <stdio.h>
#include <stdlib.h>

t_error	_format_u64(t_num_str args, t_str *out);
//if (_format_u64((t_num_str){.value = tmp, .is_nonnegative = false, .base 
//= "0123456789ABCDEF", .prefix = ""}, &str))
//	continue;

int	main(int argc, char *argv[])
{
	t_usize	i;
	t_u64	tmp;
	t_str	str;

	(void)(argc--);
	(void)(argv++);
	i = 0;
	while (i < (t_usize)argc)
	{
		tmp = atoll(argv[i++]);
		if (u64_to_str(tmp, &str))
			continue ;
		printf("%lu -> %s\n", tmp, str);
		mem_free(str);
	}
	return (0);
}
