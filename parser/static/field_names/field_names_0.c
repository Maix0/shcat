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
	v->a[field_arg] = "arg";
	v->a[field_args] = "args";
	v->a[field_body] = "body";
	v->a[field_cases] = "cases";
	v->a[field_cmd] = "cmd";
	v->a[field_cond] = "cond";
	v->a[field_dest] = "dest";
	v->a[field_elif] = "elif";
	v->a[field_else] = "else";
	v->a[field_fd] = "fd";
	v->a[field_len] = "len";
	v->a[field_lhs] = "lhs";
	v->a[field_name] = "name";
	v->a[field_op] = "op";
	v->a[field_redr] = "redr";
	v->a[field_rhs] = "rhs";
	v->a[field_stmt] = "stmt";
	v->a[field_term] = "term";
	v->a[field_then] = "then";
	v->a[field_value] = "value";
	field_names_1(v);
}

void	field_names_1(t_field_names_array *v)
{
	v->a[field_var] = "var";
}

/* EOF field_names_0.c */
