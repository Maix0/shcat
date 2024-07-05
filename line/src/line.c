
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <termios.h>
#include <unistd.h>

#include "line/line.h"
#include "me/fs/fs.h"
#include "me/gnl/gnl.h"
#include "me/mem/mem.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_str.h"

static t_str linenoiseNoTTY(void);
static void	 refreshLineWithFlags(t_line_state *l, int flags);

t_vec_str *get_history(void)
{
	static t_vec_str history = {};
	static bool		 init = false;

	if (!init)
	{
		history = vec_str_new(256, (void (*)())mem_free);
		init = true;
	}
	return (&history);
}

enum e_key_action
{
	KEY_NULL = 0,	/* NULL */
	CTRL_A = 1,		/* Ctrl+a */
	CTRL_B = 2,		/* Ctrl-b */
	CTRL_C = 3,		/* Ctrl-c */
	CTRL_D = 4,		/* Ctrl-d */
	CTRL_E = 5,		/* Ctrl-e */
	CTRL_F = 6,		/* Ctrl-f */
	CTRL_H = 8,		/* Ctrl-h */
	TAB = 9,		/* Tab */
	CTRL_K = 11,	/* Ctrl+k */
	CTRL_L = 12,	/* Ctrl+l */
	ENTER = 13,		/* Enter */
	CTRL_N = 14,	/* Ctrl-n */
	CTRL_P = 16,	/* Ctrl-p */
	CTRL_T = 20,	/* Ctrl-t */
	CTRL_U = 21,	/* Ctrl+u */
	CTRL_W = 23,	/* Ctrl+w */
	ESC = 27,		/* Escape */
	BACKSPACE = 127 /* Backspace */
};

#define REFRESH_CLEAN (1 << 0)						// Clean the old prompt from the screen
#define REFRESH_WRITE (1 << 1)						// Rewrite the prompt on the screen.
#define REFRESH_ALL (REFRESH_CLEAN | REFRESH_WRITE) // Do both.

int			linenoiseHistoryAdd(const char *line);
static void linenoise_uninit_lib(void);
static void refreshLine(t_line_state *l);

/* Debugging macro. */
#if 0
FILE *lndebug_fp = NULL;
# define lndebug(...)                                                                                                                      \
	 do                                                                                                                                    \
	 {                                                                                                                                     \
		 if (lndebug_fp == NULL)                                                                                                           \
		 {                                                                                                                                 \
			 lndebug_fp = fopen("/tmp/lndebug.txt", "a");                                                                                  \
			 fprintf(lndebug_fp, "[%d %d %d] p: %d, rows: %d, rpos: %d, max: %d, oldmax: %d\n", (int)l->len, (int)l->pos, (int)l->oldpos,  \
					 plen, rows, rpos, (int)l->oldrows, old_rows);                                                                         \
		 }                                                                                                                                 \
		 fprintf(lndebug_fp, ", " __VA_ARGS__);                                                                                            \
		 fflush(lndebug_fp);                                                                                                               \
	 } while (0)
#else
# define lndebug(fmt, ...)
#endif

/* ======================= Low level terminal handling ====================== */

/* Use the ESC [6n escape sequence to query the horizontal cursor position
 * and return it. On error -1 is returned, on success the position of the
 * cursor. */
static int getCursorPosition(int ifd, int ofd)
{
	char		 buf[32];
	int			 cols, rows;
	unsigned int i = 0;

	/* Report cursor location */
	if (write(ofd, "\x1b[6n", 4) != 4)
		return -1;

	/* Read the response: ESC [ rows ; cols R */
	while (i < sizeof(buf) - 1)
	{
		if (read(ifd, buf + i, 1) != 1)
			break;
		if (buf[i] == 'R')
			break;
		i++;
	}
	buf[i] = '\0';

	/* Parse it. */
	if (buf[0] != ESC || buf[1] != '[')
		return -1;
	if (sscanf(buf + 2, "%d;%d", &rows, &cols) != 2)
		return -1;
	return cols;
}

/* Try to get the number of columns in the current terminal, or assume 80
 * if it fails. */
static t_u32 getColumns(int ifd, int ofd)
{
	struct winsize ws;
	t_u32		   start, cols;

	if (ioctl(1, TIOCGWINSZ, &ws) == -1 || ws.ws_col == 0)
	{
		/* ioctl() failed. Try to query the terminal itself. */

		/* Get the initial position so we can restore it later. */
		start = getCursorPosition(ifd, ofd);
		if (start == -1)
			return 80;

		/* Go to right margin and get position. */
		if (write(ofd, "\x1b[999C", 6) != 6)
			return 80;
		cols = getCursorPosition(ifd, ofd);
		if (cols == -1)
			return 80;

		/* Restore position. */
		if (cols > start)
		{
			t_u8 seq[32];
			me_printf(seq, 32, "\x1b[%dD", cols - start);
			(void)!(write(ofd, seq, strlen(seq)) == -1);
		}
		return cols;
	}
	else
	{
		return ws.ws_col;
	}

failed:
}

/* Clear the screen. Used to handle ctrl+l */
void linenoiseClearScreen(void)
{
	(void)!write(STDOUT_FILENO, "\x1b[H\x1b[2J", 7);
}

t_raw_mode_state *get_raw_mode_state(void)
{
	static t_raw_mode_state state = {};

	return (&state);
}

/* Raw mode: 1960 magic shit. */
static t_error enableRawMode(int fd)
{
	struct termios	  raw;
	t_raw_mode_state *raw_state;

	raw_state = get_raw_mode_state();

	if (!isatty(STDIN_FILENO))
		return (errno = ENOTTY, ERROR);
	if (tcgetattr(fd, &raw_state->state) == -1)
		return (errno = ENOTTY, ERROR);

	raw = raw_state->state; /* modify the original mode */
	/* input modes: no break, no CR to NL, no parity check, no strip char,
	 * no start/stop output control. */
	raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
	/* output modes - disable post processing */
	raw.c_oflag &= ~(OPOST);
	/* control modes - set 8 bit chars */
	raw.c_cflag |= (CS8);
	/* local modes - choing off, canonical off, no extended functions,
	 * no signal chars (^Z,^C) */
	raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
	/* control chars - set return condition: min number of bytes and timer.
	 * We want read to return every single byte, without timeout. */
	raw.c_cc[VMIN] = 1;
	raw.c_cc[VTIME] = 0; /* 1 byte, no timer */

	/* put terminal in raw mode after flushing */
	if (tcsetattr(fd, TCSAFLUSH, &raw) < 0)
		return (errno = ENOTTY, ERROR);
	raw_state->enabled = true;
	return (NO_ERROR);
}

static void disableRawMode(int fd)
{
	t_raw_mode_state *state;

	state = get_raw_mode_state();
	if (state->enabled && tcsetattr(fd, TCSAFLUSH, &state->state) != -1)
		state->enabled = false;
}

/* =========================== Line editing ================================= */

/* We define a very simple "append buffer" structure, that is an heap
 * allocated string where we can append to. This is useful in order to
 * write all the escape sequences in a buffer and flush them to the standard
 * output in a single call, to avoid flickering effects. */
struct abuf
{
	char *b;
	int	  len;
};

static void abInit(struct abuf *ab)
{
	ab->b = NULL;
	ab->len = 0;
}

static void abAppend(struct abuf *ab, const char *s, int len)
{
	char *new = mem_realloc(ab->b, ab->len + len);

	if (new == NULL)
		return;
	memcpy(new + ab->len, s, len);
	ab->b = new;
	ab->len += len;
}

static void abFree(struct abuf *ab)
{
	mem_free(ab->b);
}

/* Single line low level line refresh.
 *
 * Rewrite the currently edited line accordingly to the buffer content,
 * cursor position, and number of columns of the terminal.
 *
 * Flags is REFRESH_* macros. The function can just remove the old
 * prompt, just write it, or both. */
static void refreshSingleLine(struct s_line_state *l, int flags)
{
	char		seq[64];
	size_t		plen = strlen(l->prompt);
	int			fd = l->output_fd;
	char	   *buf = l->buf;
	size_t		len = l->len;
	size_t		pos = l->pos;
	struct abuf ab;

	while ((plen + pos) >= l->columns)
	{
		buf++;
		len--;
		pos--;
	}
	while (plen + len > l->columns)
	{
		len--;
	}

	abInit(&ab);
	/* Cursor to left edge */
	snprintf(seq, sizeof(seq), "\r");
	abAppend(&ab, seq, strlen(seq));

	if (flags & REFRESH_WRITE)
	{
		/* Write the prompt and the current buffer content */
		abAppend(&ab, l->prompt, strlen(l->prompt));
		abAppend(&ab, buf, len);
	}

	/* Erase to right */
	snprintf(seq, sizeof(seq), "\x1b[0K");
	abAppend(&ab, seq, strlen(seq));

	if (flags & REFRESH_WRITE)
	{
		/* Move cursor to original position. */
		snprintf(seq, sizeof(seq), "\r\x1b[%dC", (int)(pos + plen));
		abAppend(&ab, seq, strlen(seq));
	}

	if (write(fd, ab.b, ab.len) == -1)
	{
	} /* Can't recover from write error. */
	abFree(&ab);
}

/* Calls the two low level functions refreshSingleLine() or
 * refreshMultiLine() according to the selected mode. */
static void refreshLineWithFlags(struct s_line_state *l, int flags)
{
	refreshSingleLine(l, flags);
}

/* Utility function to avoid specifying REFRESH_ALL all the times. */
static void refreshLine(struct s_line_state *l)
{
	refreshLineWithFlags(l, REFRESH_ALL);
}

/* Hide the current line, when using the multiplexing API. */
void linenoiseHide(struct s_line_state *l)
{
	refreshSingleLine(l, REFRESH_CLEAN);
}

/* Show the current line, when using the multiplexing API. */
void linenoiseShow(struct s_line_state *l)
{
	refreshLineWithFlags(l, REFRESH_WRITE);
}

/* Insert the character 'c' at cursor current position.
 *
 * On error writing to the terminal -1 is returned, otherwise 0. */
int linenoiseEditInsert(struct s_line_state *l, char c)
{
	if (l->len < l->buflen)
	{
		if (l->len == l->pos)
		{
			l->buf[l->pos] = c;
			l->pos++;
			l->len++;
			l->buf[l->len] = '\0';
			refreshLine(l);
		}
		else
		{
			memmove(l->buf + l->pos + 1, l->buf + l->pos, l->len - l->pos);
			l->buf[l->pos] = c;
			l->len++;
			l->pos++;
			l->buf[l->len] = '\0';
			refreshLine(l);
		}
	}
	return 0;
}

/* Move cursor on the left. */
void linenoiseEditMoveLeft(struct s_line_state *l)
{
	if (l->pos > 0)
	{
		l->pos--;
		refreshLine(l);
	}
}

/* Move cursor on the right. */
void linenoiseEditMoveRight(struct s_line_state *l)
{
	if (l->pos != l->len)
	{
		l->pos++;
		refreshLine(l);
	}
}

/* Move cursor to the start of the line. */
void linenoiseEditMoveHome(struct s_line_state *l)
{
	if (l->pos != 0)
	{
		l->pos = 0;
		refreshLine(l);
	}
}

/* Move cursor to the end of the line. */
void linenoiseEditMoveEnd(struct s_line_state *l)
{
	if (l->pos != l->len)
	{
		l->pos = l->len;
		refreshLine(l);
	}
}

/* Substitute the currently edited line with the next or previous history
 * entry as specified by 'dir'. */
#define LINENOISE_HISTORY_NEXT 0
#define LINENOISE_HISTORY_PREV 1
void linenoiseEditHistoryNext(struct s_line_state *l, int dir)
{
	t_vec_str *history;

	history = get_history();

	if (history->len > 1)
	{
		/* Update the current history entry before to
		 * overwrite it with the next one. */
		mem_free(history->buffer[history->len - 1 - l->history_index]);
		history->buffer[history->len - 1 - l->history_index] = strdup(l->buf);
		/* Show the new entry */
		l->history_index += (dir == LINENOISE_HISTORY_PREV) ? 1 : -1;
		if (l->history_index < 0)
		{
			l->history_index = 0;
			return;
		}
		else if (l->history_index >= history->len)
		{
			l->history_index = history->len - 1;
			return;
		}
		strncpy(l->buf, history->buffer[history->len - 1 - l->history_index], l->buflen);
		l->buf[l->buflen - 1] = '\0';
		l->len = l->pos = strlen(l->buf);
		refreshLine(l);
	}
}

/* Delete the character at the right of the cursor without altering the cursor
 * position. Basically this is what happens with the "Delete" keyboard key. */
void linenoiseEditDelete(struct s_line_state *l)
{
	if (l->len > 0 && l->pos < l->len)
	{
		memmove(l->buf + l->pos, l->buf + l->pos + 1, l->len - l->pos - 1);
		l->len--;
		l->buf[l->len] = '\0';
		refreshLine(l);
	}
}

/* Backspace implementation. */
void linenoiseEditBackspace(struct s_line_state *l)
{
	if (l->pos > 0 && l->len > 0)
	{
		memmove(l->buf + l->pos - 1, l->buf + l->pos, l->len - l->pos);
		l->pos--;
		l->len--;
		l->buf[l->len] = '\0';
		refreshLine(l);
	}
}

/* Delete the previosu word, maintaining the cursor at the start of the
 * current word. */
void linenoiseEditDeletePrevWord(struct s_line_state *l)
{
	size_t old_pos = l->pos;
	size_t diff;

	while (l->pos > 0 && l->buf[l->pos - 1] == ' ')
		l->pos--;
	while (l->pos > 0 && l->buf[l->pos - 1] != ' ')
		l->pos--;
	diff = old_pos - l->pos;
	memmove(l->buf + l->pos, l->buf + old_pos, l->len - old_pos + 1);
	l->len -= diff;
	refreshLine(l);
}

/* This function is part of the multiplexed API of Linenoise, that is used
 * in order to implement the blocking variant of the API but can also be
 * called by the user directly in an event driven program. It will:
 *
 * 1. Initialize the linenoise state passed by the user.
 * 2. Put the terminal in RAW mode.
 * 3. Show the prompt.
 * 4. Return control to the user, that will have to call linenoiseEditFeed()
 *    each time there is some data arriving in the standard input.
 *
 * The user can also call linenoiseEditHide() and linenoiseEditShow() if it
 * is required to show some input arriving asyncronously, without mixing
 * it with the currently edited line.
 *
 * When linenoiseEditFeed() returns non-NULL, the user finished with the
 * line editing session (pressed enter CTRL-D/C): in this case the caller
 * needs to call linenoiseEditStop() to put back the terminal in normal
 * mode. This will not destroy the buffer, as long as the linenoiseState
 * is still valid in the context of the caller.
 *
 * The function returns 0 on success, or -1 if writing to standard output
 * fails. If stdin_fd or stdout_fd are set to -1, the default is to use
 * STDIN_FILENO and STDOUT_FILENO.
 */
int linenoiseEditStart(struct s_line_state *l, int stdin_fd, int stdout_fd, char *buf, size_t buflen, const char *prompt)
{
	/* Populate the linenoise state that we pass to functions implementing
	 * specific editing functionalities. */
	l->in_completion = 0;
	l->input_fd = stdin_fd != -1 ? stdin_fd : STDIN_FILENO;
	l->output_fd = stdout_fd != -1 ? stdout_fd : STDOUT_FILENO;
	l->buf = buf;
	l->buflen = buflen;
	l->prompt = prompt;
	l->prompt_len = strlen(prompt);
	l->oldpos = l->pos = 0;
	l->len = 0;

	// /* Enter raw mode. */
	// if (enableRawMode(l->ifd) == -1)
	//	return -1;

	l->columns = getColumns(stdin_fd, stdout_fd);
	l->old_rows = 0;
	l->history_index = 0;

	/* Buffer starts empty. */
	l->buf[0] = '\0';
	l->buflen--; /* Make sure there is always space for the nulterm */

	/* If stdin is not a tty, stop here with the initialization. We
	 * will actually just read a line from standard input in blocking
	 * mode later, in linenoiseEditFeed(). */
	if (!isatty(l->input_fd))
		return 0;

	/* The latest history entry is always our current buffer, that
	 * initially is just an empty string. */
	linenoise_history_add("");

	if (write(l->output_fd, prompt, l->prompt_len) == -1)
		return -1;
	return 0;
}

char *linenoiseEditMore = "If you see this, you are misusing the API: when linenoiseEditFeed() is called, if it returns linenoiseEditMore "
						  "the user is yet editing the line. See the README file for more information.";

/* This function is part of the multiplexed API of linenoise, see the top
 * comment on linenoiseEditStart() for more information. Call this function
 * each time there is some data to read from the standard input file
 * descriptor. In the case of blocking operations, this function can just be
 * called in a loop, and block.
 *
 * The function returns linenoiseEditMore to signal that line editing is still
 * in progress, that is, the user didn't yet pressed enter / CTRL-D. Otherwise
 * the function returns the pointer to the heap-allocated buffer with the
 * edited line, that the user should mem_free with linenoiseFree().
 *
 * On special conditions, NULL is returned and errno is populated:
 *
 * EAGAIN if the user pressed Ctrl-C
 * ENOENT if the user pressed Ctrl-D
 *
 * Some other errno: I/O error.
 */
char *linenoiseEditFeed(struct s_line_state *l)
{
	/* Not a TTY, pass control to line reading without character
	 * count limits. */
	if (!isatty(l->input_fd))
		return linenoiseNoTTY();

	char	   c;
	int		   nread;
	char	   seq[3];
	t_vec_str *history = get_history();

	nread = read(l->input_fd, &c, 1);
	if (nread <= 0)
		return NULL;

	switch (c)
	{
	case ENTER: /* enter */
		history->len--;
		mem_free(history->buffer[history->len]);
		return strdup(l->buf);
	case CTRL_C: /* ctrl-c */
		errno = EAGAIN;
		return NULL;
	case BACKSPACE: /* backspace */
	case 8:			/* ctrl-h */
		linenoiseEditBackspace(l);
		break;
	case CTRL_D: /* ctrl-d, remove char at right of cursor, or if the
					line is empty, act as end-of-file. */
		if (l->len > 0)
		{
			linenoiseEditDelete(l);
		}
		else
		{
			history->len--;
			mem_free(history->buffer[history->len]);
			errno = ENOENT;
			return NULL;
		}
		break;
	case CTRL_T: /* ctrl-t, swaps current character with previous. */
		if (l->pos > 0 && l->pos < l->len)
		{
			int aux = l->buf[l->pos - 1];
			l->buf[l->pos - 1] = l->buf[l->pos];
			l->buf[l->pos] = aux;
			if (l->pos != l->len - 1)
				l->pos++;
			refreshLine(l);
		}
		break;
	case CTRL_B: /* ctrl-b */
		linenoiseEditMoveLeft(l);
		break;
	case CTRL_F: /* ctrl-f */
		linenoiseEditMoveRight(l);
		break;
	case CTRL_P: /* ctrl-p */
		linenoiseEditHistoryNext(l, LINENOISE_HISTORY_PREV);
		break;
	case CTRL_N: /* ctrl-n */
		linenoiseEditHistoryNext(l, LINENOISE_HISTORY_NEXT);
		break;
	case ESC: /* escape sequence */
		/* Read the next two bytes representing the escape sequence.
		 * Use two calls to handle slow terminals returning the two
		 * chars at different times. */
		if (read(l->input_fd, seq, 1) == -1)
			break;
		if (read(l->input_fd, seq + 1, 1) == -1)
			break;

		/* ESC [ sequences. */
		if (seq[0] == '[')
		{
			if (seq[1] >= '0' && seq[1] <= '9')
			{
				/* Extended escape, read additional byte. */
				if (read(l->input_fd, seq + 2, 1) == -1)
					break;
				if (seq[2] == '~')
				{
					switch (seq[1])
					{
					case '3': /* Delete key. */
						linenoiseEditDelete(l);
						break;
					}
				}
			}
			else
			{
				switch (seq[1])
				{
				case 'A': /* Up */
					linenoiseEditHistoryNext(l, LINENOISE_HISTORY_PREV);
					break;
				case 'B': /* Down */
					linenoiseEditHistoryNext(l, LINENOISE_HISTORY_NEXT);
					break;
				case 'C': /* Right */
					linenoiseEditMoveRight(l);
					break;
				case 'D': /* Left */
					linenoiseEditMoveLeft(l);
					break;
				case 'H': /* Home */
					linenoiseEditMoveHome(l);
					break;
				case 'F': /* End*/
					linenoiseEditMoveEnd(l);
					break;
				}
			}
		}

		/* ESC O sequences. */
		else if (seq[0] == 'O')
		{
			switch (seq[1])
			{
			case 'H': /* Home */
				linenoiseEditMoveHome(l);
				break;
			case 'F': /* End*/
				linenoiseEditMoveEnd(l);
				break;
			}
		}
		break;
	default:
		if (linenoiseEditInsert(l, c))
			return NULL;
		break;
	case CTRL_U: /* Ctrl+u, delete the whole line. */
		l->buf[0] = '\0';
		l->pos = l->len = 0;
		refreshLine(l);
		break;
	case CTRL_K: /* Ctrl+k, delete from current to end of line. */
		l->buf[l->pos] = '\0';
		l->len = l->pos;
		refreshLine(l);
		break;
	case CTRL_A: /* Ctrl+a, go to the start of the line */
		linenoiseEditMoveHome(l);
		break;
	case CTRL_E: /* ctrl+e, go to the end of the line */
		linenoiseEditMoveEnd(l);
		break;
	case CTRL_L: /* ctrl+l, clear screen */
		linenoiseClearScreen();
		refreshLine(l);
		break;
	case CTRL_W: /* ctrl+w, delete previous word */
		linenoiseEditDeletePrevWord(l);
		break;
	}
	return linenoiseEditMore;
}

/* This is part of the multiplexed linenoise API. See linenoiseEditStart()
 * for more information. This function is called when linenoiseEditFeed()
 * returns something different than NULL. At this point the user input
 * is in the buffer, and we can restore the terminal in normal mode. */
void linenoiseEditStop(struct s_line_state *l)
{
	if (!isatty(l->input_fd))
		return;
	// disableRawMode(l->ifd);
	printf("\n");
}

/* This just implements a blocking loop for the multiplexed API.
 * In many applications that are not event-drivern, we can just call
 * the blocking linenoise API, wait for the user to complete the editing
 * and return the buffer. */
static char *linenoiseBlockingEdit(int stdin_fd, int stdout_fd, char *buf, size_t buflen, const char *prompt)
{
	t_line_state l;

	/* Editing without a buffer is invalid. */
	if (buflen == 0)
	{
		errno = EINVAL;
		return (NULL);
	}

	linenoiseEditStart(&l, stdin_fd, stdout_fd, buf, buflen, prompt);
	char *res;
	while ((res = linenoiseEditFeed(&l)) == linenoiseEditMore)
		;
	linenoiseEditStop(&l);
	return res;
}

/* This special mode is used by linenoise in order to print scan codes
 * on screen for debugging / development purposes. It is implemented
 * by the linenoise_example program using the --keycodes option. */
void linenoisePrintKeyCodes(void)
{
	char quit[4];

	printf("Linenoise key codes debugging mode.\n"
		   "Press keys to see scan codes. Type 'quit' at any time to exit.\n");
	// if (enableRawMode(STDIN_FILENO) == -1)
	//	return;
	memset(quit, ' ', 4);
	while (1)
	{
		char c;
		int	 nread;

		nread = read(STDIN_FILENO, &c, 1);
		if (nread <= 0)
			continue;
		memmove(quit, quit + 1, sizeof(quit) - 1); /* shift string to left. */
		quit[sizeof(quit) - 1] = c;				   /* Insert current char on the right. */
		if (memcmp(quit, "quit", sizeof(quit)) == 0)
			break;

		printf("'%c' %02x (%d) (type quit to exit)\n", isprint(c) ? c : '?', (int)c, (int)c);
		printf("\r"); /* Go left edge manually, we are in raw mode. */
		fflush(stdout);
	}
	// disableRawMode(STDIN_FILENO);
}

/* This function is called when linenoise() is called with the standard
 * input file descriptor not attached to a TTY. So for example when the
 * program using linenoise is called in pipe or with a file redirected
 * to its standard input. In this case, we want to be able to return the
 * line regardless of its length (by default we are limited to 4k). */
static t_str linenoiseNoTTY(void)
{
	t_string line;
	t_isize	 ret;
	char	 chr;

	line = string_new(16);
	while (true)
	{
		chr = '\n';
		ret = read(STDIN_FILENO, &chr, 1);
		if (ret < 0)
			return (string_free(line), NULL);
		if (ret == 0 || chr == '\n')
			return (line.buf);
		else
			string_push_char(&line, chr);
	}
}

/* The high level function that is the main API of the linenoise library.
 * This function checks if the terminal has basic capabilities, just checking
 * for a blacklist of stupid terminals, and later either calls the line
 * editing function or uses dummy fgets() so that you will be able to type
 * something even in the most desperate of the conditions. */
char *linenoise(const char *prompt)
{
	char buf[4096];

	if (!isatty(STDIN_FILENO))
	{
		/* Not a tty: read from file / pipe. In this mode we don't want any
		 * limit to the line size, so we call a function to handle that. */
		return linenoiseNoTTY();
	}
	{
		char *retval = linenoiseBlockingEdit(STDIN_FILENO, STDOUT_FILENO, buf, 4096, prompt);
		return retval;
	}
}

/* This is just a wrapper the user may want to call in order to make sure
 * the linenoise returned buffer is mem_freed with the same allocator it was
 * created with. Useful when the main program is using an alternative
 * allocator. */
void linenoise_free(void *ptr)
{
	if (ptr == linenoiseEditMore)
		return; // Protect from API misuse.
	mem_free(ptr);
}

/* ================================ History ================================= */

/* Free the history, but does not reset it. Only used when we have to
 * exit() to avoid memory leaks are reported by valgrind & co. */
static void free_history(void)
{
	t_vec_str *history = get_history();
	vec_str_free(*history);
}

/* At exit we'll try to fix the terminal to the initial conditions. */
static void linenoise_uninit_lib(void)
{
	// disableRawMode(STDIN_FILENO);
	free_history();
}

/* This is the API call to add a new entry in the linenoise history.
 * It uses a fixed array of char pointers that are shifted (memmoved)
 * when the history max length is reached in order to remove the older
 * entry and make room for the new one, so it is not exactly suitable for huge
 * histories, but will work well for a few hundred of entries.
 *
 * Using a circular buffer is smarter, but a bit more complex to handle. */
bool linenoise_history_add(t_const_str line)
{
	t_str	   linecopy;
	t_vec_str *history;

	history = get_history();

	if (history->len != 0 && !strcmp(history->buffer[history->len - 1], line))
		return (false);
	linecopy = str_clone(line);
	if (linecopy == NULL)
		return (false);
	vec_str_push(history, linecopy);
	return (true);
}

/* Save the history in the specified file. On success 0 is returned
 * otherwise -1 is returned. */
t_error linenoise_history_save(t_str name)
{
	t_fd	  *fd;
	t_usize	   j;
	t_vec_str *history;

	history = get_history();

	fd = open_fd(name, FD_READ, FD_CLOSE_ON_EXEC | FD_TRUNCATE | FD_CREATE, FP_OWRITE);
	if (fd == NULL)
		return (ERROR);
	j = 0;
	while (j < history->len)
	{
		write(fd->fd, history->buffer[j], str_len(history->buffer[j]));
		write(fd->fd, "\n", 1);
		j++;
	}
	close_fd(fd);
	return (NO_ERROR);
}

t_error gnl_wrapper(t_fd *fd, t_string *out)
{
	bool	 error;
	t_string value;

	if (out == NULL || fd == NULL)
		return (ERROR);
	value = get_next_line(fd->fd, &error);
	if (error)
		return (ERROR);
	return (*out = value, NO_ERROR);
}

/* Load the history from the specified file. If the file does not exist
 * zero is returned and no operation is performed.
 *
 * If the file exists and the operation succeeded 0 is returned, otherwise
 * on error -1 is returned. */
t_error linenoise_history_load(t_str name)
{
	t_fd	  *fd;
	t_string   tmp;
	t_vec_str *history;

	fd = open_fd(name, FD_READ, FD_CLOSE_ON_EXEC, FP_ALL_READ);
	if (fd == NULL)
		return (ERROR);
	while (!gnl_wrapper(fd, &tmp))
	{
		while (tmp.len != 0 && (tmp.buf[tmp.len - 1] == '\n' || tmp.buf[tmp.len - 1] == '\r'))
			string_pop(&tmp);
		vec_str_push(history, tmp.buf);
	}
	close_fd(fd);
	return (NO_ERROR);
}
