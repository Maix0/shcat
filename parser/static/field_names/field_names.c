/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_names.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_field_names.h"
#include "../headers/symbols.h"
#include "../headers/external_scanner_symbol_identifiers.h"
#include "../headers/field_identifiers.h"

#include "../headers/constants.h"

static const \
t_field_names_array	g_t_field_names_array = {.a = {
[field_arg] = "arg",
[field_args] = "args",
[field_body] = "body",
[field_cmd] = "cmd",
[field_cond] = "cond",
[field_del] = "del",
[field_dest] = "dest",
[field_else] = "else",
[field_len] = "len",
[field_lhs] = "lhs",
[field_name] = "name",
[field_op] = "op",
[field_redr] = "redr",
[field_rhs] = "rhs",
[field_stmt] = "stmt",
[field_term] = "term",
[field_then] = "then",
[field_value] = "value",
}};

const t_field_names_array	*create_field_names(void)
{
	return (&g_t_field_names_array);
}
