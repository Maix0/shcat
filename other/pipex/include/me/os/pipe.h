/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:57:29 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/04 17:59:30 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPE_H
# define PIPE_H

# include "me/types.h"

typedef struct s_pipe
{
	t_file	read;
	t_file	write;
}			t_pipe;

t_error		create_pipe(t_pipe *out);

#endif /* PIPE_H */
