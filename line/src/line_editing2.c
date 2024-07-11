/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_editing2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:22:58 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/11 18:23:15 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line/_line_functions.h"
#include "line/_line_internal.h"
#include "line/_line_structs.h"

/* Utility function to avoid specifying REFRESH_ALL all the times. */
void	line_refresh_line(t_line_state *state)
{
	line_refresh(state, REFRESH_ALL);
}

/* Hide the current line, when using the multiplexing API. */
void	line_hide(t_line_state *state)
{
	line_refresh(state, REFRESH_CLEAN);
}

/* Show the current line, when using the multiplexing API. */
void	line_show(t_line_state *state)
{
	line_refresh(state, REFRESH_WRITE);
}
