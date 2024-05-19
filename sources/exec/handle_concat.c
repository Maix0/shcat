/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_concat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:05:06 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 14:59:27 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/node/handle_concat.h"
#include "app/node.h"
#include "app/node/handle_raw_word.h"
#include "app/node/handle_word.h"
#include "app/state.h"
#include "gmr/symbols.h"
#include "me/string/string.h"
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
	t_string out;
	t_usize		 i;
	t_str		 tmp;

	(void)(shcat);
	if (self == NULL || ret == NULL || self->kind != sym_concatenation)
		return (ERROR);
	out = string_new(16);
	i = 0;
	while (i < self->childs_count)
	{
		if (node_get_string(&self->childs[i], shcat, &tmp))
			return (string_free(out), ERROR);
		string_push(&out, tmp);
		mem_free(tmp);
		i++;
	}
	*ret = out.buf;
	return (NO_ERROR);
}
