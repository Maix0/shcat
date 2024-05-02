/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:41:15 by rparodi           #+#    #+#             */
/*   Updated: 2024/04/30 16:41:57 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

# include "me/types.h"
# include "app/node.h"

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <stdlib.h>
# include <stdarg.h>
# include <readline/readline.h>
# include <readline/history.h>

# define PATH_FILES "/usr/local/bin:/usr/bin:/bin:/usr/local/games:/usr/games"

typedef struct s_parser
{
	t_first_parser *parser;
} t_parser;

typedef struct s_utils
{
	t_str		name_shell;
	t_str		str_input;
	t_str		*strs_input;	
	t_str		*path;
	t_str		*envp;
	t_parser	parser;
	t_node		current_node;
}			t_utils;

t_i32	main(t_i32 argc, t_str argv[], t_str arge[]);
void	ft_other_cmd(t_utils *shcat, t_usize i, t_usize prev_i);
t_i32	ft_strcmp(const char *s1, const char *s2);
t_i32	ft_check_type_operators(t_str operators);
t_str	*ft_split(t_const_str s, t_i8 c);
t_str	ft_strdup(t_const_str s);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_calloc(t_usize nmemb, t_usize size);
size_t	ft_strlen(t_const_str s);
t_usize	ft_strlcpy(t_str dst, t_const_str src, t_usize size);
void	*ft_memset(void *s, t_i32 c, t_usize n);
void	ft_bzero(void *s, t_usize n);
void	ft_free_strs(t_str *strs);
void	ft_pwd(void);
void	ft_echo(t_str txt, t_str flag);
void	ft_exit(t_utils *maiboyerlpb, t_u8 exit_status);
void	ft_free(void *ptr);

#endif
