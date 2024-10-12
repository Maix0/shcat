/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_l_cat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:01:09 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:46 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*R

//CFLAGS="-lbsd"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

R*/

#include "me/str/str.h"
#include "me/str/str.h"

t_usize	str_l_cat(t_str dest, t_const_str src, t_usize buffer_size)
{
	t_usize	dest_len;
	t_usize	src_len;
	t_usize	i;

	if (buffer_size == 0 && (dest == NULL || src == NULL))
		return (0);
	dest_len = str_len(dest);
	src_len = str_len(src);
	if (dest_len >= buffer_size)
		return (buffer_size + src_len);
	i = 0;
	while (src[i] && dest_len + i < buffer_size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*R

#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int	main(void) {
	char* dest_ft;
	char* dest_libc;
	char* to_cat = "banane";
	unsigned int res_libc = 0;
	unsigned int res_ft = 0;
	int i;

	for (int v = 0; v <= SIZE; v++)
		for (int j = 0; j < SIZE; j++)
		{
			dest_ft = malloc(SIZE);
			dest_libc = malloc(SIZE);
			i = 0;
			while (i < SIZE)
			{
				dest_ft[i] = 'X';
				dest_libc[i] = 'X';
				i++;
			}
			dest_ft[SIZE - j - 1] = 0;
			dest_libc[SIZE - j - 1] = 0;
			res_libc = str_l_cat(dest_libc, to_cat, SIZE - v);
			res_ft  = str_l_cat(dest_ft, to_cat, SIZE - v);
			int k;
			k = 0;
			while (k < SIZE && dest_libc[k] == dest_ft[k])
				k++;

			if (strcmp(dest_ft, dest_libc) != 0 || res_ft != res_libc
				|| k != SIZE)
			{
				printf("----------v[%d]-j[%d]---------\n", v, j);
				printf("libc: [%d]\t'%s'\n", res_libc ,dest_libc);
				printf(" ft : [%d]\t'%s'\n", res_ft, dest_ft);
				printf("[ERROR] byte %d is different: LIBC[%X] != FT[%X]\n\n",
					i,
					dest_libc[j], dest_ft[j]);
				printf(" ft :");
				for (int x = 0; x < SIZE; x++)
					printf("%02X", dest_ft[x]);
				printf("\n");
				printf("libc:");
				for (int x = 0; x < SIZE; x++)
					printf("%02X", dest_libc[x]);
				printf("\n");
				printf("\n");
			}
			mem_free(dest_libc);
			mem_free(dest_ft);
		}
}
R*/
