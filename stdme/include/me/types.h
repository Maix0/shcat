/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:31:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:12 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include <stdbool.h>
# include <stddef.h>
# include <stdint.h>
# include <unistd.h>

# ifndef ERROR
/// @def signal that an error occured
#  define ERROR 1
# else
#  include <stdio.h>
# endif

# ifndef NO_ERROR
/// @def signal that no error occured
#  define NO_ERROR 0
# endif

# ifndef BONUS
/// @def signal that no error occured
#  define BONUS 0
# endif

/// @brief A string, null terminated
typedef char		*t_str;
/// @brief A constant string, null terminated
typedef const char	*t_const_str;

/// @brief an unsigned 8 bit integer
typedef uint8_t		t_u8;
/// @brief a signed 8 bit integer
typedef int8_t		t_i8;
/// @brief an unsigned 16 bit integer
typedef uint16_t	t_u16;
/// @brief a signed 16 bit integer
typedef int16_t		t_i16;
/// @brief an unsigned 32 bit integer
typedef uint32_t	t_u32;
/// @brief a signed 32 bit integer
typedef int32_t		t_i32;
/// @brief an unsigned 64 bit integer
typedef uint64_t	t_u64;
/// @brief a signed 64 bit integer
typedef int64_t		t_i64;
/// @brief a signed integer that can hold a pointer
typedef ssize_t		t_isize;
/// @brief an unsigned integer that can hold a pointer
typedef size_t		t_usize;

/// @brief a 32 bit floating point number
typedef float		t_f32;
/// @brief a 64 bit floating point number
typedef double		t_f64;

/// @brief a boolean value that represents an error
/// @note true is an error, false is no error
typedef bool		t_error;

/// @brief a function that denotes an abrupt end of the program
/// @param msg the message to print before exiting
void				me_abort(t_str msg);

/// @brief a function that denotes a normal end of the program
/// @param code the exit code
void				me_exit(t_i32 code);

/// @brief a function that prints the current stack trace
void				print_trace(void);

#endif
