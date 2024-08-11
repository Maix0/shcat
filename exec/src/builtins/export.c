/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:13:41 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/11 11:26:08 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/types.h"

t_error builtin_export(t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	if (info.args.len == 1)
		return (builtin_env___(state, info, exit_code));

	return (*exit_code = 0, NO_ERROR);
}
