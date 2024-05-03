/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_word.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:00:11 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/02 16:00:40 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_WORD_H
#define HANDLE_WORD_H

#include "app/state.h"
#include "app/node.h"
#include "me/types.h"

t_error handle_word(t_node *self, t_utils *shcat, t_str *ret);

#endif /* HANDLE_WORD_H */
