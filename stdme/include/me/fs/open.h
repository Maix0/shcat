/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:29:38 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/05 16:43:37 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPEN_H
# define OPEN_H

# include "me/types.h"

t_error	me_open(t_const_str path, bool read, bool write, t_file *file_out);
t_error	me_open_truncate(t_const_str path, t_file *file_out);
t_error	me_open_create(t_const_str path, t_file *file_out);

#endif
