/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _line_internal.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:37:40 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/20 13:58:35 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LINE_INTERNAL_H
# define _LINE_INTERNAL_H

# include "line/_line_functions.h"
# include "me/fs/fs.h"
# include "me/string/string.h"
# include "me/types.h"
# include "me/vec/vec_str.h"

t_const_str			get_unfinished_str(void);
t_raw_mode_state	*get_raw_mode_state(void);
t_vec_str			*get_history(void);
void				free_history(void);

t_error				gnl_wrapper(t_fd *fd, t_string *out);
void				line_uninit_lib(void);
t_error				line_get_cursor_position(t_fd *input, t_fd *output,
						t_u32 *column_out);
t_u32				line_get_columns(t_fd *input, t_fd *output);
t_usize				line_get_prompt_len(t_const_str s);
bool				line_no_tty_impl(t_str *out);
void				line_print_key_codes(void);

t_error				line_enable_raw_mode(t_fd *fd);
void				line_disable_raw_mode(t_fd *fd);

#endif /* _LINE_INTERAL_H */
