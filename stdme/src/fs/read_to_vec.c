/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_to_vec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 18:38:47 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/30 18:15:58 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/open.h"
#include "me/fs/read.h"
#include "me/mem/mem_copy.h"
#include "me/vec/vec_u8.h"

#define READ_BUFFER_SIZE 4096

bool	read_to_vec(t_const_str path, t_vec_u8 *out)
{
	t_u8	temp_buffer[READ_BUFFER_SIZE];
	t_isize	read_amount;
	t_file	f;
	bool	eof;
	t_usize	current_size;

	eof = false;
	current_size = 0;
	if (out == NULL || me_open(path, true, false, &f))
		return (true);
	*out = vec_u8_new(READ_BUFFER_SIZE, NULL);
	while (!eof)
	{
		read_amount = me_read(f, temp_buffer, READ_BUFFER_SIZE, &eof);
		if (read_amount < 0)
			return (true);
		vec_u8_reserve(out, current_size + (t_usize)read_amount);
		mem_copy(&out->buffer[out->len], temp_buffer, (t_usize)read_amount);
		out->len += (t_usize)read_amount;
	}
	return (false);
}
