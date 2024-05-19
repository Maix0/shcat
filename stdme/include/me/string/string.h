/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:54:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/30 14:14:42 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H
# include "me/types.h"

typedef struct s_string
{
	t_str			buf;
	t_usize			capacity;
	t_usize			len;
}					t_string;

/// @brief Push a string to a buffer
/// @param buf the string to be pushed to
/// @param to_push the string to push
/// @return true if it failed, false otherwise 
t_error				string_push(t_string *buf, t_const_str to_push);


/// @brief Push a character to a buffer
/// @param buf the string to be pushed to
/// @param to_push the character to push
/// @return true if it failed, false otherwise
t_error				string_push_char(t_string *buf, char to_push);

/// @brief Clear a string
/// @param buf the string to clear
void				string_clear(t_string *buf);

/// @brief Create a new string
/// @param capacity the initial capacity of the string
/// @return the created string
t_string			string_new(t_usize capacity);

/// @brief Make the string able to hold at least size characters if not already
/// @param buf the string to operate on
/// @param size the minimum size of the string wanted
/// @return true if it failed, false otherwise
t_error 			string_reserve(t_string *buf, t_usize size);

/// @brief free a string
/// @param buf the string to free
static inline void	string_free(t_string buf)
{
	void	mem_free(void *);

	mem_free(buf.buf);
}

/// @brief Pop a character from a string
/// @param buf the string to pop from
/// @return the popped character, or '\0' if the string is empty
static inline char	string_pop(t_string *buf)
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
