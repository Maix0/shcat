/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _line_structs.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:24:34 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/10 15:32:35 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LINE_STRUCTS_H
#define _LINE_STRUCTS_H

#include "me/fs/fs.h"
#include "me/string/string.h"
#include "me/types.h"
#include <termios.h>

typedef struct s_line_state		 t_line_state;
typedef struct s_raw_mode_state	 t_raw_mode_state;
typedef enum e_line_flags		 t_line_flags;
typedef enum e_key_action		 t_key_action;
typedef enum e_history_direction t_history_direction;

struct s_line_state
{
	t_fd	   *input_fd;	   /* Terminal stdin file descriptor. */
	t_fd	   *output_fd;	   /* Terminal stdout file descriptor. */
	t_string	buf;		   /* Edited line buffer. */
	t_const_str prompt;		   /* Prompt to display. */
	t_usize		prompt_len;	   /* Prompt length. */
	t_usize		pos;		   /* Current cursor position. */
	t_usize		columns;	   /* Number of columns in terminal. */
	t_i32		history_index; /* The history index we are currently editing. */
};

struct s_raw_mode_state
{
	bool		   enabled;
	struct termios state;
};

enum e_key_action
{
	K_KEY_NULL = 0,	  /* NULL */
	K_CTRL_A = 1,	  /* Ctrl+a */
	K_CTRL_B = 2,	  /* Ctrl-b */
	K_CTRL_C = 3,	  /* Ctrl-c */
	K_CTRL_D = 4,	  /* Ctrl-d */
	K_CTRL_E = 5,	  /* Ctrl-e */
	K_CTRL_F = 6,	  /* Ctrl-f */
	K_CTRL_H = 8,	  /* Ctrl-h */
	K_TAB = 9,		  /* Tab */
	K_NEWLINE = 10,	  /* Newline */
	K_CTRL_K = 11,	  /* Ctrl+k */
	K_CTRL_L = 12,	  /* Ctrl+l */
	K_ENTER = 13,	  /* Enter */
	K_CTRL_N = 14,	  /* Ctrl-n */
	K_CTRL_P = 16,	  /* Ctrl-p */
	K_CTRL_T = 20,	  /* Ctrl-t */
	K_CTRL_U = 21,	  /* Ctrl+u */
	K_CTRL_W = 23,	  /* Ctrl+w */
	K_ESC = 27,		  /* Escape */
	K_BACKSPACE = 127 /* Backspace */
};

enum e_line_flags
{
	REFRESH_CLEAN = 1 << 0,						 // Clean the old prompt from the screen
	REFRESH_WRITE = 1 << 1,						 // Rewrite the prompt on the screen.
	REFRESH_ALL = REFRESH_CLEAN | REFRESH_WRITE, // Do both.
};

enum e_history_direction
{
	HIST_PREV,
	HIST_NEXT,
};

#endif /* _LINE_STRUCTS_H */
