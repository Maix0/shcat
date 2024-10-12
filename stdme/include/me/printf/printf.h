/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:10:27 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:11 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H

# define PRINTF_H
# include "me/types.h"
# include <stdarg.h>

# ifndef FS_H

typedef struct s_fd		t_fd;
# endif

# ifndef STRING_H

typedef struct s_string	t_string;
# endif

/// @brief Print a formatted string to stdout
/// @param fmt the format string
/// @param ... the arguments to format
/// @return the number of characters printed
t_usize					me_printf(t_const_str fmt, ...);

/// @brief Print a formatted string to a stderr
/// @param fmt the format string
/// @param ... the arguments to format
/// @return  the number of characters printed
t_usize					me_eprintf(t_const_str fmt, ...);

/// @brief Print a formatted string to a stdout
/// @param fmt the format string
/// @param args the arguments to format as a va_list
/// @return the number of characters printed
t_usize					me_vprintf(t_const_str fmt, va_list *args);

/// @brief Print a formatted string to a stderr
/// @param fmt the format string
/// @param args the arguments to format as a va_list
/// @return the number of characters printed
t_usize					me_veprintf(t_const_str fmt, va_list *args);

/// @brief Print a formatted string to the given fd
/// @param fmt the format string
/// @param ... the arguments to format
/// @return the number of characters printed
t_usize					me_printf_fd(t_fd *fd, t_const_str fmt, ...);

/// @brief Print a formatted string to the given fd
/// @param fmt the format string
/// @param args the arguments to format as a va_list
/// @return the number of characters printed
t_usize					me_vprintf_fd(t_fd *f, t_const_str fmt, va_list *args);

/// @brief print a formatted string to a buffer
/// @param buffer the buffer to append to
/// @param fmt the format string
/// @param ... the arguments to format
/// @return the number of characters printed
t_usize					me_printf_str(t_string *buffer, t_const_str fmt, ...);

/// @brief print a formatted string to a buffer
/// @param buffer the buffer to append to
/// @param fmt the format string
/// @param args the arguments to format
/// @return the number of characters printed
t_usize					me_vprintf_str(t_string *buffer, t_const_str fmt, \
			va_list *args);
#endif
