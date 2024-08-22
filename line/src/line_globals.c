/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_globals.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:47:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/22 16:26:35 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "line/_line_internal.h"
#include "line/_line_structs.h"
#include "me/mem/mem.h"


#ifdef static
# undef static
#endif

t_const_str	get_unfinished_str(void)
{
	return ("If you see this,"
		" you are misusing the API"
		" if it returns get_unfinished_str()"
		" the user is yet editing the line."
		" See the README file for more information.");
}

t_vec_str	*get_history(void)
{
	static t_vec_str	history = {};
	static bool			init = false;

	if (!init)
	{
		history = vec_str_new(256, (void (*)())mem_free);
		init = true;
	}
	return (&history);
}

t_raw_mode_state	*get_raw_mode_state(void)
{
	static t_raw_mode_state	state = {};

	return (&state);
}

/* Free the history, but does not reset it. Only used when we have to
 * exit() to avoid memory leaks are reported by valgrind & co. */
void	free_history(void)
{
	t_vec_str	*history;

	history = get_history();
	vec_str_free(*history);
}

/* At exit we'll try to fix the terminal to the initial conditions. */
__attribute__((destructor)) void	line_uninit_lib(void)
{
	line_disable_raw_mode(get_stdin());
	free_history();
}
