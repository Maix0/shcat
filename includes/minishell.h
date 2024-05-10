/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:41:15 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/09 16:28:26 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

#include "app/node.h"
#include "app/state.h"
#include "me/types.h"

#include <fcntl.h>
#include <stdio.h>
#include <readline/history.h>
#include <readline/readline.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define PATH_FILES "/usr/local/bin:/usr/bin:/bin:/usr/local/games:/usr/games"

t_i32	main(t_i32 argc, t_str argv[], t_str arge[]);
void	ft_other_cmd(t_utils *shcat, t_usize i, t_usize prev_i);
t_i32	ft_strcmp(const char *s1, const char *s2);
t_i32	ft_check_type_operators(t_str operators);
t_str  *ft_split(t_const_str s, t_i8 c);
t_str	ft_strdup(t_const_str s);
char   *ft_strjoin(char const *s1, char const *s2);
void   *ft_calloc(t_usize nmemb, t_usize size);
size_t	ft_strlen(t_const_str s);
t_usize ft_strlcpy(t_str dst, t_const_str src, t_usize size);
void   *ft_memset(void *s, t_i32 c, t_usize n);
void	ft_bzero(void *s, t_usize n);
void	ft_free_strs(t_str *strs);
void	ft_pwd(void);
void	ft_echo(t_str txt, t_str flag);
void	ft_exit(t_utils *maiboyerlpb, t_u8 exit_status);
void	ft_free(void *ptr);

t_error handle_node_getstr(t_node *self, t_utils *shcat, t_str *out);

#endif
