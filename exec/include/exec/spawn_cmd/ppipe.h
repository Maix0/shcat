/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ppipe.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:57:29 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/30 17:03:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PPIPE_H
#define PPIPE_H

#include "me/fs/fs.h"
#include "me/types.h"

/// @brief Pipe structure
typedef struct s_exec_pipe
{
	t_fd *read;
	t_fd *write;
} t_exec_pipe;

/// @brief Create a pipe
/// @param[out] out the created pipe
/// @return the error
t_error create_pipe(t_exec_pipe *out);

#endif /* PIPE_H */
