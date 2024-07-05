/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:07:02 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/05 19:59:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// This code is higly inspired by this repository/libary:
/// 		https://github.com/antirez/linenoise

#ifndef LINE_H
#define LINE_H

#include "me/fs/fs.h"
#include "me/types.h"
#include <termios.h>

extern t_str linenoiseEditMore;

typedef struct s_line_state t_line_state;

/* The linenoiseState structure represents the state during line editing.
 * We pass this state to functions implementing specific editing
 * functionalities. */
struct s_line_state
{
	t_fd	   *input_fd;	   /* Terminal stdin file descriptor. */
	t_fd	   *output_fd;	   /* Terminal stdout file descriptor. */
	t_str		buf;		   /* Edited line buffer. */
	t_usize		buflen;		   /* Edited line buffer size. */
	t_const_str prompt;		   /* Prompt to display. */
	t_usize		prompt_len;	   /* Prompt length. */
	t_usize		pos;		   /* Current cursor position. */
	t_usize		old_pos;	   /* Previous refresh cursor position. */
	t_usize		len;		   /* Current edited line length. */
	t_usize		columns;	   /* Number of columns in terminal. */
	t_usize		old_rows;	   /* Rows used by last refrehsed line (multiline mode) */
	t_i32		history_index; /* The history index we are currently editing. */
};

struct s_raw_mode_state
{
	bool		   enabled;
	struct termios state;
};

typedef struct s_raw_mode_state t_raw_mode_state;

/* Non blocking API. */
int	  linenoiseEditStart(t_line_state *l, int stdin_fd, int stdout_fd, char *buf, t_usize buflen, const char *prompt);
char *linenoiseEditFeed(t_line_state *l);
void  linenoiseEditStop(t_line_state *l);
void  linenoiseHide(t_line_state *l);
void  linenoiseShow(t_line_state *l);

/* Blocking API. */
char *linenoise(const char *prompt);
void  linenoise_free(void *ptr);

/* History API. */
bool	linenoise_history_add(t_const_str line);
t_error linenoiseHistorySave(t_str name);
t_error linenoise_history_load(t_str name);

/* Other utilities. */
void linenoiseClearScreen(void);
void linenoiseSetMultiLine(int ml);
void linenoisePrintKeyCodes(void);

#endif /* LINE_H */
