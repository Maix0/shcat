/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:48:21 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/06 18:55:33 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/main.h"

void	vec_process_free_ptr(void *s)
{
	close(((t_pipex_args *)s)->in);
	close(((t_pipex_args *)s)->out);
	if (((t_pipex_args *)s)->here_doc)
		close(((t_pipex_args *)s)->here_doc_fd);
	vec_process_free(((t_pipex_args *)s)->processes);
}

t_error	spawn_helper(t_pipex_args *s, t_usize idx, t_redirection in,
		t_redirection out)
{
	t_process		o;
	t_vec_str		args;
	t_spawn_info	info;

	if (split_literals(s->argv[idx], &args))
		return (ERROR);
	info = (t_spawn_info){
		.stdin = in,
		.stdout = out,
		.stderr = inherited(),
		.binary_path = str_clone(args.buffer[0]),
		.arguments = args,
		.environement = clone_vec_str(&s->env),
		.forked_free = vec_process_free_ptr,
		.forked_free_args = s,
	};
	if (spawn_process(
			info,
			&o))
		return (ERROR);
	return (vec_process_push(&s->processes, o));
}
