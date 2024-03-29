/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_rust.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:44:20 by rparodi           #+#    #+#             */
/*   Updated: 2024/03/29 11:44:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_RUST_H
#define TYPE_RUST_H

#include <stddef.h>

# define bool int
# define true 1
# define false 0

# define u8 unsigned char
# define u16 unsigned short
# define u32 unsigned int
# define u64 unsigned long long

# define i8 char
# define i16 short
# define i32 int
# define i64 long long

# define usize size_t
# define isize ssize_t

# define f32 float
# define f64 double

#endif
