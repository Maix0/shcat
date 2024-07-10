/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _line_functions.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:23:25 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/10 15:38:46 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LINE_FUNCTIONS_H
# define _LINE_FUNCTIONS_H

# include "line/_line_structs.h"
# include "me/fs/fs.h"
# include "me/types.h"
# include "me/vec/vec_str.h"

t_error	line_edit_insert(t_line_state *state, char c);
t_error	line_edit_start(t_line_state *state, t_fd *stdin_fd, t_fd *stdout_fd,
			t_const_str prompt);
t_str	line_edit_feed(t_line_state *state);
void	line_edit_backspace(t_line_state *state);
void	line_edit_delete(t_line_state *state);
void	line_edit_history_next(t_line_state *state, t_history_direction dir);
void	line_edit_move_end(t_line_state *state);
void	line_edit_move_home(t_line_state *state);
void	line_edit_move_left(t_line_state *state);
void	line_edit_move_right(t_line_state *state);
void	line_edit_stop(t_line_state *state);

t_str	linenoise(t_const_str prompt);
t_str	line_blocking_edit(t_fd *stdin_fd, t_fd *stdout_fd, t_const_str prompt);

bool	line_history_add(t_const_str line);
t_error	line_history_load(t_str name);
t_error	line_history_save(t_str name);

void	line_clear_screen(t_fd *output);
void	line_refresh(t_line_state *state, t_line_flags flags);
void	line_hide(t_line_state *state);
void	line_show(t_line_state *state);

#endif /* _LINE_FUNCTIONS_H */
