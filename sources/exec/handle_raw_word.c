/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_raw_word.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:57:33 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/02 16:03:09 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/node/handle_raw_word.h"
#include "app/node.h"
#include "app/state.h"
#include "gmr/symbols.h"
#include "me/string/str_len.h"
#include "me/string/str_substring.h"
#include "me/types.h"

t_error handle_raw_string(t_node *self, t_utils *shcat, t_str *ret)
{
	t_str	tmp;
	t_usize i;

	(void)(shcat);
	if (self == NULL || ret == NULL || self->kind != sym_raw_string)
		return (ERROR);
	tmp = node_getstr(self);
	i = str_len(tmp);
	*ret = str_substring(tmp, 1, i - 2);
	return (NO_ERROR);
}
