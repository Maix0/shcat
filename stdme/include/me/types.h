/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:31:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/08 19:27:44 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
#define TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <unistd.h>

typedef char	   *t_str;
typedef const char *t_const_str;

typedef uint8_t	 t_u8;
typedef int8_t	 t_i8;
typedef uint16_t t_u16;
typedef int16_t	 t_i16;
typedef uint32_t t_u32;
typedef int32_t	 t_i32;
typedef uint64_t t_u64;
typedef int64_t	 t_i64;
typedef ssize_t	 t_isize;
typedef size_t	 t_usize;

typedef float  t_f32;
typedef double t_f64;

typedef int t_file;
typedef struct s_list
{
	void		  *content;
	struct s_list *next;
} t_list;

typedef bool t_error;

void me_abort(t_str msg);
void me_exit(t_i32 code);
void me_free(void *ptr);
void print_trace(void);

#define ERROR 1
#define NO_ERROR 0
#endif
