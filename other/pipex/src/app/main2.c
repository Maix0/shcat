/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:46:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/06 18:55:12 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/main.h"

void	set_here_doc(t_pipex_args *s)
{
	t_pipe	pipe;

	if (create_pipe(&pipe))
		(vec_str_free(s->env), exit(1));
	s->min = 5;
	s->here_doc = true;
	s->here_doc_limiter = s->argv[1];
	s->here_doc_fd = pipe.write;
	s->in = pipe.read;
}

void	open_read_file(t_pipex_args *s)
{
	if (me_open(s->argv[0], true, false, &s->in))
		(me_eprintf("Error:\nInput file not found!\n"), vec_str_free(s->env),
			exit(1));
}

void	clone_vec_str_iter_fn(t_usize idx, t_str *s, void *out)
{
	vec_str_push(out, str_clone(*s));
}

t_vec_str	clone_vec_str(t_vec_str *v)
{
	t_vec_str	val;

	val = vec_str_new(v->len + 2, (t_free_str_item)free);
	vec_str_iter(v, &clone_vec_str_iter_fn, &val);
	return (val);
}
