/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _get_pid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:25:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/06 14:27:40 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/os/os.h"
#include "me/types.h"

#define BONUS 1

#if BONUS
t_pid get_self_pid(void)
{
	return (getpid());
}
#else
t_pid get_self_pid(void)
{
	return (1);
}

#endif
