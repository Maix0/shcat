/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qoi_fs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:06:05 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/24 19:18:01 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/close.h"
#include "me/fs/open.h"
#include "me/fs/read_to_vec.h"
#include "me/fs/write.h"
#include "me/img/qoi.h"
#include <stdlib.h>

t_i32	qoi_write(t_const_str filename, const void *data,
		const t_qoi_desc *desc)
{
	t_file	f;
	void	*encoded;
	t_i32	size;

	if (me_open(filename, false, true, &f))
		return (0);
	encoded = qoi_encode(data, desc, &size);
	if (!encoded)
		return (me_close(f, NULL), 0);
	if (me_write(f, encoded, size))
		return (me_close(f, NULL), 0);
	me_close(f, NULL);
	free(encoded);
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
