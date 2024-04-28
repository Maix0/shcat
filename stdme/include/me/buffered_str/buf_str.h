/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_str.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:54:28 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/31 15:34:29 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUF_STR_H
# define BUF_STR_H
# include "me/types.h"

typedef struct s_buffer_str
{
	t_str			buf;
	t_usize			capacity;
	t_usize			len;
}					t_buffer_str;

bool				push_str_buffer(t_buffer_str *buf, t_const_str to_push);
bool				push_str_char(t_buffer_str *buf, char to_push);
void				str_clear(t_buffer_str *buf);
t_buffer_str		alloc_new_buffer(t_usize capacity);

static inline void	str_free(t_buffer_str buf)
{
	void	free(void *);

	free(buf.buf);
}

static inline char	str_pop(t_buffer_str *buf)
{
	char	c;

	c = '\0';
	if (buf->buf && buf->len)
	{
		c = buf->buf[buf->len - 1];
		buf->buf[buf->len - 1] = '\0';
	}
	return (c);
}

#endif
