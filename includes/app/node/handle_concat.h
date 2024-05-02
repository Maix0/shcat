/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_concat.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:49:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/02 15:52:16 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_CONCAT_H
#define HANDLE_CONCAT_H

#include "app/state.h"
#include "app/node.h"
#include "me/types.h"

t_error handle_concat(t_node *self, t_utils *shcat, t_str *ret);

#endif /* HANDLE_CONCAT_H */
