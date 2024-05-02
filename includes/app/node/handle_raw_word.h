/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_raw_word.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:58:01 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/02 15:58:48 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_RAW_WORD_H
#define HANDLE_RAW_WORD_H

#include "app/node.h"
#include "app/state.h"

t_error handle_raw_string(t_node *self, t_utils *shcat, t_str *ret);

#endif /* HANDLE_RAW_WORD_H */
