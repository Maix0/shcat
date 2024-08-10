/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:13:41 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/10 19:58:12 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/types.h"

t_error builtin_export(t_state *state, t_spawn_info info)
{
	if (info.arguments.len == 1)
		return (builtin_env___(state, info));

	return (NO_ERROR);
}
