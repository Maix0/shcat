/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_word.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:04 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/02 16:00:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/node/handle_word.h"
#include "app/state.h"
#include "gmr/symbols.h"
#include "me/str/str.h"
#include "me/types.h"

t_error handle_word(t_node *self, t_utils *shcat, t_str *ret)
{
	(void)(shcat);
	if (self == NULL || ret == NULL || self->kind != sym_word)
		return (ERROR);
	*ret = str_clone(node_getstr(self));
	return (NO_ERROR);
}
