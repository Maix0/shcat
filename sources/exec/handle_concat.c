/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_concat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:05:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/02 16:01:52 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/node/handle_concat.h"
#include "app/node.h"
#include "app/node/handle_raw_word.h"
#include "app/node/handle_word.h"
#include "app/state.h"
#include "gmr/symbols.h"
#include "me/buffered_str/buf_str.h"
#include "me/types.h"

t_error node_get_string(t_node *self, t_utils *shcat, t_str *ret)
{
	if (self->kind == sym_word)
		return (handle_word(self, shcat, ret));
	if (self->kind == sym_raw_string)
		return (handle_raw_string(self, shcat, ret));
	return (ERROR);
}

t_error handle_concat(t_node *self, t_utils *shcat, t_str *ret)
{
	t_buffer_str out;
	t_usize		 i;
	t_str		 tmp;

	(void)(shcat);
	if (self == NULL || ret == NULL || self->kind != sym_concatenation)
		return (ERROR);
	out = alloc_new_buffer(16);
	i = 0;
	while (i < self->childs_count)
	{
		if (node_get_string(&self->childs[i], shcat, &tmp))
			return (str_free(out), ERROR);
		push_str_buffer(&out, tmp);
		free(tmp);
		i++;
	}
	*ret = out.buf;
	return (NO_ERROR);
}