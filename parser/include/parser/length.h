/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:16 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:30:26 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LENGTH_H
#define LENGTH_H

#include "parser/api.h"
#include "me/types.h"

struct s_length
{
	t_u32	bytes;
	TSPoint extent;
};

typedef struct s_length Length;

static const Length LENGTH_UNDEFINED = {0, {0, 1}};
static const Length LENGTH_MAX = {UINT32_MAX, {UINT32_MAX, UINT32_MAX}};

Length length_saturating_sub(Length len1, Length len2);
Length length_zero(void);
Length length_sub(Length len1, Length len2);
Length length_add(Length len1, Length len2);
Length length_min(Length len1, Length len2);
Length length_max(Length len1, Length len2);
bool   length_is_undefined(Length length);

#endif
