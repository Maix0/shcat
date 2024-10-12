/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_reserve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:02:49 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:49 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/string/string.h"
#include "me/types.h"

t_error	string_reserve(t_string *self, t_usize capacity)
{
	if (self == NULL)
		return (ERROR);
	if (self->capacity >= capacity)
		return (NO_ERROR);
	self->buf = mem_realloc(self->buf, capacity);
	return (NO_ERROR);
}
