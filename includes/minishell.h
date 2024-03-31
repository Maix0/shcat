/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:41:15 by rparodi           #+#    #+#             */
/*   Updated: 2024/03/31 21:04:32 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

# include "./type_rust.h"

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

t_i32		main(void);
t_i32		ft_strcmp(const char *s1, const char *s2);
t_i32		ft_check_type_operators(t_i8 **operators);
void		ft_exit(t_str str, t_u8 exit_status);
t_str		*ft_split(t_const_str s, t_i8 c);

#endif
