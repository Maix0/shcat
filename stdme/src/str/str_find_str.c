/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_find_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:11:01 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:45 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"

const char	*str_find_str(t_const_str str, t_const_str to_find)
{
	t_str	needle;
	t_str	haystack;

	if (str == NULL || to_find == NULL)
		return (NULL);
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		haystack = (t_str)str;
		needle = (t_str)to_find;
		while (*haystack && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (str);
		str++;
	}
	return (NULL);
}

/*R

#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[]) {
	if (argc != 3)
		return (2);
	printf("HAYSTACK = '%s'\n", argv[1]);
	printf(" NEEDLE  = '%s'\n", argv[2]);

	printf("libc: %p : '%s'\n", str_find_str(argv[1], argv[2]),
		str_find_str(argv[1],
			argv[2]));
	printf(" ft : %p : '%s'\n",
		str_find_str(argv[1], argv[2]),
		str_find_str(argv[1], argv[2]));
}
R*/
