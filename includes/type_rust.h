/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_rust.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:44:20 by rparodi           #+#    #+#             */
/*   Updated: 2024/03/31 20:53:56 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_RUST_H
#define TYPE_RUST_H

# include <stdbool.h>
# include <stddef.h>
# include <unistd.h>

typedef char				*t_str;
typedef const char			*t_const_str;

typedef unsigned char		t_u8;
typedef char				t_i8;
typedef unsigned short		t_u16;
typedef short				t_i16;
typedef int					t_i32;
typedef unsigned int		t_u32;
typedef unsigned long long	t_u64;
typedef long long			t_i64;
typedef ssize_t				t_isize;
typedef size_t				t_usize;

typedef float				t_f32;
typedef double				t_f64;

typedef int					t_file;

typedef bool				t_error;

# define ERROR 1
# define NO_ERROR 0

#endif
