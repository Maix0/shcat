/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_names_0.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./field_names.h"

void	field_names_0(t_field_names_array *v)
{
	v->a[field_alternative] = "alternative";
	v->a[field_arg] = "arg";
	v->a[field_body] = "body";
	v->a[field_cases] = "cases";
	v->a[field_cmd] = "cmd";
	v->a[field_cmds] = "cmds";
	v->a[field_condition] = "condition";
	v->a[field_consequence] = "consequence";
	v->a[field_dest] = "dest";
	v->a[field_fd] = "fd";
	v->a[field_left] = "left";
	v->a[field_name] = "name";
	v->a[field_op] = "op";
	v->a[field_redirect] = "redirect";
	v->a[field_right] = "right";
	v->a[field_value] = "value";
	v->a[field_variable] = "variable";
}

/* EOF field_names_0.c */
