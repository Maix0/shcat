/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_expension.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:24:25 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 14:55:25 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/node/handle_expension.h"
#include "gmr/symbols.h"
#include "me/hashmap/hashmap_env.h"
#include "me/types.h"

t_error handle_expension_complex(t_node *self, t_utils *shcat, t_str *ret)
{
	(void)(self);
	(void)(shcat);
	(void)(ret);
	return (ERROR);
}
t_error handle_expension_simple(t_node *self, t_utils *shcat, t_str *ret)
{
	(void)(self);
	(void)(shcat);
	(void)(ret);
	//get_hashmap_env(shcat->env, (t_str *)&"fjdksf");
	return (ERROR);
}

t_error handle_expension(t_node *self, t_utils *shcat, t_str *ret)
{
	if (self->childs_count != 0 && self->childs[0].kind == anon_sym_DOLLAR)
		return (handle_expension_simple(self, shcat, ret));
	if (self->childs_count != 0 &&
		self->childs[0].kind == anon_sym_DOLLAR_LBRACE)
		return (handle_expension_complex(self, shcat, ret));
	return (ERROR);
}
