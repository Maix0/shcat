/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_pipeline_helper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:32:37 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:26 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/_run_ast.h"
#include "me/vec/vec_ast.h"
#include "me/vec/vec_pid.h"
#include <errno.h>
#include <sys/wait.h>

t_usize	_pipeline_set_vars(\
	t_error *ret, t_vec_pid *pids, t_cmd_pipe *cpipe, t_pipeline_result *out)
{
	*ret = NO_ERROR;
	*pids = vec_pid_new(32, NULL);
	*cpipe = (typeof(*cpipe)){.input = NULL, .create_output = true};
	out->exit = 127;
	return (0);
}
