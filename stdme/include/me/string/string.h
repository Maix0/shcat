/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:54:28 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:12 by rparodi          ###   ########.fr       */
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
t_error				string_reserve(t_string *buf, t_usize size);

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

/// @brief Insert a string into self
/// @param self the string to insert into
/// @param pos the index to start inserting at
/// @param str the string to insert
/// @return Error in case pos was over the string length, self was equal to NULL
/// or str was equal to NULL
t_error				string_insert(t_string *self, t_usize pos, t_str str);

/// @brief Insert a char into self
/// @param self the string to insert into
/// @param pos the index to start inserting at
/// @param str the character to insert
/// @return Error in case pos was over the string length, self was equal to NULL
/// or chr was '\0'
t_error				string_insert_char(t_string *self, t_usize pos, char chr);

/// @brief Clear the string, keeping everything before `pos`
/// @param self the string to operate on
/// @param pos the position to start remove from
/// @return returns an Error if self is null or pos is after the string length
t_error				string_clear_after(t_string *self, t_usize pos);

/// @brief Remove a single character from the string, putting it in `out`
/// @param self the string to operate on
/// @param pos the position to start remove
/// @param out[out] the place to put the removed character, if any. Can be NULL
/// @return returns an Error if self is null or pos is after the string length
t_error				string_remove(t_string *self, t_usize pos, char *out);

#endif
