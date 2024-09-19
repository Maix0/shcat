/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:16 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 16:36:07 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LENGTH_H
#define LENGTH_H

#include "parser/inner/length_inner.h"

static const t_length LENGTH_UNDEFINED = {0, {0, 1}};
static const t_length LENGTH_MAX = {UINT32_MAX, {UINT32_MAX, UINT32_MAX}};

#endif
