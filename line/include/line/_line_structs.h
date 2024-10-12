/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _line_structs.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:24:34 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LINE_STRUCTS_H
# define _LINE_STRUCTS_H

# include "me/fs/fs.h"
# include "me/string/string.h"
# include "me/types.h"
# include <termios.h>

typedef struct s_line_state			t_line_state;
typedef struct s_raw_mode_state		t_raw_mode_state;
typedef enum e_line_flags			t_line_flags;
typedef enum e_key_action			t_key_action;
typedef enum e_history_direction	t_history_direction;

/// @param input_fd Terminal stdin file descriptor.
/// @param output_fd Terminal stdout file descriptor.
/// @param buf Edited line buffer.
/// @param prompt_len Prompt to display.
/// @param pos Prompt length.
/// @param prompt_len Current cursor position.
/// @param columns Number of columns in terminal.
/// @param history_index The history index we are currently editing.
struct	s_line_state
{
	t_fd		*input_fd;
	t_fd		*output_fd;
	t_string	buf;
	t_const_str	prompt;
	t_usize		prompt_len;
	t_usize		pos;
	t_usize		columns;
	t_i32		history_index;
};

struct	s_raw_mode_state
{
	bool			enabled;
	struct termios	state;
};

enum								e_key_action
{
	K_KEY_NULL = 0,
	K_CTRL_A = 1,
	K_CTRL_B = 2,
	K_CTRL_C = 3,
	K_CTRL_D = 4,
	K_CTRL_E = 5,
	K_CTRL_F = 6,
	K_CTRL_H = 8,
	K_TAB = 9,
	K_NEWLINE = 10,
	K_CTRL_K = 11,
	K_CTRL_L = 12,
	K_ENTER = 13,
	K_CTRL_N = 14,
	K_CTRL_P = 16,
	K_CTRL_T = 20,
	K_CTRL_U = 21,
	K_CTRL_W = 23,
	K_ESC = 27,
	K_SIGQUIT = 28,
	K_BACKSPACE = 127
};

enum	e_line_flags
{
	REFRESH_CLEAN = 1 << 0,
	REFRESH_WRITE = 1 << 1,
	REFRESH_ALL = REFRESH_CLEAN | REFRESH_WRITE,
};

enum	e_history_direction
{
	HIST_PREV,
	HIST_NEXT,
};

#endif /* _LINE_STRUCTS_H */
