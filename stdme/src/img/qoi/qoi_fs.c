/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qoi_fs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:06:05 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:31 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/fs.h"
#include "me/img/qoi.h"
#include "me/mem/mem.h"
#include "me/vec/vec_u8.h"
#include <stdlib.h>

/// This has to be added into the me/fs/fs.h header at one point
t_error	read_to_vec(t_const_str filename, t_vec_u8 *out);

t_i32	qoi_write(t_const_str filename, const void *data,
		const t_qoi_desc *desc)
{
	t_fd	*f;
	void	*encoded;
	t_i32	size;

	f = open_fd((t_str)filename, FD_WRITE, 0, FP_ALL_EXEC);
	if (f == NULL)
		return (0);
	encoded = qoi_encode(data, desc, &size);
	if (!encoded)
		return (close_fd(f), 0);
	if (write_fd(f, encoded, size, NULL))
		return (close_fd(f), 0);
	close_fd(f);
	mem_free(encoded);
	return (size);
}

void	*qoi_read(t_const_str filename, t_qoi_desc *desc, t_i32 channels)
{
	t_vec_u8	out;
	void		*pixels;

	if (read_to_vec(filename, &out))
		return (NULL);
	pixels = qoi_decode(out.buffer, out.len, desc, channels);
	vec_u8_free(out);
	return (pixels);
}
