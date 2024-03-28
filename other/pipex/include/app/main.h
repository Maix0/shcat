/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:51:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/03/28 12:37:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../me/fs/open.h"
# include "../me/fs/read.h"
# include "me/fs/write.h"
# include "me/gnl/gnl.h"
# include "me/mem/mem_find_bytes.h"
# include "me/mem/mem_move.h"
# include "me/os/pipe.h"
# include "me/os/process.h"
# include "me/printf/printf.h"
# include "me/string/split_literals.h"
# include "me/string/str_clone.h"
# include "me/string/str_len.h"
# include "me/string/str_n_compare.h"
# include "me/string/str_n_find_str.h"
# include "me/vec/vec_process.h"
# include "me/vec/vec_str.h"
# include <stdlib.h>
# include <sys/wait.h>
# include <unistd.h>

# ifndef BONUS
#  define BONUS 0
# endif

typedef struct s_pipex_args
{
	t_usize			argc;
	t_str			*argv;
	bool			here_doc;
	t_str			here_doc_limiter;
	t_file			here_doc_fd;
	t_vec_str		env;
	t_file			in;
	t_file			out;
	t_vec_process	processes;
	t_usize			min;
	t_usize			max;
}					t_pipex_args;

void				set_here_doc(t_pipex_args *s);
void				open_read_file(t_pipex_args *s);
void				clone_vec_str_iter_fn(t_usize idx, t_str *s, void *out);
t_vec_str			clone_vec_str(t_vec_str *v);
void				vec_process_free_ptr(void *s);
t_error				spawn_helper(t_pipex_args *s, t_usize idx, t_redirection in,
						t_redirection out);
void				cleanup(t_pipex_args *s, bool error);
void				process_cleanup(t_process elem);
void				do_here_doc_thing(t_pipex_args *s);
int					main2(t_pipex_args *s);

#endif /* MAIN_H */
