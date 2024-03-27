/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:35:44 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/06 18:52:49 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/main.h"

void	cleanup(t_pipex_args *s, bool error)
{
	if (s->here_doc)
		close(s->here_doc_fd);
	close(s->in);
	close(s->out);
	vec_str_free(s->env);
	vec_process_free(s->processes);
	if (error)
		exit(1);
	wait(NULL);
	exit(0);
}

void	process_cleanup(t_process elem)
{
	close(elem.stdin.vals.wo.fd);
	close(elem.stdout.vals.ro.fd);
	close(elem.stderr.vals.ro.fd);
}

void	do_here_doc_thing(t_pipex_args *s)
{
	t_buffer_str	line;
	t_isize			f;
	t_usize			len;
	bool			error;

	len = str_len(s->here_doc_limiter);
	error = false;
	while (!error)
	{
		line = get_next_line(0, &error);
		if (error)
			(me_eprintf("Error:\nError when reading stdin!\n"), cleanup(s,
					true));
		f = str_n_compare(line.buf, s->here_doc_limiter, len);
		if (f == 0 && line.len >= len + 1 && (line.buf[len] == '\0'
				|| line.buf[len] == '\n'))
		{
			str_free(line);
			break ;
		}
		write(s->here_doc_fd, line.buf, line.len);
		str_free(line);
	}
	cleanup(s, false);
}

int	main2(t_pipex_args *s)
{
	t_usize	p_idx;

	if (s->argc < 2 || s->argc < s->min || s->argc > s->max)
		(me_eprintf("Error:\nWrong number of arguments!\n"), s->here_doc
			&& close(s->here_doc_fd), close(s->in), vec_str_free(s->env),
			exit(1));
	s->processes = vec_process_new(s->argc, process_cleanup);
	p_idx = s->argc - 2 - (t_usize)(s->here_doc);
	if (spawn_helper(s, p_idx--, piped(), fd(s->out)))
		(me_eprintf("Error:\nFailed to spawn process!\n"), cleanup(s, true));
	while (p_idx > 1 + (t_usize)s->here_doc)
	{
		if (spawn_helper(s, p_idx--, piped(),
				fd(s->processes.buffer[s->processes.len - 1].stdin.vals.wo.fd)))
			(me_eprintf("Error:\nFailed to spawn process!\n"), cleanup(s,
					true));
	}
	if (spawn_helper(s, p_idx, fd(s->in),
			fd(s->processes.buffer[s->processes.len - 1].stdin.vals.wo.fd)))
		(me_eprintf("Error:\nFailed to spawn process!\n"), cleanup(s, true));
	if (s->here_doc)
		do_here_doc_thing(s);
	cleanup(s, false);
	return (0);
}

int	main(int argc, t_str argv[], t_str env[])
{
	t_usize			env_idx;
	t_pipex_args	s;

	s.min = 4;
	s.max = 4;
	s.argv = argv + 1;
	s.argc = argc - 1;
	s.here_doc = false;
	if (s.argc < 3)
		(me_eprintf("Error:\nNot enough arguments!"), exit(1));
	s.env = vec_str_new(128, (t_free_str_item)free);
	env_idx = 0;
	while (env[env_idx])
		vec_str_push(&s.env, str_clone(env[env_idx++]));
	if (BONUS)
		s.max = ~0;
	if (BONUS && str_n_compare(s.argv[0], "here_doc", 9) == 0)
		set_here_doc(&s);
	else
		open_read_file(&s);
	if ((s.here_doc && me_open_create(s.argv[s.argc - 1], &s.out))
		|| (!s.here_doc && me_open_truncate(s.argv[s.argc - 1], &s.out)))
		(me_eprintf("Error:\n Failed to open output file!\n"), s.here_doc
			&& close(s.here_doc_fd), close(s.in), vec_str_free(s.env), exit(1));
	return (s.here_doc && s.argv++, main2(&s));
}
