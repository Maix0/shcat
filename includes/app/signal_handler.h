/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:20:25 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/08 21:52:34 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIGNAL_HANDLER_H
#define SIGNAL_HANDLER_H

#include "me/types.h"
#include <signal.h>
#include <stdio.h>

#include <readline/readline.h>

typedef t_i32 t_signal;

t_error install_signal(void);

#endif /* SIGNAL_HANDLER_H */
